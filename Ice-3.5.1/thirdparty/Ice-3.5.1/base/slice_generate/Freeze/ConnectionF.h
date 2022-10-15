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
// Generated from file `ConnectionF.ice'
//
// Warning: do not edit this file.
//
// </auto-generated>
//

#ifndef __Freeze____slice_generate_Freeze_ConnectionF_h__
#define __Freeze____slice_generate_Freeze_ConnectionF_h__

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

namespace Freeze
{

class Connection;
bool operator==(const Connection&, const Connection&);
bool operator<(const Connection&, const Connection&);
::Ice::LocalObject* upCast(::Freeze::Connection*);
typedef ::IceInternal::Handle< ::Freeze::Connection> ConnectionPtr;

}

#endif
