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
// Generated from file `EvictorStorage.ice'
//
// Warning: do not edit this file.
//
// </auto-generated>
//

#ifndef __Freeze____slice_generate_Freeze_EvictorStorage_h__
#define __Freeze____slice_generate_Freeze_EvictorStorage_h__

#include <Ice/ProxyF.h>
#include <Ice/ObjectF.h>
#include <Ice/Exception.h>
#include <Ice/LocalObject.h>
#include <Ice/StreamHelpers.h>
#include <IceUtil/ScopedArray.h>
#include <IceUtil/Optional.h>
#include <Ice/Identity.h>
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

struct Statistics
{
    ::Ice::Long creationTime;
    ::Ice::Long lastSaveTime;
    ::Ice::Long avgSaveTime;

    bool operator==(const Statistics& __rhs) const
    {
        if(this == &__rhs)
        {
            return true;
        }
        if(creationTime != __rhs.creationTime)
        {
            return false;
        }
        if(lastSaveTime != __rhs.lastSaveTime)
        {
            return false;
        }
        if(avgSaveTime != __rhs.avgSaveTime)
        {
            return false;
        }
        return true;
    }

    bool operator<(const Statistics& __rhs) const
    {
        if(this == &__rhs)
        {
            return false;
        }
        if(creationTime < __rhs.creationTime)
        {
            return true;
        }
        else if(__rhs.creationTime < creationTime)
        {
            return false;
        }
        if(lastSaveTime < __rhs.lastSaveTime)
        {
            return true;
        }
        else if(__rhs.lastSaveTime < lastSaveTime)
        {
            return false;
        }
        if(avgSaveTime < __rhs.avgSaveTime)
        {
            return true;
        }
        else if(__rhs.avgSaveTime < avgSaveTime)
        {
            return false;
        }
        return false;
    }

    bool operator!=(const Statistics& __rhs) const
    {
        return !operator==(__rhs);
    }
    bool operator<=(const Statistics& __rhs) const
    {
        return operator<(__rhs) || operator==(__rhs);
    }
    bool operator>(const Statistics& __rhs) const
    {
        return !operator<(__rhs) && !operator==(__rhs);
    }
    bool operator>=(const Statistics& __rhs) const
    {
        return !operator<(__rhs);
    }
};

struct ObjectRecord
{
    ::Ice::ObjectPtr servant;
    ::Freeze::Statistics stats;
};

}

namespace Ice
{
template<>
struct StreamableTraits< ::Freeze::Statistics>
{
    static const StreamHelperCategory helper = StreamHelperCategoryStruct;
    static const int minWireSize = 24;
    static const bool fixedLength = true;
};

template<class S>
struct StreamWriter< ::Freeze::Statistics, S>
{
    static void write(S* __os, const ::Freeze::Statistics& v)
    {
        __os->write(v.creationTime);
        __os->write(v.lastSaveTime);
        __os->write(v.avgSaveTime);
    }
};

template<class S>
struct StreamReader< ::Freeze::Statistics, S>
{
    static void read(S* __is, ::Freeze::Statistics& v)
    {
        __is->read(v.creationTime);
        __is->read(v.lastSaveTime);
        __is->read(v.avgSaveTime);
    }
};

template<>
struct StreamableTraits< ::Freeze::ObjectRecord>
{
    static const StreamHelperCategory helper = StreamHelperCategoryStruct;
    static const int minWireSize = 25;
    static const bool fixedLength = false;
};

template<class S>
struct StreamWriter< ::Freeze::ObjectRecord, S>
{
    static void write(S* __os, const ::Freeze::ObjectRecord& v)
    {
        __os->write(v.servant);
        __os->write(v.stats);
    }
};

template<class S>
struct StreamReader< ::Freeze::ObjectRecord, S>
{
    static void read(S* __is, ::Freeze::ObjectRecord& v)
    {
        __is->read(v.servant);
        __is->read(v.stats);
    }
};

}

#endif
