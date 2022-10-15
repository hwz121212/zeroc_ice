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
// Generated from file `Test.ice'
//
// Warning: do not edit this file.
//
// </auto-generated>
//

#ifndef __Test_h__
#define __Test_h__

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

#ifndef TEST_API
#   ifdef TEST_API_EXPORTS
#       define TEST_API ICE_DECLSPEC_EXPORT
#   else
#       define TEST_API ICE_DECLSPEC_IMPORT
#   endif
#endif

namespace IceProxy
{

namespace Test
{

class Base;
TEST_API void __read(::IceInternal::BasicStream*, ::IceInternal::ProxyHandle< ::IceProxy::Test::Base>&);
TEST_API ::IceProxy::Ice::Object* upCast(::IceProxy::Test::Base*);

class Derived;
TEST_API void __read(::IceInternal::BasicStream*, ::IceInternal::ProxyHandle< ::IceProxy::Test::Derived>&);
TEST_API ::IceProxy::Ice::Object* upCast(::IceProxy::Test::Derived*);

}

}

namespace Test
{

class Base;
bool operator==(const Base&, const Base&);
bool operator<(const Base&, const Base&);
TEST_API ::Ice::Object* upCast(::Test::Base*);
typedef ::IceInternal::Handle< ::Test::Base> BasePtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::Test::Base> BasePrx;
TEST_API void __patch(BasePtr&, const ::Ice::ObjectPtr&);

class Derived;
bool operator==(const Derived&, const Derived&);
bool operator<(const Derived&, const Derived&);
TEST_API ::Ice::Object* upCast(::Test::Derived*);
typedef ::IceInternal::Handle< ::Test::Derived> DerivedPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::Test::Derived> DerivedPrx;
TEST_API void __patch(DerivedPtr&, const ::Ice::ObjectPtr&);

}

namespace Test
{

enum Color
{
    red,
    green,
    blue
};

namespace Nested
{

enum Color
{
    red,
    green,
    blue
};

}

struct Struct1
{
    Struct1() :
        boolFalse(false),
        boolTrue(true),
        b(254),
        s(16000),
        i(3),
        l(ICE_INT64(4)),
        f(5.1F),
        d(6.2),
        str("foo \\ \"bar\012 \015\012\011\013\014\007\010? \007 \007"),
        c1(::Test::red),
        c2(Test::green),
        c3(blue),
        nc1(::Test::Nested::red),
        nc2(Nested::green),
        nc3(Nested::blue),
        zeroI(0),
        zeroL(ICE_INT64(0)),
        zeroF(0.0F),
        zeroDotF(0.0F),
        zeroD(0),
        zeroDotD(0)
    {
    }
    
    TEST_API Struct1(bool __ice_boolFalse, bool __ice_boolTrue, ::Ice::Byte __ice_b, ::Ice::Short __ice_s, ::Ice::Int __ice_i, ::Ice::Long __ice_l, ::Ice::Float __ice_f, ::Ice::Double __ice_d, const ::std::string& __ice_str, ::Test::Color __ice_c1, ::Test::Color __ice_c2, ::Test::Color __ice_c3, ::Test::Nested::Color __ice_nc1, ::Test::Nested::Color __ice_nc2, ::Test::Nested::Color __ice_nc3, const ::std::string& __ice_noDefault, ::Ice::Int __ice_zeroI, ::Ice::Long __ice_zeroL, ::Ice::Float __ice_zeroF, ::Ice::Float __ice_zeroDotF, ::Ice::Double __ice_zeroD, ::Ice::Double __ice_zeroDotD) :
        boolFalse(__ice_boolFalse),
        boolTrue(__ice_boolTrue),
        b(__ice_b),
        s(__ice_s),
        i(__ice_i),
        l(__ice_l),
        f(__ice_f),
        d(__ice_d),
        str(__ice_str),
        c1(__ice_c1),
        c2(__ice_c2),
        c3(__ice_c3),
        nc1(__ice_nc1),
        nc2(__ice_nc2),
        nc3(__ice_nc3),
        noDefault(__ice_noDefault),
        zeroI(__ice_zeroI),
        zeroL(__ice_zeroL),
        zeroF(__ice_zeroF),
        zeroDotF(__ice_zeroDotF),
        zeroD(__ice_zeroD),
        zeroDotD(__ice_zeroDotD)
    {
    }
    

    bool boolFalse;
    bool boolTrue;
    ::Ice::Byte b;
    ::Ice::Short s;
    ::Ice::Int i;
    ::Ice::Long l;
    ::Ice::Float f;
    ::Ice::Double d;
    ::std::string str;
    ::Test::Color c1;
    ::Test::Color c2;
    ::Test::Color c3;
    ::Test::Nested::Color nc1;
    ::Test::Nested::Color nc2;
    ::Test::Nested::Color nc3;
    ::std::string noDefault;
    ::Ice::Int zeroI;
    ::Ice::Long zeroL;
    ::Ice::Float zeroF;
    ::Ice::Float zeroDotF;
    ::Ice::Double zeroD;
    ::Ice::Double zeroDotD;
};

const bool ConstBool = true;

const ::Ice::Byte ConstByte = 254;

const ::Ice::Short ConstShort = 16000;

const ::Ice::Int ConstInt = 3;

const ::Ice::Long ConstLong = ICE_INT64(4);

const ::Ice::Float ConstFloat = 5.1F;

const ::Ice::Double ConstDouble = 6.2;

const ::std::string ConstString = "foo \\ \"bar\012 \015\012\011\013\014\007\010? \007 \007";

const ::Test::Color ConstColor1 = ::Test::red;

const ::Test::Color ConstColor2 = Test::green;

const ::Test::Color ConstColor3 = blue;

const ::Test::Nested::Color ConstNestedColor1 = ::Test::Nested::red;

const ::Test::Nested::Color ConstNestedColor2 = Test::Nested::green;

const ::Test::Nested::Color ConstNestedColor3 = Nested::blue;

const ::Ice::Int ConstZeroI = 0;

const ::Ice::Long ConstZeroL = ICE_INT64(0);

const ::Ice::Float ConstZeroF = 0.0F;

const ::Ice::Float ConstZeroDotF = 0.0F;

const ::Ice::Double ConstZeroD = 0;

const ::Ice::Double ConstZeroDotD = 0;

struct Struct2
{
    Struct2() :
        boolTrue(::Test::ConstBool),
        b(::Test::ConstByte),
        s(::Test::ConstShort),
        i(::Test::ConstInt),
        l(::Test::ConstLong),
        f(::Test::ConstFloat),
        d(::Test::ConstDouble),
        str(::Test::ConstString),
        c1(::Test::ConstColor1),
        c2(::Test::ConstColor2),
        c3(::Test::ConstColor3),
        nc1(::Test::ConstNestedColor1),
        nc2(::Test::ConstNestedColor2),
        nc3(::Test::ConstNestedColor3),
        zeroI(::Test::ConstZeroI),
        zeroL(::Test::ConstZeroL),
        zeroF(::Test::ConstZeroF),
        zeroDotF(::Test::ConstZeroDotF),
        zeroD(::Test::ConstZeroD),
        zeroDotD(::Test::ConstZeroDotD)
    {
    }
    
    TEST_API Struct2(bool __ice_boolTrue, ::Ice::Byte __ice_b, ::Ice::Short __ice_s, ::Ice::Int __ice_i, ::Ice::Long __ice_l, ::Ice::Float __ice_f, ::Ice::Double __ice_d, const ::std::string& __ice_str, ::Test::Color __ice_c1, ::Test::Color __ice_c2, ::Test::Color __ice_c3, ::Test::Nested::Color __ice_nc1, ::Test::Nested::Color __ice_nc2, ::Test::Nested::Color __ice_nc3, ::Ice::Int __ice_zeroI, ::Ice::Long __ice_zeroL, ::Ice::Float __ice_zeroF, ::Ice::Float __ice_zeroDotF, ::Ice::Double __ice_zeroD, ::Ice::Double __ice_zeroDotD) :
        boolTrue(__ice_boolTrue),
        b(__ice_b),
        s(__ice_s),
        i(__ice_i),
        l(__ice_l),
        f(__ice_f),
        d(__ice_d),
        str(__ice_str),
        c1(__ice_c1),
        c2(__ice_c2),
        c3(__ice_c3),
        nc1(__ice_nc1),
        nc2(__ice_nc2),
        nc3(__ice_nc3),
        zeroI(__ice_zeroI),
        zeroL(__ice_zeroL),
        zeroF(__ice_zeroF),
        zeroDotF(__ice_zeroDotF),
        zeroD(__ice_zeroD),
        zeroDotD(__ice_zeroDotD)
    {
    }
    

    bool boolTrue;
    ::Ice::Byte b;
    ::Ice::Short s;
    ::Ice::Int i;
    ::Ice::Long l;
    ::Ice::Float f;
    ::Ice::Double d;
    ::std::string str;
    ::Test::Color c1;
    ::Test::Color c2;
    ::Test::Color c3;
    ::Test::Nested::Color nc1;
    ::Test::Nested::Color nc2;
    ::Test::Nested::Color nc3;
    ::Ice::Int zeroI;
    ::Ice::Long zeroL;
    ::Ice::Float zeroF;
    ::Ice::Float zeroDotF;
    ::Ice::Double zeroD;
    ::Ice::Double zeroDotD;
};

class TEST_API Struct3 : public IceUtil::Shared
{
public:
    
    Struct3() :
        boolFalse(false),
        boolTrue(true),
        b(1),
        s(2),
        i(3),
        l(ICE_INT64(4)),
        f(5.1F),
        d(6.2),
        str("foo \\ \"bar\012 \015\012\011\013\014\007\010? \007 \007"),
        c1(::Test::red),
        c2(Test::green),
        c3(blue),
        nc1(::Test::Nested::red),
        nc2(Nested::green),
        nc3(Nested::blue),
        zeroI(0),
        zeroL(ICE_INT64(0)),
        zeroF(0.0F),
        zeroDotF(0.0F),
        zeroD(0),
        zeroDotD(0)
    {
    }
    Struct3(bool __ice_boolFalse, bool __ice_boolTrue, ::Ice::Byte __ice_b, ::Ice::Short __ice_s, ::Ice::Int __ice_i, ::Ice::Long __ice_l, ::Ice::Float __ice_f, ::Ice::Double __ice_d, const ::std::string& __ice_str, ::Test::Color __ice_c1, ::Test::Color __ice_c2, ::Test::Color __ice_c3, ::Test::Nested::Color __ice_nc1, ::Test::Nested::Color __ice_nc2, ::Test::Nested::Color __ice_nc3, const ::std::string& __ice_noDefault, ::Ice::Int __ice_zeroI, ::Ice::Long __ice_zeroL, ::Ice::Float __ice_zeroF, ::Ice::Float __ice_zeroDotF, ::Ice::Double __ice_zeroD, ::Ice::Double __ice_zeroDotD) :
        boolFalse(__ice_boolFalse),
        boolTrue(__ice_boolTrue),
        b(__ice_b),
        s(__ice_s),
        i(__ice_i),
        l(__ice_l),
        f(__ice_f),
        d(__ice_d),
        str(__ice_str),
        c1(__ice_c1),
        c2(__ice_c2),
        c3(__ice_c3),
        nc1(__ice_nc1),
        nc2(__ice_nc2),
        nc3(__ice_nc3),
        noDefault(__ice_noDefault),
        zeroI(__ice_zeroI),
        zeroL(__ice_zeroL),
        zeroF(__ice_zeroF),
        zeroDotF(__ice_zeroDotF),
        zeroD(__ice_zeroD),
        zeroDotD(__ice_zeroDotD)
    {
    }
    

    bool boolFalse;
    bool boolTrue;
    ::Ice::Byte b;
    ::Ice::Short s;
    ::Ice::Int i;
    ::Ice::Long l;
    ::Ice::Float f;
    ::Ice::Double d;
    ::std::string str;
    ::Test::Color c1;
    ::Test::Color c2;
    ::Test::Color c3;
    ::Test::Nested::Color nc1;
    ::Test::Nested::Color nc2;
    ::Test::Nested::Color nc3;
    ::std::string noDefault;
    ::Ice::Int zeroI;
    ::Ice::Long zeroL;
    ::Ice::Float zeroF;
    ::Ice::Float zeroDotF;
    ::Ice::Double zeroD;
    ::Ice::Double zeroDotD;
};

typedef ::IceUtil::Handle< ::Test::Struct3> Struct3Ptr;

class TEST_API BaseEx : public ::Ice::UserException
{
public:

    BaseEx();
    BaseEx(bool, bool, ::Ice::Byte, ::Ice::Short, ::Ice::Int, ::Ice::Long, ::Ice::Float, ::Ice::Double, const ::std::string&, const ::std::string&, ::Ice::Int, ::Ice::Long, ::Ice::Float, ::Ice::Float, ::Ice::Double, ::Ice::Double);
    virtual ~BaseEx() throw();

    virtual ::std::string ice_name() const;
    virtual BaseEx* ice_clone() const;
    virtual void ice_throw() const;

    bool boolFalse;
    bool boolTrue;
    ::Ice::Byte b;
    ::Ice::Short s;
    ::Ice::Int i;
    ::Ice::Long l;
    ::Ice::Float f;
    ::Ice::Double d;
    ::std::string str;
    ::std::string noDefault;
    ::Ice::Int zeroI;
    ::Ice::Long zeroL;
    ::Ice::Float zeroF;
    ::Ice::Float zeroDotF;
    ::Ice::Double zeroD;
    ::Ice::Double zeroDotD;

protected:
    virtual void __writeImpl(::IceInternal::BasicStream*) const;
    virtual void __readImpl(::IceInternal::BasicStream*);
    #ifdef __SUNPRO_CC
    using ::Ice::UserException::__writeImpl;
    using ::Ice::UserException::__readImpl;
    #endif
};

static BaseEx __BaseEx_init;

class TEST_API DerivedEx : public ::Test::BaseEx
{
public:

    DerivedEx();
    DerivedEx(bool, bool, ::Ice::Byte, ::Ice::Short, ::Ice::Int, ::Ice::Long, ::Ice::Float, ::Ice::Double, const ::std::string&, const ::std::string&, ::Ice::Int, ::Ice::Long, ::Ice::Float, ::Ice::Float, ::Ice::Double, ::Ice::Double, ::Test::Color, ::Test::Color, ::Test::Color, ::Test::Nested::Color, ::Test::Nested::Color, ::Test::Nested::Color);
    virtual ~DerivedEx() throw();

    virtual ::std::string ice_name() const;
    virtual DerivedEx* ice_clone() const;
    virtual void ice_throw() const;

    ::Test::Color c1;
    ::Test::Color c2;
    ::Test::Color c3;
    ::Test::Nested::Color nc1;
    ::Test::Nested::Color nc2;
    ::Test::Nested::Color nc3;

protected:
    virtual void __writeImpl(::IceInternal::BasicStream*) const;
    virtual void __readImpl(::IceInternal::BasicStream*);
    #ifdef __SUNPRO_CC
    using ::Test::BaseEx::__writeImpl;
    using ::Test::BaseEx::__readImpl;
    #endif
};

}

namespace Ice
{
template<>
struct StreamableTraits< ::Test::Color>
{
    static const StreamHelperCategory helper = StreamHelperCategoryEnum;
    static const int minValue = 0;
    static const int maxValue = 2;
    static const int minWireSize = 1;
    static const bool fixedLength = false;
};

template<>
struct StreamableTraits< ::Test::Nested::Color>
{
    static const StreamHelperCategory helper = StreamHelperCategoryEnum;
    static const int minValue = 0;
    static const int maxValue = 2;
    static const int minWireSize = 1;
    static const bool fixedLength = false;
};

template<>
struct StreamableTraits< ::Test::Struct1>
{
    static const StreamHelperCategory helper = StreamHelperCategoryStruct;
    static const int minWireSize = 73;
    static const bool fixedLength = false;
};

template<class S>
struct StreamWriter< ::Test::Struct1, S>
{
    static void write(S* __os, const ::Test::Struct1& v)
    {
        __os->write(v.boolFalse);
        __os->write(v.boolTrue);
        __os->write(v.b);
        __os->write(v.s);
        __os->write(v.i);
        __os->write(v.l);
        __os->write(v.f);
        __os->write(v.d);
        __os->write(v.str);
        __os->write(v.c1);
        __os->write(v.c2);
        __os->write(v.c3);
        __os->write(v.nc1);
        __os->write(v.nc2);
        __os->write(v.nc3);
        __os->write(v.noDefault);
        __os->write(v.zeroI);
        __os->write(v.zeroL);
        __os->write(v.zeroF);
        __os->write(v.zeroDotF);
        __os->write(v.zeroD);
        __os->write(v.zeroDotD);
    }
};

template<class S>
struct StreamReader< ::Test::Struct1, S>
{
    static void read(S* __is, ::Test::Struct1& v)
    {
        __is->read(v.boolFalse);
        __is->read(v.boolTrue);
        __is->read(v.b);
        __is->read(v.s);
        __is->read(v.i);
        __is->read(v.l);
        __is->read(v.f);
        __is->read(v.d);
        __is->read(v.str);
        __is->read(v.c1);
        __is->read(v.c2);
        __is->read(v.c3);
        __is->read(v.nc1);
        __is->read(v.nc2);
        __is->read(v.nc3);
        __is->read(v.noDefault);
        __is->read(v.zeroI);
        __is->read(v.zeroL);
        __is->read(v.zeroF);
        __is->read(v.zeroDotF);
        __is->read(v.zeroD);
        __is->read(v.zeroDotD);
    }
};

#if defined(ICE_HAS_DECLSPEC_IMPORT_EXPORT) && !defined(TEST_API_EXPORTS)
template struct TEST_API StreamWriter< ::Test::Struct1, ::IceInternal::BasicStream>;
template struct TEST_API StreamReader< ::Test::Struct1, ::IceInternal::BasicStream>;
#endif

template<>
struct StreamableTraits< ::Test::Struct2>
{
    static const StreamHelperCategory helper = StreamHelperCategoryStruct;
    static const int minWireSize = 71;
    static const bool fixedLength = false;
};

template<class S>
struct StreamWriter< ::Test::Struct2, S>
{
    static void write(S* __os, const ::Test::Struct2& v)
    {
        __os->write(v.boolTrue);
        __os->write(v.b);
        __os->write(v.s);
        __os->write(v.i);
        __os->write(v.l);
        __os->write(v.f);
        __os->write(v.d);
        __os->write(v.str);
        __os->write(v.c1);
        __os->write(v.c2);
        __os->write(v.c3);
        __os->write(v.nc1);
        __os->write(v.nc2);
        __os->write(v.nc3);
        __os->write(v.zeroI);
        __os->write(v.zeroL);
        __os->write(v.zeroF);
        __os->write(v.zeroDotF);
        __os->write(v.zeroD);
        __os->write(v.zeroDotD);
    }
};

template<class S>
struct StreamReader< ::Test::Struct2, S>
{
    static void read(S* __is, ::Test::Struct2& v)
    {
        __is->read(v.boolTrue);
        __is->read(v.b);
        __is->read(v.s);
        __is->read(v.i);
        __is->read(v.l);
        __is->read(v.f);
        __is->read(v.d);
        __is->read(v.str);
        __is->read(v.c1);
        __is->read(v.c2);
        __is->read(v.c3);
        __is->read(v.nc1);
        __is->read(v.nc2);
        __is->read(v.nc3);
        __is->read(v.zeroI);
        __is->read(v.zeroL);
        __is->read(v.zeroF);
        __is->read(v.zeroDotF);
        __is->read(v.zeroD);
        __is->read(v.zeroDotD);
    }
};

#if defined(ICE_HAS_DECLSPEC_IMPORT_EXPORT) && !defined(TEST_API_EXPORTS)
template struct TEST_API StreamWriter< ::Test::Struct2, ::IceInternal::BasicStream>;
template struct TEST_API StreamReader< ::Test::Struct2, ::IceInternal::BasicStream>;
#endif

template<>
struct StreamableTraits< ::Test::Struct3Ptr>
{
    static const StreamHelperCategory helper = StreamHelperCategoryStructClass;
    static const int minWireSize = 73;
    static const bool fixedLength = false;
};

template<class S>
struct StreamWriter< ::Test::Struct3Ptr, S>
{
    static void write(S* __os, const ::Test::Struct3Ptr& v)
    {
        __os->write(v->boolFalse);
        __os->write(v->boolTrue);
        __os->write(v->b);
        __os->write(v->s);
        __os->write(v->i);
        __os->write(v->l);
        __os->write(v->f);
        __os->write(v->d);
        __os->write(v->str);
        __os->write(v->c1);
        __os->write(v->c2);
        __os->write(v->c3);
        __os->write(v->nc1);
        __os->write(v->nc2);
        __os->write(v->nc3);
        __os->write(v->noDefault);
        __os->write(v->zeroI);
        __os->write(v->zeroL);
        __os->write(v->zeroF);
        __os->write(v->zeroDotF);
        __os->write(v->zeroD);
        __os->write(v->zeroDotD);
    }
};

template<class S>
struct StreamReader< ::Test::Struct3Ptr, S>
{
    static void read(S* __is, ::Test::Struct3Ptr& v)
    {
        __is->read(v->boolFalse);
        __is->read(v->boolTrue);
        __is->read(v->b);
        __is->read(v->s);
        __is->read(v->i);
        __is->read(v->l);
        __is->read(v->f);
        __is->read(v->d);
        __is->read(v->str);
        __is->read(v->c1);
        __is->read(v->c2);
        __is->read(v->c3);
        __is->read(v->nc1);
        __is->read(v->nc2);
        __is->read(v->nc3);
        __is->read(v->noDefault);
        __is->read(v->zeroI);
        __is->read(v->zeroL);
        __is->read(v->zeroF);
        __is->read(v->zeroDotF);
        __is->read(v->zeroD);
        __is->read(v->zeroDotD);
    }
};

#if defined(ICE_HAS_DECLSPEC_IMPORT_EXPORT) && !defined(TEST_API_EXPORTS)
template struct TEST_API StreamWriter< ::Test::Struct3Ptr, ::IceInternal::BasicStream>;
template struct TEST_API StreamReader< ::Test::Struct3Ptr, ::IceInternal::BasicStream>;
#endif

template<>
struct StreamableTraits< ::Test::BaseEx>
{
    static const StreamHelperCategory helper = StreamHelperCategoryUserException;
};

template<>
struct StreamableTraits< ::Test::DerivedEx>
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

class Base : virtual public ::IceProxy::Ice::Object
{
public:
    
    ::IceInternal::ProxyHandle<Base> ice_context(const ::Ice::Context& __context) const
    {
        return dynamic_cast<Base*>(::IceProxy::Ice::Object::ice_context(__context).get());
    }
    
    ::IceInternal::ProxyHandle<Base> ice_adapterId(const ::std::string& __id) const
    {
        return dynamic_cast<Base*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    }
    
    ::IceInternal::ProxyHandle<Base> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
        return dynamic_cast<Base*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    }
    
    ::IceInternal::ProxyHandle<Base> ice_locatorCacheTimeout(int __timeout) const
    {
        return dynamic_cast<Base*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    }
    
    ::IceInternal::ProxyHandle<Base> ice_connectionCached(bool __cached) const
    {
        return dynamic_cast<Base*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    }
    
    ::IceInternal::ProxyHandle<Base> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
        return dynamic_cast<Base*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    }
    
    ::IceInternal::ProxyHandle<Base> ice_secure(bool __secure) const
    {
        return dynamic_cast<Base*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    }
    
    ::IceInternal::ProxyHandle<Base> ice_preferSecure(bool __preferSecure) const
    {
        return dynamic_cast<Base*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    }
    
    ::IceInternal::ProxyHandle<Base> ice_router(const ::Ice::RouterPrx& __router) const
    {
        return dynamic_cast<Base*>(::IceProxy::Ice::Object::ice_router(__router).get());
    }
    
    ::IceInternal::ProxyHandle<Base> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
        return dynamic_cast<Base*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    }
    
    ::IceInternal::ProxyHandle<Base> ice_collocationOptimized(bool __co) const
    {
        return dynamic_cast<Base*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    }
    
    ::IceInternal::ProxyHandle<Base> ice_twoway() const
    {
        return dynamic_cast<Base*>(::IceProxy::Ice::Object::ice_twoway().get());
    }
    
    ::IceInternal::ProxyHandle<Base> ice_oneway() const
    {
        return dynamic_cast<Base*>(::IceProxy::Ice::Object::ice_oneway().get());
    }
    
    ::IceInternal::ProxyHandle<Base> ice_batchOneway() const
    {
        return dynamic_cast<Base*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    }
    
    ::IceInternal::ProxyHandle<Base> ice_datagram() const
    {
        return dynamic_cast<Base*>(::IceProxy::Ice::Object::ice_datagram().get());
    }
    
    ::IceInternal::ProxyHandle<Base> ice_batchDatagram() const
    {
        return dynamic_cast<Base*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    }
    
    ::IceInternal::ProxyHandle<Base> ice_compress(bool __compress) const
    {
        return dynamic_cast<Base*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    }
    
    ::IceInternal::ProxyHandle<Base> ice_timeout(int __timeout) const
    {
        return dynamic_cast<Base*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    }
    
    ::IceInternal::ProxyHandle<Base> ice_connectionId(const ::std::string& __id) const
    {
        return dynamic_cast<Base*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
    }
    
    ::IceInternal::ProxyHandle<Base> ice_encodingVersion(const ::Ice::EncodingVersion& __v) const
    {
        return dynamic_cast<Base*>(::IceProxy::Ice::Object::ice_encodingVersion(__v).get());
    }
    
    TEST_API static const ::std::string& ice_staticId();

private: 

    TEST_API virtual ::IceInternal::Handle< ::IceDelegateM::Ice::Object> __createDelegateM();
    TEST_API virtual ::IceInternal::Handle< ::IceDelegateD::Ice::Object> __createDelegateD();
    TEST_API virtual ::IceProxy::Ice::Object* __newInstance() const;
};

class Derived : virtual public ::IceProxy::Test::Base
{
public:
    
    ::IceInternal::ProxyHandle<Derived> ice_context(const ::Ice::Context& __context) const
    {
        return dynamic_cast<Derived*>(::IceProxy::Ice::Object::ice_context(__context).get());
    }
    
    ::IceInternal::ProxyHandle<Derived> ice_adapterId(const ::std::string& __id) const
    {
        return dynamic_cast<Derived*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    }
    
    ::IceInternal::ProxyHandle<Derived> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
        return dynamic_cast<Derived*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    }
    
    ::IceInternal::ProxyHandle<Derived> ice_locatorCacheTimeout(int __timeout) const
    {
        return dynamic_cast<Derived*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    }
    
    ::IceInternal::ProxyHandle<Derived> ice_connectionCached(bool __cached) const
    {
        return dynamic_cast<Derived*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    }
    
    ::IceInternal::ProxyHandle<Derived> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
        return dynamic_cast<Derived*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    }
    
    ::IceInternal::ProxyHandle<Derived> ice_secure(bool __secure) const
    {
        return dynamic_cast<Derived*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    }
    
    ::IceInternal::ProxyHandle<Derived> ice_preferSecure(bool __preferSecure) const
    {
        return dynamic_cast<Derived*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    }
    
    ::IceInternal::ProxyHandle<Derived> ice_router(const ::Ice::RouterPrx& __router) const
    {
        return dynamic_cast<Derived*>(::IceProxy::Ice::Object::ice_router(__router).get());
    }
    
    ::IceInternal::ProxyHandle<Derived> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
        return dynamic_cast<Derived*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    }
    
    ::IceInternal::ProxyHandle<Derived> ice_collocationOptimized(bool __co) const
    {
        return dynamic_cast<Derived*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    }
    
    ::IceInternal::ProxyHandle<Derived> ice_twoway() const
    {
        return dynamic_cast<Derived*>(::IceProxy::Ice::Object::ice_twoway().get());
    }
    
    ::IceInternal::ProxyHandle<Derived> ice_oneway() const
    {
        return dynamic_cast<Derived*>(::IceProxy::Ice::Object::ice_oneway().get());
    }
    
    ::IceInternal::ProxyHandle<Derived> ice_batchOneway() const
    {
        return dynamic_cast<Derived*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    }
    
    ::IceInternal::ProxyHandle<Derived> ice_datagram() const
    {
        return dynamic_cast<Derived*>(::IceProxy::Ice::Object::ice_datagram().get());
    }
    
    ::IceInternal::ProxyHandle<Derived> ice_batchDatagram() const
    {
        return dynamic_cast<Derived*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    }
    
    ::IceInternal::ProxyHandle<Derived> ice_compress(bool __compress) const
    {
        return dynamic_cast<Derived*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    }
    
    ::IceInternal::ProxyHandle<Derived> ice_timeout(int __timeout) const
    {
        return dynamic_cast<Derived*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    }
    
    ::IceInternal::ProxyHandle<Derived> ice_connectionId(const ::std::string& __id) const
    {
        return dynamic_cast<Derived*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
    }
    
    ::IceInternal::ProxyHandle<Derived> ice_encodingVersion(const ::Ice::EncodingVersion& __v) const
    {
        return dynamic_cast<Derived*>(::IceProxy::Ice::Object::ice_encodingVersion(__v).get());
    }
    
    TEST_API static const ::std::string& ice_staticId();

private: 

    TEST_API virtual ::IceInternal::Handle< ::IceDelegateM::Ice::Object> __createDelegateM();
    TEST_API virtual ::IceInternal::Handle< ::IceDelegateD::Ice::Object> __createDelegateD();
    TEST_API virtual ::IceProxy::Ice::Object* __newInstance() const;
};

}

}

namespace IceDelegate
{

namespace Test
{

class TEST_API Base : virtual public ::IceDelegate::Ice::Object
{
public:
};

class TEST_API Derived : virtual public ::IceDelegate::Test::Base
{
public:
};

}

}

namespace IceDelegateM
{

namespace Test
{

class TEST_API Base : virtual public ::IceDelegate::Test::Base,
                      virtual public ::IceDelegateM::Ice::Object
{
public:
};

class TEST_API Derived : virtual public ::IceDelegate::Test::Derived,
                         virtual public ::IceDelegateM::Test::Base
{
public:
};

}

}

namespace IceDelegateD
{

namespace Test
{

class TEST_API Base : virtual public ::IceDelegate::Test::Base,
                      virtual public ::IceDelegateD::Ice::Object
{
public:
};

class TEST_API Derived : virtual public ::IceDelegate::Test::Derived,
                         virtual public ::IceDelegateD::Test::Base
{
public:
};

}

}

namespace Test
{

class TEST_API Base : virtual public ::Ice::Object
{
public:

    typedef BasePrx ProxyType;
    typedef BasePtr PointerType;

    Base() :
        boolFalse(false),
        boolTrue(true),
        b(1),
        s(2),
        i(3),
        l(ICE_INT64(4)),
        f(5.1F),
        d(6.2),
        str("foo \\ \"bar\012 \015\012\011\013\014\007\010? \007 \007"),
        zeroI(0),
        zeroL(ICE_INT64(0)),
        zeroF(0.0F),
        zeroDotF(0.0F),
        zeroD(0),
        zeroDotD(0)
    {
    }

    Base(bool __ice_boolFalse, bool __ice_boolTrue, ::Ice::Byte __ice_b, ::Ice::Short __ice_s, ::Ice::Int __ice_i, ::Ice::Long __ice_l, ::Ice::Float __ice_f, ::Ice::Double __ice_d, const ::std::string& __ice_str, const ::std::string& __ice_noDefault, ::Ice::Int __ice_zeroI, ::Ice::Long __ice_zeroL, ::Ice::Float __ice_zeroF, ::Ice::Float __ice_zeroDotF, ::Ice::Double __ice_zeroD, ::Ice::Double __ice_zeroDotD) :
        boolFalse(__ice_boolFalse),
        boolTrue(__ice_boolTrue),
        b(__ice_b),
        s(__ice_s),
        i(__ice_i),
        l(__ice_l),
        f(__ice_f),
        d(__ice_d),
        str(__ice_str),
        noDefault(__ice_noDefault),
        zeroI(__ice_zeroI),
        zeroL(__ice_zeroL),
        zeroF(__ice_zeroF),
        zeroDotF(__ice_zeroDotF),
        zeroD(__ice_zeroD),
        zeroDotD(__ice_zeroDotD)
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

    bool boolFalse;

    bool boolTrue;

    ::Ice::Byte b;

    ::Ice::Short s;

    ::Ice::Int i;

    ::Ice::Long l;

    ::Ice::Float f;

    ::Ice::Double d;

    ::std::string str;

    ::std::string noDefault;

    ::Ice::Int zeroI;

    ::Ice::Long zeroL;

    ::Ice::Float zeroF;

    ::Ice::Float zeroDotF;

    ::Ice::Double zeroD;

    ::Ice::Double zeroDotD;

protected:

    virtual ~Base() {}

    friend class Base__staticInit;
};

class Base__staticInit
{
public:

    ::Test::Base _init;
};

static Base__staticInit _Base_init;

inline bool operator==(const Base& l, const Base& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

inline bool operator<(const Base& l, const Base& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}

class TEST_API Derived : public ::Test::Base
{
public:

    typedef DerivedPrx ProxyType;
    typedef DerivedPtr PointerType;

    Derived() :
        c1(::Test::red),
        c2(Test::green),
        c3(blue),
        nc1(::Test::Nested::red),
        nc2(Nested::green),
        nc3(Nested::blue)
    {
    }

    Derived(bool __ice_boolFalse, bool __ice_boolTrue, ::Ice::Byte __ice_b, ::Ice::Short __ice_s, ::Ice::Int __ice_i, ::Ice::Long __ice_l, ::Ice::Float __ice_f, ::Ice::Double __ice_d, const ::std::string& __ice_str, const ::std::string& __ice_noDefault, ::Ice::Int __ice_zeroI, ::Ice::Long __ice_zeroL, ::Ice::Float __ice_zeroF, ::Ice::Float __ice_zeroDotF, ::Ice::Double __ice_zeroD, ::Ice::Double __ice_zeroDotD, ::Test::Color __ice_c1, ::Test::Color __ice_c2, ::Test::Color __ice_c3, ::Test::Nested::Color __ice_nc1, ::Test::Nested::Color __ice_nc2, ::Test::Nested::Color __ice_nc3) :
        ::Test::Base(__ice_boolFalse, __ice_boolTrue, __ice_b, __ice_s, __ice_i, __ice_l, __ice_f, __ice_d, __ice_str, __ice_noDefault, __ice_zeroI, __ice_zeroL, __ice_zeroF, __ice_zeroDotF, __ice_zeroD, __ice_zeroDotD)
        ,
        c1(__ice_c1),
        c2(__ice_c2),
        c3(__ice_c3),
        nc1(__ice_nc1),
        nc2(__ice_nc2),
        nc3(__ice_nc3)
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
    using ::Test::Base::__writeImpl;
    using ::Test::Base::__readImpl;
    #endif

public:

    ::Test::Color c1;

    ::Test::Color c2;

    ::Test::Color c3;

    ::Test::Nested::Color nc1;

    ::Test::Nested::Color nc2;

    ::Test::Nested::Color nc3;

protected:

    virtual ~Derived() {}
};

inline bool operator==(const Derived& l, const Derived& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

inline bool operator<(const Derived& l, const Derived& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}

}

namespace Test
{

}

#endif
