FOR %%i IN (.\Freeze\*.ice) DO "../../../../tool/slice2cpp.exe" -I. -I../IceInternal/ --output-dir ../slice_generate/Freeze --include-dir Freeze --underscore %%i --checksum --ice
"../../../../tool/slice2freeze.exe" -I. -I"../slice_file/" -I"../IceInternal/" -I"../slice_generate/" --output-dir="../slice_generate/Freeze" --ice --dict Freeze::Catalog,string,Freeze::CatalogData Catalog Freeze/CatalogData.ice --include-dir "Freeze"
"../../../../tool/slice2freeze.exe" -I. -I"../slice_file/" -I"../IceInternal/" -I"../slice_generate/" --output-dir="../slice_generate/Freeze" --ice --dict Freeze::CatalogIndexList,string,Ice::StringSeq CatalogIndexList Ice/BuiltinSequences.ice --include-dir "Freeze"


