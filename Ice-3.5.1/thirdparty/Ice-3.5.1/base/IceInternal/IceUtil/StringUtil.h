// **********************************************************************
//
// Copyright (c) 2003-2013 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

#ifndef ICE_STRING_UTIL_H
#define ICE_STRING_UTIL_H

#include <IceUtil/Config.h>
#include <vector>

namespace IceUtilInternal
{

//
// Add escape sequences (like "\n", or "\0xxx") to make a string
// readable in ASCII.
//
std::string escapeString(const std::string&, const std::string&);

//
// Remove escape sequences added by escapeString. Throws IllegalArgumentException
// for an invalid input string.
//
std::string unescapeString(const std::string&, std::string::size_type, std::string::size_type);

//
// Split a string using the given delimiters. Considers single and double quotes;
// returns false for unbalanced quote, true otherwise.
//
bool splitString(const std::string&, const std::string&, std::vector<std::string>&);

//
// Join a list of strings using the given delimiter. 
//
std::string joinString(const std::vector<std::string>&, const std::string&);

//
// Trim white space
//
std::string trim(const std::string&);

//
// If a single or double quotation mark is found at the start
// position, then the position of the matching closing quote is
// returned. If no quotation mark is found at the start position, then
// 0 is returned. If no matching closing quote is found, then
// std::string::npos is returned.
//
std::string::size_type checkQuote(const std::string&, std::string::size_type = 0);

//
// Match `s' against the pattern `pat'. A * in the pattern acts
// as a wildcard: it matches any non-empty sequence of characters
// other than a period (`.'). We match by hand here because
// it's portable across platforms (whereas regex() isn't).
//
bool match(const std::string&, const std::string&, bool = false);

//
// Get the error message for the last error code or given error code.
//
std::string lastErrorToString();
#ifdef _WIN32
std::string errorToString(int, LPCVOID = NULL);
#else
std::string errorToString(int);
#endif

//
// Functions to convert to lower/upper case. These functions accept
// UTF8 string/characters but ignore non ASCII characters. Unlike, the
// C methods, these methods are not local dependent.
//
std::string toLower(const std::string&);
std::string toUpper(const std::string&);
bool isAlpha(char);
bool isDigit(char);

//
// Remove all whitespace from a string
//
std::string removeWhitespace(const std::string&);

}

#endif