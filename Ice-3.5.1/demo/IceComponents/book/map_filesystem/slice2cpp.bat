"../../../../tool/slice2cpp.exe" 	 -I. -I"../../../../thirdparty/Ice-3.5.1/base/slice_file/" -I"../../../../thirdparty/Ice-3.5.1/base/IceInternal/" -I"../../../../thirdparty/Ice-3.5.1/base/slice_generate/" --output-dir="." Filesystem.ice FilesystemDB.ice
"../../../../tool/slice2freeze.exe" -I. -I"../../../../thirdparty/Ice-3.5.1/base/slice_file/" -I"../../../../thirdparty/Ice-3.5.1/base/IceInternal/" -I"../../../../thirdparty/Ice-3.5.1/base/slice_generate/" --output-dir="." --ice --dict FilesystemDB::IdentityFileEntryMap,Ice::Identity,FilesystemDB::FileEntry IdentityFileEntryMap FilesystemDB.ice
"../../../../tool/slice2freeze.exe" -I. -I"../../../../thirdparty/Ice-3.5.1/base/slice_file/" -I"../../../../thirdparty/Ice-3.5.1/base/IceInternal/" -I"../../../../thirdparty/Ice-3.5.1/base/slice_generate/" --output-dir="." --ice --dict FilesystemDB::IdentityDirectoryEntryMap,Ice::Identity,FilesystemDB::DirectoryEntry IdentityDirectoryEntryMap FilesystemDB.ice