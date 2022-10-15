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

#ifndef __ClientPrivate_h__
#define __ClientPrivate_h__

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
#include <Ice/SlicedDataF.h>
#include <Test.h>
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

namespace Test
{

class PreservedClass;
void __read(::IceInternal::BasicStream*, ::IceInternal::ProxyHandle< ::IceProxy::Test::PreservedClass>&);
::IceProxy::Ice::Object* upCast(::IceProxy::Test::PreservedClass*);

}

}

namespace Test
{

class PreservedClass;
bool operator==(const PreservedClass&, const PreservedClass&);
bool operator<(const PreservedClass&, const PreservedClass&);
::Ice::Object* upCast(::Test::PreservedClass*);
typedef ::IceInternal::Handle< ::Test::PreservedClass> PreservedClassPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::Test::PreservedClass> PreservedClassPrx;
void __patch(PreservedClassPtr&, const ::Ice::ObjectPtr&);

}

namespace Test
{

class Preserved1 : public ::Test::KnownPreservedDerived
{
public:

    Preserved1() {}
    Preserved1(const ::std::string&, const ::std::string&, const ::std::string&, const ::Test::BaseClassPtr&);
    virtual ~Preserved1() throw();

    virtual ::std::string ice_name() const;
    virtual Preserved1* ice_clone() const;
    virtual void ice_throw() const;

    virtual bool __usesClasses() const;

    ::Test::BaseClassPtr p1;

protected:
    virtual void __writeImpl(::IceInternal::BasicStream*) const;
    virtual void __readImpl(::IceInternal::BasicStream*);
    #ifdef __SUNPRO_CC
    using ::Test::KnownPreservedDerived::__writeImpl;
    using ::Test::KnownPreservedDerived::__readImpl;
    #endif
};

static Preserved1 __Preserved1_init;

class Preserved2 : public ::Test::Preserved1
{
public:

    Preserved2() {}
    Preserved2(const ::std::string&, const ::std::string&, const ::std::string&, const ::Test::BaseClassPtr&, const ::Test::BaseClassPtr&);
    virtual ~Preserved2() throw();

    virtual ::std::string ice_name() const;
    virtual Preserved2* ice_clone() const;
    virtual void ice_throw() const;

    ::Test::BaseClassPtr p2;

protected:
    virtual void __writeImpl(::IceInternal::BasicStream*) const;
    virtual void __readImpl(::IceInternal::BasicStream*);
    #ifdef __SUNPRO_CC
    using ::Test::Preserved1::__writeImpl;
    using ::Test::Preserved1::__readImpl;
    #endif
};

}

namespace Ice
{
template<>
struct StreamableTraits< ::Test::Preserved1>
{
    static const StreamHelperCategory helper = StreamHelperCategoryUserException;
};

template<>
struct StreamableTraits< ::Test::Preserved2>
{
    static const StreamHelperCategory helper = StreamHelperCategoryUserException;
};

}

namespace Test
{

}

namespace IceProxy
{

namespace Test
{

class PreservedClass : virtual public ::IceProxy::Test::BaseClass
{
public:
    
    ::IceInternal::ProxyHandle<PreservedClass> ice_context(const ::Ice::Context& __context) const
    {
        return dynamic_cast<PreservedClass*>(::IceProxy::Ice::Object::ice_context(__context).get());
    }
    
    ::IceInternal::ProxyHandle<PreservedClass> ice_adapterId(const ::std::string& __id) const
    {
        return dynamic_cast<PreservedClass*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    }
    
    ::IceInternal::ProxyHandle<PreservedClass> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
        return dynamic_cast<PreservedClass*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    }
    
    ::IceInternal::ProxyHandle<PreservedClass> ice_locatorCacheTimeout(int __timeout) const
    {
        return dynamic_cast<PreservedClass*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    }
    
    ::IceInternal::ProxyHandle<PreservedClass> ice_connectionCached(bool __cached) const
    {
        return dynamic_cast<PreservedClass*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    }
    
    ::IceInternal::ProxyHandle<PreservedClass> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
        return dynamic_cast<PreservedClass*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    }
    
    ::IceInternal::ProxyHandle<PreservedClass> ice_secure(bool __secure) const
    {
        return dynamic_cast<PreservedClass*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    }
    
    ::IceInternal::ProxyHandle<PreservedClass> ice_preferSecure(bool __preferSecure) const
    {
        return dynamic_cast<PreservedClass*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    }
    
    ::IceInternal::ProxyHandle<PreservedClass> ice_router(const ::Ice::RouterPrx& __router) const
    {
        return dynamic_cast<PreservedClass*>(::IceProxy::Ice::Object::ice_router(__router).get());
    }
    
    ::IceInternal::ProxyHandle<PreservedClass> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
        return dynamic_cast<PreservedClass*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    }
    
    ::IceInternal::ProxyHandle<PreservedClass> ice_collocationOptimized(bool __co) const
    {
        return dynamic_cast<PreservedClass*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    }
    
    ::IceInternal::ProxyHandle<PreservedClass> ice_twoway() const
    {
        return dynamic_cast<PreservedClass*>(::IceProxy::Ice::Object::ice_twoway().get());
    }
    
    ::IceInternal::ProxyHandle<PreservedClass> ice_oneway() const
    {
        return dynamic_cast<PreservedClass*>(::IceProxy::Ice::Object::ice_oneway().get());
    }
    
    ::IceInternal::ProxyHandle<PreservedClass> ice_batchOneway() const
    {
        return dynamic_cast<PreservedClass*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    }
    
    ::IceInternal::ProxyHandle<PreservedClass> ice_datagram() const
    {
        return dynamic_cast<PreservedClass*>(::IceProxy::Ice::Object::ice_datagram().get());
    }
    
    ::IceInternal::ProxyHandle<PreservedClass> ice_batchDatagram() const
    {
        return dynamic_cast<PreservedClass*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    }
    
    ::IceInternal::ProxyHandle<PreservedClass> ice_compress(bool __compress) const
    {
        return dynamic_cast<PreservedClass*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    }
    
    ::IceInternal::ProxyHandle<PreservedClass> ice_timeout(int __timeout) const
    {
        return dynamic_cast<PreservedClass*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    }
    
    ::IceInternal::ProxyHandle<PreservedClass> ice_connectionId(const ::std::string& __id) const
    {
        return dynamic_cast<PreservedClass*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
    }
    
    ::IceInternal::ProxyHandle<PreservedClass> ice_encodingVersion(const ::Ice::EncodingVersion& __v) const
    {
        return dynamic_cast<PreservedClass*>(::IceProxy::Ice::Object::ice_encodingVersion(__v).get());
    }
    
    static const ::std::string& ice_staticId();

private: 

    virtual ::IceInternal::Handle< ::IceDelegateM::Ice::Object> __createDelegateM();
    virtual ::IceInternal::Handle< ::IceDelegateD::Ice::Object> __createDelegateD();
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

}

}

namespace IceDelegate
{

namespace Test
{

class PreservedClass : virtual public ::IceDelegate::Test::BaseClass
{
public:
};

}

}

namespace IceDelegateM
{

namespace Test
{

class PreservedClass : virtual public ::IceDelegate::Test::PreservedClass,
                       virtual public ::IceDelegateM::Test::BaseClass
{
public:
};

}

}

namespace IceDelegateD
{

namespace Test
{

class PreservedClass : virtual public ::IceDelegate::Test::PreservedClass,
                       virtual public ::IceDelegateD::Test::BaseClass
{
public:
};

}

}

namespace Test
{

class PreservedClass : public ::Test::BaseClass
{
public:

    typedef PreservedClassPrx ProxyType;
    typedef PreservedClassPtr PointerType;

    PreservedClass()
    {
    }

    PreservedClass(const ::std::string& __ice_bc, const ::std::string& __ice_pc) :
        ::Test::BaseClass(__ice_bc)
        ,
        pc(__ice_pc)
    {
    }

    virtual ::Ice::ObjectPtr ice_clone() const;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();


    static const ::Ice::ObjectFactoryPtr& ice_factory();

protected:
    virtual void __writeImpl(::IceInternal::BasicStream*) const;
    virtual void __readImpl(::IceInternal::BasicStream*);
    #ifdef __SUNPRO_CC
    using ::Test::BaseClass::__writeImpl;
    using ::Test::BaseClass::__readImpl;
    #endif

public:

    ::std::string pc;

protected:

    virtual ~PreservedClass() {}

    friend class PreservedClass__staticInit;
};

class PreservedClass__staticInit
{
public:

    ::Test::PreservedClass _init;
};

static PreservedClass__staticInit _PreservedClass_init;

inline bool operator==(const PreservedClass& l, const PreservedClass& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

inline bool operator<(const PreservedClass& l, const PreservedClass& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}

}

namespace Test
{

}

#endif