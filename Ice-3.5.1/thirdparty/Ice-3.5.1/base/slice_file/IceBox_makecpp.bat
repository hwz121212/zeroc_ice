FOR %%i IN (.\IceBox\*.ice) DO "../../../../tool/slice2cpp.exe" -I. -I../IceInternal/ --output-dir ../slice_generate/IceBox --include-dir IceBox --underscore %%i --checksum --ice
 