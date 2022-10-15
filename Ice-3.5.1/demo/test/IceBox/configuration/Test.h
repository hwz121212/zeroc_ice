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
#include <Ice/BuiltinSequences.h>
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

class Callback_TestIntf_getProperty_Base : virtual public ::IceInternal::CallbackBase { };
typedef ::IceUtil::Handle< Callback_TestIntf_getProperty_Base> Callback_TestIntf_getPropertyPtr;

class Callback_TestIntf_getArgs_Base : virtual public ::IceInternal::CallbackBase { };
typedef ::IceUtil::Handle< Callback_TestIntf_getArgs_Base> Callback_TestIntf_getArgsPtr;

}

namespace IceProxy
{

namespace Test
{

class TestIntf : virtual public ::IceProxy::Ice::Object
{
public:

    ::std::string getProperty(const ::std::string& name)
    {
        return getProperty(name, 0);
    }
    ::std::string getProperty(const ::std::string& name, const ::Ice::Context& __ctx)
    {
        return getProperty(name, &__ctx);
    }
#ifdef ICE_CPP11
    ::Ice::AsyncResultPtr
    begin_getProperty(const ::std::string& name, const ::IceInternal::Function<void (const ::std::string&)>& __response, const ::IceInternal::Function<void (const ::Ice::Exception&)>& __exception = ::IceInternal::Function<void (const ::Ice::Exception&)>(), const ::IceInternal::Function<void (bool)>& __sent = ::IceInternal::Function<void (bool)>())
    {
        return __begin_getProperty(name, 0, __response, __exception, __sent);
    }
    ::Ice::AsyncResultPtr
    begin_getProperty(const ::std::string& name, const ::IceInternal::Function<void (const ::Ice::AsyncResultPtr&)>& __completed, const ::IceInternal::Function<void (const ::Ice::AsyncResultPtr&)>& __sent = ::IceInternal::Function<void (const ::Ice::AsyncResultPtr&)>())
    {
        return begin_getProperty(name, 0, ::Ice::newCallback(__completed, __sent), 0);
    }
    ::Ice::AsyncResultPtr
    begin_getProperty(const ::std::string& name, const ::Ice::Context& __ctx, const ::IceInternal::Function<void (const ::std::string&)>& __response, const ::IceInternal::Function<void (const ::Ice::Exception&)>& __exception = ::IceInternal::Function<void (const ::Ice::Exception&)>(), const ::IceInternal::Function<void (bool)>& __sent = ::IceInternal::Function<void (bool)>())
    {
        return __begin_getProperty(name, &__ctx, __response, __exception, __sent);
    }
    ::Ice::AsyncResultPtr
    begin_getProperty(const ::std::string& name, const ::Ice::Context& __ctx, const ::IceInternal::Function<void (const ::Ice::AsyncResultPtr&)>& __completed, const ::IceInternal::Function<void (const ::Ice::AsyncResultPtr&)>& __sent = ::IceInternal::Function<void (const ::Ice::AsyncResultPtr&)>())
    {
        return begin_getProperty(name, &__ctx, ::Ice::newCallback(__completed, __sent));
    }
    
private:

    ::Ice::AsyncResultPtr __begin_getProperty(const ::std::string& name, const ::Ice::Context* __ctx, const ::IceInternal::Function<void (const ::std::string&)>& __response, const ::IceInternal::Function<void (const ::Ice::Exception&)>& __exception, const ::IceInternal::Function<void (bool)>& __sent)
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
                    __ret = __proxy->end_getProperty(__result);
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
        return begin_getProperty(name, __ctx, new Cpp11CB(__response, __exception, __sent));
    }
    
public:
#endif

    ::Ice::AsyncResultPtr begin_getProperty(const ::std::string& name)
    {
        return begin_getProperty(name, 0, ::IceInternal::__dummyCallback, 0);
    }

    ::Ice::AsyncResultPtr begin_getProperty(const ::std::string& name, const ::Ice::Context& __ctx)
    {
        return begin_getProperty(name, &__ctx, ::IceInternal::__dummyCallback, 0);
    }

    ::Ice::AsyncResultPtr begin_getProperty(const ::std::string& name, const ::Ice::CallbackPtr& __del, const ::Ice::LocalObjectPtr& __cookie = 0)
    {
        return begin_getProperty(name, 0, __del, __cookie);
    }

    ::Ice::AsyncResultPtr begin_getProperty(const ::std::string& name, const ::Ice::Context& __ctx, const ::Ice::CallbackPtr& __del, const ::Ice::LocalObjectPtr& __cookie = 0)
    {
        return begin_getProperty(name, &__ctx, __del, __cookie);
    }

    ::Ice::AsyncResultPtr begin_getProperty(const ::std::string& name, const ::Test::Callback_TestIntf_getPropertyPtr& __del, const ::Ice::LocalObjectPtr& __cookie = 0)
    {
        return begin_getProperty(name, 0, __del, __cookie);
    }

    ::Ice::AsyncResultPtr begin_getProperty(const ::std::string& name, const ::Ice::Context& __ctx, const ::Test::Callback_TestIntf_getPropertyPtr& __del, const ::Ice::LocalObjectPtr& __cookie = 0)
    {
        return begin_getProperty(name, &__ctx, __del, __cookie);
    }

    ::std::string end_getProperty(const ::Ice::AsyncResultPtr&);
    
private:

    ::std::string getProperty(const ::std::string&, const ::Ice::Context*);
    ::Ice::AsyncResultPtr begin_getProperty(const ::std::string&, const ::Ice::Context*, const ::IceInternal::CallbackBasePtr&, const ::Ice::LocalObjectPtr& __cookie = 0);
    
public:

    ::Ice::StringSeq getArgs()
    {
        return getArgs(0);
    }
    ::Ice::StringSeq getArgs(const ::Ice::Context& __ctx)
    {
        return getArgs(&__ctx);
    }
#ifdef ICE_CPP11
    ::Ice::AsyncResultPtr
    begin_getArgs(const ::IceInternal::Function<void (const ::Ice::StringSeq&)>& __response, const ::IceInternal::Function<void (const ::Ice::Exception&)>& __exception = ::IceInternal::Function<void (const ::Ice::Exception&)>(), const ::IceInternal::Function<void (bool)>& __sent = ::IceInternal::Function<void (bool)>())
    {
        return __begin_getArgs(0, __response, __exception, __sent);
    }
    ::Ice::AsyncResultPtr
    begin_getArgs(const ::IceInternal::Function<void (const ::Ice::AsyncResultPtr&)>& __completed, const ::IceInternal::Function<void (const ::Ice::AsyncResultPtr&)>& __sent = ::IceInternal::Function<void (const ::Ice::AsyncResultPtr&)>())
    {
        return begin_getArgs(0, ::Ice::newCallback(__completed, __sent), 0);
    }
    ::Ice::AsyncResultPtr
    begin_getArgs(const ::Ice::Context& __ctx, const ::IceInternal::Function<void (const ::Ice::StringSeq&)>& __response, const ::IceInternal::Function<void (const ::Ice::Exception&)>& __exception = ::IceInternal::Function<void (const ::Ice::Exception&)>(), const ::IceInternal::Function<void (bool)>& __sent = ::IceInternal::Function<void (bool)>())
    {
        return __begin_getArgs(&__ctx, __response, __exception, __sent);
    }
    ::Ice::AsyncResultPtr
    begin_getArgs(const ::Ice::Context& __ctx, const ::IceInternal::Function<void (const ::Ice::AsyncResultPtr&)>& __completed, const ::IceInternal::Function<void (const ::Ice::AsyncResultPtr&)>& __sent = ::IceInternal::Function<void (const ::Ice::AsyncResultPtr&)>())
    {
        return begin_getArgs(&__ctx, ::Ice::newCallback(__completed, __sent));
    }
    
private:

    ::Ice::AsyncResultPtr __begin_getArgs(const ::Ice::Context* __ctx, const ::IceInternal::Function<void (const ::Ice::StringSeq&)>& __response, const ::IceInternal::Function<void (const ::Ice::Exception&)>& __exception, const ::IceInternal::Function<void (bool)>& __sent)
    {
        class Cpp11CB : public ::IceInternal::Cpp11FnCallbackNC
        {
        public:

            Cpp11CB(const ::std::function<void (const ::Ice::StringSeq&)>& responseFunc, const ::std::function<void (const ::Ice::Exception&)>& exceptionFunc, const ::std::function<void (bool)>& sentFunc) :
                ::IceInternal::Cpp11FnCallbackNC(exceptionFunc, sentFunc),
                _response(responseFunc)
            {
                CallbackBase::checkCallback(true, responseFunc || exceptionFunc != nullptr);
            }

            virtual void __completed(const ::Ice::AsyncResultPtr& __result) const
            {
                ::Test::TestIntfPrx __proxy = ::Test::TestIntfPrx::uncheckedCast(__result->getProxy());
                ::Ice::StringSeq __ret;
                try
                {
                    __ret = __proxy->end_getArgs(__result);
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
            
            ::std::function<void (const ::Ice::StringSeq&)> _response;
        };
        return begin_getArgs(__ctx, new Cpp11CB(__response, __exception, __sent));
    }
    
public:
#endif

    ::Ice::AsyncResultPtr begin_getArgs()
    {
        return begin_getArgs(0, ::IceInternal::__dummyCallback, 0);
    }

    ::Ice::AsyncResultPtr begin_getArgs(const ::Ice::Context& __ctx)
    {
        return begin_getArgs(&__ctx, ::IceInternal::__dummyCallback, 0);
    }

    ::Ice::AsyncResultPtr begin_getArgs(const ::Ice::CallbackPtr& __del, const ::Ice::LocalObjectPtr& __cookie = 0)
    {
        return begin_getArgs(0, __del, __cookie);
    }

    ::Ice::AsyncResultPtr begin_getArgs(const ::Ice::Context& __ctx, const ::Ice::CallbackPtr& __del, const ::Ice::LocalObjectPtr& __cookie = 0)
    {
        return begin_getArgs(&__ctx, __del, __cookie);
    }

    ::Ice::AsyncResultPtr begin_getArgs(const ::Test::Callback_TestIntf_getArgsPtr& __del, const ::Ice::LocalObjectPtr& __cookie = 0)
    {
        return begin_getArgs(0, __del, __cookie);
    }

    ::Ice::AsyncResultPtr begin_getArgs(const ::Ice::Context& __ctx, const ::Test::Callback_TestIntf_getArgsPtr& __del, const ::Ice::LocalObjectPtr& __cookie = 0)
    {
        return begin_getArgs(&__ctx, __del, __cookie);
    }

    ::Ice::StringSeq end_getArgs(const ::Ice::AsyncResultPtr&);
    
private:

    ::Ice::StringSeq getArgs(const ::Ice::Context*);
    ::Ice::AsyncResultPtr begin_getArgs(const ::Ice::Context*, const ::IceInternal::CallbackBasePtr&, const ::Ice::LocalObjectPtr& __cookie = 0);
    
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

    virtual ::std::string getProperty(const ::std::string&, const ::Ice::Context*, ::IceInternal::InvocationObserver&) = 0;

    virtual ::Ice::StringSeq getArgs(const ::Ice::Context*, ::IceInternal::InvocationObserver&) = 0;
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

    virtual ::std::string getProperty(const ::std::string&, const ::Ice::Context*, ::IceInternal::InvocationObserver&);

    virtual ::Ice::StringSeq getArgs(const ::Ice::Context*, ::IceInternal::InvocationObserver&);
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

    virtual ::std::string getProperty(const ::std::string&, const ::Ice::Context*, ::IceInternal::InvocationObserver&);

    virtual ::Ice::StringSeq getArgs(const ::Ice::Context*, ::IceInternal::InvocationObserver&);
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

    virtual ::std::string getProperty(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getProperty(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::StringSeq getArgs(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getArgs(::IceInternal::Incoming&, const ::Ice::Current&);

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
class CallbackNC_TestIntf_getProperty : public Callback_TestIntf_getProperty_Base, public ::IceInternal::TwowayCallbackNC<T>
{
public:

    typedef IceUtil::Handle<T> TPtr;

    typedef void (T::*Exception)(const ::Ice::Exception&);
    typedef void (T::*Sent)(bool);
    typedef void (T::*Response)(const ::std::string&);

    CallbackNC_TestIntf_getProperty(const TPtr& obj, Response cb, Exception excb, Sent sentcb)
        : ::IceInternal::TwowayCallbackNC<T>(obj, cb != 0, excb, sentcb), response(cb)
    {
    }

    virtual void __completed(const ::Ice::AsyncResultPtr& __result) const
    {
        ::Test::TestIntfPrx __proxy = ::Test::TestIntfPrx::uncheckedCast(__result->getProxy());
        ::std::string __ret;
        try
        {
            __ret = __proxy->end_getProperty(__result);
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

template<class T> Callback_TestIntf_getPropertyPtr
newCallback_TestIntf_getProperty(const IceUtil::Handle<T>& instance, void (T::*cb)(const ::std::string&), void (T::*excb)(const ::Ice::Exception&), void (T::*sentcb)(bool) = 0)
{
    return new CallbackNC_TestIntf_getProperty<T>(instance, cb, excb, sentcb);
}

template<class T> Callback_TestIntf_getPropertyPtr
newCallback_TestIntf_getProperty(T* instance, void (T::*cb)(const ::std::string&), void (T::*excb)(const ::Ice::Exception&), void (T::*sentcb)(bool) = 0)
{
    return new CallbackNC_TestIntf_getProperty<T>(instance, cb, excb, sentcb);
}

template<class T, typename CT>
class Callback_TestIntf_getProperty : public Callback_TestIntf_getProperty_Base, public ::IceInternal::TwowayCallback<T, CT>
{
public:

    typedef IceUtil::Handle<T> TPtr;

    typedef void (T::*Exception)(const ::Ice::Exception& , const CT&);
    typedef void (T::*Sent)(bool , const CT&);
    typedef void (T::*Response)(const ::std::string&, const CT&);

    Callback_TestIntf_getProperty(const TPtr& obj, Response cb, Exception excb, Sent sentcb)
        : ::IceInternal::TwowayCallback<T, CT>(obj, cb != 0, excb, sentcb), response(cb)
    {
    }

    virtual void __completed(const ::Ice::AsyncResultPtr& __result) const
    {
        ::Test::TestIntfPrx __proxy = ::Test::TestIntfPrx::uncheckedCast(__result->getProxy());
        ::std::string __ret;
        try
        {
            __ret = __proxy->end_getProperty(__result);
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

template<class T, typename CT> Callback_TestIntf_getPropertyPtr
newCallback_TestIntf_getProperty(const IceUtil::Handle<T>& instance, void (T::*cb)(const ::std::string&, const CT&), void (T::*excb)(const ::Ice::Exception&, const CT&), void (T::*sentcb)(bool, const CT&) = 0)
{
    return new Callback_TestIntf_getProperty<T, CT>(instance, cb, excb, sentcb);
}

template<class T, typename CT> Callback_TestIntf_getPropertyPtr
newCallback_TestIntf_getProperty(T* instance, void (T::*cb)(const ::std::string&, const CT&), void (T::*excb)(const ::Ice::Exception&, const CT&), void (T::*sentcb)(bool, const CT&) = 0)
{
    return new Callback_TestIntf_getProperty<T, CT>(instance, cb, excb, sentcb);
}

template<class T>
class CallbackNC_TestIntf_getArgs : public Callback_TestIntf_getArgs_Base, public ::IceInternal::TwowayCallbackNC<T>
{
public:

    typedef IceUtil::Handle<T> TPtr;

    typedef void (T::*Exception)(const ::Ice::Exception&);
    typedef void (T::*Sent)(bool);
    typedef void (T::*Response)(const ::Ice::StringSeq&);

    CallbackNC_TestIntf_getArgs(const TPtr& obj, Response cb, Exception excb, Sent sentcb)
        : ::IceInternal::TwowayCallbackNC<T>(obj, cb != 0, excb, sentcb), response(cb)
    {
    }

    virtual void __completed(const ::Ice::AsyncResultPtr& __result) const
    {
        ::Test::TestIntfPrx __proxy = ::Test::TestIntfPrx::uncheckedCast(__result->getProxy());
        ::Ice::StringSeq __ret;
        try
        {
            __ret = __proxy->end_getArgs(__result);
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

template<class T> Callback_TestIntf_getArgsPtr
newCallback_TestIntf_getArgs(const IceUtil::Handle<T>& instance, void (T::*cb)(const ::Ice::StringSeq&), void (T::*excb)(const ::Ice::Exception&), void (T::*sentcb)(bool) = 0)
{
    return new CallbackNC_TestIntf_getArgs<T>(instance, cb, excb, sentcb);
}

template<class T> Callback_TestIntf_getArgsPtr
newCallback_TestIntf_getArgs(T* instance, void (T::*cb)(const ::Ice::StringSeq&), void (T::*excb)(const ::Ice::Exception&), void (T::*sentcb)(bool) = 0)
{
    return new CallbackNC_TestIntf_getArgs<T>(instance, cb, excb, sentcb);
}

template<class T, typename CT>
class Callback_TestIntf_getArgs : public Callback_TestIntf_getArgs_Base, public ::IceInternal::TwowayCallback<T, CT>
{
public:

    typedef IceUtil::Handle<T> TPtr;

    typedef void (T::*Exception)(const ::Ice::Exception& , const CT&);
    typedef void (T::*Sent)(bool , const CT&);
    typedef void (T::*Response)(const ::Ice::StringSeq&, const CT&);

    Callback_TestIntf_getArgs(const TPtr& obj, Response cb, Exception excb, Sent sentcb)
        : ::IceInternal::TwowayCallback<T, CT>(obj, cb != 0, excb, sentcb), response(cb)
    {
    }

    virtual void __completed(const ::Ice::AsyncResultPtr& __result) const
    {
        ::Test::TestIntfPrx __proxy = ::Test::TestIntfPrx::uncheckedCast(__result->getProxy());
        ::Ice::StringSeq __ret;
        try
        {
            __ret = __proxy->end_getArgs(__result);
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

template<class T, typename CT> Callback_TestIntf_getArgsPtr
newCallback_TestIntf_getArgs(const IceUtil::Handle<T>& instance, void (T::*cb)(const ::Ice::StringSeq&, const CT&), void (T::*excb)(const ::Ice::Exception&, const CT&), void (T::*sentcb)(bool, const CT&) = 0)
{
    return new Callback_TestIntf_getArgs<T, CT>(instance, cb, excb, sentcb);
}

template<class T, typename CT> Callback_TestIntf_getArgsPtr
newCallback_TestIntf_getArgs(T* instance, void (T::*cb)(const ::Ice::StringSeq&, const CT&), void (T::*excb)(const ::Ice::Exception&, const CT&), void (T::*sentcb)(bool, const CT&) = 0)
{
    return new Callback_TestIntf_getArgs<T, CT>(instance, cb, excb, sentcb);
}

}

#endif
