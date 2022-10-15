FOR %%i IN (.\IceSSL\*.ice) DO "../../../../tool/slice2cpp.exe" -I. -I../IceInternal/ --output-dir ../slice_generate/IceSSL --include-dir IceSSL --underscore %%i --checksum --ice
 

