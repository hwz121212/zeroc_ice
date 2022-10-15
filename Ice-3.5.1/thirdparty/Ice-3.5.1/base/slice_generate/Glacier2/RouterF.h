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
// Generated from file `RouterF.ice'
//
// Warning: do not edit this file.
//
// </auto-generated>
//

#ifndef __Glacier2____slice_generate_Glacier2_RouterF_h__
#define __Glacier2____slice_generate_Glacier2_RouterF_h__

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

namespace Glacier2
{

class Router;
void __read(::IceInternal::BasicStream*, ::IceInternal::ProxyHandle< ::IceProxy::Glacier2::Router>&);
::IceProxy::Ice::Object* upCast(::IceProxy::Glacier2::Router*);

}

}

namespace Glacier2
{

class Router;
bool operator==(const Router&, const Router&);
bool operator<(const Router&, const Router&);
::Ice::Object* upCast(::Glacier2::Router*);
typedef ::IceInternal::Handle< ::Glacier2::Router> RouterPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::Glacier2::Router> RouterPrx;
void __patch(RouterPtr&, const ::Ice::ObjectPtr&);

}

#endif