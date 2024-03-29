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
// Generated from file `IntIdentityMapWithIndex.ice'
//
// Warning: do not edit this file.
//
// </auto-generated>
//


// Freeze types in this file:
// name="Test::IntIdentityMapWithIndex", key="int", value="Ice::Identity"

#include <Ice/BasicStream.h>
#include <IceUtil/StringUtil.h>
#include <IntIdentityMapWithIndex.h>

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

void
Test::IntIdentityMapWithIndexKeyCodec::write(::Ice::Int v, Freeze::Key& bytes, const ::Ice::CommunicatorPtr& communicator, const Ice::EncodingVersion& encoding)
{
    IceInternal::InstancePtr instance = IceInternal::getInstance(communicator);
    IceInternal::BasicStream stream(instance.get(), encoding, true);
    stream.write(v);
    ::std::vector<Ice::Byte>(stream.b.begin(), stream.b.end()).swap(bytes);
}

void
Test::IntIdentityMapWithIndexKeyCodec::read(::Ice::Int& v, const Freeze::Key& bytes, const ::Ice::CommunicatorPtr& communicator, const Ice::EncodingVersion& encoding)
{
    IceInternal::InstancePtr instance = IceInternal::getInstance(communicator);
    IceInternal::BasicStream stream(instance.get(), encoding, &bytes[0], &bytes[0] + bytes.size());
    stream.read(v);
}

namespace
{
    const ::std::string __Test__IntIdentityMapWithIndexKeyCodec_typeId = "int";
}

const ::std::string&
Test::IntIdentityMapWithIndexKeyCodec::typeId()
{
    return __Test__IntIdentityMapWithIndexKeyCodec_typeId;
}

void
Test::IntIdentityMapWithIndexValueCodec::write(const ::Ice::Identity& v, Freeze::Value& bytes, const ::Ice::CommunicatorPtr& communicator, const Ice::EncodingVersion& encoding)
{
    IceInternal::InstancePtr instance = IceInternal::getInstance(communicator);
    IceInternal::BasicStream stream(instance.get(), encoding, true);
    stream.startWriteEncaps();
    stream.write(v);
    stream.endWriteEncaps();
    ::std::vector<Ice::Byte>(stream.b.begin(), stream.b.end()).swap(bytes);
}

void
Test::IntIdentityMapWithIndexValueCodec::read(::Ice::Identity& v, const Freeze::Value& bytes, const ::Ice::CommunicatorPtr& communicator, const Ice::EncodingVersion& encoding)
{
    IceInternal::InstancePtr instance = IceInternal::getInstance(communicator);
    IceInternal::BasicStream stream(instance.get(), encoding, &bytes[0], &bytes[0] + bytes.size());
    stream.startReadEncaps();
    stream.read(v);
    stream.endReadEncaps();
}

namespace
{
    const ::std::string __Test__IntIdentityMapWithIndexValueCodec_typeId = "::Ice::Identity";
}

const ::std::string&
Test::IntIdentityMapWithIndexValueCodec::typeId()
{
    return __Test__IntIdentityMapWithIndexValueCodec_typeId;
}

Test::IntIdentityMapWithIndex::CategoryIndex::CategoryIndex(const std::string& __name, const Freeze::IceEncodingCompare& __compare)
    : Freeze::MapIndex< ::std::string, CategoryIndex, Freeze::IceEncodingCompare >(__name, __compare)
{
}

void
Test::IntIdentityMapWithIndex::CategoryIndex::marshalKey(const Freeze::Value& __v, Freeze::Key& __k) const
{
    ::Ice::Identity __x;
    Test::IntIdentityMapWithIndexValueCodec::read(__x, __v, _communicator, _encoding);
    write(__x.category, __k, _communicator, _encoding);
}

void
Test::IntIdentityMapWithIndex::CategoryIndex::write(const ::std::string& __index, Freeze::Key& __bytes, const Ice::CommunicatorPtr& __communicator, const Ice::EncodingVersion& __encoding)
{
    IceInternal::InstancePtr __instance = IceInternal::getInstance(__communicator);
    IceInternal::BasicStream __stream(__instance.get(), __encoding, true);
    __stream.write(__index);
    ::std::vector<Ice::Byte>(__stream.b.begin(), __stream.b.end()).swap(__bytes);
}

void
Test::IntIdentityMapWithIndex::CategoryIndex::read(::std::string& __index, const Freeze::Key& __bytes, const Ice::CommunicatorPtr& __communicator, const Ice::EncodingVersion& __encoding)
{
    IceInternal::InstancePtr __instance = IceInternal::getInstance(__communicator);
    IceInternal::BasicStream __stream(__instance.get(), __encoding, &__bytes[0], &__bytes[0] + __bytes.size());
    __stream.read(__index);
}

Test::IntIdentityMapWithIndex::IntIdentityMapWithIndex(const Freeze::ConnectionPtr& __connection, const std::string& __dbName ,bool __createDb, const Freeze::IceEncodingCompare& __compare)
    : Freeze::Map< ::Ice::Int, ::Ice::Identity, IntIdentityMapWithIndexKeyCodec, IntIdentityMapWithIndexValueCodec, Freeze::IceEncodingCompare >(__connection->getCommunicator(), __connection->getEncoding())
{
    Freeze::KeyCompareBasePtr __keyCompare = new Freeze::KeyCompare< ::Ice::Int, IntIdentityMapWithIndexKeyCodec, Freeze::IceEncodingCompare >(__compare, _communicator, _encoding);
    std::vector<Freeze::MapIndexBasePtr> __indices;
    __indices.push_back(new CategoryIndex("category"));
    _helper.reset(Freeze::MapHelper::create(__connection, __dbName, Test::IntIdentityMapWithIndexKeyCodec::typeId(), Test::IntIdentityMapWithIndexValueCodec::typeId(), __keyCompare, __indices, __createDb));
}

void
Test::IntIdentityMapWithIndex::recreate(const Freeze::ConnectionPtr& __connection, const std::string& __dbName , const Freeze::IceEncodingCompare& __compare)
{
    Freeze::KeyCompareBasePtr __keyCompare = new Freeze::KeyCompare< ::Ice::Int, IntIdentityMapWithIndexKeyCodec, Freeze::IceEncodingCompare >(__compare, __connection->getCommunicator(), __connection->getEncoding());
    std::vector<Freeze::MapIndexBasePtr> __indices;
    __indices.push_back(new CategoryIndex("category"));
    Freeze::MapHelper::recreate(__connection, __dbName, Test::IntIdentityMapWithIndexKeyCodec::typeId(), Test::IntIdentityMapWithIndexValueCodec::typeId(), __keyCompare, __indices);
}

Test::IntIdentityMapWithIndex::iterator
Test::IntIdentityMapWithIndex::findByCategory(const ::std::string& __index, bool __onlyDups)
{
    Freeze::Key __bytes;
    CategoryIndex::write(__index, __bytes, _communicator, _encoding);
    return iterator(_helper->index("category")->untypedFind(__bytes, false, __onlyDups), _communicator, _encoding);
}

Test::IntIdentityMapWithIndex::const_iterator
Test::IntIdentityMapWithIndex::findByCategory(const ::std::string& __index, bool __onlyDups) const
{
    Freeze::Key __bytes;
    CategoryIndex::write(__index, __bytes, _communicator, _encoding);
    return const_iterator(_helper->index("category")->untypedFind(__bytes, true, __onlyDups), _communicator, _encoding);
}

Test::IntIdentityMapWithIndex::iterator
Test::IntIdentityMapWithIndex::beginForCategory()
{
    return iterator(_helper->index("category")->begin(false), _communicator, _encoding);
}

Test::IntIdentityMapWithIndex::const_iterator
Test::IntIdentityMapWithIndex::beginForCategory() const
{
    return const_iterator(_helper->index("category")->begin(true), _communicator, _encoding);
}

Test::IntIdentityMapWithIndex::iterator
Test::IntIdentityMapWithIndex::endForCategory()
{
    return iterator();
}

Test::IntIdentityMapWithIndex::const_iterator
Test::IntIdentityMapWithIndex::endForCategory() const
{
    return const_iterator();
}

Test::IntIdentityMapWithIndex::iterator
Test::IntIdentityMapWithIndex::lowerBoundForCategory(const ::std::string& __index)
{
    Freeze::Key __bytes;
    CategoryIndex::write(__index, __bytes, _communicator, _encoding);
    return iterator(_helper->index("category")->untypedLowerBound(__bytes, false), _communicator, _encoding);
}

Test::IntIdentityMapWithIndex::const_iterator
Test::IntIdentityMapWithIndex::lowerBoundForCategory(const ::std::string& __index) const
{
    Freeze::Key __bytes;
    CategoryIndex::write(__index, __bytes, _communicator, _encoding);
    return const_iterator(_helper->index("category")->untypedLowerBound(__bytes, true), _communicator, _encoding);
}

Test::IntIdentityMapWithIndex::iterator
Test::IntIdentityMapWithIndex::upperBoundForCategory(const ::std::string& __index)
{
    Freeze::Key __bytes;
    CategoryIndex::write(__index, __bytes, _communicator, _encoding);
    return iterator(_helper->index("category")->untypedUpperBound(__bytes, false), _communicator, _encoding);
}

Test::IntIdentityMapWithIndex::const_iterator
Test::IntIdentityMapWithIndex::upperBoundForCategory(const ::std::string& __index) const
{
    Freeze::Key __bytes;
    CategoryIndex::write(__index, __bytes, _communicator, _encoding);
    return const_iterator(_helper->index("category")->untypedUpperBound(__bytes, true), _communicator, _encoding);
}

std::pair<Test::IntIdentityMapWithIndex::iterator, Test::IntIdentityMapWithIndex::iterator>
Test::IntIdentityMapWithIndex::equalRangeForCategory(const ::std::string& __index)
{
    return std::make_pair(lowerBoundForCategory(__index), upperBoundForCategory(__index));
}

std::pair<Test::IntIdentityMapWithIndex::const_iterator, Test::IntIdentityMapWithIndex::const_iterator>
Test::IntIdentityMapWithIndex::equalRangeForCategory(const ::std::string& __index) const
{
    return std::make_pair(lowerBoundForCategory(__index), upperBoundForCategory(__index));
}

int
Test::IntIdentityMapWithIndex::categoryCount(const ::std::string& __index) const
{
    Freeze::Key __bytes;
    CategoryIndex::write(__index, __bytes, _communicator, _encoding);
    return _helper->index("category")->untypedCount(__bytes);
}
