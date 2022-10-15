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

namespace
{

const char* __Test__Preserved1_name = "Test::Preserved1";

struct __F__Test__Preserved1 : public ::IceInternal::UserExceptionFactory
{
    virtual void
    createAndThrow(const ::std::string&)
    {
        throw ::Test::Preserved1();
    }
};

class __F__Test__Preserved1__Init
{
public:

    __F__Test__Preserved1__Init()
    {
        ::IceInternal::factoryTable->addExceptionFactory("::Test::Preserved1", new __F__Test__Preserved1);
    }

    ~__F__Test__Preserved1__Init()
    {
        ::IceInternal::factoryTable->removeExceptionFactory("::Test::Preserved1");
    }
};

const __F__Test__Preserved1__Init __F__Test__Preserved1__i;

}

Test::Preserved1::Preserved1(const ::std::string& __ice_b, const ::std::string& __ice_kp, const ::std::string& __ice_kpd, const ::Test::BaseClassPtr& __ice_p1) :
    ::Test::KnownPreservedDerived(__ice_b, __ice_kp, __ice_kpd),
    p1(__ice_p1)
{
}

Test::Preserved1::~Preserved1() throw()
{
}

::std::string
Test::Preserved1::ice_name() const
{
    return __Test__Preserved1_name;
}

Test::Preserved1*
Test::Preserved1::ice_clone() const
{
    return new Preserved1(*this);
}

void
Test::Preserved1::ice_throw() const
{
    throw *this;
}

bool
Test::Preserved1::__usesClasses() const
{
    return true;
}

void
Test::Preserved1::__writeImpl(::IceInternal::BasicStream* __os) const
{
    __os->startWriteSlice("::Test::Preserved1", -1, false);
    __os->write(p1);
    __os->endWriteSlice();
    ::Test::KnownPreservedDerived::__writeImpl(__os);
}

void
Test::Preserved1::__readImpl(::IceInternal::BasicStream* __is)
{
    __is->startReadSlice();
    __is->read(p1);
    __is->endReadSlice();
    ::Test::KnownPreservedDerived::__readImpl(__is);
}

namespace
{

const char* __Test__Preserved2_name = "Test::Preserved2";

struct __F__Test__Preserved2 : public ::IceInternal::UserExceptionFactory
{
    virtual void
    createAndThrow(const ::std::string&)
    {
        throw ::Test::Preserved2();
    }
};

class __F__Test__Preserved2__Init
{
public:

    __F__Test__Preserved2__Init()
    {
        ::IceInternal::factoryTable->addExceptionFactory("::Test::Preserved2", new __F__Test__Preserved2);
    }

    ~__F__Test__Preserved2__Init()
    {
        ::IceInternal::factoryTable->removeExceptionFactory("::Test::Preserved2");
    }
};

const __F__Test__Preserved2__Init __F__Test__Preserved2__i;

}

Test::Preserved2::Preserved2(const ::std::string& __ice_b, const ::std::string& __ice_kp, const ::std::string& __ice_kpd, const ::Test::BaseClassPtr& __ice_p1, const ::Test::BaseClassPtr& __ice_p2) :
    ::Test::Preserved1(__ice_b, __ice_kp, __ice_kpd, __ice_p1),
    p2(__ice_p2)
{
}

Test::Preserved2::~Preserved2() throw()
{
}

::std::string
Test::Preserved2::ice_name() const
{
    return __Test__Preserved2_name;
}

Test::Preserved2*
Test::Preserved2::ice_clone() const
{
    return new Preserved2(*this);
}

void
Test::Preserved2::ice_throw() const
{
    throw *this;
}

void
Test::Preserved2::__writeImpl(::IceInternal::BasicStream* __os) const
{
    __os->startWriteSlice("::Test::Preserved2", -1, false);
    __os->write(p2);
    __os->endWriteSlice();
    ::Test::Preserved1::__writeImpl(__os);
}

void
Test::Preserved2::__readImpl(::IceInternal::BasicStream* __is)
{
    __is->startReadSlice();
    __is->read(p2);
    __is->endReadSlice();
    ::Test::Preserved1::__readImpl(__is);
}

namespace Ice
{
}
::IceProxy::Ice::Object* ::IceProxy::Test::upCast(::IceProxy::Test::PreservedClass* p) { return p; }

void
::IceProxy::Test::__read(::IceInternal::BasicStream* __is, ::IceInternal::ProxyHandle< ::IceProxy::Test::PreservedClass>& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::Test::PreservedClass;
        v->__copyFrom(proxy);
    }
}

const ::std::string&
IceProxy::Test::PreservedClass::ice_staticId()
{
    return ::Test::PreservedClass::ice_staticId();
}

::IceInternal::Handle< ::IceDelegateM::Ice::Object>
IceProxy::Test::PreservedClass::__createDelegateM()
{
    return ::IceInternal::Handle< ::IceDelegateM::Ice::Object>(new ::IceDelegateM::Test::PreservedClass);
}

::IceInternal::Handle< ::IceDelegateD::Ice::Object>
IceProxy::Test::PreservedClass::__createDelegateD()
{
    return ::IceInternal::Handle< ::IceDelegateD::Ice::Object>(new ::IceDelegateD::Test::PreservedClass);
}

::IceProxy::Ice::Object*
IceProxy::Test::PreservedClass::__newInstance() const
{
    return new PreservedClass;
}

::Ice::Object* Test::upCast(::Test::PreservedClass* p) { return p; }
::Ice::ObjectPtr
Test::PreservedClass::ice_clone() const
{
    ::Ice::Object* __p = new PreservedClass(*this);
    return __p;
}

namespace
{
const ::std::string __Test__PreservedClass_ids[3] =
{
    "::Ice::Object",
    "::Test::BaseClass",
    "::Test::PreservedClass"
};

}

bool
Test::PreservedClass::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__Test__PreservedClass_ids, __Test__PreservedClass_ids + 3, _s);
}

::std::vector< ::std::string>
Test::PreservedClass::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__Test__PreservedClass_ids[0], &__Test__PreservedClass_ids[3]);
}

const ::std::string&
Test::PreservedClass::ice_id(const ::Ice::Current&) const
{
    return __Test__PreservedClass_ids[2];
}

const ::std::string&
Test::PreservedClass::ice_staticId()
{
    return __Test__PreservedClass_ids[2];
}

void
Test::PreservedClass::__writeImpl(::IceInternal::BasicStream* __os) const
{
    __os->startWriteSlice(ice_staticId(), -1, false);
    __os->write(pc);
    __os->endWriteSlice();
    ::Test::BaseClass::__writeImpl(__os);
}

void
Test::PreservedClass::__readImpl(::IceInternal::BasicStream* __is)
{
    __is->startReadSlice();
    __is->read(pc);
    __is->endReadSlice();
    ::Test::BaseClass::__readImpl(__is);
}

namespace
{

class __F__Test__PreservedClass : public ::Ice::ObjectFactory
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
        assert(type == ::Test::PreservedClass::ice_staticId());
        return new ::Test::PreservedClass;
    }

    virtual void
    destroy()
    {
    }
};
const ::Ice::ObjectFactoryPtr __F__Test__PreservedClass_Ptr = new __F__Test__PreservedClass;

class __F__Test__PreservedClass__Init
{
public:

    __F__Test__PreservedClass__Init()
    {
        ::IceInternal::factoryTable->addObjectFactory(::Test::PreservedClass::ice_staticId(), __F__Test__PreservedClass_Ptr);
    }

    ~__F__Test__PreservedClass__Init()
    {
        ::IceInternal::factoryTable->removeObjectFactory(::Test::PreservedClass::ice_staticId());
    }
};

const __F__Test__PreservedClass__Init __F__Test__PreservedClass__i;

}

const ::Ice::ObjectFactoryPtr&
Test::PreservedClass::ice_factory()
{
    return __F__Test__PreservedClass_Ptr;
}

void 
Test::__patch(PreservedClassPtr& handle, const ::Ice::ObjectPtr& v)
{
    handle = ::Test::PreservedClassPtr::dynamicCast(v);
    if(v && !handle)
    {
        IceInternal::Ex::throwUOE(::Test::PreservedClass::ice_staticId(), v);
    }
}
