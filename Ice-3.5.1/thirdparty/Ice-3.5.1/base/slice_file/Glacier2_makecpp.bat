FOR %%i IN (.\Glacier2\*.ice) DO "../../../../tool/slice2cpp.exe" -I. -I../IceInternal/ --output-dir ../slice_generate/Glacier2 --include-dir Glacier2 --underscore %%i --checksum --ice