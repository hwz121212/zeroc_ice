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
// Generated from file `StringApplicationInfoDict.ice'
//
// Warning: do not edit this file.
//
// </auto-generated>
//


// Freeze types in this file:
// name="IceGrid::StringApplicationInfoDict", key="string", value="IceGrid::ApplicationInfo"

#ifndef _____slice_generate_IceGridFreezeDB_StringApplicationInfoDict_h__
#define _____slice_generate_IceGridFreezeDB_StringApplicationInfoDict_h__

#include <Freeze/Map.h>
#include <IceGrid/Admin.h>

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

namespace IceGrid
{

class StringApplicationInfoDictKeyCodec
{
public:

    static void write(const ::std::string&, Freeze::Key&, const ::Ice::CommunicatorPtr&, const Ice::EncodingVersion&);
    static void read(::std::string&, const Freeze::Key&, const ::Ice::CommunicatorPtr&, const Ice::EncodingVersion&);
    static const std::string& typeId();
};

class StringApplicationInfoDictValueCodec
{
public:

    static void write(const ::IceGrid::ApplicationInfo&, Freeze::Value&, const ::Ice::CommunicatorPtr&, const Ice::EncodingVersion&);
    static void read(::IceGrid::ApplicationInfo&, const Freeze::Value&, const ::Ice::CommunicatorPtr&, const Ice::EncodingVersion&);
    static const std::string& typeId();
};

typedef Freeze::Map< ::std::string, ::IceGrid::ApplicationInfo, StringApplicationInfoDictKeyCodec, StringApplicationInfoDictValueCodec, Freeze::IceEncodingCompare > StringApplicationInfoDict;

}

#endif
