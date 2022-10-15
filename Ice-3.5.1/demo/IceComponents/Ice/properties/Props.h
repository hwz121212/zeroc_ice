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
// Generated from file `Props.ice'
//
// Warning: do not edit this file.
//
// </auto-generated>
//

#ifndef __Props_h__
#define __Props_h__

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
#include <Ice/IncomingAsync.h>
#include <Ice/Direct.h>
#include <IceUtil/ScopedArray.h>
#include <IceUtil/Optional.h>
#include <Ice/StreamF.h>
#include <Ice/Properties.h>
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

namespace Demo
{

class Props;
void __read(::IceInternal::BasicStream*, ::IceInternal::ProxyHandle< ::IceProxy::Demo::Props>&);
::IceProxy::Ice::Object* upCast(::IceProxy::Demo::Props*);

}

}

namespace Demo
{

class Props;
bool operator==(const Props&, const Props&);
bool operator<(const Props&, const Props&);
::Ice::Object* upCast(::Demo::Props*);
typedef ::IceInternal::Handle< ::Demo::Props> PropsPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::Demo::Props> PropsPrx;
void __patch(PropsPtr&, const ::Ice::ObjectPtr&);

}

namespace IceAsync
{

}

namespace Demo
{

class Callback_Props_getChanges_Base : virtual public ::IceInternal::CallbackBase { };
typedef ::IceUtil::Handle< Callback_Props_getChanges_Base> Callback_Props_getChangesPtr;

class Callback_Props_shutdown_Base : virtual public ::IceInternal::CallbackBase { };
typedef ::IceUtil::Handle< Callback_Props_shutdown_Base> Callback_Props_shutdownPtr;

}

namespace IceProxy
{

namespace Demo
{

class Props : virtual public ::IceProxy::Ice::Object
{
public:

    ::Ice::PropertyDict getChanges()
    {
        return getChanges(0);
    }
    ::Ice::PropertyDict getChanges(const ::Ice::Context& __ctx)
    {
        return getChanges(&__ctx);
    }
#ifdef ICE_CPP11
    ::Ice::AsyncResultPtr
    begin_getChanges(const ::IceInternal::Function<void (const ::Ice::PropertyDict&)>& __response, const ::IceInternal::Function<void (const ::Ice::Exception&)>& __exception = ::IceInternal::Function<void (const ::Ice::Exception&)>(), const ::IceInternal::Function<void (bool)>& __sent = ::IceInternal::Function<void (bool)>())
    {
        return __begin_getChanges(0, __response, __exception, __sent);
    }
    ::Ice::AsyncResultPtr
    begin_getChanges(const ::IceInternal::Function<void (const ::Ice::AsyncResultPtr&)>& __completed, const ::IceInternal::Function<void (const ::Ice::AsyncResultPtr&)>& __sent = ::IceInternal::Function<void (const ::Ice::AsyncResultPtr&)>())
    {
        return begin_getChanges(0, ::Ice::newCallback(__completed, __sent), 0);
    }
    ::Ice::AsyncResultPtr
    begin_getChanges(const ::Ice::Context& __ctx, const ::IceInternal::Function<void (const ::Ice::PropertyDict&)>& __response, const ::IceInternal::Function<void (const ::Ice::Exception&)>& __exception = ::IceInternal::Function<void (const ::Ice::Exception&)>(), const ::IceInternal::Function<void (bool)>& __sent = ::IceInternal::Function<void (bool)>())
    {
        return __begin_getChanges(&__ctx, __response, __exception, __sent);
    }
    ::Ice::AsyncResultPtr
    begin_getChanges(const ::Ice::Context& __ctx, const ::IceInternal::Function<void (const ::Ice::AsyncResultPtr&)>& __completed, const ::IceInternal::Function<void (const ::Ice::AsyncResultPtr&)>& __sent = ::IceInternal::Function<void (const ::Ice::AsyncResultPtr&)>())
    {
        return begin_getChanges(&__ctx, ::Ice::newCallback(__completed, __sent));
    }
    
private:

    ::Ice::AsyncResultPtr __begin_getChanges(const ::Ice::Context* __ctx, const ::IceInternal::Function<void (const ::Ice::PropertyDict&)>& __response, const ::IceInternal::Function<void (const ::Ice::Exception&)>& __exception, const ::IceInternal::Function<void (bool)>& __sent)
    {
        class Cpp11CB : public ::IceInternal::Cpp11FnCallbackNC
        {
        public:

            Cpp11CB(const ::std::function<void (const ::Ice::PropertyDict&)>& responseFunc, const ::std::function<void (const ::Ice::Exception&)>& exceptionFunc, const ::std::function<void (bool)>& sentFunc) :
                ::IceInternal::Cpp11FnCallbackNC(exceptionFunc, sentFunc),
                _response(responseFunc)
            {
                CallbackBase::checkCallback(true, responseFunc || exceptionFunc != nullptr);
            }

            virtual void __completed(const ::Ice::AsyncResultPtr& __result) const
            {
                ::Demo::PropsPrx __proxy = ::Demo::PropsPrx::uncheckedCast(__result->getProxy());
                ::Ice::PropertyDict __ret;
                try
                {
                    __ret = __proxy->end_getChanges(__result);
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
            
            ::std::function<void (const ::Ice::PropertyDict&)> _response;
        };
        return begin_getChanges(__ctx, new Cpp11CB(__response, __exception, __sent));
    }
    
public:
#endif

    ::Ice::AsyncResultPtr begin_getChanges()
    {
        return begin_getChanges(0, ::IceInternal::__dummyCallback, 0);
    }

    ::Ice::AsyncResultPtr begin_getChanges(const ::Ice::Context& __ctx)
    {
        return begin_getChanges(&__ctx, ::IceInternal::__dummyCallback, 0);
    }

    ::Ice::AsyncResultPtr begin_getChanges(const ::Ice::CallbackPtr& __del, const ::Ice::LocalObjectPtr& __cookie = 0)
    {
        return begin_getChanges(0, __del, __cookie);
    }

    ::Ice::AsyncResultPtr begin_getChanges(const ::Ice::Context& __ctx, const ::Ice::CallbackPtr& __del, const ::Ice::LocalObjectPtr& __cookie = 0)
    {
        return begin_getChanges(&__ctx, __del, __cookie);
    }

    ::Ice::AsyncResultPtr begin_getChanges(const ::Demo::Callback_Props_getChangesPtr& __del, const ::Ice::LocalObjectPtr& __cookie = 0)
    {
        return begin_getChanges(0, __del, __cookie);
    }

    ::Ice::AsyncResultPtr begin_getChanges(const ::Ice::Context& __ctx, const ::Demo::Callback_Props_getChangesPtr& __del, const ::Ice::LocalObjectPtr& __cookie = 0)
    {
        return begin_getChanges(&__ctx, __del, __cookie);
    }

    ::Ice::PropertyDict end_getChanges(const ::Ice::AsyncResultPtr&);
    
private:

    ::Ice::PropertyDict getChanges(const ::Ice::Context*);
    ::Ice::AsyncResultPtr begin_getChanges(const ::Ice::Context*, const ::IceInternal::CallbackBasePtr&, const ::Ice::LocalObjectPtr& __cookie = 0);
    
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

    ::Ice::AsyncResultPtr begin_shutdown(const ::Demo::Callback_Props_shutdownPtr& __del, const ::Ice::LocalObjectPtr& __cookie = 0)
    {
        return begin_shutdown(0, __del, __cookie);
    }

    ::Ice::AsyncResultPtr begin_shutdown(const ::Ice::Context& __ctx, const ::Demo::Callback_Props_shutdownPtr& __del, const ::Ice::LocalObjectPtr& __cookie = 0)
    {
        return begin_shutdown(&__ctx, __del, __cookie);
    }

    void end_shutdown(const ::Ice::AsyncResultPtr&);
    
private:

    void shutdown(const ::Ice::Context*);
    ::Ice::AsyncResultPtr begin_shutdown(const ::Ice::Context*, const ::IceInternal::CallbackBasePtr&, const ::Ice::LocalObjectPtr& __cookie = 0);
    
public:
    
    ::IceInternal::ProxyHandle<Props> ice_context(const ::Ice::Context& __context) const
    {
        return dynamic_cast<Props*>(::IceProxy::Ice::Object::ice_context(__context).get());
    }
    
    ::IceInternal::ProxyHandle<Props> ice_adapterId(const ::std::string& __id) const
    {
        return dynamic_cast<Props*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    }
    
    ::IceInternal::ProxyHandle<Props> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
        return dynamic_cast<Props*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    }
    
    ::IceInternal::ProxyHandle<Props> ice_locatorCacheTimeout(int __timeout) const
    {
        return dynamic_cast<Props*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    }
    
    ::IceInternal::ProxyHandle<Props> ice_connectionCached(bool __cached) const
    {
        return dynamic_cast<Props*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    }
    
    ::IceInternal::ProxyHandle<Props> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
        return dynamic_cast<Props*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    }
    
    ::IceInternal::ProxyHandle<Props> ice_secure(bool __secure) const
    {
        return dynamic_cast<Props*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    }
    
    ::IceInternal::ProxyHandle<Props> ice_preferSecure(bool __preferSecure) const
    {
        return dynamic_cast<Props*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    }
    
    ::IceInternal::ProxyHandle<Props> ice_router(const ::Ice::RouterPrx& __router) const
    {
        return dynamic_cast<Props*>(::IceProxy::Ice::Object::ice_router(__router).get());
    }
    
    ::IceInternal::ProxyHandle<Props> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
        return dynamic_cast<Props*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    }
    
    ::IceInternal::ProxyHandle<Props> ice_collocationOptimized(bool __co) const
    {
        return dynamic_cast<Props*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    }
    
    ::IceInternal::ProxyHandle<Props> ice_twoway() const
    {
        return dynamic_cast<Props*>(::IceProxy::Ice::Object::ice_twoway().get());
    }
    
    ::IceInternal::ProxyHandle<Props> ice_oneway() const
    {
        return dynamic_cast<Props*>(::IceProxy::Ice::Object::ice_oneway().get());
    }
    
    ::IceInternal::ProxyHandle<Props> ice_batchOneway() const
    {
        return dynamic_cast<Props*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    }
    
    ::IceInternal::ProxyHandle<Props> ice_datagram() const
    {
        return dynamic_cast<Props*>(::IceProxy::Ice::Object::ice_datagram().get());
    }
    
    ::IceInternal::ProxyHandle<Props> ice_batchDatagram() const
    {
        return dynamic_cast<Props*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    }
    
    ::IceInternal::ProxyHandle<Props> ice_compress(bool __compress) const
    {
        return dynamic_cast<Props*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    }
    
    ::IceInternal::ProxyHandle<Props> ice_timeout(int __timeout) const
    {
        return dynamic_cast<Props*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    }
    
    ::IceInternal::ProxyHandle<Props> ice_connectionId(const ::std::string& __id) const
    {
        return dynamic_cast<Props*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
    }
    
    ::IceInternal::ProxyHandle<Props> ice_encodingVersion(const ::Ice::EncodingVersion& __v) const
    {
        return dynamic_cast<Props*>(::IceProxy::Ice::Object::ice_encodingVersion(__v).get());
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

namespace Demo
{

class Props : virtual public ::IceDelegate::Ice::Object
{
public:

    virtual ::Ice::PropertyDict getChanges(const ::Ice::Context*, ::IceInternal::InvocationObserver&) = 0;

    virtual void shutdown(const ::Ice::Context*, ::IceInternal::InvocationObserver&) = 0;
};

}

}

namespace IceDelegateM
{

namespace Demo
{

class Props : virtual public ::IceDelegate::Demo::Props,
              virtual public ::IceDelegateM::Ice::Object
{
public:

    virtual ::Ice::PropertyDict getChanges(const ::Ice::Context*, ::IceInternal::InvocationObserver&);

    virtual void shutdown(const ::Ice::Context*, ::IceInternal::InvocationObserver&);
};

}

}

namespace IceDelegateD
{

namespace Demo
{

class Props : virtual public ::IceDelegate::Demo::Props,
              virtual public ::IceDelegateD::Ice::Object
{
public:

    virtual ::Ice::PropertyDict getChanges(const ::Ice::Context*, ::IceInternal::InvocationObserver&);

    virtual void shutdown(const ::Ice::Context*, ::IceInternal::InvocationObserver&);
};

}

}

namespace Demo
{

class Props : virtual public ::Ice::Object
{
public:

    typedef PropsPrx ProxyType;
    typedef PropsPtr PointerType;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual ::Ice::PropertyDict getChanges(const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___getChanges(::IceInternal::Incoming&, const ::Ice::Current&);

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

inline bool operator==(const Props& l, const Props& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

inline bool operator<(const Props& l, const Props& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}

}

namespace Demo
{

template<class T>
class CallbackNC_Props_getChanges : public Callback_Props_getChanges_Base, public ::IceInternal::TwowayCallbackNC<T>
{
public:

    typedef IceUtil::Handle<T> TPtr;

    typedef void (T::*Exception)(const ::Ice::Exception&);
    typedef void (T::*Sent)(bool);
    typedef void (T::*Response)(const ::Ice::PropertyDict&);

    CallbackNC_Props_getChanges(const TPtr& obj, Response cb, Exception excb, Sent sentcb)
        : ::IceInternal::TwowayCallbackNC<T>(obj, cb != 0, excb, sentcb), response(cb)
    {
    }

    virtual void __completed(const ::Ice::AsyncResultPtr& __result) const
    {
        ::Demo::PropsPrx __proxy = ::Demo::PropsPrx::uncheckedCast(__result->getProxy());
        ::Ice::PropertyDict __ret;
        try
        {
            __ret = __proxy->end_getChanges(__result);
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

template<class T> Callback_Props_getChangesPtr
newCallback_Props_getChanges(const IceUtil::Handle<T>& instance, void (T::*cb)(const ::Ice::PropertyDict&), void (T::*excb)(const ::Ice::Exception&), void (T::*sentcb)(bool) = 0)
{
    return new CallbackNC_Props_getChanges<T>(instance, cb, excb, sentcb);
}

template<class T> Callback_Props_getChangesPtr
newCallback_Props_getChanges(T* instance, void (T::*cb)(const ::Ice::PropertyDict&), void (T::*excb)(const ::Ice::Exception&), void (T::*sentcb)(bool) = 0)
{
    return new CallbackNC_Props_getChanges<T>(instance, cb, excb, sentcb);
}

template<class T, typename CT>
class Callback_Props_getChanges : public Callback_Props_getChanges_Base, public ::IceInternal::TwowayCallback<T, CT>
{
public:

    typedef IceUtil::Handle<T> TPtr;

    typedef void (T::*Exception)(const ::Ice::Exception& , const CT&);
    typedef void (T::*Sent)(bool , const CT&);
    typedef void (T::*Response)(const ::Ice::PropertyDict&, const CT&);

    Callback_Props_getChanges(const TPtr& obj, Response cb, Exception excb, Sent sentcb)
        : ::IceInternal::TwowayCallback<T, CT>(obj, cb != 0, excb, sentcb), response(cb)
    {
    }

    virtual void __completed(const ::Ice::AsyncResultPtr& __result) const
    {
        ::Demo::PropsPrx __proxy = ::Demo::PropsPrx::uncheckedCast(__result->getProxy());
        ::Ice::PropertyDict __ret;
        try
        {
            __ret = __proxy->end_getChanges(__result);
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

template<class T, typename CT> Callback_Props_getChangesPtr
newCallback_Props_getChanges(const IceUtil::Handle<T>& instance, void (T::*cb)(const ::Ice::PropertyDict&, const CT&), void (T::*excb)(const ::Ice::Exception&, const CT&), void (T::*sentcb)(bool, const CT&) = 0)
{
    return new Callback_Props_getChanges<T, CT>(instance, cb, excb, sentcb);
}

template<class T, typename CT> Callback_Props_getChangesPtr
newCallback_Props_getChanges(T* instance, void (T::*cb)(const ::Ice::PropertyDict&, const CT&), void (T::*excb)(const ::Ice::Exception&, const CT&), void (T::*sentcb)(bool, const CT&) = 0)
{
    return new Callback_Props_getChanges<T, CT>(instance, cb, excb, sentcb);
}

template<class T>
class CallbackNC_Props_shutdown : public Callback_Props_shutdown_Base, public ::IceInternal::OnewayCallbackNC<T>
{
public:

    typedef IceUtil::Handle<T> TPtr;

    typedef void (T::*Exception)(const ::Ice::Exception&);
    typedef void (T::*Sent)(bool);
    typedef void (T::*Response)();

    CallbackNC_Props_shutdown(const TPtr& obj, Response cb, Exception excb, Sent sentcb)
        : ::IceInternal::OnewayCallbackNC<T>(obj, cb, excb, sentcb)
    {
    }
};

template<class T> Callback_Props_shutdownPtr
newCallback_Props_shutdown(const IceUtil::Handle<T>& instance, void (T::*cb)(), void (T::*excb)(const ::Ice::Exception&), void (T::*sentcb)(bool) = 0)
{
    return new CallbackNC_Props_shutdown<T>(instance, cb, excb, sentcb);
}

template<class T> Callback_Props_shutdownPtr
newCallback_Props_shutdown(const IceUtil::Handle<T>& instance, void (T::*excb)(const ::Ice::Exception&), void (T::*sentcb)(bool) = 0)
{
    return new CallbackNC_Props_shutdown<T>(instance, 0, excb, sentcb);
}

template<class T> Callback_Props_shutdownPtr
newCallback_Props_shutdown(T* instance, void (T::*cb)(), void (T::*excb)(const ::Ice::Exception&), void (T::*sentcb)(bool) = 0)
{
    return new CallbackNC_Props_shutdown<T>(instance, cb, excb, sentcb);
}

template<class T> Callback_Props_shutdownPtr
newCallback_Props_shutdown(T* instance, void (T::*excb)(const ::Ice::Exception&), void (T::*sentcb)(bool) = 0)
{
    return new CallbackNC_Props_shutdown<T>(instance, 0, excb, sentcb);
}

template<class T, typename CT>
class Callback_Props_shutdown : public Callback_Props_shutdown_Base, public ::IceInternal::OnewayCallback<T, CT>
{
public:

    typedef IceUtil::Handle<T> TPtr;

    typedef void (T::*Exception)(const ::Ice::Exception& , const CT&);
    typedef void (T::*Sent)(bool , const CT&);
    typedef void (T::*Response)(const CT&);

    Callback_Props_shutdown(const TPtr& obj, Response cb, Exception excb, Sent sentcb)
        : ::IceInternal::OnewayCallback<T, CT>(obj, cb, excb, sentcb)
    {
    }
};

template<class T, typename CT> Callback_Props_shutdownPtr
newCallback_Props_shutdown(const IceUtil::Handle<T>& instance, void (T::*cb)(const CT&), void (T::*excb)(const ::Ice::Exception&, const CT&), void (T::*sentcb)(bool, const CT&) = 0)
{
    return new Callback_Props_shutdown<T, CT>(instance, cb, excb, sentcb);
}

template<class T, typename CT> Callback_Props_shutdownPtr
newCallback_Props_shutdown(const IceUtil::Handle<T>& instance, void (T::*excb)(const ::Ice::Exception&, const CT&), void (T::*sentcb)(bool, const CT&) = 0)
{
    return new Callback_Props_shutdown<T, CT>(instance, 0, excb, sentcb);
}

template<class T, typename CT> Callback_Props_shutdownPtr
newCallback_Props_shutdown(T* instance, void (T::*cb)(const CT&), void (T::*excb)(const ::Ice::Exception&, const CT&), void (T::*sentcb)(bool, const CT&) = 0)
{
    return new Callback_Props_shutdown<T, CT>(instance, cb, excb, sentcb);
}

template<class T, typename CT> Callback_Props_shutdownPtr
newCallback_Props_shutdown(T* instance, void (T::*excb)(const ::Ice::Exception&, const CT&), void (T::*sentcb)(bool, const CT&) = 0)
{
    return new Callback_Props_shutdown<T, CT>(instance, 0, excb, sentcb);
}

}

#endif