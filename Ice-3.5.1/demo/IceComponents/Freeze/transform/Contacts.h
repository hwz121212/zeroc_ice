// **********************************************************************
//
// Copyright (c) 2003-2013 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************
//
// Ice version 3.5.1
//
// <auto-generated>
//
// Generated from file `Contacts.ice'
//
// Warning: do not edit this file.
//
// </auto-generated>
//


// Freeze types in this file:
// name="Demo::Contacts", key="string", value="Demo::ContactData"

#ifndef ____Contacts_h__
#define ____Contacts_h__

#include <Freeze/Map.h>
#include <ContactData.h>

#ifndef ICE_IGNORE_VERSION
#   if ICE_INT_VERSION / 100 != 305
#       error Ice version mismatch!
#   endif
#   if ICE_INT_VERSION % 100 > 50
#       error Beta header file detected
#   endif
#   if ICE_INT_VERSION % 100 < 1
#       error Ice patch level mismatch!
#   endif
#endif

namespace Demo
{

class ContactsKeyCodec
{
public:

    static void write(const ::std::string&, Freeze::Key&, const ::Ice::CommunicatorPtr&, const Ice::EncodingVersion&);
    static void read(::std::string&, const Freeze::Key&, const ::Ice::CommunicatorPtr&, const Ice::EncodingVersion&);
    static const std::string& typeId();
};

class ContactsValueCodec
{
public:

    static void write(const ::Demo::ContactData&, Freeze::Value&, const ::Ice::CommunicatorPtr&, const Ice::EncodingVersion&);
    static void read(::Demo::ContactData&, const Freeze::Value&, const ::Ice::CommunicatorPtr&, const Ice::EncodingVersion&);
    static const std::string& typeId();
};

class Contacts : public Freeze::Map< ::std::string, ::Demo::ContactData, ContactsKeyCodec, ContactsValueCodec, std::less< ::std::string> >
{
public:


    class PhoneNumberIndex : public Freeze::MapIndex< ::std::string, PhoneNumberIndex, std::less< ::std::string> >
    {
    public:

        PhoneNumberIndex(const std::string&, const std::less< ::std::string>& = std::less< ::std::string>());

        static void write(const ::std::string&, Freeze::Key&, const Ice::CommunicatorPtr&, const Ice::EncodingVersion&);
        static void read(::std::string&, const Freeze::Key&, const ::Ice::CommunicatorPtr&, const Ice::EncodingVersion&);

    protected:

        virtual void marshalKey(const Freeze::Value&, Freeze::Key&) const;
    };

    Contacts(const Freeze::ConnectionPtr&, const std::string&, bool = true, const std::less< ::std::string>& = std::less< ::std::string>());

    template <class _InputIterator>
    Contacts(const Freeze::ConnectionPtr& __connection, const std::string& __dbName, bool __createDb, _InputIterator __first, _InputIterator __last, const std::less< ::std::string>& __compare = std::less< ::std::string>())
        : Freeze::Map< ::std::string, ::Demo::ContactData, ContactsKeyCodec, ContactsValueCodec, std::less< ::std::string> >(__connection->getCommunicator(), __connection->getEncoding())
    {
        Freeze::KeyCompareBasePtr __keyCompare = new Freeze::KeyCompare< ::std::string, ContactsKeyCodec, std::less< ::std::string> >(__compare, this->_communicator, this->_encoding);
        std::vector<Freeze::MapIndexBasePtr> __indices;
        __indices.push_back(new PhoneNumberIndex("phoneNumber"));
        this->_helper.reset(Freeze::MapHelper::create(__connection, __dbName, ContactsKeyCodec::typeId(), ContactsValueCodec::typeId(), __keyCompare, __indices, __createDb));
        while(__first != __last)
        {
            put(*__first);
            ++__first;
        }
    }
    static void recreate(const Freeze::ConnectionPtr&, const std::string&, const std::less< ::std::string>& = std::less< ::std::string>());


    iterator findByPhoneNumber(const ::std::string&, bool = true);
    const_iterator findByPhoneNumber(const ::std::string&, bool = true) const;
    iterator beginForPhoneNumber();
    const_iterator beginForPhoneNumber() const;
    iterator endForPhoneNumber();
    const_iterator endForPhoneNumber() const;
    iterator lowerBoundForPhoneNumber(const ::std::string&);
    const_iterator lowerBoundForPhoneNumber(const ::std::string&) const;
    iterator upperBoundForPhoneNumber(const ::std::string&);
    const_iterator upperBoundForPhoneNumber(const ::std::string&) const;
    std::pair<iterator, iterator> equalRangeForPhoneNumber(const ::std::string&);
    std::pair<const_iterator, const_iterator> equalRangeForPhoneNumber(const ::std::string&) const;
    int phoneNumberCount(const ::std::string&) const;
};

}

#endif
