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
// Generated from file `ServerPrivateAMD.ice'
//
// Warning: do not edit this file.
//
// </auto-generated>
//

#include <ServerPrivateAMD.h>
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

namespace
{

const char* __Test__UnknownDerivedException_name = "Test::UnknownDerivedException";

struct __F__Test__UnknownDerivedException : public ::IceInternal::UserExceptionFactory
{
    virtual void
    createAndThrow(const ::std::string&)
    {
        throw ::Test::UnknownDerivedException();
    }
};

class __F__Test__UnknownDerivedException__Init
{
public:

    __F__Test__UnknownDerivedException__Init()
    {
        ::IceInternal::factoryTable->addExceptionFactory("::Test::UnknownDerivedException", new __F__Test__UnknownDerivedException);
    }

    ~__F__Test__UnknownDerivedException__Init()
    {
        ::IceInternal::factoryTable->removeExceptionFactory("::Test::UnknownDerivedException");
    }
};

const __F__Test__UnknownDerivedException__Init __F__Test__UnknownDerivedException__i;

}

Test::UnknownDerivedException::UnknownDerivedException(const ::std::string& __ice_sbe, const ::Test::BPtr& __ice_pb, const ::std::string& __ice_sude, const ::Test::D2Ptr& __ice_pd2) :
    ::Test::BaseException(__ice_sbe, __ice_pb),
    sude(__ice_sude),
    pd2(__ice_pd2)
{
}

Test::UnknownDerivedException::~UnknownDerivedException() throw()
{
}

::std::string
Test::UnknownDerivedException::ice_name() const
{
    return __Test__UnknownDerivedException_name;
}

Test::UnknownDerivedException*
Test::UnknownDerivedException::ice_clone() const
{
    return new UnknownDerivedException(*this);
}

void
Test::UnknownDerivedException::ice_throw() const
{
    throw *this;
}

void
Test::UnknownDerivedException::__writeImpl(::IceInternal::BasicStream* __os) const
{
    __os->startWriteSlice("::Test::UnknownDerivedException", -1, false);
    __os->write(sude);
    __os->write(pd2);
    __os->endWriteSlice();
    ::Test::BaseException::__writeImpl(__os);
}

void
Test::UnknownDerivedException::__readImpl(::IceInternal::BasicStream* __is)
{
    __is->startReadSlice();
    __is->read(sude);
    __is->read(pd2);
    __is->endReadSlice();
    ::Test::BaseException::__readImpl(__is);
}

namespace
{

const char* __Test__PSUnknownException_name = "Test::PSUnknownException";

struct __F__Test__PSUnknownException : public ::IceInternal::UserExceptionFactory
{
    virtual void
    createAndThrow(const ::std::string&)
    {
        throw ::Test::PSUnknownException();
    }
};

class __F__Test__PSUnknownException__Init
{
public:

    __F__Test__PSUnknownException__Init()
    {
        ::IceInternal::factoryTable->addExceptionFactory("::Test::PSUnknownException", new __F__Test__PSUnknownException);
    }

    ~__F__Test__PSUnknownException__Init()
    {
        ::IceInternal::factoryTable->removeExceptionFactory("::Test::PSUnknownException");
    }
};

const __F__Test__PSUnknownException__Init __F__Test__PSUnknownException__i;

}

Test::PSUnknownException::PSUnknownException(const ::Test::PSUnknown2Ptr& __ice_p) :
    ::Test::PreservedException(),
    p(__ice_p)
{
}

Test::PSUnknownException::~PSUnknownException() throw()
{
}

::std::string
Test::PSUnknownException::ice_name() const
{
    return __Test__PSUnknownException_name;
}

Test::PSUnknownException*
Test::PSUnknownException::ice_clone() const
{
    return new PSUnknownException(*this);
}

void
Test::PSUnknownException::ice_throw() const
{
    throw *this;
}

bool
Test::PSUnknownException::__usesClasses() const
{
    return true;
}

void
Test::PSUnknownException::__writeImpl(::IceInternal::BasicStream* __os) const
{
    __os->startWriteSlice("::Test::PSUnknownException", -1, false);
    __os->write(p);
    __os->endWriteSlice();
    ::Test::PreservedException::__writeImpl(__os);
}

void
Test::PSUnknownException::__readImpl(::IceInternal::BasicStream* __is)
{
    __is->startReadSlice();
    __is->read(p);
    __is->endReadSlice();
    ::Test::PreservedException::__readImpl(__is);
}

namespace Ice
{
}
::IceProxy::Ice::Object* ::IceProxy::Test::upCast(::IceProxy::Test::SBSUnknownDerived* p) { return p; }

void
::IceProxy::Test::__read(::IceInternal::BasicStream* __is, ::IceInternal::ProxyHandle< ::IceProxy::Test::SBSUnknownDerived>& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::Test::SBSUnknownDerived;
        v->__copyFrom(proxy);
    }
}

const ::std::string&
IceProxy::Test::SBSUnknownDerived::ice_staticId()
{
    return ::Test::SBSUnknownDerived::ice_staticId();
}

::IceInternal::Handle< ::IceDelegateM::Ice::Object>
IceProxy::Test::SBSUnknownDerived::__createDelegateM()
{
    return ::IceInternal::Handle< ::IceDelegateM::Ice::Object>(new ::IceDelegateM::Test::SBSUnknownDerived);
}

::IceInternal::Handle< ::IceDelegateD::Ice::Object>
IceProxy::Test::SBSUnknownDerived::__createDelegateD()
{
    return ::IceInternal::Handle< ::IceDelegateD::Ice::Object>(new ::IceDelegateD::Test::SBSUnknownDerived);
}

::IceProxy::Ice::Object*
IceProxy::Test::SBSUnknownDerived::__newInstance() const
{
    return new SBSUnknownDerived;
}
::IceProxy::Ice::Object* ::IceProxy::Test::upCast(::IceProxy::Test::SUnknown* p) { return p; }

void
::IceProxy::Test::__read(::IceInternal::BasicStream* __is, ::IceInternal::ProxyHandle< ::IceProxy::Test::SUnknown>& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::Test::SUnknown;
        v->__copyFrom(proxy);
    }
}

const ::std::string&
IceProxy::Test::SUnknown::ice_staticId()
{
    return ::Test::SUnknown::ice_staticId();
}

::IceInternal::Handle< ::IceDelegateM::Ice::Object>
IceProxy::Test::SUnknown::__createDelegateM()
{
    return ::IceInternal::Handle< ::IceDelegateM::Ice::Object>(new ::IceDelegateM::Test::SUnknown);
}

::IceInternal::Handle< ::IceDelegateD::Ice::Object>
IceProxy::Test::SUnknown::__createDelegateD()
{
    return ::IceInternal::Handle< ::IceDelegateD::Ice::Object>(new ::IceDelegateD::Test::SUnknown);
}

::IceProxy::Ice::Object*
IceProxy::Test::SUnknown::__newInstance() const
{
    return new SUnknown;
}
::IceProxy::Ice::Object* ::IceProxy::Test::upCast(::IceProxy::Test::D2* p) { return p; }

void
::IceProxy::Test::__read(::IceInternal::BasicStream* __is, ::IceInternal::ProxyHandle< ::IceProxy::Test::D2>& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::Test::D2;
        v->__copyFrom(proxy);
    }
}

const ::std::string&
IceProxy::Test::D2::ice_staticId()
{
    return ::Test::D2::ice_staticId();
}

::IceInternal::Handle< ::IceDelegateM::Ice::Object>
IceProxy::Test::D2::__createDelegateM()
{
    return ::IceInternal::Handle< ::IceDelegateM::Ice::Object>(new ::IceDelegateM::Test::D2);
}

::IceInternal::Handle< ::IceDelegateD::Ice::Object>
IceProxy::Test::D2::__createDelegateD()
{
    return ::IceInternal::Handle< ::IceDelegateD::Ice::Object>(new ::IceDelegateD::Test::D2);
}

::IceProxy::Ice::Object*
IceProxy::Test::D2::__newInstance() const
{
    return new D2;
}
::IceProxy::Ice::Object* ::IceProxy::Test::upCast(::IceProxy::Test::D4* p) { return p; }

void
::IceProxy::Test::__read(::IceInternal::BasicStream* __is, ::IceInternal::ProxyHandle< ::IceProxy::Test::D4>& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::Test::D4;
        v->__copyFrom(proxy);
    }
}

const ::std::string&
IceProxy::Test::D4::ice_staticId()
{
    return ::Test::D4::ice_staticId();
}

::IceInternal::Handle< ::IceDelegateM::Ice::Object>
IceProxy::Test::D4::__createDelegateM()
{
    return ::IceInternal::Handle< ::IceDelegateM::Ice::Object>(new ::IceDelegateM::Test::D4);
}

::IceInternal::Handle< ::IceDelegateD::Ice::Object>
IceProxy::Test::D4::__createDelegateD()
{
    return ::IceInternal::Handle< ::IceDelegateD::Ice::Object>(new ::IceDelegateD::Test::D4);
}

::IceProxy::Ice::Object*
IceProxy::Test::D4::__newInstance() const
{
    return new D4;
}
::IceProxy::Ice::Object* ::IceProxy::Test::upCast(::IceProxy::Test::MyClass* p) { return p; }

void
::IceProxy::Test::__read(::IceInternal::BasicStream* __is, ::IceInternal::ProxyHandle< ::IceProxy::Test::MyClass>& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::Test::MyClass;
        v->__copyFrom(proxy);
    }
}

const ::std::string&
IceProxy::Test::MyClass::ice_staticId()
{
    return ::Test::MyClass::ice_staticId();
}

::IceInternal::Handle< ::IceDelegateM::Ice::Object>
IceProxy::Test::MyClass::__createDelegateM()
{
    return ::IceInternal::Handle< ::IceDelegateM::Ice::Object>(new ::IceDelegateM::Test::MyClass);
}

::IceInternal::Handle< ::IceDelegateD::Ice::Object>
IceProxy::Test::MyClass::__createDelegateD()
{
    return ::IceInternal::Handle< ::IceDelegateD::Ice::Object>(new ::IceDelegateD::Test::MyClass);
}

::IceProxy::Ice::Object*
IceProxy::Test::MyClass::__newInstance() const
{
    return new MyClass;
}
::IceProxy::Ice::Object* ::IceProxy::Test::upCast(::IceProxy::Test::PSUnknown* p) { return p; }

void
::IceProxy::Test::__read(::IceInternal::BasicStream* __is, ::IceInternal::ProxyHandle< ::IceProxy::Test::PSUnknown>& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::Test::PSUnknown;
        v->__copyFrom(proxy);
    }
}

const ::std::string&
IceProxy::Test::PSUnknown::ice_staticId()
{
    return ::Test::PSUnknown::ice_staticId();
}

::IceInternal::Handle< ::IceDelegateM::Ice::Object>
IceProxy::Test::PSUnknown::__createDelegateM()
{
    return ::IceInternal::Handle< ::IceDelegateM::Ice::Object>(new ::IceDelegateM::Test::PSUnknown);
}

::IceInternal::Handle< ::IceDelegateD::Ice::Object>
IceProxy::Test::PSUnknown::__createDelegateD()
{
    return ::IceInternal::Handle< ::IceDelegateD::Ice::Object>(new ::IceDelegateD::Test::PSUnknown);
}

::IceProxy::Ice::Object*
IceProxy::Test::PSUnknown::__newInstance() const
{
    return new PSUnknown;
}
::IceProxy::Ice::Object* ::IceProxy::Test::upCast(::IceProxy::Test::PSUnknown2* p) { return p; }

void
::IceProxy::Test::__read(::IceInternal::BasicStream* __is, ::IceInternal::ProxyHandle< ::IceProxy::Test::PSUnknown2>& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::Test::PSUnknown2;
        v->__copyFrom(proxy);
    }
}

const ::std::string&
IceProxy::Test::PSUnknown2::ice_staticId()
{
    return ::Test::PSUnknown2::ice_staticId();
}

::IceInternal::Handle< ::IceDelegateM::Ice::Object>
IceProxy::Test::PSUnknown2::__createDelegateM()
{
    return ::IceInternal::Handle< ::IceDelegateM::Ice::Object>(new ::IceDelegateM::Test::PSUnknown2);
}

::IceInternal::Handle< ::IceDelegateD::Ice::Object>
IceProxy::Test::PSUnknown2::__createDelegateD()
{
    return ::IceInternal::Handle< ::IceDelegateD::Ice::Object>(new ::IceDelegateD::Test::PSUnknown2);
}

::IceProxy::Ice::Object*
IceProxy::Test::PSUnknown2::__newInstance() const
{
    return new PSUnknown2;
}

::Ice::Object* Test::upCast(::Test::SBSUnknownDerived* p) { return p; }
::Ice::ObjectPtr
Test::SBSUnknownDerived::ice_clone() const
{
    ::Ice::Object* __p = new SBSUnknownDerived(*this);
    return __p;
}

namespace
{
const ::std::string __Test__SBSUnknownDerived_ids[3] =
{
    "::Ice::Object",
    "::Test::SBSUnknownDerived",
    "::Test::SBase"
};

}

bool
Test::SBSUnknownDerived::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__Test__SBSUnknownDerived_ids, __Test__SBSUnknownDerived_ids + 3, _s);
}

::std::vector< ::std::string>
Test::SBSUnknownDerived::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__Test__SBSUnknownDerived_ids[0], &__Test__SBSUnknownDerived_ids[3]);
}

const ::std::string&
Test::SBSUnknownDerived::ice_id(const ::Ice::Current&) const
{
    return __Test__SBSUnknownDerived_ids[1];
}

const ::std::string&
Test::SBSUnknownDerived::ice_staticId()
{
    return __Test__SBSUnknownDerived_ids[1];
}

void
Test::SBSUnknownDerived::__writeImpl(::IceInternal::BasicStream* __os) const
{
    __os->startWriteSlice(ice_staticId(), -1, false);
    __os->write(sbsud);
    __os->endWriteSlice();
    ::Test::SBase::__writeImpl(__os);
}

void
Test::SBSUnknownDerived::__readImpl(::IceInternal::BasicStream* __is)
{
    __is->startReadSlice();
    __is->read(sbsud);
    __is->endReadSlice();
    ::Test::SBase::__readImpl(__is);
}

namespace
{

class __F__Test__SBSUnknownDerived : public ::Ice::ObjectFactory
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
        assert(type == ::Test::SBSUnknownDerived::ice_staticId());
        return new ::Test::SBSUnknownDerived;
    }

    virtual void
    destroy()
    {
    }
};
const ::Ice::ObjectFactoryPtr __F__Test__SBSUnknownDerived_Ptr = new __F__Test__SBSUnknownDerived;

class __F__Test__SBSUnknownDerived__Init
{
public:

    __F__Test__SBSUnknownDerived__Init()
    {
        ::IceInternal::factoryTable->addObjectFactory(::Test::SBSUnknownDerived::ice_staticId(), __F__Test__SBSUnknownDerived_Ptr);
    }

    ~__F__Test__SBSUnknownDerived__Init()
    {
        ::IceInternal::factoryTable->removeObjectFactory(::Test::SBSUnknownDerived::ice_staticId());
    }
};

const __F__Test__SBSUnknownDerived__Init __F__Test__SBSUnknownDerived__i;

}

const ::Ice::ObjectFactoryPtr&
Test::SBSUnknownDerived::ice_factory()
{
    return __F__Test__SBSUnknownDerived_Ptr;
}

void 
Test::__patch(SBSUnknownDerivedPtr& handle, const ::Ice::ObjectPtr& v)
{
    handle = ::Test::SBSUnknownDerivedPtr::dynamicCast(v);
    if(v && !handle)
    {
        IceInternal::Ex::throwUOE(::Test::SBSUnknownDerived::ice_staticId(), v);
    }
}

::Ice::Object* Test::upCast(::Test::SUnknown* p) { return p; }
::Ice::ObjectPtr
Test::SUnknown::ice_clone() const
{
    ::Ice::Object* __p = new SUnknown(*this);
    return __p;
}

namespace
{
const ::std::string __Test__SUnknown_ids[2] =
{
    "::Ice::Object",
    "::Test::SUnknown"
};

}

bool
Test::SUnknown::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__Test__SUnknown_ids, __Test__SUnknown_ids + 2, _s);
}

::std::vector< ::std::string>
Test::SUnknown::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__Test__SUnknown_ids[0], &__Test__SUnknown_ids[2]);
}

const ::std::string&
Test::SUnknown::ice_id(const ::Ice::Current&) const
{
    return __Test__SUnknown_ids[1];
}

const ::std::string&
Test::SUnknown::ice_staticId()
{
    return __Test__SUnknown_ids[1];
}

void
Test::SUnknown::__writeImpl(::IceInternal::BasicStream* __os) const
{
    __os->startWriteSlice(ice_staticId(), -1, true);
    __os->write(su);
    __os->endWriteSlice();
}

void
Test::SUnknown::__readImpl(::IceInternal::BasicStream* __is)
{
    __is->startReadSlice();
    __is->read(su);
    __is->endReadSlice();
}

namespace
{

class __F__Test__SUnknown : public ::Ice::ObjectFactory
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
        assert(type == ::Test::SUnknown::ice_staticId());
        return new ::Test::SUnknown;
    }

    virtual void
    destroy()
    {
    }
};
const ::Ice::ObjectFactoryPtr __F__Test__SUnknown_Ptr = new __F__Test__SUnknown;

class __F__Test__SUnknown__Init
{
public:

    __F__Test__SUnknown__Init()
    {
        ::IceInternal::factoryTable->addObjectFactory(::Test::SUnknown::ice_staticId(), __F__Test__SUnknown_Ptr);
    }

    ~__F__Test__SUnknown__Init()
    {
        ::IceInternal::factoryTable->removeObjectFactory(::Test::SUnknown::ice_staticId());
    }
};

const __F__Test__SUnknown__Init __F__Test__SUnknown__i;

}

const ::Ice::ObjectFactoryPtr&
Test::SUnknown::ice_factory()
{
    return __F__Test__SUnknown_Ptr;
}

void 
Test::__patch(SUnknownPtr& handle, const ::Ice::ObjectPtr& v)
{
    handle = ::Test::SUnknownPtr::dynamicCast(v);
    if(v && !handle)
    {
        IceInternal::Ex::throwUOE(::Test::SUnknown::ice_staticId(), v);
    }
}

::Ice::Object* Test::upCast(::Test::D2* p) { return p; }
::Ice::ObjectPtr
Test::D2::ice_clone() const
{
    ::Ice::Object* __p = new D2(*this);
    return __p;
}

namespace
{
const ::std::string __Test__D2_ids[3] =
{
    "::Ice::Object",
    "::Test::B",
    "::Test::D2"
};

}

bool
Test::D2::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__Test__D2_ids, __Test__D2_ids + 3, _s);
}

::std::vector< ::std::string>
Test::D2::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__Test__D2_ids[0], &__Test__D2_ids[3]);
}

const ::std::string&
Test::D2::ice_id(const ::Ice::Current&) const
{
    return __Test__D2_ids[2];
}

const ::std::string&
Test::D2::ice_staticId()
{
    return __Test__D2_ids[2];
}

void
Test::D2::__gcReachable(::IceInternal::GCCountMap& _c) const
{
    ::Test::B::__gcReachable(_c);
    if(pd2)
    {
        ::Test::upCast(pd2.get())->__addObject(_c);
    }
}

void
Test::D2::__gcClear()
{
    ::Test::B::__gcClear();
    if(pd2)
    {
        if(::Test::upCast(pd2.get())->__usesGC())
        {
            ::Test::upCast(pd2.get())->__decRefUnsafe();
            pd2.__clearHandleUnsafe();
        }
        else
        {
            pd2 = 0;
        }
    }
}

void
Test::D2::__writeImpl(::IceInternal::BasicStream* __os) const
{
    __os->startWriteSlice(ice_staticId(), -1, false);
    __os->write(sd2);
    __os->write(pd2);
    __os->endWriteSlice();
    ::Test::B::__writeImpl(__os);
}

void
Test::D2::__readImpl(::IceInternal::BasicStream* __is)
{
    __is->startReadSlice();
    __is->read(sd2);
    __is->read(pd2);
    __is->endReadSlice();
    ::Test::B::__readImpl(__is);
}

namespace
{

class __F__Test__D2 : public ::Ice::ObjectFactory
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
        assert(type == ::Test::D2::ice_staticId());
        return new ::Test::D2;
    }

    virtual void
    destroy()
    {
    }
};
const ::Ice::ObjectFactoryPtr __F__Test__D2_Ptr = new __F__Test__D2;

class __F__Test__D2__Init
{
public:

    __F__Test__D2__Init()
    {
        ::IceInternal::factoryTable->addObjectFactory(::Test::D2::ice_staticId(), __F__Test__D2_Ptr);
    }

    ~__F__Test__D2__Init()
    {
        ::IceInternal::factoryTable->removeObjectFactory(::Test::D2::ice_staticId());
    }
};

const __F__Test__D2__Init __F__Test__D2__i;

}

const ::Ice::ObjectFactoryPtr&
Test::D2::ice_factory()
{
    return __F__Test__D2_Ptr;
}

void 
Test::__patch(D2Ptr& handle, const ::Ice::ObjectPtr& v)
{
    handle = ::Test::D2Ptr::dynamicCast(v);
    if(v && !handle)
    {
        IceInternal::Ex::throwUOE(::Test::D2::ice_staticId(), v);
    }
}

::Ice::Object* Test::upCast(::Test::D4* p) { return p; }
::Ice::ObjectPtr
Test::D4::ice_clone() const
{
    ::Ice::Object* __p = new D4(*this);
    return __p;
}

namespace
{
const ::std::string __Test__D4_ids[3] =
{
    "::Ice::Object",
    "::Test::B",
    "::Test::D4"
};

}

bool
Test::D4::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__Test__D4_ids, __Test__D4_ids + 3, _s);
}

::std::vector< ::std::string>
Test::D4::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__Test__D4_ids[0], &__Test__D4_ids[3]);
}

const ::std::string&
Test::D4::ice_id(const ::Ice::Current&) const
{
    return __Test__D4_ids[2];
}

const ::std::string&
Test::D4::ice_staticId()
{
    return __Test__D4_ids[2];
}

void
Test::D4::__gcReachable(::IceInternal::GCCountMap& _c) const
{
    ::Test::B::__gcReachable(_c);
    if(p1)
    {
        ::Test::upCast(p1.get())->__addObject(_c);
    }
    if(p2)
    {
        ::Test::upCast(p2.get())->__addObject(_c);
    }
}

void
Test::D4::__gcClear()
{
    ::Test::B::__gcClear();
    if(p1)
    {
        if(::Test::upCast(p1.get())->__usesGC())
        {
            ::Test::upCast(p1.get())->__decRefUnsafe();
            p1.__clearHandleUnsafe();
        }
        else
        {
            p1 = 0;
        }
    }
    if(p2)
    {
        if(::Test::upCast(p2.get())->__usesGC())
        {
            ::Test::upCast(p2.get())->__decRefUnsafe();
            p2.__clearHandleUnsafe();
        }
        else
        {
            p2 = 0;
        }
    }
}

void
Test::D4::__writeImpl(::IceInternal::BasicStream* __os) const
{
    __os->startWriteSlice(ice_staticId(), -1, false);
    __os->write(p1);
    __os->write(p2);
    __os->endWriteSlice();
    ::Test::B::__writeImpl(__os);
}

void
Test::D4::__readImpl(::IceInternal::BasicStream* __is)
{
    __is->startReadSlice();
    __is->read(p1);
    __is->read(p2);
    __is->endReadSlice();
    ::Test::B::__readImpl(__is);
}

namespace
{

class __F__Test__D4 : public ::Ice::ObjectFactory
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
        assert(type == ::Test::D4::ice_staticId());
        return new ::Test::D4;
    }

    virtual void
    destroy()
    {
    }
};
const ::Ice::ObjectFactoryPtr __F__Test__D4_Ptr = new __F__Test__D4;

class __F__Test__D4__Init
{
public:

    __F__Test__D4__Init()
    {
        ::IceInternal::factoryTable->addObjectFactory(::Test::D4::ice_staticId(), __F__Test__D4_Ptr);
    }

    ~__F__Test__D4__Init()
    {
        ::IceInternal::factoryTable->removeObjectFactory(::Test::D4::ice_staticId());
    }
};

const __F__Test__D4__Init __F__Test__D4__i;

}

const ::Ice::ObjectFactoryPtr&
Test::D4::ice_factory()
{
    return __F__Test__D4_Ptr;
}

void 
Test::__patch(D4Ptr& handle, const ::Ice::ObjectPtr& v)
{
    handle = ::Test::D4Ptr::dynamicCast(v);
    if(v && !handle)
    {
        IceInternal::Ex::throwUOE(::Test::D4::ice_staticId(), v);
    }
}

::Ice::Object* Test::upCast(::Test::MyClass* p) { return p; }
::Ice::ObjectPtr
Test::MyClass::ice_clone() const
{
    ::Ice::Object* __p = new MyClass(*this);
    return __p;
}

namespace
{
const ::std::string __Test__MyClass_ids[2] =
{
    "::Ice::Object",
    "::Test::MyClass"
};

}

bool
Test::MyClass::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__Test__MyClass_ids, __Test__MyClass_ids + 2, _s);
}

::std::vector< ::std::string>
Test::MyClass::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__Test__MyClass_ids[0], &__Test__MyClass_ids[2]);
}

const ::std::string&
Test::MyClass::ice_id(const ::Ice::Current&) const
{
    return __Test__MyClass_ids[1];
}

const ::std::string&
Test::MyClass::ice_staticId()
{
    return __Test__MyClass_ids[1];
}

void
Test::MyClass::__writeImpl(::IceInternal::BasicStream* __os) const
{
    __os->startWriteSlice(ice_staticId(), -1, true);
    __os->write(i);
    __os->endWriteSlice();
}

void
Test::MyClass::__readImpl(::IceInternal::BasicStream* __is)
{
    __is->startReadSlice();
    __is->read(i);
    __is->endReadSlice();
}

namespace
{

class __F__Test__MyClass : public ::Ice::ObjectFactory
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
        assert(type == ::Test::MyClass::ice_staticId());
        return new ::Test::MyClass;
    }

    virtual void
    destroy()
    {
    }
};
const ::Ice::ObjectFactoryPtr __F__Test__MyClass_Ptr = new __F__Test__MyClass;

class __F__Test__MyClass__Init
{
public:

    __F__Test__MyClass__Init()
    {
        ::IceInternal::factoryTable->addObjectFactory(::Test::MyClass::ice_staticId(), __F__Test__MyClass_Ptr);
    }

    ~__F__Test__MyClass__Init()
    {
        ::IceInternal::factoryTable->removeObjectFactory(::Test::MyClass::ice_staticId());
    }
};

const __F__Test__MyClass__Init __F__Test__MyClass__i;

}

const ::Ice::ObjectFactoryPtr&
Test::MyClass::ice_factory()
{
    return __F__Test__MyClass_Ptr;
}

void 
Test::__patch(MyClassPtr& handle, const ::Ice::ObjectPtr& v)
{
    handle = ::Test::MyClassPtr::dynamicCast(v);
    if(v && !handle)
    {
        IceInternal::Ex::throwUOE(::Test::MyClass::ice_staticId(), v);
    }
}

::Ice::Object* Test::upCast(::Test::PSUnknown* p) { return p; }
::Ice::ObjectPtr
Test::PSUnknown::ice_clone() const
{
    ::Ice::Object* __p = new PSUnknown(*this);
    return __p;
}

namespace
{
const ::std::string __Test__PSUnknown_ids[4] =
{
    "::Ice::Object",
    "::Test::PBase",
    "::Test::PSUnknown",
    "::Test::Preserved"
};

}

bool
Test::PSUnknown::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__Test__PSUnknown_ids, __Test__PSUnknown_ids + 4, _s);
}

::std::vector< ::std::string>
Test::PSUnknown::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__Test__PSUnknown_ids[0], &__Test__PSUnknown_ids[4]);
}

const ::std::string&
Test::PSUnknown::ice_id(const ::Ice::Current&) const
{
    return __Test__PSUnknown_ids[2];
}

const ::std::string&
Test::PSUnknown::ice_staticId()
{
    return __Test__PSUnknown_ids[2];
}

void
Test::PSUnknown::__gcReachable(::IceInternal::GCCountMap& _c) const
{
    ::Test::Preserved::__gcReachable(_c);
    if(graph)
    {
        ::Test::upCast(graph.get())->__addObject(_c);
    }
    if(cl)
    {
        ::Test::upCast(cl.get())->__addObject(_c);
    }
}

void
Test::PSUnknown::__gcClear()
{
    ::Test::Preserved::__gcClear();
    if(graph)
    {
        if(::Test::upCast(graph.get())->__usesGC())
        {
            ::Test::upCast(graph.get())->__decRefUnsafe();
            graph.__clearHandleUnsafe();
        }
        else
        {
            graph = 0;
        }
    }
    if(cl)
    {
        if(::Test::upCast(cl.get())->__usesGC())
        {
            ::Test::upCast(cl.get())->__decRefUnsafe();
            cl.__clearHandleUnsafe();
        }
        else
        {
            cl = 0;
        }
    }
}

void
Test::PSUnknown::__writeImpl(::IceInternal::BasicStream* __os) const
{
    __os->startWriteSlice(ice_staticId(), -1, false);
    __os->write(psu);
    __os->write(graph);
    __os->write(cl);
    __os->endWriteSlice();
    ::Test::Preserved::__writeImpl(__os);
}

void
Test::PSUnknown::__readImpl(::IceInternal::BasicStream* __is)
{
    __is->startReadSlice();
    __is->read(psu);
    __is->read(graph);
    __is->read(cl);
    __is->endReadSlice();
    ::Test::Preserved::__readImpl(__is);
}

namespace
{

class __F__Test__PSUnknown : public ::Ice::ObjectFactory
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
        assert(type == ::Test::PSUnknown::ice_staticId());
        return new ::Test::PSUnknown;
    }

    virtual void
    destroy()
    {
    }
};
const ::Ice::ObjectFactoryPtr __F__Test__PSUnknown_Ptr = new __F__Test__PSUnknown;

class __F__Test__PSUnknown__Init
{
public:

    __F__Test__PSUnknown__Init()
    {
        ::IceInternal::factoryTable->addObjectFactory(::Test::PSUnknown::ice_staticId(), __F__Test__PSUnknown_Ptr);
    }

    ~__F__Test__PSUnknown__Init()
    {
        ::IceInternal::factoryTable->removeObjectFactory(::Test::PSUnknown::ice_staticId());
    }
};

const __F__Test__PSUnknown__Init __F__Test__PSUnknown__i;

}

const ::Ice::ObjectFactoryPtr&
Test::PSUnknown::ice_factory()
{
    return __F__Test__PSUnknown_Ptr;
}

void 
Test::__patch(PSUnknownPtr& handle, const ::Ice::ObjectPtr& v)
{
    handle = ::Test::PSUnknownPtr::dynamicCast(v);
    if(v && !handle)
    {
        IceInternal::Ex::throwUOE(::Test::PSUnknown::ice_staticId(), v);
    }
}

::Ice::Object* Test::upCast(::Test::PSUnknown2* p) { return p; }
::Ice::ObjectPtr
Test::PSUnknown2::ice_clone() const
{
    ::Ice::Object* __p = new PSUnknown2(*this);
    return __p;
}

namespace
{
const ::std::string __Test__PSUnknown2_ids[4] =
{
    "::Ice::Object",
    "::Test::PBase",
    "::Test::PSUnknown2",
    "::Test::Preserved"
};

}

bool
Test::PSUnknown2::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__Test__PSUnknown2_ids, __Test__PSUnknown2_ids + 4, _s);
}

::std::vector< ::std::string>
Test::PSUnknown2::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__Test__PSUnknown2_ids[0], &__Test__PSUnknown2_ids[4]);
}

const ::std::string&
Test::PSUnknown2::ice_id(const ::Ice::Current&) const
{
    return __Test__PSUnknown2_ids[2];
}

const ::std::string&
Test::PSUnknown2::ice_staticId()
{
    return __Test__PSUnknown2_ids[2];
}

void
Test::PSUnknown2::__gcReachable(::IceInternal::GCCountMap& _c) const
{
    ::Test::Preserved::__gcReachable(_c);
    if(pb)
    {
        ::Test::upCast(pb.get())->__addObject(_c);
    }
}

void
Test::PSUnknown2::__gcClear()
{
    ::Test::Preserved::__gcClear();
    if(pb)
    {
        if(::Test::upCast(pb.get())->__usesGC())
        {
            ::Test::upCast(pb.get())->__decRefUnsafe();
            pb.__clearHandleUnsafe();
        }
        else
        {
            pb = 0;
        }
    }
}

void
Test::PSUnknown2::__writeImpl(::IceInternal::BasicStream* __os) const
{
    __os->startWriteSlice(ice_staticId(), -1, false);
    __os->write(pb);
    __os->endWriteSlice();
    ::Test::Preserved::__writeImpl(__os);
}

void
Test::PSUnknown2::__readImpl(::IceInternal::BasicStream* __is)
{
    __is->startReadSlice();
    __is->read(pb);
    __is->endReadSlice();
    ::Test::Preserved::__readImpl(__is);
}

namespace
{

class __F__Test__PSUnknown2 : public ::Ice::ObjectFactory
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
        assert(type == ::Test::PSUnknown2::ice_staticId());
        return new ::Test::PSUnknown2;
    }

    virtual void
    destroy()
    {
    }
};
const ::Ice::ObjectFactoryPtr __F__Test__PSUnknown2_Ptr = new __F__Test__PSUnknown2;

class __F__Test__PSUnknown2__Init
{
public:

    __F__Test__PSUnknown2__Init()
    {
        ::IceInternal::factoryTable->addObjectFactory(::Test::PSUnknown2::ice_staticId(), __F__Test__PSUnknown2_Ptr);
    }

    ~__F__Test__PSUnknown2__Init()
    {
        ::IceInternal::factoryTable->removeObjectFactory(::Test::PSUnknown2::ice_staticId());
    }
};

const __F__Test__PSUnknown2__Init __F__Test__PSUnknown2__i;

}

const ::Ice::ObjectFactoryPtr&
Test::PSUnknown2::ice_factory()
{
    return __F__Test__PSUnknown2_Ptr;
}

void 
Test::__patch(PSUnknown2Ptr& handle, const ::Ice::ObjectPtr& v)
{
    handle = ::Test::PSUnknown2Ptr::dynamicCast(v);
    if(v && !handle)
    {
        IceInternal::Ex::throwUOE(::Test::PSUnknown2::ice_staticId(), v);
    }
}
