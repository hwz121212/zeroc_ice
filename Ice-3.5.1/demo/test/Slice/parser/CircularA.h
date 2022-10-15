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
// Generated from file `CircularA.ice'
//
// Warning: do not edit this file.
//
// </auto-generated>
//

#ifndef __CircularA_h__
#define __CircularA_h__

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
#include <IceUtil/ScopedArray.h>
#include <IceUtil/Optional.h>
#include <Ice/StreamF.h>
#include <CircularB.h>
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

class A;
void __read(::IceInternal::BasicStream*, ::IceInternal::ProxyHandle< ::IceProxy::Test::A>&);
::IceProxy::Ice::Object* upCast(::IceProxy::Test::A*);

}

}

namespace Test
{

class A;
bool operator==(const A&, const A&);
bool operator<(const A&, const A&);
::Ice::Object* upCast(::Test::A*);
typedef ::IceInternal::Handle< ::Test::A> APtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::Test::A> APrx;
void __patch(APtr&, const ::Ice::ObjectPtr&);

}

namespace Test
{

class Callback_A_shutdown_Base : virtual public ::IceInternal::CallbackBase { };
typedef ::IceUtil::Handle< Callback_A_shutdown_Base> Callback_A_shutdownPtr;

}

namespace IceProxy
{

namespace Test
{

class A : virtual public ::IceProxy::Ice::Object
{
public:

    void shutdown()
    {
        shutdown(0);
    }
    void shutdown(const ::Ice::Context& __ctx)
    {
        shutdown(&__ctx);
    }
#ifdef ICE_CPP11
    ::Ice::AsyncResultPtr
    begin_shutdown(const ::IceInternal::Function<void ()>& __response, const ::IceInternal::Function<void (const ::Ice::Exception&)>& __exception = ::IceInternal::Function<void (const ::Ice::Exception&)>(), const ::IceInternal::Function<void (bool)>& __sent = ::IceInternal::Function<void (bool)>())
    {
        return begin_shutdown(0, new ::IceInternal::Cpp11FnOnewayCallbackNC(__response, __exception, __sent));
    }
    ::Ice::AsyncResultPtr
    begin_shutdown(const ::IceInternal::Function<void (const ::Ice::AsyncResultPtr&)>& __completed, const ::IceInternal::Function<void (const ::Ice::AsyncResultPtr&)>& __sent = ::IceInternal::Function<void (const ::Ice::AsyncResultPtr&)>())
    {
        return begin_shutdown(0, ::Ice::newCallback(__completed, __sent), 0);
    }
    ::Ice::AsyncResultPtr
    begin_shutdown(const ::Ice::Context& __ctx, const ::IceInternal::Function<void ()>& __response, const ::IceInternal::Function<void (const ::Ice::Exception&)>& __exception = ::IceInternal::Function<void (const ::Ice::Exception&)>(), const ::IceInternal::Function<void (bool)>& __sent = ::IceInternal::Function<void (bool)>())
    {
        return begin_shutdown(&__ctx, new ::IceInternal::Cpp11FnOnewayCallbackNC(__response, __exception, __sent), 0);
    }
    ::Ice::AsyncResultPtr
    begin_shutdown(const ::Ice::Context& __ctx, const ::IceInternal::Function<void (const ::Ice::AsyncResultPtr&)>& __completed, const ::IceInternal::Function<void (const ::Ice::AsyncResultPtr&)>& __sent = ::IceInternal::Function<void (const ::Ice::AsyncResultPtr&)>())
    {
        return begin_shutdown(&__ctx, ::Ice::newCallback(__completed, __sent));
    }
#endif

    ::Ice::AsyncResultPtr begin_shutdown()
    {
        return begin_shutdown(0, ::IceInternal::__dummyCallback, 0);
    }

    ::Ice::AsyncResultPtr begin_shutdown(const ::Ice::Context& __ctx)
    {
        return begin_shutdown(&__ctx, ::IceInternal::__dummyCallback, 0);
    }

    ::Ice::AsyncResultPtr begin_shutdown(const ::Ice::CallbackPtr& __del, const ::Ice::LocalObjectPtr& __cookie = 0)
    {
        return begin_shutdown(0, __del, __cookie);
    }

    ::Ice::AsyncResultPtr begin_shutdown(const ::Ice::Context& __ctx, const ::Ice::CallbackPtr& __del, const ::Ice::LocalObjectPtr& __cookie = 0)
    {
        return begin_shutdown(&__ctx, __del, __cookie);
    }

    ::Ice::AsyncResultPtr begin_shutdown(const ::Test::Callback_A_shutdownPtr& __del, const ::Ice::LocalObjectPtr& __cookie = 0)
    {
        return begin_shutdown(0, __del, __cookie);
    }

    ::Ice::AsyncResultPtr begin_shutdown(const ::Ice::Context& __ctx, const ::Test::Callback_A_shutdownPtr& __del, const ::Ice::LocalObjectPtr& __cookie = 0)
    {
        return begin_shutdown(&__ctx, __del, __cookie);
    }

    void end_shutdown(const ::Ice::AsyncResultPtr&);
    
private:

    void shutdown(const ::Ice::Context*);
    ::Ice::AsyncResultPtr begin_shutdown(const ::Ice::Context*, const ::IceInternal::CallbackBasePtr&, const ::Ice::LocalObjectPtr& __cookie = 0);
    
public:
    
    ::IceInternal::ProxyHandle<A> ice_context(const ::Ice::Context& __context) const
    {
        return dynamic_cast<A*>(::IceProxy::Ice::Object::ice_context(__context).get());
    }
    
    ::IceInternal::ProxyHandle<A> ice_adapterId(const ::std::string& __id) const
    {
        return dynamic_cast<A*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    }
    
    ::IceInternal::ProxyHandle<A> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
        return dynamic_cast<A*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    }
    
    ::IceInternal::ProxyHandle<A> ice_locatorCacheTimeout(int __timeout) const
    {
        return dynamic_cast<A*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    }
    
    ::IceInternal::ProxyHandle<A> ice_connectionCached(bool __cached) const
    {
        return dynamic_cast<A*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    }
    
    ::IceInternal::ProxyHandle<A> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
        return dynamic_cast<A*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    }
    
    ::IceInternal::ProxyHandle<A> ice_secure(bool __secure) const
    {
        return dynamic_cast<A*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    }
    
    ::IceInternal::ProxyHandle<A> ice_preferSecure(bool __preferSecure) const
    {
        return dynamic_cast<A*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    }
    
    ::IceInternal::ProxyHandle<A> ice_router(const ::Ice::RouterPrx& __router) const
    {
        return dynamic_cast<A*>(::IceProxy::Ice::Object::ice_router(__router).get());
    }
    
    ::IceInternal::ProxyHandle<A> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
        return dynamic_cast<A*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    }
    
    ::IceInternal::ProxyHandle<A> ice_collocationOptimized(bool __co) const
    {
        return dynamic_cast<A*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    }
    
    ::IceInternal::ProxyHandle<A> ice_twoway() const
    {
        return dynamic_cast<A*>(::IceProxy::Ice::Object::ice_twoway().get());
    }
    
    ::IceInternal::ProxyHandle<A> ice_oneway() const
    {
        return dynamic_cast<A*>(::IceProxy::Ice::Object::ice_oneway().get());
    }
    
    ::IceInternal::ProxyHandle<A> ice_batchOneway() const
    {
        return dynamic_cast<A*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    }
    
    ::IceInternal::ProxyHandle<A> ice_datagram() const
    {
        return dynamic_cast<A*>(::IceProxy::Ice::Object::ice_datagram().get());
    }
    
    ::IceInternal::ProxyHandle<A> ice_batchDatagram() const
    {
        return dynamic_cast<A*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    }
    
    ::IceInternal::ProxyHandle<A> ice_compress(bool __compress) const
    {
        return dynamic_cast<A*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    }
    
    ::IceInternal::ProxyHandle<A> ice_timeout(int __timeout) const
    {
        return dynamic_cast<A*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    }
    
    ::IceInternal::ProxyHandle<A> ice_connectionId(const ::std::string& __id) const
    {
        return dynamic_cast<A*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
    }
    
    ::IceInternal::ProxyHandle<A> ice_encodingVersion(const ::Ice::EncodingVersion& __v) const
    {
        return dynamic_cast<A*>(::IceProxy::Ice::Object::ice_encodingVersion(__v).get());
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

class A : virtual public ::IceDelegate::Ice::Object
{
public:

    virtual void shutdown(const ::Ice::Context*, ::IceInternal::InvocationObserver&) = 0;
};

}

}

namespace IceDelegateM
{

namespace Test
{

class A : virtual public ::IceDelegate::Test::A,
          virtual public ::IceDelegateM::Ice::Object
{
public:

    virtual void shutdown(const ::Ice::Context*, ::IceInternal::InvocationObserver&);
};

}

}

namespace IceDelegateD
{

namespace Test
{

class A : virtual public ::IceDelegate::Test::A,
          virtual public ::IceDelegateD::Ice::Object
{
public:

    virtual void shutdown(const ::Ice::Context*, ::IceInternal::InvocationObserver&);
};

}

}

namespace Test
{

class A : virtual public ::Ice::Object
{
public:

    typedef APrx ProxyType;
    typedef APtr PointerType;

    A()
    {
    }

    virtual ::Ice::ObjectPtr ice_clone() const;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual void shutdown(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___shutdown(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);

protected:
    virtual void __writeImpl(::IceInternal::BasicStream*) const;
    virtual void __readImpl(::IceInternal::BasicStream*);
    #ifdef __SUNPRO_CC
    using ::Ice::Object::__writeImpl;
    using ::Ice::Object::__readImpl;
    #endif
};

inline bool operator==(const A& l, const A& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

inline bool operator<(const A& l, const A& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}

}

namespace Test
{

template<class T>
class CallbackNC_A_shutdown : public Callback_A_shutdown_Base, public ::IceInternal::OnewayCallbackNC<T>
{
public:

    typedef IceUtil::Handle<T> TPtr;

    typedef void (T::*Exception)(const ::Ice::Exception&);
    typedef void (T::*Sent)(bool);
    typedef void (T::*Response)();

    CallbackNC_A_shutdown(const TPtr& obj, Response cb, Exception excb, Sent sentcb)
        : ::IceInternal::OnewayCallbackNC<T>(obj, cb, excb, sentcb)
    {
    }
};

template<class T> Callback_A_shutdownPtr
newCallback_A_shutdown(const IceUtil::Handle<T>& instance, void (T::*cb)(), void (T::*excb)(const ::Ice::Exception&), void (T::*sentcb)(bool) = 0)
{
    return new CallbackNC_A_shutdown<T>(instance, cb, excb, sentcb);
}

template<class T> Callback_A_shutdownPtr
newCallback_A_shutdown(const IceUtil::Handle<T>& instance, void (T::*excb)(const ::Ice::Exception&), void (T::*sentcb)(bool) = 0)
{
    return new CallbackNC_A_shutdown<T>(instance, 0, excb, sentcb);
}

template<class T> Callback_A_shutdownPtr
newCallback_A_shutdown(T* instance, void (T::*cb)(), void (T::*excb)(const ::Ice::Exception&), void (T::*sentcb)(bool) = 0)
{
    return new CallbackNC_A_shutdown<T>(instance, cb, excb, sentcb);
}

template<class T> Callback_A_shutdownPtr
newCallback_A_shutdown(T* instance, void (T::*excb)(const ::Ice::Exception&), void (T::*sentcb)(bool) = 0)
{
    return new CallbackNC_A_shutdown<T>(instance, 0, excb, sentcb);
}

template<class T, typename CT>
class Callback_A_shutdown : public Callback_A_shutdown_Base, public ::IceInternal::OnewayCallback<T, CT>
{
public:

    typedef IceUtil::Handle<T> TPtr;

    typedef void (T::*Exception)(const ::Ice::Exception& , const CT&);
    typedef void (T::*Sent)(bool , const CT&);
    typedef void (T::*Response)(const CT&);

    Callback_A_shutdown(const TPtr& obj, Response cb, Exception excb, Sent sentcb)
        : ::IceInternal::OnewayCallback<T, CT>(obj, cb, excb, sentcb)
    {
    }
};

template<class T, typename CT> Callback_A_shutdownPtr
newCallback_A_shutdown(const IceUtil::Handle<T>& instance, void (T::*cb)(const CT&), void (T::*excb)(const ::Ice::Exception&, const CT&), void (T::*sentcb)(bool, const CT&) = 0)
{
    return new Callback_A_shutdown<T, CT>(instance, cb, excb, sentcb);
}

template<class T, typename CT> Callback_A_shutdownPtr
newCallback_A_shutdown(const IceUtil::Handle<T>& instance, void (T::*excb)(const ::Ice::Exception&, const CT&), void (T::*sentcb)(bool, const CT&) = 0)
{
    return new Callback_A_shutdown<T, CT>(instance, 0, excb, sentcb);
}

template<class T, typename CT> Callback_A_shutdownPtr
newCallback_A_shutdown(T* instance, void (T::*cb)(const CT&), void (T::*excb)(const ::Ice::Exception&, const CT&), void (T::*sentcb)(bool, const CT&) = 0)
{
    return new Callback_A_shutdown<T, CT>(instance, cb, excb, sentcb);
}

template<class T, typename CT> Callback_A_shutdownPtr
newCallback_A_shutdown(T* instance, void (T::*excb)(const ::Ice::Exception&, const CT&), void (T::*sentcb)(bool, const CT&) = 0)
{
    return new Callback_A_shutdown<T, CT>(instance, 0, excb, sentcb);
}

}

#endif
