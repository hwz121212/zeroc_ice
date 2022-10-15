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
// Generated from file `ClientPrivate.ice'
//
// Warning: do not edit this file.
//
// </auto-generated>
//

#include <ClientPrivate.h>
#include <Ice/LocalException.h>
#include <Ice/ObjectFactory.h>
#include <Ice/BasicStream.h>
#include <Ice/Object.h>
#include <Ice/SlicedData.h>
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
::IceProxy::Ice::Object* ::IceProxy::Test::upCast(::IceProxy::Test::D3* p) { return p; }

void
::IceProxy::Test::__read(::IceInternal::BasicStream* __is, ::IceInternal::ProxyHandle< ::IceProxy::Test::D3>& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::Test::D3;
        v->__copyFrom(proxy);
    }
}

const ::std::string&
IceProxy::Test::D3::ice_staticId()
{
    return ::Test::D3::ice_staticId();
}

::IceInternal::Handle< ::IceDelegateM::Ice::Object>
IceProxy::Test::D3::__createDelegateM()
{
    return ::IceInternal::Handle< ::IceDelegateM::Ice::Object>(new ::IceDelegateM::Test::D3);
}

::IceInternal::Handle< ::IceDelegateD::Ice::Object>
IceProxy::Test::D3::__createDelegateD()
{
    return ::IceInternal::Handle< ::IceDelegateD::Ice::Object>(new ::IceDelegateD::Test::D3);
}

::IceProxy::Ice::Object*
IceProxy::Test::D3::__newInstance() const
{
    return new D3;
}
::IceProxy::Ice::Object* ::IceProxy::Test::upCast(::IceProxy::Test::PCUnknown* p) { return p; }

void
::IceProxy::Test::__read(::IceInternal::BasicStream* __is, ::IceInternal::ProxyHandle< ::IceProxy::Test::PCUnknown>& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::Test::PCUnknown;
        v->__copyFrom(proxy);
    }
}

const ::std::string&
IceProxy::Test::PCUnknown::ice_staticId()
{
    return ::Test::PCUnknown::ice_staticId();
}

::IceInternal::Handle< ::IceDelegateM::Ice::Object>
IceProxy::Test::PCUnknown::__createDelegateM()
{
    return ::IceInternal::Handle< ::IceDelegateM::Ice::Object>(new ::IceDelegateM::Test::PCUnknown);
}

::IceInternal::Handle< ::IceDelegateD::Ice::Object>
IceProxy::Test::PCUnknown::__createDelegateD()
{
    return ::IceInternal::Handle< ::IceDelegateD::Ice::Object>(new ::IceDelegateD::Test::PCUnknown);
}

::IceProxy::Ice::Object*
IceProxy::Test::PCUnknown::__newInstance() const
{
    return new PCUnknown;
}
::IceProxy::Ice::Object* ::IceProxy::Test::upCast(::IceProxy::Test::PCDerived* p) { return p; }

void
::IceProxy::Test::__read(::IceInternal::BasicStream* __is, ::IceInternal::ProxyHandle< ::IceProxy::Test::PCDerived>& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::Test::PCDerived;
        v->__copyFrom(proxy);
    }
}

const ::std::string&
IceProxy::Test::PCDerived::ice_staticId()
{
    return ::Test::PCDerived::ice_staticId();
}

::IceInternal::Handle< ::IceDelegateM::Ice::Object>
IceProxy::Test::PCDerived::__createDelegateM()
{
    return ::IceInternal::Handle< ::IceDelegateM::Ice::Object>(new ::IceDelegateM::Test::PCDerived);
}

::IceInternal::Handle< ::IceDelegateD::Ice::Object>
IceProxy::Test::PCDerived::__createDelegateD()
{
    return ::IceInternal::Handle< ::IceDelegateD::Ice::Object>(new ::IceDelegateD::Test::PCDerived);
}

::IceProxy::Ice::Object*
IceProxy::Test::PCDerived::__newInstance() const
{
    return new PCDerived;
}
::IceProxy::Ice::Object* ::IceProxy::Test::upCast(::IceProxy::Test::PCDerived2* p) { return p; }

void
::IceProxy::Test::__read(::IceInternal::BasicStream* __is, ::IceInternal::ProxyHandle< ::IceProxy::Test::PCDerived2>& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::Test::PCDerived2;
        v->__copyFrom(proxy);
    }
}

const ::std::string&
IceProxy::Test::PCDerived2::ice_staticId()
{
    return ::Test::PCDerived2::ice_staticId();
}

::IceInternal::Handle< ::IceDelegateM::Ice::Object>
IceProxy::Test::PCDerived2::__createDelegateM()
{
    return ::IceInternal::Handle< ::IceDelegateM::Ice::Object>(new ::IceDelegateM::Test::PCDerived2);
}

::IceInternal::Handle< ::IceDelegateD::Ice::Object>
IceProxy::Test::PCDerived2::__createDelegateD()
{
    return ::IceInternal::Handle< ::IceDelegateD::Ice::Object>(new ::IceDelegateD::Test::PCDerived2);
}

::IceProxy::Ice::Object*
IceProxy::Test::PCDerived2::__newInstance() const
{
    return new PCDerived2;
}
::IceProxy::Ice::Object* ::IceProxy::Test::upCast(::IceProxy::Test::PCDerived3* p) { return p; }

void
::IceProxy::Test::__read(::IceInternal::BasicStream* __is, ::IceInternal::ProxyHandle< ::IceProxy::Test::PCDerived3>& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::Test::PCDerived3;
        v->__copyFrom(proxy);
    }
}

const ::std::string&
IceProxy::Test::PCDerived3::ice_staticId()
{
    return ::Test::PCDerived3::ice_staticId();
}

::IceInternal::Handle< ::IceDelegateM::Ice::Object>
IceProxy::Test::PCDerived3::__createDelegateM()
{
    return ::IceInternal::Handle< ::IceDelegateM::Ice::Object>(new ::IceDelegateM::Test::PCDerived3);
}

::IceInternal::Handle< ::IceDelegateD::Ice::Object>
IceProxy::Test::PCDerived3::__createDelegateD()
{
    return ::IceInternal::Handle< ::IceDelegateD::Ice::Object>(new ::IceDelegateD::Test::PCDerived3);
}

::IceProxy::Ice::Object*
IceProxy::Test::PCDerived3::__newInstance() const
{
    return new PCDerived3;
}
::IceProxy::Ice::Object* ::IceProxy::Test::upCast(::IceProxy::Test::CompactPCDerived* p) { return p; }

void
::IceProxy::Test::__read(::IceInternal::BasicStream* __is, ::IceInternal::ProxyHandle< ::IceProxy::Test::CompactPCDerived>& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::Test::CompactPCDerived;
        v->__copyFrom(proxy);
    }
}

const ::std::string&
IceProxy::Test::CompactPCDerived::ice_staticId()
{
    return ::Test::CompactPCDerived::ice_staticId();
}

::IceInternal::Handle< ::IceDelegateM::Ice::Object>
IceProxy::Test::CompactPCDerived::__createDelegateM()
{
    return ::IceInternal::Handle< ::IceDelegateM::Ice::Object>(new ::IceDelegateM::Test::CompactPCDerived);
}

::IceInternal::Handle< ::IceDelegateD::Ice::Object>
IceProxy::Test::CompactPCDerived::__createDelegateD()
{
    return ::IceInternal::Handle< ::IceDelegateD::Ice::Object>(new ::IceDelegateD::Test::CompactPCDerived);
}

::IceProxy::Ice::Object*
IceProxy::Test::CompactPCDerived::__newInstance() const
{
    return new CompactPCDerived;
}

::Ice::Object* Test::upCast(::Test::D3* p) { return p; }
::Ice::ObjectPtr
Test::D3::ice_clone() const
{
    ::Ice::Object* __p = new D3(*this);
    return __p;
}

namespace
{
const ::std::string __Test__D3_ids[3] =
{
    "::Ice::Object",
    "::Test::B",
    "::Test::D3"
};

}

bool
Test::D3::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__Test__D3_ids, __Test__D3_ids + 3, _s);
}

::std::vector< ::std::string>
Test::D3::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__Test__D3_ids[0], &__Test__D3_ids[3]);
}

const ::std::string&
Test::D3::ice_id(const ::Ice::Current&) const
{
    return __Test__D3_ids[2];
}

const ::std::string&
Test::D3::ice_staticId()
{
    return __Test__D3_ids[2];
}

void
Test::D3::__gcReachable(::IceInternal::GCCountMap& _c) const
{
    ::Test::B::__gcReachable(_c);
    if(pd3)
    {
        ::Test::upCast(pd3.get())->__addObject(_c);
    }
}

void
Test::D3::__gcClear()
{
    ::Test::B::__gcClear();
    if(pd3)
    {
        if(::Test::upCast(pd3.get())->__usesGC())
        {
            ::Test::upCast(pd3.get())->__decRefUnsafe();
            pd3.__clearHandleUnsafe();
        }
        else
        {
            pd3 = 0;
        }
    }
}

void
Test::D3::__writeImpl(::IceInternal::BasicStream* __os) const
{
    __os->startWriteSlice(ice_staticId(), -1, false);
    __os->write(sd3);
    __os->write(pd3);
    __os->endWriteSlice();
    ::Test::B::__writeImpl(__os);
}

void
Test::D3::__readImpl(::IceInternal::BasicStream* __is)
{
    __is->startReadSlice();
    __is->read(sd3);
    __is->read(pd3);
    __is->endReadSlice();
    ::Test::B::__readImpl(__is);
}

namespace
{

class __F__Test__D3 : public ::Ice::ObjectFactory
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
        assert(type == ::Test::D3::ice_staticId());
        return new ::Test::D3;
    }

    virtual void
    destroy()
    {
    }
};
const ::Ice::ObjectFactoryPtr __F__Test__D3_Ptr = new __F__Test__D3;

class __F__Test__D3__Init
{
public:

    __F__Test__D3__Init()
    {
        ::IceInternal::factoryTable->addObjectFactory(::Test::D3::ice_staticId(), __F__Test__D3_Ptr);
    }

    ~__F__Test__D3__Init()
    {
        ::IceInternal::factoryTable->removeObjectFactory(::Test::D3::ice_staticId());
    }
};

const __F__Test__D3__Init __F__Test__D3__i;

}

const ::Ice::ObjectFactoryPtr&
Test::D3::ice_factory()
{
    return __F__Test__D3_Ptr;
}

void 
Test::__patch(D3Ptr& handle, const ::Ice::ObjectPtr& v)
{
    handle = ::Test::D3Ptr::dynamicCast(v);
    if(v && !handle)
    {
        IceInternal::Ex::throwUOE(::Test::D3::ice_staticId(), v);
    }
}

::Ice::Object* Test::upCast(::Test::PCUnknown* p) { return p; }
::Ice::ObjectPtr
Test::PCUnknown::ice_clone() const
{
    ::Ice::Object* __p = new PCUnknown(*this);
    return __p;
}

namespace
{
const ::std::string __Test__PCUnknown_ids[3] =
{
    "::Ice::Object",
    "::Test::PBase",
    "::Test::PCUnknown"
};

}

bool
Test::PCUnknown::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__Test__PCUnknown_ids, __Test__PCUnknown_ids + 3, _s);
}

::std::vector< ::std::string>
Test::PCUnknown::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__Test__PCUnknown_ids[0], &__Test__PCUnknown_ids[3]);
}

const ::std::string&
Test::PCUnknown::ice_id(const ::Ice::Current&) const
{
    return __Test__PCUnknown_ids[2];
}

const ::std::string&
Test::PCUnknown::ice_staticId()
{
    return __Test__PCUnknown_ids[2];
}

void
Test::PCUnknown::__addObject(::IceInternal::GCCountMap& _c)
{
    ::IceInternal::GCCountMap::iterator pos = _c.find(this);
    if(pos == _c.end())
    {
        _c[this] = 1;
    }
    else
    {
        ++pos->second;
    }
}

bool
Test::PCUnknown::__usesGC()
{
    return true;
}

void
Test::PCUnknown::__gcReachable(::IceInternal::GCCountMap& _c) const
{
    if(__slicedData)
    {
        __slicedData->__addObject(_c);
    }
}

void
Test::PCUnknown::__gcClear()
{
    if(__slicedData)
    {
        __slicedData->__decRefUnsafe();
        __slicedData.__clearHandleUnsafe();
    }
}

void
Test::PCUnknown::__write(::IceInternal::BasicStream* __os) const
{
    __os->startWriteObject(__slicedData);
    __writeImpl(__os);
    __os->endWriteObject();
}

void
Test::PCUnknown::__read(::IceInternal::BasicStream* __is)
{
    __is->startReadObject();
    __readImpl(__is);
    __slicedData = __is->endReadObject(true);
}

void
Test::PCUnknown::__writeImpl(::IceInternal::BasicStream* __os) const
{
    __os->startWriteSlice(ice_staticId(), -1, false);
    __os->write(pu);
    __os->endWriteSlice();
    ::Test::PBase::__writeImpl(__os);
}

void
Test::PCUnknown::__readImpl(::IceInternal::BasicStream* __is)
{
    __is->startReadSlice();
    __is->read(pu);
    __is->endReadSlice();
    ::Test::PBase::__readImpl(__is);
}

namespace
{

class __F__Test__PCUnknown : public ::Ice::ObjectFactory
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
        assert(type == ::Test::PCUnknown::ice_staticId());
        return new ::Test::PCUnknown;
    }

    virtual void
    destroy()
    {
    }
};
const ::Ice::ObjectFactoryPtr __F__Test__PCUnknown_Ptr = new __F__Test__PCUnknown;

class __F__Test__PCUnknown__Init
{
public:

    __F__Test__PCUnknown__Init()
    {
        ::IceInternal::factoryTable->addObjectFactory(::Test::PCUnknown::ice_staticId(), __F__Test__PCUnknown_Ptr);
    }

    ~__F__Test__PCUnknown__Init()
    {
        ::IceInternal::factoryTable->removeObjectFactory(::Test::PCUnknown::ice_staticId());
    }
};

const __F__Test__PCUnknown__Init __F__Test__PCUnknown__i;

}

const ::Ice::ObjectFactoryPtr&
Test::PCUnknown::ice_factory()
{
    return __F__Test__PCUnknown_Ptr;
}

void 
Test::__patch(PCUnknownPtr& handle, const ::Ice::ObjectPtr& v)
{
    handle = ::Test::PCUnknownPtr::dynamicCast(v);
    if(v && !handle)
    {
        IceInternal::Ex::throwUOE(::Test::PCUnknown::ice_staticId(), v);
    }
}

::Ice::Object* Test::upCast(::Test::PCDerived* p) { return p; }
::Ice::ObjectPtr
Test::PCDerived::ice_clone() const
{
    ::Ice::Object* __p = new PCDerived(*this);
    return __p;
}

namespace
{
const ::std::string __Test__PCDerived_ids[5] =
{
    "::Ice::Object",
    "::Test::PBase",
    "::Test::PCDerived",
    "::Test::PDerived",
    "::Test::Preserved"
};

}

bool
Test::PCDerived::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__Test__PCDerived_ids, __Test__PCDerived_ids + 5, _s);
}

::std::vector< ::std::string>
Test::PCDerived::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__Test__PCDerived_ids[0], &__Test__PCDerived_ids[5]);
}

const ::std::string&
Test::PCDerived::ice_id(const ::Ice::Current&) const
{
    return __Test__PCDerived_ids[2];
}

const ::std::string&
Test::PCDerived::ice_staticId()
{
    return __Test__PCDerived_ids[2];
}

void
Test::PCDerived::__gcReachable(::IceInternal::GCCountMap& _c) const
{
    ::Test::PDerived::__gcReachable(_c);
    {
        for(::Test::PBaseSeq::const_iterator _i0 = pbs.begin(); _i0 != pbs.end(); ++_i0)
        {
            if((*_i0))
            {
                ::Test::upCast((*_i0).get())->__addObject(_c);
            }
        }
    }
}

void
Test::PCDerived::__gcClear()
{
    ::Test::PDerived::__gcClear();
    {
        for(::Test::PBaseSeq::iterator _i0 = pbs.begin(); _i0 != pbs.end(); ++_i0)
        {
            if((*_i0))
            {
                if(::Test::upCast((*_i0).get())->__usesGC())
                {
                    ::Test::upCast((*_i0).get())->__decRefUnsafe();
                    (*_i0).__clearHandleUnsafe();
                }
                else
                {
                    (*_i0) = 0;
                }
            }
        }
    }
}

void
Test::PCDerived::__writeImpl(::IceInternal::BasicStream* __os) const
{
    __os->startWriteSlice(ice_staticId(), -1, false);
    __os->write(pbs);
    __os->endWriteSlice();
    ::Test::PDerived::__writeImpl(__os);
}

void
Test::PCDerived::__readImpl(::IceInternal::BasicStream* __is)
{
    __is->startReadSlice();
    __is->read(pbs);
    __is->endReadSlice();
    ::Test::PDerived::__readImpl(__is);
}

namespace
{

class __F__Test__PCDerived : public ::Ice::ObjectFactory
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
        assert(type == ::Test::PCDerived::ice_staticId());
        return new ::Test::PCDerived;
    }

    virtual void
    destroy()
    {
    }
};
const ::Ice::ObjectFactoryPtr __F__Test__PCDerived_Ptr = new __F__Test__PCDerived;

class __F__Test__PCDerived__Init
{
public:

    __F__Test__PCDerived__Init()
    {
        ::IceInternal::factoryTable->addObjectFactory(::Test::PCDerived::ice_staticId(), __F__Test__PCDerived_Ptr);
    }

    ~__F__Test__PCDerived__Init()
    {
        ::IceInternal::factoryTable->removeObjectFactory(::Test::PCDerived::ice_staticId());
    }
};

const __F__Test__PCDerived__Init __F__Test__PCDerived__i;

}

const ::Ice::ObjectFactoryPtr&
Test::PCDerived::ice_factory()
{
    return __F__Test__PCDerived_Ptr;
}

void 
Test::__patch(PCDerivedPtr& handle, const ::Ice::ObjectPtr& v)
{
    handle = ::Test::PCDerivedPtr::dynamicCast(v);
    if(v && !handle)
    {
        IceInternal::Ex::throwUOE(::Test::PCDerived::ice_staticId(), v);
    }
}

::Ice::Object* Test::upCast(::Test::PCDerived2* p) { return p; }
::Ice::ObjectPtr
Test::PCDerived2::ice_clone() const
{
    ::Ice::Object* __p = new PCDerived2(*this);
    return __p;
}

namespace
{
const ::std::string __Test__PCDerived2_ids[6] =
{
    "::Ice::Object",
    "::Test::PBase",
    "::Test::PCDerived",
    "::Test::PCDerived2",
    "::Test::PDerived",
    "::Test::Preserved"
};

}

bool
Test::PCDerived2::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__Test__PCDerived2_ids, __Test__PCDerived2_ids + 6, _s);
}

::std::vector< ::std::string>
Test::PCDerived2::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__Test__PCDerived2_ids[0], &__Test__PCDerived2_ids[6]);
}

const ::std::string&
Test::PCDerived2::ice_id(const ::Ice::Current&) const
{
    return __Test__PCDerived2_ids[3];
}

const ::std::string&
Test::PCDerived2::ice_staticId()
{
    return __Test__PCDerived2_ids[3];
}

void
Test::PCDerived2::__gcReachable(::IceInternal::GCCountMap& _c) const
{
    ::Test::PCDerived::__gcReachable(_c);
}

void
Test::PCDerived2::__gcClear()
{
    ::Test::PCDerived::__gcClear();
}

void
Test::PCDerived2::__writeImpl(::IceInternal::BasicStream* __os) const
{
    __os->startWriteSlice(ice_staticId(), -1, false);
    __os->write(pcd2);
    __os->endWriteSlice();
    ::Test::PCDerived::__writeImpl(__os);
}

void
Test::PCDerived2::__readImpl(::IceInternal::BasicStream* __is)
{
    __is->startReadSlice();
    __is->read(pcd2);
    __is->endReadSlice();
    ::Test::PCDerived::__readImpl(__is);
}

namespace
{

class __F__Test__PCDerived2 : public ::Ice::ObjectFactory
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
        assert(type == ::Test::PCDerived2::ice_staticId());
        return new ::Test::PCDerived2;
    }

    virtual void
    destroy()
    {
    }
};
const ::Ice::ObjectFactoryPtr __F__Test__PCDerived2_Ptr = new __F__Test__PCDerived2;

class __F__Test__PCDerived2__Init
{
public:

    __F__Test__PCDerived2__Init()
    {
        ::IceInternal::factoryTable->addObjectFactory(::Test::PCDerived2::ice_staticId(), __F__Test__PCDerived2_Ptr);
    }

    ~__F__Test__PCDerived2__Init()
    {
        ::IceInternal::factoryTable->removeObjectFactory(::Test::PCDerived2::ice_staticId());
    }
};

const __F__Test__PCDerived2__Init __F__Test__PCDerived2__i;

}

const ::Ice::ObjectFactoryPtr&
Test::PCDerived2::ice_factory()
{
    return __F__Test__PCDerived2_Ptr;
}

void 
Test::__patch(PCDerived2Ptr& handle, const ::Ice::ObjectPtr& v)
{
    handle = ::Test::PCDerived2Ptr::dynamicCast(v);
    if(v && !handle)
    {
        IceInternal::Ex::throwUOE(::Test::PCDerived2::ice_staticId(), v);
    }
}

::Ice::Object* Test::upCast(::Test::PCDerived3* p) { return p; }
::Ice::ObjectPtr
Test::PCDerived3::ice_clone() const
{
    ::Ice::Object* __p = new PCDerived3(*this);
    return __p;
}

namespace
{
const ::std::string __Test__PCDerived3_ids[7] =
{
    "::Ice::Object",
    "::Test::PBase",
    "::Test::PCDerived",
    "::Test::PCDerived2",
    "::Test::PCDerived3",
    "::Test::PDerived",
    "::Test::Preserved"
};

}

bool
Test::PCDerived3::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__Test__PCDerived3_ids, __Test__PCDerived3_ids + 7, _s);
}

::std::vector< ::std::string>
Test::PCDerived3::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__Test__PCDerived3_ids[0], &__Test__PCDerived3_ids[7]);
}

const ::std::string&
Test::PCDerived3::ice_id(const ::Ice::Current&) const
{
    return __Test__PCDerived3_ids[4];
}

const ::std::string&
Test::PCDerived3::ice_staticId()
{
    return __Test__PCDerived3_ids[4];
}

void
Test::PCDerived3::__gcReachable(::IceInternal::GCCountMap& _c) const
{
    ::Test::PCDerived2::__gcReachable(_c);
    if(pcd3)
    {
        pcd3->__addObject(_c);
    }
}

void
Test::PCDerived3::__gcClear()
{
    ::Test::PCDerived2::__gcClear();
    if(pcd3)
    {
        if(pcd3->__usesGC())
        {
            pcd3->__decRefUnsafe();
            pcd3.__clearHandleUnsafe();
        }
        else
        {
            pcd3 = 0;
        }
    }
}

void
Test::PCDerived3::__writeImpl(::IceInternal::BasicStream* __os) const
{
    __os->startWriteSlice(ice_staticId(), -1, false);
    __os->write(pcd3);
    __os->endWriteSlice();
    ::Test::PCDerived2::__writeImpl(__os);
}

void
Test::PCDerived3::__readImpl(::IceInternal::BasicStream* __is)
{
    __is->startReadSlice();
    __is->read(pcd3);
    __is->endReadSlice();
    ::Test::PCDerived2::__readImpl(__is);
}

namespace
{

class __F__Test__PCDerived3 : public ::Ice::ObjectFactory
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
        assert(type == ::Test::PCDerived3::ice_staticId());
        return new ::Test::PCDerived3;
    }

    virtual void
    destroy()
    {
    }
};
const ::Ice::ObjectFactoryPtr __F__Test__PCDerived3_Ptr = new __F__Test__PCDerived3;

class __F__Test__PCDerived3__Init
{
public:

    __F__Test__PCDerived3__Init()
    {
        ::IceInternal::factoryTable->addObjectFactory(::Test::PCDerived3::ice_staticId(), __F__Test__PCDerived3_Ptr);
    }

    ~__F__Test__PCDerived3__Init()
    {
        ::IceInternal::factoryTable->removeObjectFactory(::Test::PCDerived3::ice_staticId());
    }
};

const __F__Test__PCDerived3__Init __F__Test__PCDerived3__i;

}

const ::Ice::ObjectFactoryPtr&
Test::PCDerived3::ice_factory()
{
    return __F__Test__PCDerived3_Ptr;
}

void 
Test::__patch(PCDerived3Ptr& handle, const ::Ice::ObjectPtr& v)
{
    handle = ::Test::PCDerived3Ptr::dynamicCast(v);
    if(v && !handle)
    {
        IceInternal::Ex::throwUOE(::Test::PCDerived3::ice_staticId(), v);
    }
}

::Ice::Object* Test::upCast(::Test::CompactPCDerived* p) { return p; }
::Ice::ObjectPtr
Test::CompactPCDerived::ice_clone() const
{
    ::Ice::Object* __p = new CompactPCDerived(*this);
    return __p;
}

namespace
{
const ::std::string __Test__CompactPCDerived_ids[5] =
{
    "::Ice::Object",
    "::Test::CompactPCDerived",
    "::Test::CompactPDerived",
    "::Test::PBase",
    "::Test::Preserved"
};

}

bool
Test::CompactPCDerived::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__Test__CompactPCDerived_ids, __Test__CompactPCDerived_ids + 5, _s);
}

::std::vector< ::std::string>
Test::CompactPCDerived::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__Test__CompactPCDerived_ids[0], &__Test__CompactPCDerived_ids[5]);
}

const ::std::string&
Test::CompactPCDerived::ice_id(const ::Ice::Current&) const
{
    return __Test__CompactPCDerived_ids[1];
}

const ::std::string&
Test::CompactPCDerived::ice_staticId()
{
    return __Test__CompactPCDerived_ids[1];
}

void
Test::CompactPCDerived::__gcReachable(::IceInternal::GCCountMap& _c) const
{
    ::Test::CompactPDerived::__gcReachable(_c);
    {
        for(::Test::PBaseSeq::const_iterator _i0 = pbs.begin(); _i0 != pbs.end(); ++_i0)
        {
            if((*_i0))
            {
                ::Test::upCast((*_i0).get())->__addObject(_c);
            }
        }
    }
}

void
Test::CompactPCDerived::__gcClear()
{
    ::Test::CompactPDerived::__gcClear();
    {
        for(::Test::PBaseSeq::iterator _i0 = pbs.begin(); _i0 != pbs.end(); ++_i0)
        {
            if((*_i0))
            {
                if(::Test::upCast((*_i0).get())->__usesGC())
                {
                    ::Test::upCast((*_i0).get())->__decRefUnsafe();
                    (*_i0).__clearHandleUnsafe();
                }
                else
                {
                    (*_i0) = 0;
                }
            }
        }
    }
}

void
Test::CompactPCDerived::__writeImpl(::IceInternal::BasicStream* __os) const
{
    __os->startWriteSlice(ice_staticId(), 57, false);
    __os->write(pbs);
    __os->endWriteSlice();
    ::Test::CompactPDerived::__writeImpl(__os);
}

void
Test::CompactPCDerived::__readImpl(::IceInternal::BasicStream* __is)
{
    __is->startReadSlice();
    __is->read(pbs);
    __is->endReadSlice();
    ::Test::CompactPDerived::__readImpl(__is);
}

namespace
{

class __F__Test__CompactPCDerived : public ::Ice::ObjectFactory
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
        assert(type == ::Test::CompactPCDerived::ice_staticId());
        return new ::Test::CompactPCDerived;
    }

    virtual void
    destroy()
    {
    }
};
const ::Ice::ObjectFactoryPtr __F__Test__CompactPCDerived_Ptr = new __F__Test__CompactPCDerived;

class __F__Test__CompactPCDerived__Init
{
public:

    __F__Test__CompactPCDerived__Init()
    {
        ::IceInternal::factoryTable->addObjectFactory(::Test::CompactPCDerived::ice_staticId(), __F__Test__CompactPCDerived_Ptr);
        ::IceInternal::factoryTable->addTypeId(57, ::Test::CompactPCDerived::ice_staticId());
    }

    ~__F__Test__CompactPCDerived__Init()
    {
        ::IceInternal::factoryTable->removeObjectFactory(::Test::CompactPCDerived::ice_staticId());
        ::IceInternal::factoryTable->removeTypeId(57);
    }
};

const __F__Test__CompactPCDerived__Init __F__Test__CompactPCDerived__i;

}

const ::Ice::ObjectFactoryPtr&
Test::CompactPCDerived::ice_factory()
{
    return __F__Test__CompactPCDerived_Ptr;
}

void 
Test::__patch(CompactPCDerivedPtr& handle, const ::Ice::ObjectPtr& v)
{
    handle = ::Test::CompactPCDerivedPtr::dynamicCast(v);
    if(v && !handle)
    {
        IceInternal::Ex::throwUOE(::Test::CompactPCDerived::ice_staticId(), v);
    }
}