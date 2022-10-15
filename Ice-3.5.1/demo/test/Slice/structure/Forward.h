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
// Generated from file `Forward.ice'
//
// Warning: do not edit this file.
//
// </auto-generated>
//

#ifndef __Forward_h__
#define __Forward_h__

#include <Ice/ProxyF.h>
#include <Ice/ObjectF.h>
#include <Ice/Exception.h>
#include <Ice/LocalObject.h>
#include <Ice/StreamHelpers.h>
#include <Ice/Proxy.h>
#include <IceUtil/ScopedArray.h>
#include <IceUtil/Optional.h>
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

namespace IceProxy
{

namespace Test
{

class Forward;
void __read(::IceInternal::BasicStream*, ::IceInternal::ProxyHandle< ::IceProxy::Test::Forward>&);
::IceProxy::Ice::Object* upCast(::IceProxy::Test::Forward*);

}

}

namespace Test
{

class Forward;
bool operator==(const Forward&, const Forward&);
bool operator<(const Forward&, const Forward&);
::Ice::Object* upCast(::Test::Forward*);
typedef ::IceInternal::Handle< ::Test::Forward> ForwardPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::Test::Forward> ForwardPrx;
void __patch(ForwardPtr&, const ::Ice::ObjectPtr&);

}

namespace Test
{

struct Init
{
    Init() :
        x(0)
    {
    }
    
    Init(const ::Test::ForwardPrx& __ice_member, ::Ice::Int __ice_x) :
        member(__ice_member),
        x(__ice_x)
    {
    }
    

    ::Test::ForwardPrx member;
    ::Ice::Int x;
};

}

namespace Ice
{
template<>
struct StreamableTraits< ::Test::Init>
{
    static const StreamHelperCategory helper = StreamHelperCategoryStruct;
    static const int minWireSize = 6;
    static const bool fixedLength = false;
};

template<class S>
struct StreamWriter< ::Test::Init, S>
{
    static void write(S* __os, const ::Test::Init& v)
    {
        __os->write(v.member);
        __os->write(v.x);
    }
};

template<class S>
struct StreamReader< ::Test::Init, S>
{
    static void read(S* __is, ::Test::Init& v)
    {
        __is->read(v.member);
        __is->read(v.x);
    }
};

}

#endif