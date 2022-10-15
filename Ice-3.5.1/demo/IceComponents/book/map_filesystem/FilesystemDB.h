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
// Generated from file `FilesystemDB.ice'
//
// Warning: do not edit this file.
//
// </auto-generated>
//

#ifndef ____FilesystemDB_h__
#define ____FilesystemDB_h__

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
#include <Filesystem.h>
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

namespace IceProxy
{

}

namespace FilesystemDB
{

struct FileEntry
{
    ::std::string name;
    ::Ice::Identity parent;
    ::Filesystem::Lines text;
};

typedef ::std::map< ::std::string, ::Filesystem::NodeDesc> StringNodeDescDict;

struct DirectoryEntry
{
    ::std::string name;
    ::Ice::Identity parent;
    ::FilesystemDB::StringNodeDescDict nodes;
};

}

namespace Ice
{
template<>
struct StreamableTraits< ::FilesystemDB::FileEntry>
{
    static const StreamHelperCategory helper = StreamHelperCategoryStruct;
    static const int minWireSize = 4;
    static const bool fixedLength = false;
};

template<class S>
struct StreamWriter< ::FilesystemDB::FileEntry, S>
{
    static void write(S* __os, const ::FilesystemDB::FileEntry& v)
    {
        __os->write(v.name);
        __os->write(v.parent);
        __os->write(v.text);
    }
};

template<class S>
struct StreamReader< ::FilesystemDB::FileEntry, S>
{
    static void read(S* __is, ::FilesystemDB::FileEntry& v)
    {
        __is->read(v.name);
        __is->read(v.parent);
        __is->read(v.text);
    }
};

template<>
struct StreamableTraits< ::FilesystemDB::DirectoryEntry>
{
    static const StreamHelperCategory helper = StreamHelperCategoryStruct;
    static const int minWireSize = 4;
    static const bool fixedLength = false;
};

template<class S>
struct StreamWriter< ::FilesystemDB::DirectoryEntry, S>
{
    static void write(S* __os, const ::FilesystemDB::DirectoryEntry& v)
    {
        __os->write(v.name);
        __os->write(v.parent);
        __os->write(v.nodes);
    }
};

template<class S>
struct StreamReader< ::FilesystemDB::DirectoryEntry, S>
{
    static void read(S* __is, ::FilesystemDB::DirectoryEntry& v)
    {
        __is->read(v.name);
        __is->read(v.parent);
        __is->read(v.nodes);
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
