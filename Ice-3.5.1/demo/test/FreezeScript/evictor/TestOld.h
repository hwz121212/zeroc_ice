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
// Generated from file `TestOld.ice'
//
// Warning: do not edit this file.
//
// </auto-generated>
//

#ifndef __TestOld_h__
#define __TestOld_h__

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

class MainObject;
void __read(::IceInternal::BasicStream*, ::IceInternal::ProxyHandle< ::IceProxy::Test::MainObject>&);
::IceProxy::Ice::Object* upCast(::IceProxy::Test::MainObject*);

class DerivedMainObject;
void __read(::IceInternal::BasicStream*, ::IceInternal::ProxyHandle< ::IceProxy::Test::DerivedMainObject>&);
::IceProxy::Ice::Object* upCast(::IceProxy::Test::DerivedMainObject*);

class FacetObject;
void __read(::IceInternal::BasicStream*, ::IceInternal::ProxyHandle< ::IceProxy::Test::FacetObject>&);
::IceProxy::Ice::Object* upCast(::IceProxy::Test::FacetObject*);

class DerivedFacetObject;
void __read(::IceInternal::BasicStream*, ::IceInternal::ProxyHandle< ::IceProxy::Test::DerivedFacetObject>&);
::IceProxy::Ice::Object* upCast(::IceProxy::Test::DerivedFacetObject*);

}

}

namespace Test
{

class MainObject;
bool operator==(const MainObject&, const MainObject&);
bool operator<(const MainObject&, const MainObject&);
::Ice::Object* upCast(::Test::MainObject*);
typedef ::IceInternal::Handle< ::Test::MainObject> MainObjectPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::Test::MainObject> MainObjectPrx;
void __patch(MainObjectPtr&, const ::Ice::ObjectPtr&);

class DerivedMainObject;
bool operator==(const DerivedMainObject&, const DerivedMainObject&);
bool operator<(const DerivedMainObject&, const DerivedMainObject&);
::Ice::Object* upCast(::Test::DerivedMainObject*);
typedef ::IceInternal::Handle< ::Test::DerivedMainObject> DerivedMainObjectPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::Test::DerivedMainObject> DerivedMainObjectPrx;
void __patch(DerivedMainObjectPtr&, const ::Ice::ObjectPtr&);

class FacetObject;
bool operator==(const FacetObject&, const FacetObject&);
bool operator<(const FacetObject&, const FacetObject&);
::Ice::Object* upCast(::Test::FacetObject*);
typedef ::IceInternal::Handle< ::Test::FacetObject> FacetObjectPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::Test::FacetObject> FacetObjectPrx;
void __patch(FacetObjectPtr&, const ::Ice::ObjectPtr&);

class DerivedFacetObject;
bool operator==(const DerivedFacetObject&, const DerivedFacetObject&);
bool operator<(const DerivedFacetObject&, const DerivedFacetObject&);
::Ice::Object* upCast(::Test::DerivedFacetObject*);
typedef ::IceInternal::Handle< ::Test::DerivedFacetObject> DerivedFacetObjectPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::Test::DerivedFacetObject> DerivedFacetObjectPrx;
void __patch(DerivedFacetObjectPtr&, const ::Ice::ObjectPtr&);

}

namespace Test
{

enum E
{
    E1,
    E2,
    E3
};

}

namespace Ice
{
template<>
struct StreamableTraits< ::Test::E>
{
    static const StreamHelperCategory helper = StreamHelperCategoryEnum;
    static const int minValue = 0;
    static const int maxValue = 2;
    static const int minWireSize = 1;
    static const bool fixedLength = false;
};

}

namespace Test
{

}

namespace IceProxy
{

namespace Test
{

class MainObject : virtual public ::IceProxy::Ice::Object
{
public:
    
    ::IceInternal::ProxyHandle<MainObject> ice_context(const ::Ice::Context& __context) const
    {
        return dynamic_cast<MainObject*>(::IceProxy::Ice::Object::ice_context(__context).get());
    }
    
    ::IceInternal::ProxyHandle<MainObject> ice_adapterId(const ::std::string& __id) const
    {
        return dynamic_cast<MainObject*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    }
    
    ::IceInternal::ProxyHandle<MainObject> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
        return dynamic_cast<MainObject*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    }
    
    ::IceInternal::ProxyHandle<MainObject> ice_locatorCacheTimeout(int __timeout) const
    {
        return dynamic_cast<MainObject*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    }
    
    ::IceInternal::ProxyHandle<MainObject> ice_connectionCached(bool __cached) const
    {
        return dynamic_cast<MainObject*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    }
    
    ::IceInternal::ProxyHandle<MainObject> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
        return dynamic_cast<MainObject*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    }
    
    ::IceInternal::ProxyHandle<MainObject> ice_secure(bool __secure) const
    {
        return dynamic_cast<MainObject*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    }
    
    ::IceInternal::ProxyHandle<MainObject> ice_preferSecure(bool __preferSecure) const
    {
        return dynamic_cast<MainObject*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    }
    
    ::IceInternal::ProxyHandle<MainObject> ice_router(const ::Ice::RouterPrx& __router) const
    {
        return dynamic_cast<MainObject*>(::IceProxy::Ice::Object::ice_router(__router).get());
    }
    
    ::IceInternal::ProxyHandle<MainObject> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
        return dynamic_cast<MainObject*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    }
    
    ::IceInternal::ProxyHandle<MainObject> ice_collocationOptimized(bool __co) const
    {
        return dynamic_cast<MainObject*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    }
    
    ::IceInternal::ProxyHandle<MainObject> ice_twoway() const
    {
        return dynamic_cast<MainObject*>(::IceProxy::Ice::Object::ice_twoway().get());
    }
    
    ::IceInternal::ProxyHandle<MainObject> ice_oneway() const
    {
        return dynamic_cast<MainObject*>(::IceProxy::Ice::Object::ice_oneway().get());
    }
    
    ::IceInternal::ProxyHandle<MainObject> ice_batchOneway() const
    {
        return dynamic_cast<MainObject*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    }
    
    ::IceInternal::ProxyHandle<MainObject> ice_datagram() const
    {
        return dynamic_cast<MainObject*>(::IceProxy::Ice::Object::ice_datagram().get());
    }
    
    ::IceInternal::ProxyHandle<MainObject> ice_batchDatagram() const
    {
        return dynamic_cast<MainObject*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    }
    
    ::IceInternal::ProxyHandle<MainObject> ice_compress(bool __compress) const
    {
        return dynamic_cast<MainObject*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    }
    
    ::IceInternal::ProxyHandle<MainObject> ice_timeout(int __timeout) const
    {
        return dynamic_cast<MainObject*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    }
    
    ::IceInternal::ProxyHandle<MainObject> ice_connectionId(const ::std::string& __id) const
    {
        return dynamic_cast<MainObject*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
    }
    
    ::IceInternal::ProxyHandle<MainObject> ice_encodingVersion(const ::Ice::EncodingVersion& __v) const
    {
        return dynamic_cast<MainObject*>(::IceProxy::Ice::Object::ice_encodingVersion(__v).get());
    }
    
    static const ::std::string& ice_staticId();

private: 

    virtual ::IceInternal::Handle< ::IceDelegateM::Ice::Object> __createDelegateM();
    virtual ::IceInternal::Handle< ::IceDelegateD::Ice::Object> __createDelegateD();
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

class DerivedMainObject : virtual public ::IceProxy::Test::MainObject
{
public:
    
    ::IceInternal::ProxyHandle<DerivedMainObject> ice_context(const ::Ice::Context& __context) const
    {
        return dynamic_cast<DerivedMainObject*>(::IceProxy::Ice::Object::ice_context(__context).get());
    }
    
    ::IceInternal::ProxyHandle<DerivedMainObject> ice_adapterId(const ::std::string& __id) const
    {
        return dynamic_cast<DerivedMainObject*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    }
    
    ::IceInternal::ProxyHandle<DerivedMainObject> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
        return dynamic_cast<DerivedMainObject*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    }
    
    ::IceInternal::ProxyHandle<DerivedMainObject> ice_locatorCacheTimeout(int __timeout) const
    {
        return dynamic_cast<DerivedMainObject*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    }
    
    ::IceInternal::ProxyHandle<DerivedMainObject> ice_connectionCached(bool __cached) const
    {
        return dynamic_cast<DerivedMainObject*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    }
    
    ::IceInternal::ProxyHandle<DerivedMainObject> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
        return dynamic_cast<DerivedMainObject*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    }
    
    ::IceInternal::ProxyHandle<DerivedMainObject> ice_secure(bool __secure) const
    {
        return dynamic_cast<DerivedMainObject*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    }
    
    ::IceInternal::ProxyHandle<DerivedMainObject> ice_preferSecure(bool __preferSecure) const
    {
        return dynamic_cast<DerivedMainObject*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    }
    
    ::IceInternal::ProxyHandle<DerivedMainObject> ice_router(const ::Ice::RouterPrx& __router) const
    {
        return dynamic_cast<DerivedMainObject*>(::IceProxy::Ice::Object::ice_router(__router).get());
    }
    
    ::IceInternal::ProxyHandle<DerivedMainObject> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
        return dynamic_cast<DerivedMainObject*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    }
    
    ::IceInternal::ProxyHandle<DerivedMainObject> ice_collocationOptimized(bool __co) const
    {
        return dynamic_cast<DerivedMainObject*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    }
    
    ::IceInternal::ProxyHandle<DerivedMainObject> ice_twoway() const
    {
        return dynamic_cast<DerivedMainObject*>(::IceProxy::Ice::Object::ice_twoway().get());
    }
    
    ::IceInternal::ProxyHandle<DerivedMainObject> ice_oneway() const
    {
        return dynamic_cast<DerivedMainObject*>(::IceProxy::Ice::Object::ice_oneway().get());
    }
    
    ::IceInternal::ProxyHandle<DerivedMainObject> ice_batchOneway() const
    {
        return dynamic_cast<DerivedMainObject*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    }
    
    ::IceInternal::ProxyHandle<DerivedMainObject> ice_datagram() const
    {
        return dynamic_cast<DerivedMainObject*>(::IceProxy::Ice::Object::ice_datagram().get());
    }
    
    ::IceInternal::ProxyHandle<DerivedMainObject> ice_batchDatagram() const
    {
        return dynamic_cast<DerivedMainObject*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    }
    
    ::IceInternal::ProxyHandle<DerivedMainObject> ice_compress(bool __compress) const
    {
        return dynamic_cast<DerivedMainObject*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    }
    
    ::IceInternal::ProxyHandle<DerivedMainObject> ice_timeout(int __timeout) const
    {
        return dynamic_cast<DerivedMainObject*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    }
    
    ::IceInternal::ProxyHandle<DerivedMainObject> ice_connectionId(const ::std::string& __id) const
    {
        return dynamic_cast<DerivedMainObject*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
    }
    
    ::IceInternal::ProxyHandle<DerivedMainObject> ice_encodingVersion(const ::Ice::EncodingVersion& __v) const
    {
        return dynamic_cast<DerivedMainObject*>(::IceProxy::Ice::Object::ice_encodingVersion(__v).get());
    }
    
    static const ::std::string& ice_staticId();

private: 

    virtual ::IceInternal::Handle< ::IceDelegateM::Ice::Object> __createDelegateM();
    virtual ::IceInternal::Handle< ::IceDelegateD::Ice::Object> __createDelegateD();
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

class FacetObject : virtual public ::IceProxy::Ice::Object
{
public:
    
    ::IceInternal::ProxyHandle<FacetObject> ice_context(const ::Ice::Context& __context) const
    {
        return dynamic_cast<FacetObject*>(::IceProxy::Ice::Object::ice_context(__context).get());
    }
    
    ::IceInternal::ProxyHandle<FacetObject> ice_adapterId(const ::std::string& __id) const
    {
        return dynamic_cast<FacetObject*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    }
    
    ::IceInternal::ProxyHandle<FacetObject> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
        return dynamic_cast<FacetObject*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    }
    
    ::IceInternal::ProxyHandle<FacetObject> ice_locatorCacheTimeout(int __timeout) const
    {
        return dynamic_cast<FacetObject*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    }
    
    ::IceInternal::ProxyHandle<FacetObject> ice_connectionCached(bool __cached) const
    {
        return dynamic_cast<FacetObject*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    }
    
    ::IceInternal::ProxyHandle<FacetObject> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
        return dynamic_cast<FacetObject*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    }
    
    ::IceInternal::ProxyHandle<FacetObject> ice_secure(bool __secure) const
    {
        return dynamic_cast<FacetObject*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    }
    
    ::IceInternal::ProxyHandle<FacetObject> ice_preferSecure(bool __preferSecure) const
    {
        return dynamic_cast<FacetObject*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    }
    
    ::IceInternal::ProxyHandle<FacetObject> ice_router(const ::Ice::RouterPrx& __router) const
    {
        return dynamic_cast<FacetObject*>(::IceProxy::Ice::Object::ice_router(__router).get());
    }
    
    ::IceInternal::ProxyHandle<FacetObject> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
        return dynamic_cast<FacetObject*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    }
    
    ::IceInternal::ProxyHandle<FacetObject> ice_collocationOptimized(bool __co) const
    {
        return dynamic_cast<FacetObject*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    }
    
    ::IceInternal::ProxyHandle<FacetObject> ice_twoway() const
    {
        return dynamic_cast<FacetObject*>(::IceProxy::Ice::Object::ice_twoway().get());
    }
    
    ::IceInternal::ProxyHandle<FacetObject> ice_oneway() const
    {
        return dynamic_cast<FacetObject*>(::IceProxy::Ice::Object::ice_oneway().get());
    }
    
    ::IceInternal::ProxyHandle<FacetObject> ice_batchOneway() const
    {
        return dynamic_cast<FacetObject*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    }
    
    ::IceInternal::ProxyHandle<FacetObject> ice_datagram() const
    {
        return dynamic_cast<FacetObject*>(::IceProxy::Ice::Object::ice_datagram().get());
    }
    
    ::IceInternal::ProxyHandle<FacetObject> ice_batchDatagram() const
    {
        return dynamic_cast<FacetObject*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    }
    
    ::IceInternal::ProxyHandle<FacetObject> ice_compress(bool __compress) const
    {
        return dynamic_cast<FacetObject*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    }
    
    ::IceInternal::ProxyHandle<FacetObject> ice_timeout(int __timeout) const
    {
        return dynamic_cast<FacetObject*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    }
    
    ::IceInternal::ProxyHandle<FacetObject> ice_connectionId(const ::std::string& __id) const
    {
        return dynamic_cast<FacetObject*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
    }
    
    ::IceInternal::ProxyHandle<FacetObject> ice_encodingVersion(const ::Ice::EncodingVersion& __v) const
    {
        return dynamic_cast<FacetObject*>(::IceProxy::Ice::Object::ice_encodingVersion(__v).get());
    }
    
    static const ::std::string& ice_staticId();

private: 

    virtual ::IceInternal::Handle< ::IceDelegateM::Ice::Object> __createDelegateM();
    virtual ::IceInternal::Handle< ::IceDelegateD::Ice::Object> __createDelegateD();
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

class DerivedFacetObject : virtual public ::IceProxy::Test::FacetObject
{
public:
    
    ::IceInternal::ProxyHandle<DerivedFacetObject> ice_context(const ::Ice::Context& __context) const
    {
        return dynamic_cast<DerivedFacetObject*>(::IceProxy::Ice::Object::ice_context(__context).get());
    }
    
    ::IceInternal::ProxyHandle<DerivedFacetObject> ice_adapterId(const ::std::string& __id) const
    {
        return dynamic_cast<DerivedFacetObject*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    }
    
    ::IceInternal::ProxyHandle<DerivedFacetObject> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
        return dynamic_cast<DerivedFacetObject*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    }
    
    ::IceInternal::ProxyHandle<DerivedFacetObject> ice_locatorCacheTimeout(int __timeout) const
    {
        return dynamic_cast<DerivedFacetObject*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    }
    
    ::IceInternal::ProxyHandle<DerivedFacetObject> ice_connectionCached(bool __cached) const
    {
        return dynamic_cast<DerivedFacetObject*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    }
    
    ::IceInternal::ProxyHandle<DerivedFacetObject> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
        return dynamic_cast<DerivedFacetObject*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    }
    
    ::IceInternal::ProxyHandle<DerivedFacetObject> ice_secure(bool __secure) const
    {
        return dynamic_cast<DerivedFacetObject*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    }
    
    ::IceInternal::ProxyHandle<DerivedFacetObject> ice_preferSecure(bool __preferSecure) const
    {
        return dynamic_cast<DerivedFacetObject*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    }
    
    ::IceInternal::ProxyHandle<DerivedFacetObject> ice_router(const ::Ice::RouterPrx& __router) const
    {
        return dynamic_cast<DerivedFacetObject*>(::IceProxy::Ice::Object::ice_router(__router).get());
    }
    
    ::IceInternal::ProxyHandle<DerivedFacetObject> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
        return dynamic_cast<DerivedFacetObject*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    }
    
    ::IceInternal::ProxyHandle<DerivedFacetObject> ice_collocationOptimized(bool __co) const
    {
        return dynamic_cast<DerivedFacetObject*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    }
    
    ::IceInternal::ProxyHandle<DerivedFacetObject> ice_twoway() const
    {
        return dynamic_cast<DerivedFacetObject*>(::IceProxy::Ice::Object::ice_twoway().get());
    }
    
    ::IceInternal::ProxyHandle<DerivedFacetObject> ice_oneway() const
    {
        return dynamic_cast<DerivedFacetObject*>(::IceProxy::Ice::Object::ice_oneway().get());
    }
    
    ::IceInternal::ProxyHandle<DerivedFacetObject> ice_batchOneway() const
    {
        return dynamic_cast<DerivedFacetObject*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    }
    
    ::IceInternal::ProxyHandle<DerivedFacetObject> ice_datagram() const
    {
        return dynamic_cast<DerivedFacetObject*>(::IceProxy::Ice::Object::ice_datagram().get());
    }
    
    ::IceInternal::ProxyHandle<DerivedFacetObject> ice_batchDatagram() const
    {
        return dynamic_cast<DerivedFacetObject*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    }
    
    ::IceInternal::ProxyHandle<DerivedFacetObject> ice_compress(bool __compress) const
    {
        return dynamic_cast<DerivedFacetObject*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    }
    
    ::IceInternal::ProxyHandle<DerivedFacetObject> ice_timeout(int __timeout) const
    {
        return dynamic_cast<DerivedFacetObject*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    }
    
    ::IceInternal::ProxyHandle<DerivedFacetObject> ice_connectionId(const ::std::string& __id) const
    {
        return dynamic_cast<DerivedFacetObject*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
    }
    
    ::IceInternal::ProxyHandle<DerivedFacetObject> ice_encodingVersion(const ::Ice::EncodingVersion& __v) const
    {
        return dynamic_cast<DerivedFacetObject*>(::IceProxy::Ice::Object::ice_encodingVersion(__v).get());
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

class MainObject : virtual public ::IceDelegate::Ice::Object
{
public:
};

class DerivedMainObject : virtual public ::IceDelegate::Test::MainObject
{
public:
};

class FacetObject : virtual public ::IceDelegate::Ice::Object
{
public:
};

class DerivedFacetObject : virtual public ::IceDelegate::Test::FacetObject
{
public:
};

}

}

namespace IceDelegateM
{

namespace Test
{

class MainObject : virtual public ::IceDelegate::Test::MainObject,
                   virtual public ::IceDelegateM::Ice::Object
{
public:
};

class DerivedMainObject : virtual public ::IceDelegate::Test::DerivedMainObject,
                          virtual public ::IceDelegateM::Test::MainObject
{
public:
};

class FacetObject : virtual public ::IceDelegate::Test::FacetObject,
                    virtual public ::IceDelegateM::Ice::Object
{
public:
};

class DerivedFacetObject : virtual public ::IceDelegate::Test::DerivedFacetObject,
                           virtual public ::IceDelegateM::Test::FacetObject
{
public:
};

}

}

namespace IceDelegateD
{

namespace Test
{

class MainObject : virtual public ::IceDelegate::Test::MainObject,
                   virtual public ::IceDelegateD::Ice::Object
{
public:
};

class DerivedMainObject : virtual public ::IceDelegate::Test::DerivedMainObject,
                          virtual public ::IceDelegateD::Test::MainObject
{
public:
};

class FacetObject : virtual public ::IceDelegate::Test::FacetObject,
                    virtual public ::IceDelegateD::Ice::Object
{
public:
};

class DerivedFacetObject : virtual public ::IceDelegate::Test::DerivedFacetObject,
                           virtual public ::IceDelegateD::Test::FacetObject
{
public:
};

}

}

namespace Test
{

class MainObject : virtual public ::Ice::Object
{
public:

    typedef MainObjectPrx ProxyType;
    typedef MainObjectPtr PointerType;

    MainObject()
    {
    }

    MainObject(bool __ice_boolToString, ::Ice::Byte __ice_byteToShort, ::Ice::Short __ice_shortToByte, ::Ice::Int __ice_intToShort, ::Ice::Long __ice_longToInt, ::Ice::Float __ice_floatToString, ::Ice::Double __ice_doubleToFloat, const ::std::string& __ice_stringToEnum, ::Test::E __ice_renamed) :
        boolToString(__ice_boolToString),
        byteToShort(__ice_byteToShort),
        shortToByte(__ice_shortToByte),
        intToShort(__ice_intToShort),
        longToInt(__ice_longToInt),
        floatToString(__ice_floatToString),
        doubleToFloat(__ice_doubleToFloat),
        stringToEnum(__ice_stringToEnum),
        renamed(__ice_renamed)
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
    using ::Ice::Object::__writeImpl;
    using ::Ice::Object::__readImpl;
    #endif

public:

    bool boolToString;

    ::Ice::Byte byteToShort;

    ::Ice::Short shortToByte;

    ::Ice::Int intToShort;

    ::Ice::Long longToInt;

    ::Ice::Float floatToString;

    ::Ice::Double doubleToFloat;

    ::std::string stringToEnum;

    ::Test::E renamed;

protected:

    virtual ~MainObject() {}

    friend class MainObject__staticInit;
};

class MainObject__staticInit
{
public:

    ::Test::MainObject _init;
};

static MainObject__staticInit _MainObject_init;

inline bool operator==(const MainObject& l, const MainObject& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

inline bool operator<(const MainObject& l, const MainObject& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}

class DerivedMainObject : public ::Test::MainObject
{
public:

    typedef DerivedMainObjectPrx ProxyType;
    typedef DerivedMainObjectPtr PointerType;

    DerivedMainObject()
    {
    }

    DerivedMainObject(bool __ice_boolToString, ::Ice::Byte __ice_byteToShort, ::Ice::Short __ice_shortToByte, ::Ice::Int __ice_intToShort, ::Ice::Long __ice_longToInt, ::Ice::Float __ice_floatToString, ::Ice::Double __ice_doubleToFloat, const ::std::string& __ice_stringToEnum, ::Test::E __ice_renamed, const ::std::string& __ice_name) :
        ::Test::MainObject(__ice_boolToString, __ice_byteToShort, __ice_shortToByte, __ice_intToShort, __ice_longToInt, __ice_floatToString, __ice_doubleToFloat, __ice_stringToEnum, __ice_renamed)
        ,
        name(__ice_name)
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
    using ::Test::MainObject::__writeImpl;
    using ::Test::MainObject::__readImpl;
    #endif

public:

    ::std::string name;

protected:

    virtual ~DerivedMainObject() {}
};

inline bool operator==(const DerivedMainObject& l, const DerivedMainObject& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

inline bool operator<(const DerivedMainObject& l, const DerivedMainObject& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}

class FacetObject : virtual public ::Ice::Object
{
public:

    typedef FacetObjectPrx ProxyType;
    typedef FacetObjectPtr PointerType;

    FacetObject()
    {
    }

    explicit FacetObject(::Ice::Double __ice_doubleToString) :
        doubleToString(__ice_doubleToString)
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
    using ::Ice::Object::__writeImpl;
    using ::Ice::Object::__readImpl;
    #endif

public:

    ::Ice::Double doubleToString;

protected:

    virtual ~FacetObject() {}
};

inline bool operator==(const FacetObject& l, const FacetObject& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

inline bool operator<(const FacetObject& l, const FacetObject& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}

class DerivedFacetObject : public ::Test::FacetObject
{
public:

    typedef DerivedFacetObjectPrx ProxyType;
    typedef DerivedFacetObjectPtr PointerType;

    DerivedFacetObject()
    {
    }

    DerivedFacetObject(::Ice::Double __ice_doubleToString, ::Ice::Long __ice_count) :
        ::Test::FacetObject(__ice_doubleToString)
        ,
        count(__ice_count)
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
    using ::Test::FacetObject::__writeImpl;
    using ::Test::FacetObject::__readImpl;
    #endif

public:

    ::Ice::Long count;

protected:

    virtual ~DerivedFacetObject() {}
};

inline bool operator==(const DerivedFacetObject& l, const DerivedFacetObject& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

inline bool operator<(const DerivedFacetObject& l, const DerivedFacetObject& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}

}

namespace Test
{

}

#endif