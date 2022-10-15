FOR %%i IN (.\IceGrid\*.ice) DO "../../../../tool/slice2cpp.exe" -I. -I../IceInternal/ --output-dir ../slice_generate/IceGrid --include-dir IceGrid --underscore %%i --checksum --ice
 

