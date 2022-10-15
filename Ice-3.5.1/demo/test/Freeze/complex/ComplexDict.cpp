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
// Generated from file `ComplexDict.ice'
//
// Warning: do not edit this file.
//
// </auto-generated>
//


// Freeze types in this file:
// name="Complex::ComplexDict", key="Complex::Key", value="Complex::Node"

#include <Ice/BasicStream.h>
#include <IceUtil/StringUtil.h>
#include <ComplexDict.h>

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
Complex::ComplexDictKeyCodec::write(const ::Complex::Key& v, Freeze::Key& bytes, const ::Ice::CommunicatorPtr& communicator, const Ice::EncodingVersion& encoding)
{
    IceInternal::InstancePtr instance = IceInternal::getInstance(communicator);
    IceInternal::BasicStream stream(instance.get(), encoding, true);
    stream.write(v);
    ::std::vector<Ice::Byte>(stream.b.begin(), stream.b.end()).swap(bytes);
}

void
Complex::ComplexDictKeyCodec::read(::Complex::Key& v, const Freeze::Key& bytes, const ::Ice::CommunicatorPtr& communicator, const Ice::EncodingVersion& encoding)
{
    IceInternal::InstancePtr instance = IceInternal::getInstance(communicator);
    IceInternal::BasicStream stream(instance.get(), encoding, &bytes[0], &bytes[0] + bytes.size());
    stream.read(v);
}

namespace
{
    const ::std::string __Complex__ComplexDictKeyCodec_typeId = "::Complex::Key";
}

const ::std::string&
Complex::ComplexDictKeyCodec::typeId()
{
    return __Complex__ComplexDictKeyCodec_typeId;
}

void
Complex::ComplexDictValueCodec::write(const ::Complex::NodePtr& v, Freeze::Value& bytes, const ::Ice::CommunicatorPtr& communicator, const Ice::EncodingVersion& encoding)
{
    IceInternal::InstancePtr instance = IceInternal::getInstance(communicator);
    IceInternal::BasicStream stream(instance.get(), encoding, true);
    stream.startWriteEncaps();
    stream.write(v);
    stream.writePendingObjects();
    stream.endWriteEncaps();
    ::std::vector<Ice::Byte>(stream.b.begin(), stream.b.end()).swap(bytes);
}

void
Complex::ComplexDictValueCodec::read(::Complex::NodePtr& v, const Freeze::Value& bytes, const ::Ice::CommunicatorPtr& communicator, const Ice::EncodingVersion& encoding)
{
    IceInternal::InstancePtr instance = IceInternal::getInstance(communicator);
    IceInternal::BasicStream stream(instance.get(), encoding, &bytes[0], &bytes[0] + bytes.size());
    stream.sliceObjects(false);
    stream.startReadEncaps();
    stream.read(v);
    stream.readPendingObjects();
    stream.endReadEncaps();
}

namespace
{
    const ::std::string __Complex__ComplexDictValueCodec_typeId = "::Complex::Node";
}

const ::std::string&
Complex::ComplexDictValueCodec::typeId()
{
    return __Complex__ComplexDictValueCodec_typeId;
}
