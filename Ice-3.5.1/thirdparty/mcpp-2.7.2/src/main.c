/*-
 * Copyright (c) 1998, 2002-2008 Kiyoshi Matsui <kmatsui@t3.rim.or.jp>
 * All rights reserved.
 *
 * Some parts of this code are derived from the public domain software
 * DECUS cpp (1984,1985) written by Martin Minow.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE AUTHOR ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE AUTHOR BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 */

/*
 *                              M A I N . C
 *                  M C P P   M a i n   P r o g r a m
 *
 * The main routine and it's supplementary routines are placed here.
 * The post-preprocessing routines are also placed here.
 */

#include    "system.H"
#include    "internal.H"

    /* Function pointer to expand_macro() functions.    */
    char *   (*expand_macro)( DEFBUF * defp, char * out, char * out_end
            , LINE_COL line_col, int * pragma_op);

    /* The boolean flags specified by the execution options.    */
    struct option_flags_    option_flags = {
        FALSE,          /* c:   -C (keep comments)                  */
    };

    int     mcpp_mode = STD;        /* Mode of preprocessing        */

    long    stdc_ver = 0L;          /* Value of __STDC_VERSION__    */
    int     stdc_val = 0;           /* Value of __STDC__            */
    int     std_line_prefix = STD_LINE_PREFIX;
            /* Output line and file information in C source style   */

/*
 * Commonly used global variables:
 * src_line     is the current input line number.
 * wrong_line   is set in many places when the actual output line is out of
 *              sync with the numbering, e.g, when expanding a macro with an
 *              embedded newline.
 * identifier   holds the last identifier scanned (which might be a candidate
 *              for macro expansion).
 * errors       is the running mcpp error counter.
 * infile       is the head of a linked list of input files (extended by
 *              #include and macros being expanded).  'infile' always points
 *              to the current file/macro.  'infile->parent' to the includer,
 *              etc.  'infile->fp' is NULL if this input stream is not a file.
 * inc_dirp     Directory of #includer with trailing PATH_DELIM.  This points
 *              to one of incdir[] or to the current directory (represented as
 *              "".  This should not be NULL.
 */
    long        src_line;           /* Current line number          */
    int         wrong_line;         /* Force #line to compiler      */
    int         newlines;           /* Count of blank lines         */
    int         errors = 0;         /* Cpp error counter            */
    int         warn_level = -1;    /* Level of warning (have to initialize)*/
    FILEINFO *  infile = NULL;      /* Current input file           */
    int         include_nest = 0;   /* Nesting level of #include    */
    const char *    null = "";      /* "" string for convenience    */
    const char **   inc_dirp;       /* Directory of #includer       */
    const char *    cur_fname;      /* Current source file name     */
                /* cur_fname is not rewritten by #line directive    */
    const char *      cur_fullname;
        /* Full path of current source file (i.e. infile->full_fname)       */
    char        identifier[ IDMAX + IDMAX/8];       /* Current identifier   */
    int         mcpp_debug = 0;     /* != 0 if debugging now        */

/*
 *   in_directive is set TRUE while a directive line is scanned by directive().
 * It modifies the behavior of squeeze_ws() in expand.c so that newline is
 * not skipped even if getting macro arguments.
 */
    int     in_directive = FALSE;   /* TRUE scanning directive line */
    int     in_define = FALSE;      /* TRUE scanning #define line   */
    int     in_getarg = FALSE;      /* TRUE collecting macro arguments      */
    int     in_include = FALSE;     /* TRUE scanning #include line  */
    int     in_if = FALSE;  /* TRUE scanning #if and in non-skipped expr.   */

/*
 *   macro_line is set to the line number of start of a macro call while
 * expanding the macro, else set to 0.  Line number is remembered for
 * diagnostics of unterminated macro call.  On unterminated macro call
 * macro_line is set to MACRO_ERROR.
 */
    long    macro_line = 0L;
/*
 *   macro_name is the currently expanding macro.
 */
    char *  macro_name;

/*
 * openum is the return value of scan_op() in support.c.
 */
    int     openum;

/*
 *   mkdep means to output source file dependency line, specified by -M*
 * option.  The OR of the following values is used.
 *      MD_MKDEP    (1) :   Output dependency line.
 *      MD_SYSHEADER(2) :   Print also system headers or headers with
 *          absolute path not only user headers.
 *      MD_FILE     (4) :   Output to the file named *.d instead of fp_out.
 *          Normal output is done to fp_out as usual.
 */
    int     mkdep = 0;

/*
 * If option_flags.z is TRUE, no_output is incremented when a file is
 * #included, and decremented when the file is finished.
 * If no_output is larger than 0, processed files are not output, meanwhile
 * the macros in the files are defined.
 * If mkdep != 0 && (mkdep & MD_FILE) == 0, no_output is set to 1 initially.
 */
    int     no_output = 0;

/*
 * keep_comments is set TRUE by the -C option.  If TRUE, comments are written
 * directly to the output stream.  option_flags.c contains the permanent state
 * of the -C option.  keep_comments is always falsified when compilation is
 * supressed by a false #if or when no_output is TRUE.
 */
    int     keep_comments = 0;          /* Write out comments flag  */

/*
 * keep_spaces is set to TRUE by the -k option.  If TRUE, spaces and tabs in
 * an input line are written out to the output line without squeezing to one
 * space.  option_flags.k contains the permanent state of the -k option.
 * keep_spaces is falsified when compilation is suppressed by a false #if.
 */
    int     keep_spaces = 0;            /* Keep white spaces of line*/

/*
 * ifstack[] holds information about nested #if's.  It is always accessed via
 * ifptr->stat.  The information is as follows:
 *      WAS_COMPILING   state of compiling flag at outer level.
 *      ELSE_SEEN       set TRUE when #else seen to prevent 2nd #else.
 *      TRUE_SEEN       set TRUE when #if or #elif succeeds
 * ifstack[0].stat holds the compiling flag.  It is WAS_COMPILING if compila-
 * tion is currently enabled.  Note that this must be initialized to
 * WAS_COMPILING.
 */
    IFINFO      ifstack[ BLK_NEST + 1] = { {WAS_COMPILING, 0L, 0L}, };
                /* Note: '+1' is necessary for the initial state.   */
    IFINFO *    ifptr = ifstack;        /* -> current ifstack[]     */

/*
 * In POST_STD mode, insert_sep is set to INSERT_SEP when :
 *  1. the next get_ch() shall insert a token separator.
 *  2. unget_ch() has been called when insert_sep == INSERTED_SEP.
 * set to INSERTED_SEP when :
 *  get_ch() has been called when insert_sep == INSERT_SEP.
 * set to NO_SEP when :
 *  get_ch() has been called when insert_sep == INSERTED_SEP.
 */
    int     insert_sep = NO_SEP;

/* File pointers for input and output.  */
    FILE *  fp_in;                  /* Input stream to preprocess   */
    FILE *  fp_out;                 /* Output stream preprocessed   */
    FILE *  fp_err;                 /* Diagnostics stream           */
    FILE *  fp_debug;               /* Debugging information stream */

/* Variables on multi-byte character encodings. */
    int     mbchk;  /* Character type of possible multi-byte char   */
    /* Function pointer to mb_read_*() functions.   */
    size_t  (*mb_read)( int c1, char ** in_pp, char ** out_pp);

    jmp_buf error_exit;             /* Exit on fatal error          */

/*
 * Translation limits specified by C90, C99 or C++.
 */
    struct std_limits_  std_limits = {
        /* The following three are temporarily set for do_options() */
        NBUFF,          /* Least maximum of string length           */
        IDMAX,          /* Least maximum of identifier length       */
        NMACPARS,       /* Least maximum of number of macro params  */
    };

/*
 * work_buf[] and workp are used to store one piece of text as a temporary
 * buffer.
 * To initialize storage, set workp = work_buf.  Note that the work buffer is
 * used by several subroutines -- be sure that your data won't be overwritten.
 * work_buf[] is used for:
 *      1. macro expansion (def_special(), prescan(), catenate(),
 *         stringize()).
 *      2. processing directive line (directive.c, eval.c, get_unexpandable(),
 *         do_pragma() and its subroutines).
 *      3. processing _Pragma() operator (do_pragma_op()).
 *      4. miscellaneous (init_gcc_macro(), curfile()). 
 */
    char        work_buf[ NWORK + IDMAX];       /* Work buffer      */
    char *      workp;              /* Pointer into work_buf[]      */
    char * const     work_end = & work_buf[ NWORK];
                                    /* End of buffer of work_buf[]  */

/*
 * src_col      is the current input column number, but is rarely used.
 *              It is used to put spaces after #line line in keep_spaces mode
 *              on some special cases.
 */
static int      src_col = 0;        /* Column number of source line */

static void     init_main( void);
                /* Initialize static variables      */
static void     init_defines( void);
                /* Predefine macros                 */
static void     mcpp_main( void);
                /* Main loop to process input lines */
static void     do_pragma_op( void);
                /* Execute the _Pragma() operator   */
static void     put_seq( char * begin, char * seq);
                /* Put out the failed sequence      */
static char *   de_stringize( char * in, char * out);
                /* "De-stringize" for _Pragma() op. */
static void     putout( char * out);
                /* May concatenate adjacent string  */
static void     devide_line( char * out);
                /* Devide long line for compiler    */
static void     put_a_line( char * out);
                /* Put out the processed line       */
static void     init_main( void)
/* Initialize global variables on re-entering.  */
{
    mcpp_mode = STD;
    stdc_ver = 0L;
    stdc_val = 0;
    std_line_prefix = STD_LINE_PREFIX;
    errors = src_col = 0;
    warn_level = -1;
    infile = NULL;
    in_directive = in_define = in_getarg = in_include = in_if = FALSE;
    src_line = macro_line = 0L;
    mcpp_debug = mkdep = no_output = keep_comments = keep_spaces = 0;
    include_nest = 0;
    insert_sep = NO_SEP;
    ifptr = ifstack;
    ifstack[0].stat = WAS_COMPILING;
    ifstack[0].ifline = ifstack[0].elseline = 0L;
    std_limits.str_len = NBUFF;
    std_limits.id_len = IDMAX;
    std_limits.n_mac_pars =  NMACPARS;
    option_flags.c = FALSE;
    sh_file = NULL;
    sh_line = 0;
}

int     mcpp_lib_main
(
    int argc,
    char ** argv
)
{
    char *  in_file = NULL;
    char *  out_file = NULL;
    char *  stdin_name = "<stdin>";

    if (setjmp( error_exit) == -1) {
        errors++;
        goto  fatal_error_exit;
    }

    /* Initialize global and static variables.  */
    init_main();
    init_directive();
    init_eval();
    init_support();
    init_system();

    fp_in = stdin;
    fp_out = stdout;
    fp_err = stderr;
    fp_debug = stdout;
        /*
         * Debugging information is output to stdout in order to
         *      synchronize with preprocessed output.
         */

    inc_dirp = &null;   /* Initialize to current (null) directory   */
    cur_fname = cur_fullname = "(predefined)";  /* For predefined macros    */
    init_defines();                         /* Predefine macros     */
    mb_init(TRUE);      /* Should be initialized prior to get options   */
    do_options( argc, argv, &in_file, &out_file);   /* Command line options */

    /* Open input file, "-" means stdin.    */
    if (in_file != NULL && ! str_eq( in_file, "-")) {
        if ((fp_in = mcpp_fopen( in_file, "r")) == NULL) {
            mcpp_fprintf( ERR, "Can't open input file \"%s\".\n", in_file);
            errors++;
            goto  fatal_error_exit;
        }
    } else {
        in_file = stdin_name;
    }
    /* Open output file, "-" means stdout.  */
    if (out_file != NULL && ! str_eq( out_file, "-")) {
        if ((fp_out = mcpp_fopen( out_file, "w")) == NULL) {
            mcpp_fprintf( ERR, "Can't open output file \"%s\".\n", out_file);
            errors++;
            goto  fatal_error_exit;
        }
        fp_debug = fp_out;
    }
    init_sys_macro();       /* Initialize system-specific macros    */
    add_file( fp_in, NULL, in_file, in_file, FALSE);
                                        /* "open" main input file   */
    infile->dirp = inc_dirp;
    infile->sys_header = FALSE;
    cur_fullname = in_file;
    if (mkdep && str_eq( infile->real_fname, stdin_name) == FALSE)
        put_depend( in_file);       /* Putout target file name      */
    at_start();                     /* Do the pre-main commands     */

    mcpp_main();                    /* Process main file            */

    if (mkdep)
        put_depend( NULL);      /* Append '\n' to dependency line   */
    at_end();                       /* Do the final commands        */

fatal_error_exit:
    /* Free malloced memory */
    if (mcpp_debug & MACRO_CALL) {
        if (in_file != stdin_name)
            free( in_file);
    }
    clear_filelist();
    clear_symtable();

    if (fp_in != stdin)
        fclose( fp_in);
    if (fp_out != stdout)
        fclose( fp_out);
    if (fp_err != stderr)
        fclose( fp_err);

    if (mcpp_debug & MEMORY)
        print_heap();
    if (errors > 0) {
        mcpp_fprintf( ERR, "%d error%s in preprocessor.\n",
                errors, (errors == 1) ? "" : "s");
        return  IO_ERROR;
    }
    return  IO_SUCCESS;                             /* No errors    */
}

/*
 * This is the table used to predefine target machine, operating system and
 * compiler designators.  It may need hacking for specific circumstances.
 * The -N option supresses these definitions.
 */
typedef struct pre_set {
    const char *    name;
    const char *    val;
} PRESET;

static PRESET   preset[] = {
        { NULL, NULL},  /* End of macros beginning with alphabet    */
        { NULL, NULL},  /* End of macros with value of any integer  */
};

static void init_defines( void)
/*
 * Initialize the built-in #define's.
 * Called only on cpp startup prior to do_options().
 *
 * Note: the built-in static definitions are removed by the -N option.
 */
{
    int     n = sizeof preset / sizeof (PRESET);
    int     nargs;
    PRESET *    pp;

    /* Predefine the built-in symbols.  */
    nargs = DEF_NOARGS_PREDEF_OLD;
    for (pp = preset; pp < preset + n; pp++) {
        if (pp->name && *(pp->name))
            look_and_install( pp->name, nargs, null, pp->val);
        else if (! pp->name)
            nargs = DEF_NOARGS_PREDEF;
    }

    look_and_install( "__MCPP", DEF_NOARGS_PREDEF, null, "2");
    /* MCPP V.2.x   */
    /* This macro is predefined and is not undefined by -N option,  */
    /*      yet can be undefined by -U or #undef.                   */
}

void    un_predefine(
    int clearall                            /* TRUE for -N option   */
)
/*
 * Remove predefined symbols from the symbol table.
 */
{
    PRESET *    pp;
    DEFBUF *    defp;
    int     n = sizeof preset / sizeof (PRESET);

    for (pp = preset; pp < preset + n; pp++) {
        if (pp->name) {
            if (*(pp->name) && (defp = look_id( pp->name)) != NULL
                    && defp->nargs >= DEF_NOARGS_PREDEF)
                undefine( pp->name);
        } else if (clearall == FALSE) {             /* -S<n> option */
            break;
        }
    }
}

/*
 * output[] and out_ptr are used for:
 *      buffer to store preprocessed line (this line is put out or handed to
 *      post_preproc() via putout() in some cases)
 */
static char     output[ NMACWORK];  /* Buffer for preprocessed line */
static char * const out_end = & output[ NWORK - 2];
                /* Limit of output line for other than GCC and VC   */
static char * const out_wend = & output[ NMACWORK - 2];
                                    /* Buffer end of output line    */
static char *       out_ptr;        /* Current pointer into output[]*/

static void mcpp_main( void)
/*
 * Main process for mcpp -- copies tokens from the current input stream
 * (main file or included file) to the output file.
 */
{
    int     c;                      /* Current character            */
    char *  wp;                     /* Temporary pointer            */
    DEFBUF *    defp;               /* Macro definition             */
    int     line_top;       /* Is in the line top, possibly spaces  */
    LINE_COL    line_col;   /* Location of macro call in source     */

    keep_comments = option_flags.c && !no_output;
    line_col.col = line_col.line = 0L;

    /*
     * This loop is started "from the top" at the beginning of each line.
     * 'wrong_line' is set TRUE in many places if it is necessary to write
     * a #line record.  (But we don't write them when expanding macros.)
     *
     * 'newlines' variable counts the number of blank lines that have been
     * skipped over.  These are then either output via #line records or
     * by outputting explicit blank lines.
     * 'newlines' will be cleared on end of an included file by get_ch().
     */
    while (1) {                             /* For the whole input  */
        newlines = 0;                       /* Count empty lines    */

        while (1) {                         /* For each line, ...   */
            out_ptr = output;               /* Top of the line buf  */
            c = get_ch();
            if (src_col)
                break;  /* There is a residual tokens on the line   */
            while (char_type[ c] & HSP) {   /* ' ' or '\t'          */
                if (c != COM_SEP)
                    *out_ptr++ = c; /* Retain line top white spaces */
                                    /* Else skip 0-length comment   */
                c = get_ch();
            }
            if (c == '#') {                 /* Is 1st non-space '#' */
                directive();                /* Do a #directive      */
            } else if (c == CHAR_EOF) {     /* End of input         */
                break;
            } else if (! compiling) {       /* #ifdef false?        */
                skip_nl();                  /* Skip to newline      */
                newlines++;                 /* Count it, too.       */
            } else if (c == '\n') {         /* Blank line           */
                if (keep_comments)
                    mcpp_fputc( '\n', OUT); /* May flush comments   */
                else
                    newlines++;             /* Wait for a token     */
            } else {
                break;                      /* Actual token         */
            }
        }

        if (c == CHAR_EOF)                  /* Exit process at      */
            break;                          /*   end of input       */

        /*
         * If the loop didn't terminate because of end of file, we
         * know there is a token to compile.  First, clean up after
         * absorbing newlines.  newlines has the number we skipped.
         */
        if (no_output) {
            wrong_line = FALSE;
        } else {
            if (wrong_line || newlines > 10) {
                sharp( NULL, 0);            /* Output # line number */
                if (keep_spaces && src_col) {
                    while (src_col--)       /* Adjust columns       */
                        mcpp_fputc( ' ', OUT);
                    src_col = 0;
                }
            } else {                        /* If just a few, stuff */
                while (newlines-- > 0)      /* them out ourselves   */
                    mcpp_fputc('\n', OUT);
            }
        }

        /*
         * Process each token on this line.
         */
        line_top = TRUE;
        while (c != '\n' && c != CHAR_EOF) {    /* For the whole line   */
            /*
             * has_pragma is set to TRUE so as to execute _Pragma() operator
             * when the psuedo macro _Pragma() is found.
             */
            int     has_pragma;

            if ((mcpp_debug & MACRO_CALL) && ! in_directive) {
                line_col.line = src_line;       /* Location in source   */
                line_col.col = infile->bptr - infile->buffer - 1;
            }
            if (scan_token( c, (wp = out_ptr, &wp), out_wend) == NAM
                    && (defp = is_macro( &wp)) != NULL) {   /* A macro  */
                wp = expand_macro( defp, out_ptr, out_wend, line_col
                        , & has_pragma);    /* Expand it completely */
                if (line_top) {     /* The first token is a macro   */
                    char *  tp = out_ptr;
                    while (char_type[ *tp & UCHARMAX] & HSP)
                        tp++;           /* Remove excessive spaces  */
                    memmove( out_ptr, tp, strlen( tp) + 1);
                    wp -= (tp - out_ptr);
                }
                if (has_pragma) {           /* Found _Pramga()      */
                    do_pragma_op();         /* Do _Pragma() operator*/
                    out_ptr = output;       /* Do the rest of line  */
                    wrong_line = TRUE;      /* Line-num out of sync */
                } else {
                    out_ptr = wp;
                }
                if (keep_spaces && wrong_line && infile
                        && *(infile->bptr) != '\n' && *(infile->bptr) != EOS) {
                    src_col = infile->bptr - infile->buffer;
                    /* Remember the current colums  */
                    break;                  /* Do sharp() now       */
                }
            } else {                        /* Not a macro call     */
                out_ptr = wp;               /* Advance the place    */
                if (wrong_line)             /* is_macro() swallowed */
                    break;                  /*      the newline     */
            }
            while (char_type[ c = get_ch()] & HSP) {    /* Horizontal space */
                if (c != COM_SEP)           /* Skip 0-length comment*/
                    *out_ptr++ = c;
            }
            line_top = FALSE;               /* Read over some token */
        }                                   /* Loop for line        */

        putout( output);                    /* Output the line      */
    }                                       /* Continue until EOF   */
}

static void do_pragma_op( void)
/*
 * Execute the _Pragma() operator contained in an expanded macro.
 * Note: _Pragma() operator is also implemented as a special macro.  Therefore
 *      it is always searched as a macro.
 * There might be more than one _Pragma() in a expanded macro and those may be
 *      surrounded by other token sequences.
 * Since all the macros have been expanded completely, any name identical to
 *      macro should not be re-expanded.
 * However, a macro in the string argument of _Pragma() may be expanded by
 *      do_pragma() after de_stringize(), if EXPAND_PRAGMA == TRUE.
 */
{
    FILEINFO *  file;
    DEFBUF *    defp;
    int     prev = output < out_ptr;        /* There is a previous sequence */
    int     token_type;
    char *  cp1, * cp2;
    int     c;

    file = unget_string( out_ptr, NULL);
    while (c = get_ch(), file == infile) {
        if (char_type[ c] & HSP) {
            *out_ptr++ = c;
            continue;
        }
        if (scan_token( c, (cp1 = out_ptr, &cp1), out_wend)
                    == NAM && (defp = is_macro( &cp1)) != NULL
                && defp->nargs == DEF_PRAGMA) {     /* _Pragma() operator   */
            if (prev) {
                putout( output);    /* Putout the previous sequence */
                cp1 = stpcpy( output, "pragma ");   /* From top of buffer   */
            }
            /* is_macro() already read over possible spaces after _Pragma   */
            *cp1++ = get_ch();                              /* '('  */
            while (char_type[ c = get_ch()] & HSP)
                *cp1++ = c;
            if (((token_type = scan_token( c, (cp2 = cp1, &cp1), out_wend))
                    != STR && token_type != WSTR)) {
                /* Not a string literal */
                put_seq( output, cp1);
                return;
            }
            workp = de_stringize( cp2, work_buf);
            while (char_type[ c = get_ch()] & HSP)
                *cp1++ = c;
            if (c != ')') {         /* More than a string literal   */
                unget_ch();
                put_seq( output, cp1);
                return;
            }
            strcpy( workp, "\n");       /* Terminate with <newline> */
            unget_string( work_buf, NULL);
            do_pragma();                /* Do the #pragma "line"    */
            infile->bptr += strlen( infile->bptr);      /* Clear sequence   */
            cp1 = out_ptr = output;     /* From the top of buffer   */
            prev = FALSE;
        } else {                        /* Not pragma sequence      */
            out_ptr = cp1;
            prev = TRUE;
        }
    }
    unget_ch();
    if (prev)
        putout( output);
}

static void put_seq(
    char *  begin,                  /* Sequence already in buffer   */
    char *  seq                     /* Sequence to be read          */
)
/*
 * Put out the failed sequence as it is.
 */
{
    FILEINFO *  file = infile;
    int     c;

    cerror( "Operand of _Pragma() is not a string literal"  /* _E_  */
            , NULL, 0L, NULL);
    while (c = get_ch(), file == infile)
        *seq++ = c;
    unget_ch();
    out_ptr = seq;
    putout( begin);
}

static char *   de_stringize(
    char *  in,                 /* Null terminated string literal   */
    char *  out                             /* Output buffer        */
)
/*
 * Make token sequence from a string literal for _Pragma() operator.
 */
{
    char *  in_p;
    int     c1, c;

    in_p = in;
    if (*in_p == 'L')
        in_p++;                             /* Skip 'L' prefix      */
    while ((c = *++in_p) != EOS) {
        if (c == '\\' && ((c1 = *(in_p + 1), c1 == '\\') || c1 == '"'))
            c = *++in_p;            /* "De-escape" escape sequence  */
        *out++ = c;
    }
    *--out = EOS;                   /* Remove the closing '"'       */
    return  out;
}

static void putout(
    char *  out     /* Output line (line-end is always 'out_ptr')   */
)
/*
 * Put out a line with or without "post-preprocessing".
 */
{
    size_t  len;

    *out_ptr++ = '\n';                      /* Put out a newline    */
    *out_ptr = EOS;

    /* Else no post-preprocess  */
    /* GCC and Visual C can accept very long line   */
    len = strlen( out);
    if (len > NWORK - 1)
        devide_line( out);              /* Devide a too long line   */
    else
        put_a_line( out);
}

static void devide_line(
    char * out                      /* 'out' is 'output' in actual  */
)
/*
 * Devide a too long line into output lines shorter than NWORK.
 * This routine is called from putout().
 */
{
    FILEINFO *  file;
    char *  save;
    char *  wp;
    int     c;

    file = unget_string( out, NULL);        /* To re-read the line  */
    wp = out_ptr = out;

    while ((c = get_ch()), file == infile) {
        if (char_type[ c] & HSP) {
            if (keep_spaces || out == out_ptr
                    || (char_type[ *(out_ptr - 1) & UCHARMAX] & HSP)) {
                *out_ptr++ = c;
                wp++;
            }
            continue;
        }
        scan_token( c, &wp, out_wend);          /* Read a token     */
        if (NWORK-2 < wp - out_ptr) {           /* Too long a token */
            cfatal( "Too long token %s", out_ptr, 0L, NULL);        /* _F_  */
        } else if (out_end <= wp) {             /* Too long line    */
            if (mcpp_debug & MACRO_CALL) {      /* -K option        */
                /* Other than GCC or Visual C   */
                /* scan_token() scans a comment as sequence of some */
                /* tokens such as '/', '*', ..., '*', '/', since it */
                /* does not expect comment.                         */
                save = out_ptr;
                while ((save = strrchr( save, '/')) != NULL) {
                    if (*(save - 1) == '*') {   /* '*' '/' sequence */
                        out_ptr = save + 1;     /* Devide at the end*/
                        break;                  /*      of a comment*/
                    }
                }
            }
            save = save_string( out_ptr);       /* Save the token   */
            *out_ptr++ = '\n';                  /* Append newline   */
            *out_ptr = EOS;
            put_a_line( out);           /* Putout the former tokens */
            wp = out_ptr = stpcpy( out, save);      /* Restore the token    */
            free( save);
        } else {                            /* Still in size        */
            out_ptr = wp;                   /* Advance the pointer  */
        }
    }

    unget_ch();                 /* Push back the source character   */
    put_a_line( out);                   /* Putout the last tokens   */
    sharp( NULL, 0);                        /* Correct line number  */
}

static void put_a_line(
    char * out
)
/*
 * Finally put out the preprocessed line.
 */
{
    size_t  len;
    char *  out_p;
    char *  tp;

    if (no_output)
        return;
    len = strlen( out);
    tp = out_p = out + len - 2;             /* Just before '\n'     */
    while (char_type[ *out_p & UCHARMAX] & SPA)
        out_p--;                    /* Remove trailing white spaces */
    if (out_p < tp) {
        *++out_p = '\n';
        *++out_p = EOS;
    }
    if (mcpp_fputs( out, OUT) == EOF)
        cfatal( "File write error", NULL, 0L, NULL);        /* _F_  */
}
