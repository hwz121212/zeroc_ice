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
// Generated from file `EndpointF.ice'
//
// Warning: do not edit this file.
//
// </auto-generated>
//

#ifndef __Ice____slice_generate_Ice_EndpointF_h__
#define __Ice____slice_generate_Ice_EndpointF_h__

#include <Ice/ProxyF.h>
#include <Ice/ObjectF.h>
#include <Ice/Exception.h>
#include <Ice/LocalObject.h>
#include <Ice/StreamHelpers.h>
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

namespace Ice
{

class EndpointInfo;
bool operator==(const EndpointInfo&, const EndpointInfo&);
bool operator<(const EndpointInfo&, const EndpointInfo&);
::Ice::LocalObject* upCast(::Ice::EndpointInfo*);
typedef ::IceInternal::Handle< ::Ice::EndpointInfo> EndpointInfoPtr;

class TCPEndpointInfo;
bool operator==(const TCPEndpointInfo&, const TCPEndpointInfo&);
bool operator<(const TCPEndpointInfo&, const TCPEndpointInfo&);
::Ice::LocalObject* upCast(::Ice::TCPEndpointInfo*);
typedef ::IceInternal::Handle< ::Ice::TCPEndpointInfo> TCPEndpointInfoPtr;

class UDPEndpointInfo;
bool operator==(const UDPEndpointInfo&, const UDPEndpointInfo&);
bool operator<(const UDPEndpointInfo&, const UDPEndpointInfo&);
::Ice::LocalObject* upCast(::Ice::UDPEndpointInfo*);
typedef ::IceInternal::Handle< ::Ice::UDPEndpointInfo> UDPEndpointInfoPtr;

class Endpoint;
bool operator==(const Endpoint&, const Endpoint&);
bool operator<(const Endpoint&, const Endpoint&);
::Ice::LocalObject* upCast(::Ice::Endpoint*);
typedef ::IceInternal::Handle< ::Ice::Endpoint> EndpointPtr;

}

namespace Ice
{

typedef ::std::vector< ::Ice::EndpointPtr> EndpointSeq;

}

#endif