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
// Generated from file `Version.ice'
//
// Warning: do not edit this file.
//
// </auto-generated>
//

#ifndef __Ice____slice_generate_Ice_Version_h__
#define __Ice____slice_generate_Ice_Version_h__

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

struct ProtocolVersion
{
    ::Ice::Byte major;
    ::Ice::Byte minor;

    bool operator==(const ProtocolVersion& __rhs) const
    {
        if(this == &__rhs)
        {
            return true;
        }
        if(major != __rhs.major)
        {
            return false;
        }
        if(minor != __rhs.minor)
        {
            return false;
        }
        return true;
    }

    bool operator<(const ProtocolVersion& __rhs) const
    {
        if(this == &__rhs)
        {
            return false;
        }
        if(major < __rhs.major)
        {
            return true;
        }
        else if(__rhs.major < major)
        {
            return false;
        }
        if(minor < __rhs.minor)
        {
            return true;
        }
        else if(__rhs.minor < minor)
        {
            return false;
        }
        return false;
    }

    bool operator!=(const ProtocolVersion& __rhs) const
    {
        return !operator==(__rhs);
    }
    bool operator<=(const ProtocolVersion& __rhs) const
    {
        return operator<(__rhs) || operator==(__rhs);
    }
    bool operator>(const ProtocolVersion& __rhs) const
    {
        return !operator<(__rhs) && !operator==(__rhs);
    }
    bool operator>=(const ProtocolVersion& __rhs) const
    {
        return !operator<(__rhs);
    }
};

struct EncodingVersion
{
    ::Ice::Byte major;
    ::Ice::Byte minor;

    bool operator==(const EncodingVersion& __rhs) const
    {
        if(this == &__rhs)
        {
            return true;
        }
        if(major != __rhs.major)
        {
            return false;
        }
        if(minor != __rhs.minor)
        {
            return false;
        }
        return true;
    }

    bool operator<(const EncodingVersion& __rhs) const
    {
        if(this == &__rhs)
        {
            return false;
        }
        if(major < __rhs.major)
        {
            return true;
        }
        else if(__rhs.major < major)
        {
            return false;
        }
        if(minor < __rhs.minor)
        {
            return true;
        }
        else if(__rhs.minor < minor)
        {
            return false;
        }
        return false;
    }

    bool operator!=(const EncodingVersion& __rhs) const
    {
        return !operator==(__rhs);
    }
    bool operator<=(const EncodingVersion& __rhs) const
    {
        return operator<(__rhs) || operator==(__rhs);
    }
    bool operator>(const EncodingVersion& __rhs) const
    {
        return !operator<(__rhs) && !operator==(__rhs);
    }
    bool operator>=(const EncodingVersion& __rhs) const
    {
        return !operator<(__rhs);
    }
};

}

namespace Ice
{
template<>
struct StreamableTraits< ::Ice::ProtocolVersion>
{
    static const StreamHelperCategory helper = StreamHelperCategoryStruct;
    static const int minWireSize = 2;
    static const bool fixedLength = true;
};

template<class S>
struct StreamWriter< ::Ice::ProtocolVersion, S>
{
    static void write(S* __os, const ::Ice::ProtocolVersion& v)
    {
        __os->write(v.major);
        __os->write(v.minor);
    }
};

template<class S>
struct StreamReader< ::Ice::ProtocolVersion, S>
{
    static void read(S* __is, ::Ice::ProtocolVersion& v)
    {
        __is->read(v.major);
        __is->read(v.minor);
    }
};

template<>
struct StreamableTraits< ::Ice::EncodingVersion>
{
    static const StreamHelperCategory helper = StreamHelperCategoryStruct;
    static const int minWireSize = 2;
    static const bool fixedLength = true;
};

template<class S>
struct StreamWriter< ::Ice::EncodingVersion, S>
{
    static void write(S* __os, const ::Ice::EncodingVersion& v)
    {
        __os->write(v.major);
        __os->write(v.minor);
    }
};

template<class S>
struct StreamReader< ::Ice::EncodingVersion, S>
{
    static void read(S* __is, ::Ice::EncodingVersion& v)
    {
        __is->read(v.major);
        __is->read(v.minor);
    }
};

}

#endif