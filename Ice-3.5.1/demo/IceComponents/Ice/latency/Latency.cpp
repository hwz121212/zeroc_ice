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
// Generated from file `Latency.ice'
//
// Warning: do not edit this file.
//
// </auto-generated>
//

#include <Latency.h>
#include <Ice/LocalException.h>
#include <Ice/ObjectFactory.h>
#include <Ice/BasicStream.h>
#include <Ice/Object.h>
#include <IceUtil/Iterator.h>

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

namespace
{

}
::IceProxy::Ice::Object* ::IceProxy::Demo::upCast(::IceProxy::Demo::Ping* p) { return p; }

void
::IceProxy::Demo::__read(::IceInternal::BasicStream* __is, ::IceInternal::ProxyHandle< ::IceProxy::Demo::Ping>& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::Demo::Ping;
        v->__copyFrom(proxy);
    }
}

const ::std::string&
IceProxy::Demo::Ping::ice_staticId()
{
    return ::Demo::Ping::ice_staticId();
}

::IceInternal::Handle< ::IceDelegateM::Ice::Object>
IceProxy::Demo::Ping::__createDelegateM()
{
    return ::IceInternal::Handle< ::IceDelegateM::Ice::Object>(new ::IceDelegateM::Demo::Ping);
}

::IceInternal::Handle< ::IceDelegateD::Ice::Object>
IceProxy::Demo::Ping::__createDelegateD()
{
    return ::IceInternal::Handle< ::IceDelegateD::Ice::Object>(new ::IceDelegateD::Demo::Ping);
}

::IceProxy::Ice::Object*
IceProxy::Demo::Ping::__newInstance() const
{
    return new Ping;
}

::Ice::Object* Demo::upCast(::Demo::Ping* p) { return p; }
::Ice::ObjectPtr
Demo::Ping::ice_clone() const
{
    ::Ice::Object* __p = new Ping(*this);
    return __p;
}

namespace
{
const ::std::string __Demo__Ping_ids[2] =
{
    "::Demo::Ping",
    "::Ice::Object"
};

}

bool
Demo::Ping::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__Demo__Ping_ids, __Demo__Ping_ids + 2, _s);
}

::std::vector< ::std::string>
Demo::Ping::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__Demo__Ping_ids[0], &__Demo__Ping_ids[2]);
}

const ::std::string&
Demo::Ping::ice_id(const ::Ice::Current&) const
{
    return __Demo__Ping_ids[0];
}

const ::std::string&
Demo::Ping::ice_staticId()
{
    return __Demo__Ping_ids[0];
}

void
Demo::Ping::__writeImpl(::IceInternal::BasicStream* __os) const
{
    __os->startWriteSlice(ice_staticId(), -1, true);
    __os->endWriteSlice();
}

void
Demo::Ping::__readImpl(::IceInternal::BasicStream* __is)
{
    __is->startReadSlice();
    __is->endReadSlice();
}

namespace
{

class __F__Demo__Ping : public ::Ice::ObjectFactory
{
public:
#ifndef NDEBUG
virtual ::Ice::ObjectPtr
    create(const ::std::string& type)
#else
virtual ::Ice::ObjectPtr
    create(const ::std::string&)
#endif
    {
        assert(type == ::Demo::Ping::ice_staticId());
        return new ::Demo::Ping;
    }

    virtual void
    destroy()
    {
    }
};
const ::Ice::ObjectFactoryPtr __F__Demo__Ping_Ptr = new __F__Demo__Ping;

class __F__Demo__Ping__Init
{
public:

    __F__Demo__Ping__Init()
    {
        ::IceInternal::factoryTable->addObjectFactory(::Demo::Ping::ice_staticId(), __F__Demo__Ping_Ptr);
    }

    ~__F__Demo__Ping__Init()
    {
        ::IceInternal::factoryTable->removeObjectFactory(::Demo::Ping::ice_staticId());
    }
};

const __F__Demo__Ping__Init __F__Demo__Ping__i;

}

const ::Ice::ObjectFactoryPtr&
Demo::Ping::ice_factory()
{
    return __F__Demo__Ping_Ptr;
}

void 
Demo::__patch(PingPtr& handle, const ::Ice::ObjectPtr& v)
{
    handle = ::Demo::PingPtr::dynamicCast(v);
    if(v && !handle)
    {
        IceInternal::Ex::throwUOE(::Demo::Ping::ice_staticId(), v);
    }
}