FOR %%i IN (.\IcePatch2\*.ice) DO "../../../../tool/slice2cpp.exe" -I. -I../IceInternal/ --output-dir ../slice_generate/IcePatch2 --include-dir IcePatch2 --underscore %%i --checksum --ice
 

