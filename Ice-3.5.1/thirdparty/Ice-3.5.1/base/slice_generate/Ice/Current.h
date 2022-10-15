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
// Generated from file `Current.ice'
//
// Warning: do not edit this file.
//
// </auto-generated>
//

#ifndef __Ice____slice_generate_Ice_Current_h__
#define __Ice____slice_generate_Ice_Current_h__

#include <Ice/ProxyF.h>
#include <Ice/ObjectF.h>
#include <Ice/Exception.h>
#include <Ice/LocalObject.h>
#include <Ice/StreamHelpers.h>
#include <IceUtil/ScopedArray.h>
#include <IceUtil/Optional.h>
#include <Ice/ObjectAdapterF.h>
#include <Ice/ConnectionF.h>
#include <Ice/Identity.h>
#include <Ice/Version.h>
#include <Ice/UndefSysMacros.h>

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

namespace Ice
{

typedef ::std::map< ::std::string, ::std::string> Context;

enum OperationMode
{
    Normal,
    Nonmutating,
    Idempotent
};

struct Current
{
    ::Ice::ObjectAdapterPtr adapter;
    ::Ice::ConnectionPtr con;
    ::Ice::Identity id;
    ::std::string facet;
    ::std::string operation;
    ::Ice::OperationMode mode;
    ::Ice::Context ctx;
    ::Ice::Int requestId;
    ::Ice::EncodingVersion encoding;
};

}

namespace Ice
{
template<>
struct StreamableTraits< ::Ice::OperationMode>
{
    static const StreamHelperCategory helper = StreamHelperCategoryEnum;
    static const int minValue = 0;
    static const int maxValue = 2;
    static const int minWireSize = 1;
    static const bool fixedLength = false;
};

}

#endif
