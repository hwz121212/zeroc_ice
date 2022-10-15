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
// Generated from file `LinkRecord.ice'
//
// Warning: do not edit this file.
//
// </auto-generated>
//

#ifndef __IceStorm____slice_generate_IceStorm_LinkRecord_h__
#define __IceStorm____slice_generate_IceStorm_LinkRecord_h__

#include <Ice/ProxyF.h>
#include <Ice/ObjectF.h>
#include <Ice/Exception.h>
#include <Ice/LocalObject.h>
#include <Ice/StreamHelpers.h>
#include <Ice/Proxy.h>
#include <Ice/Object.h>
#include <Ice/Outgoing.h>
#include <Ice/OutgoingAsync.h>
#include <Ice/Incoming.h>
#include <Ice/Direct.h>
#include <Ice/FactoryTableInit.h>
#include <IceUtil/ScopedArray.h>
#include <IceUtil/Optional.h>
#include <Ice/StreamF.h>
#include <Ice/Identity.h>
#include <IceStorm/IceStormInternal.h>
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

}

namespace IceStorm
{

struct LinkRecord
{
    ::IceStorm::TopicLinkPrx obj;
    ::Ice::Int cost;
    ::IceStorm::TopicPrx theTopic;
};

}

namespace Ice
{
template<>
struct StreamableTraits< ::IceStorm::LinkRecord>
{
    static const StreamHelperCategory helper = StreamHelperCategoryStruct;
    static const int minWireSize = 8;
    static const bool fixedLength = false;
};

template<class S>
struct StreamWriter< ::IceStorm::LinkRecord, S>
{
    static void write(S* __os, const ::IceStorm::LinkRecord& v)
    {
        __os->write(v.obj);
        __os->write(v.cost);
        __os->write(v.theTopic);
    }
};

template<class S>
struct StreamReader< ::IceStorm::LinkRecord, S>
{
    static void read(S* __is, ::IceStorm::LinkRecord& v)
    {
        __is->read(v.obj);
        __is->read(v.cost);
        __is->read(v.theTopic);
    }
};

}

namespace IceProxy
{

}

namespace IceDelegate
{

}

namespace IceDelegateM
{

}

namespace IceDelegateD
{

}

#endif