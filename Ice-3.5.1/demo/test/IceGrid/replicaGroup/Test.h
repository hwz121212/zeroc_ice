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

class TestIntf;
void __read(::IceInternal::BasicStream*, ::IceInternal::ProxyHandle< ::IceProxy::Test::TestIntf>&);
::IceProxy::Ice::Object* upCast(::IceProxy::Test::TestIntf*);

}

}

namespace Test
{

class TestIntf;
bool operator==(const TestIntf&, const TestIntf&);
bool operator<(const TestIntf&, const TestIntf&);
::Ice::Object* upCast(::Test::TestIntf*);
typedef ::IceInternal::Handle< ::Test::TestIntf> TestIntfPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::Test::TestIntf> TestIntfPrx;
void __patch(TestIntfPtr&, const ::Ice::ObjectPtr&);

}

namespace Test
{

class Callback_TestIntf_getReplicaId_Base : virtual public ::IceInternal::CallbackBase { };
typedef ::IceUtil::Handle< Callback_TestIntf_getReplicaId_Base> Callback_TestIntf_getReplicaIdPtr;

class Callback_TestIntf_getReplicaIdAndShutdown_Base : virtual public ::IceInternal::CallbackBase { };
typedef ::IceUtil::Handle< Callback_TestIntf_getReplicaIdAndShutdown_Base> Callback_TestIntf_getReplicaIdAndShutdownPtr;

}

namespace IceProxy
{

namespace Test
{

class TestIntf : virtual public ::IceProxy::Ice::Object
{
public:

    ::std::string getReplicaId()
    {
        return getReplicaId(0);
    }
    ::std::string getReplicaId(const ::Ice::Context& __ctx)
    {
        return getReplicaId(&__ctx);
    }
#ifdef ICE_CPP11
    ::Ice::AsyncResultPtr
    begin_getReplicaId(const ::IceInternal::Function<void (const ::std::string&)>& __response, const ::IceInternal::Function<void (const ::Ice::Exception&)>& __exception = ::IceInternal::Function<void (const ::Ice::Exception&)>(), const ::IceInternal::Function<void (bool)>& __sent = ::IceInternal::Function<void (bool)>())
    {
        return __begin_getReplicaId(0, __response, __exception, __sent);
    }
    ::Ice::AsyncResultPtr
    begin_getReplicaId(const ::IceInternal::Function<void (const ::Ice::AsyncResultPtr&)>& __completed, const ::IceInternal::Function<void (const ::Ice::AsyncResultPtr&)>& __sent = ::IceInternal::Function<void (const ::Ice::AsyncResultPtr&)>())
    {
        return begin_getReplicaId(0, ::Ice::newCallback(__completed, __sent), 0);
    }
    ::Ice::AsyncResultPtr
    begin_getReplicaId(const ::Ice::Context& __ctx, const ::IceInternal::Function<void (const ::std::string&)>& __response, const ::IceInternal::Function<void (const ::Ice::Exception&)>& __exception = ::IceInternal::Function<void (const ::Ice::Exception&)>(), const ::IceInternal::Function<void (bool)>& __sent = ::IceInternal::Function<void (bool)>())
    {
        return __begin_getReplicaId(&__ctx, __response, __exception, __sent);
    }
    ::Ice::AsyncResultPtr
    begin_getReplicaId(const ::Ice::Context& __ctx, const ::IceInternal::Function<void (const ::Ice::AsyncResultPtr&)>& __completed, const ::IceInternal::Function<void (const ::Ice::AsyncResultPtr&)>& __sent = ::IceInternal::Function<void (const ::Ice::AsyncResultPtr&)>())
    {
        return begin_getReplicaId(&__ctx, ::Ice::newCallback(__completed, __sent));
    }
    
private:

    ::Ice::AsyncResultPtr __begin_getReplicaId(const ::Ice::Context* __ctx, const ::IceInternal::Function<void (const ::std::string&)>& __response, const ::IceInternal::Function<void (const ::Ice::Exception&)>& __exception, const ::IceInternal::Function<void (bool)>& __sent)
    {
        class Cpp11CB : public ::IceInternal::Cpp11FnCallbackNC
        {
        public:

            Cpp11CB(const ::std::function<void (const ::std::string&)>& responseFunc, const ::std::function<void (const ::Ice::Exception&)>& exceptionFunc, const ::std::function<void (bool)>& sentFunc) :
                ::IceInternal::Cpp11FnCallbackNC(exceptionFunc, sentFunc),
                _response(responseFunc)
            {
                CallbackBase::checkCallback(true, responseFunc || exceptionFunc != nullptr);
            }

            virtual void __completed(const ::Ice::AsyncResultPtr& __result) const
            {
                ::Test::TestIntfPrx __proxy = ::Test::TestIntfPrx::uncheckedCast(__result->getProxy());
                ::std::string __ret;
                try
                {
                    __ret = __proxy->end_getReplicaId(__result);
                }
                catch(::Ice::Exception& ex)
                {
                    Cpp11FnCallbackNC::__exception(__result, ex);
                    return;
                }
                if(_response != nullptr)
                {
                    _response(__ret);
                }
            }
        
        private:
            
            ::std::function<void (const ::std::string&)> _response;
        };
        return begin_getReplicaId(__ctx, new Cpp11CB(__response, __exception, __sent));
    }
    
public:
#endif

    ::Ice::AsyncResultPtr begin_getReplicaId()
    {
        return begin_getReplicaId(0, ::IceInternal::__dummyCallback, 0);
    }

    ::Ice::AsyncResultPtr begin_getReplicaId(const ::Ice::Context& __ctx)
    {
        return begin_getReplicaId(&__ctx, ::IceInternal::__dummyCallback, 0);
    }

    ::Ice::AsyncResultPtr begin_getReplicaId(const ::Ice::CallbackPtr& __del, const ::Ice::LocalObjectPtr& __cookie = 0)
    {
        return begin_getReplicaId(0, __del, __cookie);
    }

    ::Ice::AsyncResultPtr begin_getReplicaId(const ::Ice::Context& __ctx, const ::Ice::CallbackPtr& __del, const ::Ice::LocalObjectPtr& __cookie = 0)
    {
        return begin_getReplicaId(&__ctx, __del, __cookie);
    }

    ::Ice::AsyncResultPtr begin_getReplicaId(const ::Test::Callback_TestIntf_getReplicaIdPtr& __del, const ::Ice::LocalObjectPtr& __cookie = 0)
    {
        return begin_getReplicaId(0, __del, __cookie);
    }

    ::Ice::AsyncResultPtr begin_getReplicaId(const ::Ice::Context& __ctx, const ::Test::Callback_TestIntf_getReplicaIdPtr& __del, const ::Ice::LocalObjectPtr& __cookie = 0)
    {
        return begin_getReplicaId(&__ctx, __del, __cookie);
    }

    ::std::string end_getReplicaId(const ::Ice::AsyncResultPtr&);
    
private:

    ::std::string getReplicaId(const ::Ice::Context*);
    ::Ice::AsyncResultPtr begin_getReplicaId(const ::Ice::Context*, const ::IceInternal::CallbackBasePtr&, const ::Ice::LocalObjectPtr& __cookie = 0);
    
public:

    ::std::string getReplicaIdAndShutdown()
    {
        return getReplicaIdAndShutdown(0);
    }
    ::std::string getReplicaIdAndShutdown(const ::Ice::Context& __ctx)
    {
        return getReplicaIdAndShutdown(&__ctx);
    }
#ifdef ICE_CPP11
    ::Ice::AsyncResultPtr
    begin_getReplicaIdAndShutdown(const ::IceInternal::Function<void (const ::std::string&)>& __response, const ::IceInternal::Function<void (const ::Ice::Exception&)>& __exception = ::IceInternal::Function<void (const ::Ice::Exception&)>(), const ::IceInternal::Function<void (bool)>& __sent = ::IceInternal::Function<void (bool)>())
    {
        return __begin_getReplicaIdAndShutdown(0, __response, __exception, __sent);
    }
    ::Ice::AsyncResultPtr
    begin_getReplicaIdAndShutdown(const ::IceInternal::Function<void (const ::Ice::AsyncResultPtr&)>& __completed, const ::IceInternal::Function<void (const ::Ice::AsyncResultPtr&)>& __sent = ::IceInternal::Function<void (const ::Ice::AsyncResultPtr&)>())
    {
        return begin_getReplicaIdAndShutdown(0, ::Ice::newCallback(__completed, __sent), 0);
    }
    ::Ice::AsyncResultPtr
    begin_getReplicaIdAndShutdown(const ::Ice::Context& __ctx, const ::IceInternal::Function<void (const ::std::string&)>& __response, const ::IceInternal::Function<void (const ::Ice::Exception&)>& __exception = ::IceInternal::Function<void (const ::Ice::Exception&)>(), const ::IceInternal::Function<void (bool)>& __sent = ::IceInternal::Function<void (bool)>())
    {
        return __begin_getReplicaIdAndShutdown(&__ctx, __response, __exception, __sent);
    }
    ::Ice::AsyncResultPtr
    begin_getReplicaIdAndShutdown(const ::Ice::Context& __ctx, const ::IceInternal::Function<void (const ::Ice::AsyncResultPtr&)>& __completed, const ::IceInternal::Function<void (const ::Ice::AsyncResultPtr&)>& __sent = ::IceInternal::Function<void (const ::Ice::AsyncResultPtr&)>())
    {
        return begin_getReplicaIdAndShutdown(&__ctx, ::Ice::newCallback(__completed, __sent));
    }
    
private:

    ::Ice::AsyncResultPtr __begin_getReplicaIdAndShutdown(const ::Ice::Context* __ctx, const ::IceInternal::Function<void (const ::std::string&)>& __response, const ::IceInternal::Function<void (const ::Ice::Exception&)>& __exception, const ::IceInternal::Function<void (bool)>& __sent)
    {
        class Cpp11CB : public ::IceInternal::Cpp11FnCallbackNC
        {
        public:

            Cpp11CB(const ::std::function<void (const ::std::string&)>& responseFunc, const ::std::function<void (const ::Ice::Exception&)>& exceptionFunc, const ::std::function<void (bool)>& sentFunc) :
                ::IceInternal::Cpp11FnCallbackNC(exceptionFunc, sentFunc),
                _response(responseFunc)
            {
                CallbackBase::checkCallback(true, responseFunc || exceptionFunc != nullptr);
            }

            virtual void __completed(const ::Ice::AsyncResultPtr& __result) const
            {
                ::Test::TestIntfPrx __proxy = ::Test::TestIntfPrx::uncheckedCast(__result->getProxy());
                ::std::string __ret;
                try
                {
                    __ret = __proxy->end_getReplicaIdAndShutdown(__result);
                }
                catch(::Ice::Exception& ex)
                {
                    Cpp11FnCallbackNC::__exception(__result, ex);
                    return;
                }
                if(_response != nullptr)
                {
                    _response(__ret);
                }
            }
        
        private:
            
            ::std::function<void (const ::std::string&)> _response;
        };
        return begin_getReplicaIdAndShutdown(__ctx, new Cpp11CB(__response, __exception, __sent));
    }
    
public:
#endif

    ::Ice::AsyncResultPtr begin_getReplicaIdAndShutdown()
    {
        return begin_getReplicaIdAndShutdown(0, ::IceInternal::__dummyCallback, 0);
    }

    ::Ice::AsyncResultPtr begin_getReplicaIdAndShutdown(const ::Ice::Context& __ctx)
    {
        return begin_getReplicaIdAndShutdown(&__ctx, ::IceInternal::__dummyCallback, 0);
    }

    ::Ice::AsyncResultPtr begin_getReplicaIdAndShutdown(const ::Ice::CallbackPtr& __del, const ::Ice::LocalObjectPtr& __cookie = 0)
    {
        return begin_getReplicaIdAndShutdown(0, __del, __cookie);
    }

    ::Ice::AsyncResultPtr begin_getReplicaIdAndShutdown(const ::Ice::Context& __ctx, const ::Ice::CallbackPtr& __del, const ::Ice::LocalObjectPtr& __cookie = 0)
    {
        return begin_getReplicaIdAndShutdown(&__ctx, __del, __cookie);
    }

    ::Ice::AsyncResultPtr begin_getReplicaIdAndShutdown(const ::Test::Callback_TestIntf_getReplicaIdAndShutdownPtr& __del, const ::Ice::LocalObjectPtr& __cookie = 0)
    {
        return begin_getReplicaIdAndShutdown(0, __del, __cookie);
    }

    ::Ice::AsyncResultPtr begin_getReplicaIdAndShutdown(const ::Ice::Context& __ctx, const ::Test::Callback_TestIntf_getReplicaIdAndShutdownPtr& __del, const ::Ice::LocalObjectPtr& __cookie = 0)
    {
        return begin_getReplicaIdAndShutdown(&__ctx, __del, __cookie);
    }

    ::std::string end_getReplicaIdAndShutdown(const ::Ice::AsyncResultPtr&);
    
private:

    ::std::string getReplicaIdAndShutdown(const ::Ice::Context*);
    ::Ice::AsyncResultPtr begin_getReplicaIdAndShutdown(const ::Ice::Context*, const ::IceInternal::CallbackBasePtr&, const ::Ice::LocalObjectPtr& __cookie = 0);
    
public:
    
    ::IceInternal::ProxyHandle<TestIntf> ice_context(const ::Ice::Context& __context) const
    {
        return dynamic_cast<TestIntf*>(::IceProxy::Ice::Object::ice_context(__context).get());
    }
    
    ::IceInternal::ProxyHandle<TestIntf> ice_adapterId(const ::std::string& __id) const
    {
        return dynamic_cast<TestIntf*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    }
    
    ::IceInternal::ProxyHandle<TestIntf> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
        return dynamic_cast<TestIntf*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    }
    
    ::IceInternal::ProxyHandle<TestIntf> ice_locatorCacheTimeout(int __timeout) const
    {
        return dynamic_cast<TestIntf*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    }
    
    ::IceInternal::ProxyHandle<TestIntf> ice_connectionCached(bool __cached) const
    {
        return dynamic_cast<TestIntf*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    }
    
    ::IceInternal::ProxyHandle<TestIntf> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
        return dynamic_cast<TestIntf*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    }
    
    ::IceInternal::ProxyHandle<TestIntf> ice_secure(bool __secure) const
    {
        return dynamic_cast<TestIntf*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    }
    
    ::IceInternal::ProxyHandle<TestIntf> ice_preferSecure(bool __preferSecure) const
    {
        return dynamic_cast<TestIntf*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    }
    
    ::IceInternal::ProxyHandle<TestIntf> ice_router(const ::Ice::RouterPrx& __router) const
    {
        return dynamic_cast<TestIntf*>(::IceProxy::Ice::Object::ice_router(__router).get());
    }
    
    ::IceInternal::ProxyHandle<TestIntf> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
        return dynamic_cast<TestIntf*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    }
    
    ::IceInternal::ProxyHandle<TestIntf> ice_collocationOptimized(bool __co) const
    {
        return dynamic_cast<TestIntf*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    }
    
    ::IceInternal::ProxyHandle<TestIntf> ice_twoway() const
    {
        return dynamic_cast<TestIntf*>(::IceProxy::Ice::Object::ice_twoway().get());
    }
    
    ::IceInternal::ProxyHandle<TestIntf> ice_oneway() const
    {
        return dynamic_cast<TestIntf*>(::IceProxy::Ice::Object::ice_oneway().get());
    }
    
    ::IceInternal::ProxyHandle<TestIntf> ice_batchOneway() const
    {
        return dynamic_cast<TestIntf*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    }
    
    ::IceInternal::ProxyHandle<TestIntf> ice_datagram() const
    {
        return dynamic_cast<TestIntf*>(::IceProxy::Ice::Object::ice_datagram().get());
    }
    
    ::IceInternal::ProxyHandle<TestIntf> ice_batchDatagram() const
    {
        return dynamic_cast<TestIntf*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    }
    
    ::IceInternal::ProxyHandle<TestIntf> ice_compress(bool __compress) const
    {
        return dynamic_cast<TestIntf*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    }
    
    ::IceInternal::ProxyHandle<TestIntf> ice_timeout(int __timeout) const
    {
        return dynamic_cast<TestIntf*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    }
    
    ::IceInternal::ProxyHandle<TestIntf> ice_connectionId(const ::std::string& __id) const
    {
        return dynamic_cast<TestIntf*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
    }
    
    ::IceInternal::ProxyHandle<TestIntf> ice_encodingVersion(const ::Ice::EncodingVersion& __v) const
    {
        return dynamic_cast<TestIntf*>(::IceProxy::Ice::Object::ice_encodingVersion(__v).get());
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

class TestIntf : virtual public ::IceDelegate::Ice::Object
{
public:

    virtual ::std::string getReplicaId(const ::Ice::Context*, ::IceInternal::InvocationObserver&) = 0;

    virtual ::std::string getReplicaIdAndShutdown(const ::Ice::Context*, ::IceInternal::InvocationObserver&) = 0;
};

}

}

namespace IceDelegateM
{

namespace Test
{

class TestIntf : virtual public ::IceDelegate::Test::TestIntf,
                 virtual public ::IceDelegateM::Ice::Object
{
public:

    virtual ::std::string getReplicaId(const ::Ice::Context*, ::IceInternal::InvocationObserver&);

    virtual ::std::string getReplicaIdAndShutdown(const ::Ice::Context*, ::IceInternal::InvocationObserver&);
};

}

}

namespace IceDelegateD
{

namespace Test
{

class TestIntf : virtual public ::IceDelegate::Test::TestIntf,
                 virtual public ::IceDelegateD::Ice::Object
{
public:

    virtual ::std::string getReplicaId(const ::Ice::Context*, ::IceInternal::InvocationObserver&);

    virtual ::std::string getReplicaIdAndShutdown(const ::Ice::Context*, ::IceInternal::InvocationObserver&);
};

}

}

namespace Test
{

class TestIntf : virtual public ::Ice::Object
{
public:

    typedef TestIntfPrx ProxyType;
    typedef TestIntfPtr PointerType;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual ::std::string getReplicaId(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getReplicaId(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::std::string getReplicaIdAndShutdown(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getReplicaIdAndShutdown(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);

protected:
    virtual void __writeImpl(::IceInternal::BasicStream*) const;
    virtual void __readImpl(::IceInternal::BasicStream*);
    #ifdef __SUNPRO_CC
    using ::Ice::Object::__writeImpl;
    using ::Ice::Object::__readImpl;
    #endif
};

inline bool operator==(const TestIntf& l, const TestIntf& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

inline bool operator<(const TestIntf& l, const TestIntf& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}

}

namespace Test
{

template<class T>
class CallbackNC_TestIntf_getReplicaId : public Callback_TestIntf_getReplicaId_Base, public ::IceInternal::TwowayCallbackNC<T>
{
public:

    typedef IceUtil::Handle<T> TPtr;

    typedef void (T::*Exception)(const ::Ice::Exception&);
    typedef void (T::*Sent)(bool);
    typedef void (T::*Response)(const ::std::string&);

    CallbackNC_TestIntf_getReplicaId(const TPtr& obj, Response cb, Exception excb, Sent sentcb)
        : ::IceInternal::TwowayCallbackNC<T>(obj, cb != 0, excb, sentcb), response(cb)
    {
    }

    virtual void __completed(const ::Ice::AsyncResultPtr& __result) const
    {
        ::Test::TestIntfPrx __proxy = ::Test::TestIntfPrx::uncheckedCast(__result->getProxy());
        ::std::string __ret;
        try
        {
            __ret = __proxy->end_getReplicaId(__result);
        }
        catch(::Ice::Exception& ex)
        {
            ::IceInternal::CallbackNC<T>::__exception(__result, ex);
            return;
        }
        if(response)
        {
            (::IceInternal::CallbackNC<T>::callback.get()->*response)(__ret);
        }
    }

    Response response;
};

template<class T> Callback_TestIntf_getReplicaIdPtr
newCallback_TestIntf_getReplicaId(const IceUtil::Handle<T>& instance, void (T::*cb)(const ::std::string&), void (T::*excb)(const ::Ice::Exception&), void (T::*sentcb)(bool) = 0)
{
    return new CallbackNC_TestIntf_getReplicaId<T>(instance, cb, excb, sentcb);
}

template<class T> Callback_TestIntf_getReplicaIdPtr
newCallback_TestIntf_getReplicaId(T* instance, void (T::*cb)(const ::std::string&), void (T::*excb)(const ::Ice::Exception&), void (T::*sentcb)(bool) = 0)
{
    return new CallbackNC_TestIntf_getReplicaId<T>(instance, cb, excb, sentcb);
}

template<class T, typename CT>
class Callback_TestIntf_getReplicaId : public Callback_TestIntf_getReplicaId_Base, public ::IceInternal::TwowayCallback<T, CT>
{
public:

    typedef IceUtil::Handle<T> TPtr;

    typedef void (T::*Exception)(const ::Ice::Exception& , const CT&);
    typedef void (T::*Sent)(bool , const CT&);
    typedef void (T::*Response)(const ::std::string&, const CT&);

    Callback_TestIntf_getReplicaId(const TPtr& obj, Response cb, Exception excb, Sent sentcb)
        : ::IceInternal::TwowayCallback<T, CT>(obj, cb != 0, excb, sentcb), response(cb)
    {
    }

    virtual void __completed(const ::Ice::AsyncResultPtr& __result) const
    {
        ::Test::TestIntfPrx __proxy = ::Test::TestIntfPrx::uncheckedCast(__result->getProxy());
        ::std::string __ret;
        try
        {
            __ret = __proxy->end_getReplicaId(__result);
        }
        catch(::Ice::Exception& ex)
        {
            ::IceInternal::Callback<T, CT>::__exception(__result, ex);
            return;
        }
        if(response)
        {
            (::IceInternal::Callback<T, CT>::callback.get()->*response)(__ret, CT::dynamicCast(__result->getCookie()));
        }
    }

    Response response;
};

template<class T, typename CT> Callback_TestIntf_getReplicaIdPtr
newCallback_TestIntf_getReplicaId(const IceUtil::Handle<T>& instance, void (T::*cb)(const ::std::string&, const CT&), void (T::*excb)(const ::Ice::Exception&, const CT&), void (T::*sentcb)(bool, const CT&) = 0)
{
    return new Callback_TestIntf_getReplicaId<T, CT>(instance, cb, excb, sentcb);
}

template<class T, typename CT> Callback_TestIntf_getReplicaIdPtr
newCallback_TestIntf_getReplicaId(T* instance, void (T::*cb)(const ::std::string&, const CT&), void (T::*excb)(const ::Ice::Exception&, const CT&), void (T::*sentcb)(bool, const CT&) = 0)
{
    return new Callback_TestIntf_getReplicaId<T, CT>(instance, cb, excb, sentcb);
}

template<class T>
class CallbackNC_TestIntf_getReplicaIdAndShutdown : public Callback_TestIntf_getReplicaIdAndShutdown_Base, public ::IceInternal::TwowayCallbackNC<T>
{
public:

    typedef IceUtil::Handle<T> TPtr;

    typedef void (T::*Exception)(const ::Ice::Exception&);
    typedef void (T::*Sent)(bool);
    typedef void (T::*Response)(const ::std::string&);

    CallbackNC_TestIntf_getReplicaIdAndShutdown(const TPtr& obj, Response cb, Exception excb, Sent sentcb)
        : ::IceInternal::TwowayCallbackNC<T>(obj, cb != 0, excb, sentcb), response(cb)
    {
    }

    virtual void __completed(const ::Ice::AsyncResultPtr& __result) const
    {
        ::Test::TestIntfPrx __proxy = ::Test::TestIntfPrx::uncheckedCast(__result->getProxy());
        ::std::string __ret;
        try
        {
            __ret = __proxy->end_getReplicaIdAndShutdown(__result);
        }
        catch(::Ice::Exception& ex)
        {
            ::IceInternal::CallbackNC<T>::__exception(__result, ex);
            return;
        }
        if(response)
        {
            (::IceInternal::CallbackNC<T>::callback.get()->*response)(__ret);
        }
    }

    Response response;
};

template<class T> Callback_TestIntf_getReplicaIdAndShutdownPtr
newCallback_TestIntf_getReplicaIdAndShutdown(const IceUtil::Handle<T>& instance, void (T::*cb)(const ::std::string&), void (T::*excb)(const ::Ice::Exception&), void (T::*sentcb)(bool) = 0)
{
    return new CallbackNC_TestIntf_getReplicaIdAndShutdown<T>(instance, cb, excb, sentcb);
}

template<class T> Callback_TestIntf_getReplicaIdAndShutdownPtr
newCallback_TestIntf_getReplicaIdAndShutdown(T* instance, void (T::*cb)(const ::std::string&), void (T::*excb)(const ::Ice::Exception&), void (T::*sentcb)(bool) = 0)
{
    return new CallbackNC_TestIntf_getReplicaIdAndShutdown<T>(instance, cb, excb, sentcb);
}

template<class T, typename CT>
class Callback_TestIntf_getReplicaIdAndShutdown : public Callback_TestIntf_getReplicaIdAndShutdown_Base, public ::IceInternal::TwowayCallback<T, CT>
{
public:

    typedef IceUtil::Handle<T> TPtr;

    typedef void (T::*Exception)(const ::Ice::Exception& , const CT&);
    typedef void (T::*Sent)(bool , const CT&);
    typedef void (T::*Response)(const ::std::string&, const CT&);

    Callback_TestIntf_getReplicaIdAndShutdown(const TPtr& obj, Response cb, Exception excb, Sent sentcb)
        : ::IceInternal::TwowayCallback<T, CT>(obj, cb != 0, excb, sentcb), response(cb)
    {
    }

    virtual void __completed(const ::Ice::AsyncResultPtr& __result) const
    {
        ::Test::TestIntfPrx __proxy = ::Test::TestIntfPrx::uncheckedCast(__result->getProxy());
        ::std::string __ret;
        try
        {
            __ret = __proxy->end_getReplicaIdAndShutdown(__result);
        }
        catch(::Ice::Exception& ex)
        {
            ::IceInternal::Callback<T, CT>::__exception(__result, ex);
            return;
        }
        if(response)
        {
            (::IceInternal::Callback<T, CT>::callback.get()->*response)(__ret, CT::dynamicCast(__result->getCookie()));
        }
    }

    Response response;
};

template<class T, typename CT> Callback_TestIntf_getReplicaIdAndShutdownPtr
newCallback_TestIntf_getReplicaIdAndShutdown(const IceUtil::Handle<T>& instance, void (T::*cb)(const ::std::string&, const CT&), void (T::*excb)(const ::Ice::Exception&, const CT&), void (T::*sentcb)(bool, const CT&) = 0)
{
    return new Callback_TestIntf_getReplicaIdAndShutdown<T, CT>(instance, cb, excb, sentcb);
}

template<class T, typename CT> Callback_TestIntf_getReplicaIdAndShutdownPtr
newCallback_TestIntf_getReplicaIdAndShutdown(T* instance, void (T::*cb)(const ::std::string&, const CT&), void (T::*excb)(const ::Ice::Exception&, const CT&), void (T::*sentcb)(bool, const CT&) = 0)
{
    return new Callback_TestIntf_getReplicaIdAndShutdown<T, CT>(instance, cb, excb, sentcb);
}

}

#endif
