"../../../../tool/slice2cpp.exe" 	 -I. -I"../../../../thirdparty/Ice-3.5.1/base/slice_file/" -I"../../../../thirdparty/Ice-3.5.1/base/IceInternal/" -I"../../../../thirdparty/Ice-3.5.1/base/slice_generate/" --output-dir="." ContactData.ice NewContactData.ice
"../../../../tool/slice2freeze.exe" -I. -I"../../../../thirdparty/Ice-3.5.1/base/slice_file/" -I"../../../../thirdparty/Ice-3.5.1/base/IceInternal/" -I"../../../../thirdparty/Ice-3.5.1/base/slice_generate/" --output-dir="." --ice --dict Demo::Contacts,string,Demo::ContactData,sort --dict-index Demo::Contacts,phoneNumber,sort Contacts ContactData.ice
"../../../../tool/slice2freeze.exe" -I. -I"../../../../thirdparty/Ice-3.5.1/base/slice_file/" -I"../../../../thirdparty/Ice-3.5.1/base/IceInternal/" -I"../../../../thirdparty/Ice-3.5.1/base/slice_generate/" --output-dir="." --ice --dict Demo::NewContacts,string,Demo::ContactData,sort --dict-index Demo::NewContacts,phoneNumber,sort NewContacts NewContactData.ice


