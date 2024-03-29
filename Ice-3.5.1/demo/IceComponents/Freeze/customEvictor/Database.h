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
// Generated from file `Database.ice'
//
// Warning: do not edit this file.
//
// </auto-generated>
//


// Freeze types in this file:
// name="Database", key="string", value="Warehouse::ItemInfo"

#ifndef ____Database_h__
#define ____Database_h__

#include <Freeze/Map.h>
#include <ItemInfo.h>

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

class DatabaseKeyCodec
{
public:

    static void write(const ::std::string&, Freeze::Key&, const ::Ice::CommunicatorPtr&, const Ice::EncodingVersion&);
    static void read(::std::string&, const Freeze::Key&, const ::Ice::CommunicatorPtr&, const Ice::EncodingVersion&);
    static const std::string& typeId();
};

class DatabaseValueCodec
{
public:

    static void write(const ::Warehouse::ItemInfo&, Freeze::Value&, const ::Ice::CommunicatorPtr&, const Ice::EncodingVersion&);
    static void read(::Warehouse::ItemInfo&, const Freeze::Value&, const ::Ice::CommunicatorPtr&, const Ice::EncodingVersion&);
    static const std::string& typeId();
};

typedef Freeze::Map< ::std::string, ::Warehouse::ItemInfo, DatabaseKeyCodec, DatabaseValueCodec, Freeze::IceEncodingCompare > Database;

#endif
