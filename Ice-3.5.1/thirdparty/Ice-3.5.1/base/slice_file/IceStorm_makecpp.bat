FOR %%i IN (.\IceStorm\*.ice) DO "../../../../tool/slice2cpp.exe" -I. -I../IceInternal/ --output-dir ../slice_generate/IceStorm --include-dir IceStorm --underscore %%i --checksum --ice


