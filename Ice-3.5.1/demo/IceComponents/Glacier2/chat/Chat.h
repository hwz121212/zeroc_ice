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
// Generated from file `Chat.ice'
//
// Warning: do not edit this file.
//
// </auto-generated>
//

#ifndef __Chat_h__
#define __Chat_h__

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
#include <Glacier2/Session.h>
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

class ChatCallback;
void __read(::IceInternal::BasicStream*, ::IceInternal::ProxyHandle< ::IceProxy::Demo::ChatCallback>&);
::IceProxy::Ice::Object* upCast(::IceProxy::Demo::ChatCallback*);

class ChatSession;
void __read(::IceInternal::BasicStream*, ::IceInternal::ProxyHandle< ::IceProxy::Demo::ChatSession>&);
::IceProxy::Ice::Object* upCast(::IceProxy::Demo::ChatSession*);

}

}

namespace Demo
{

class ChatCallback;
bool operator==(const ChatCallback&, const ChatCallback&);
bool operator<(const ChatCallback&, const ChatCallback&);
::Ice::Object* upCast(::Demo::ChatCallback*);
typedef ::IceInternal::Handle< ::Demo::ChatCallback> ChatCallbackPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::Demo::ChatCallback> ChatCallbackPrx;
void __patch(ChatCallbackPtr&, const ::Ice::ObjectPtr&);

class ChatSession;
bool operator==(const ChatSession&, const ChatSession&);
bool operator<(const ChatSession&, const ChatSession&);
::Ice::Object* upCast(::Demo::ChatSession*);
typedef ::IceInternal::Handle< ::Demo::ChatSession> ChatSessionPtr;
typedef ::IceInternal::ProxyHandle< ::IceProxy::Demo::ChatSession> ChatSessionPrx;
void __patch(ChatSessionPtr&, const ::Ice::ObjectPtr&);

}

namespace Demo
{

class Callback_ChatCallback_message_Base : virtual public ::IceInternal::CallbackBase { };
typedef ::IceUtil::Handle< Callback_ChatCallback_message_Base> Callback_ChatCallback_messagePtr;

class Callback_ChatSession_setCallback_Base : virtual public ::IceInternal::CallbackBase { };
typedef ::IceUtil::Handle< Callback_ChatSession_setCallback_Base> Callback_ChatSession_setCallbackPtr;

class Callback_ChatSession_say_Base : virtual public ::IceInternal::CallbackBase { };
typedef ::IceUtil::Handle< Callback_ChatSession_say_Base> Callback_ChatSession_sayPtr;

}

namespace IceProxy
{

namespace Demo
{

class ChatCallback : virtual public ::IceProxy::Ice::Object
{
public:

    void message(const ::std::string& data)
    {
        message(data, 0);
    }
    void message(const ::std::string& data, const ::Ice::Context& __ctx)
    {
        message(data, &__ctx);
    }
#ifdef ICE_CPP11
    ::Ice::AsyncResultPtr
    begin_message(const ::std::string& data, const ::IceInternal::Function<void ()>& __response, const ::IceInternal::Function<void (const ::Ice::Exception&)>& __exception = ::IceInternal::Function<void (const ::Ice::Exception&)>(), const ::IceInternal::Function<void (bool)>& __sent = ::IceInternal::Function<void (bool)>())
    {
        return begin_message(data, 0, new ::IceInternal::Cpp11FnOnewayCallbackNC(__response, __exception, __sent));
    }
    ::Ice::AsyncResultPtr
    begin_message(const ::std::string& data, const ::IceInternal::Function<void (const ::Ice::AsyncResultPtr&)>& __completed, const ::IceInternal::Function<void (const ::Ice::AsyncResultPtr&)>& __sent = ::IceInternal::Function<void (const ::Ice::AsyncResultPtr&)>())
    {
        return begin_message(data, 0, ::Ice::newCallback(__completed, __sent), 0);
    }
    ::Ice::AsyncResultPtr
    begin_message(const ::std::string& data, const ::Ice::Context& __ctx, const ::IceInternal::Function<void ()>& __response, const ::IceInternal::Function<void (const ::Ice::Exception&)>& __exception = ::IceInternal::Function<void (const ::Ice::Exception&)>(), const ::IceInternal::Function<void (bool)>& __sent = ::IceInternal::Function<void (bool)>())
    {
        return begin_message(data, &__ctx, new ::IceInternal::Cpp11FnOnewayCallbackNC(__response, __exception, __sent), 0);
    }
    ::Ice::AsyncResultPtr
    begin_message(const ::std::string& data, const ::Ice::Context& __ctx, const ::IceInternal::Function<void (const ::Ice::AsyncResultPtr&)>& __completed, const ::IceInternal::Function<void (const ::Ice::AsyncResultPtr&)>& __sent = ::IceInternal::Function<void (const ::Ice::AsyncResultPtr&)>())
    {
        return begin_message(data, &__ctx, ::Ice::newCallback(__completed, __sent));
    }
#endif

    ::Ice::AsyncResultPtr begin_message(const ::std::string& data)
    {
        return begin_message(data, 0, ::IceInternal::__dummyCallback, 0);
    }

    ::Ice::AsyncResultPtr begin_message(const ::std::string& data, const ::Ice::Context& __ctx)
    {
        return begin_message(data, &__ctx, ::IceInternal::__dummyCallback, 0);
    }

    ::Ice::AsyncResultPtr begin_message(const ::std::string& data, const ::Ice::CallbackPtr& __del, const ::Ice::LocalObjectPtr& __cookie = 0)
    {
        return begin_message(data, 0, __del, __cookie);
    }

    ::Ice::AsyncResultPtr begin_message(const ::std::string& data, const ::Ice::Context& __ctx, const ::Ice::CallbackPtr& __del, const ::Ice::LocalObjectPtr& __cookie = 0)
    {
        return begin_message(data, &__ctx, __del, __cookie);
    }

    ::Ice::AsyncResultPtr begin_message(const ::std::string& data, const ::Demo::Callback_ChatCallback_messagePtr& __del, const ::Ice::LocalObjectPtr& __cookie = 0)
    {
        return begin_message(data, 0, __del, __cookie);
    }

    ::Ice::AsyncResultPtr begin_message(const ::std::string& data, const ::Ice::Context& __ctx, const ::Demo::Callback_ChatCallback_messagePtr& __del, const ::Ice::LocalObjectPtr& __cookie = 0)
    {
        return begin_message(data, &__ctx, __del, __cookie);
    }

    void end_message(const ::Ice::AsyncResultPtr&);
    
private:

    void message(const ::std::string&, const ::Ice::Context*);
    ::Ice::AsyncResultPtr begin_message(const ::std::string&, const ::Ice::Context*, const ::IceInternal::CallbackBasePtr&, const ::Ice::LocalObjectPtr& __cookie = 0);
    
public:
    
    ::IceInternal::ProxyHandle<ChatCallback> ice_context(const ::Ice::Context& __context) const
    {
        return dynamic_cast<ChatCallback*>(::IceProxy::Ice::Object::ice_context(__context).get());
    }
    
    ::IceInternal::ProxyHandle<ChatCallback> ice_adapterId(const ::std::string& __id) const
    {
        return dynamic_cast<ChatCallback*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    }
    
    ::IceInternal::ProxyHandle<ChatCallback> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
        return dynamic_cast<ChatCallback*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    }
    
    ::IceInternal::ProxyHandle<ChatCallback> ice_locatorCacheTimeout(int __timeout) const
    {
        return dynamic_cast<ChatCallback*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    }
    
    ::IceInternal::ProxyHandle<ChatCallback> ice_connectionCached(bool __cached) const
    {
        return dynamic_cast<ChatCallback*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    }
    
    ::IceInternal::ProxyHandle<ChatCallback> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
        return dynamic_cast<ChatCallback*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    }
    
    ::IceInternal::ProxyHandle<ChatCallback> ice_secure(bool __secure) const
    {
        return dynamic_cast<ChatCallback*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    }
    
    ::IceInternal::ProxyHandle<ChatCallback> ice_preferSecure(bool __preferSecure) const
    {
        return dynamic_cast<ChatCallback*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    }
    
    ::IceInternal::ProxyHandle<ChatCallback> ice_router(const ::Ice::RouterPrx& __router) const
    {
        return dynamic_cast<ChatCallback*>(::IceProxy::Ice::Object::ice_router(__router).get());
    }
    
    ::IceInternal::ProxyHandle<ChatCallback> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
        return dynamic_cast<ChatCallback*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    }
    
    ::IceInternal::ProxyHandle<ChatCallback> ice_collocationOptimized(bool __co) const
    {
        return dynamic_cast<ChatCallback*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    }
    
    ::IceInternal::ProxyHandle<ChatCallback> ice_twoway() const
    {
        return dynamic_cast<ChatCallback*>(::IceProxy::Ice::Object::ice_twoway().get());
    }
    
    ::IceInternal::ProxyHandle<ChatCallback> ice_oneway() const
    {
        return dynamic_cast<ChatCallback*>(::IceProxy::Ice::Object::ice_oneway().get());
    }
    
    ::IceInternal::ProxyHandle<ChatCallback> ice_batchOneway() const
    {
        return dynamic_cast<ChatCallback*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    }
    
    ::IceInternal::ProxyHandle<ChatCallback> ice_datagram() const
    {
        return dynamic_cast<ChatCallback*>(::IceProxy::Ice::Object::ice_datagram().get());
    }
    
    ::IceInternal::ProxyHandle<ChatCallback> ice_batchDatagram() const
    {
        return dynamic_cast<ChatCallback*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    }
    
    ::IceInternal::ProxyHandle<ChatCallback> ice_compress(bool __compress) const
    {
        return dynamic_cast<ChatCallback*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    }
    
    ::IceInternal::ProxyHandle<ChatCallback> ice_timeout(int __timeout) const
    {
        return dynamic_cast<ChatCallback*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    }
    
    ::IceInternal::ProxyHandle<ChatCallback> ice_connectionId(const ::std::string& __id) const
    {
        return dynamic_cast<ChatCallback*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
    }
    
    ::IceInternal::ProxyHandle<ChatCallback> ice_encodingVersion(const ::Ice::EncodingVersion& __v) const
    {
        return dynamic_cast<ChatCallback*>(::IceProxy::Ice::Object::ice_encodingVersion(__v).get());
    }
    
    static const ::std::string& ice_staticId();

private: 

    virtual ::IceInternal::Handle< ::IceDelegateM::Ice::Object> __createDelegateM();
    virtual ::IceInternal::Handle< ::IceDelegateD::Ice::Object> __createDelegateD();
    virtual ::IceProxy::Ice::Object* __newInstance() const;
};

class ChatSession : virtual public ::IceProxy::Glacier2::Session
{
public:

    void setCallback(const ::Demo::ChatCallbackPrx& callback)
    {
        setCallback(callback, 0);
    }
    void setCallback(const ::Demo::ChatCallbackPrx& callback, const ::Ice::Context& __ctx)
    {
        setCallback(callback, &__ctx);
    }
#ifdef ICE_CPP11
    ::Ice::AsyncResultPtr
    begin_setCallback(const ::Demo::ChatCallbackPrx& callback, const ::IceInternal::Function<void ()>& __response, const ::IceInternal::Function<void (const ::Ice::Exception&)>& __exception = ::IceInternal::Function<void (const ::Ice::Exception&)>(), const ::IceInternal::Function<void (bool)>& __sent = ::IceInternal::Function<void (bool)>())
    {
        return begin_setCallback(callback, 0, new ::IceInternal::Cpp11FnOnewayCallbackNC(__response, __exception, __sent));
    }
    ::Ice::AsyncResultPtr
    begin_setCallback(const ::Demo::ChatCallbackPrx& callback, const ::IceInternal::Function<void (const ::Ice::AsyncResultPtr&)>& __completed, const ::IceInternal::Function<void (const ::Ice::AsyncResultPtr&)>& __sent = ::IceInternal::Function<void (const ::Ice::AsyncResultPtr&)>())
    {
        return begin_setCallback(callback, 0, ::Ice::newCallback(__completed, __sent), 0);
    }
    ::Ice::AsyncResultPtr
    begin_setCallback(const ::Demo::ChatCallbackPrx& callback, const ::Ice::Context& __ctx, const ::IceInternal::Function<void ()>& __response, const ::IceInternal::Function<void (const ::Ice::Exception&)>& __exception = ::IceInternal::Function<void (const ::Ice::Exception&)>(), const ::IceInternal::Function<void (bool)>& __sent = ::IceInternal::Function<void (bool)>())
    {
        return begin_setCallback(callback, &__ctx, new ::IceInternal::Cpp11FnOnewayCallbackNC(__response, __exception, __sent), 0);
    }
    ::Ice::AsyncResultPtr
    begin_setCallback(const ::Demo::ChatCallbackPrx& callback, const ::Ice::Context& __ctx, const ::IceInternal::Function<void (const ::Ice::AsyncResultPtr&)>& __completed, const ::IceInternal::Function<void (const ::Ice::AsyncResultPtr&)>& __sent = ::IceInternal::Function<void (const ::Ice::AsyncResultPtr&)>())
    {
        return begin_setCallback(callback, &__ctx, ::Ice::newCallback(__completed, __sent));
    }
#endif

    ::Ice::AsyncResultPtr begin_setCallback(const ::Demo::ChatCallbackPrx& callback)
    {
        return begin_setCallback(callback, 0, ::IceInternal::__dummyCallback, 0);
    }

    ::Ice::AsyncResultPtr begin_setCallback(const ::Demo::ChatCallbackPrx& callback, const ::Ice::Context& __ctx)
    {
        return begin_setCallback(callback, &__ctx, ::IceInternal::__dummyCallback, 0);
    }

    ::Ice::AsyncResultPtr begin_setCallback(const ::Demo::ChatCallbackPrx& callback, const ::Ice::CallbackPtr& __del, const ::Ice::LocalObjectPtr& __cookie = 0)
    {
        return begin_setCallback(callback, 0, __del, __cookie);
    }

    ::Ice::AsyncResultPtr begin_setCallback(const ::Demo::ChatCallbackPrx& callback, const ::Ice::Context& __ctx, const ::Ice::CallbackPtr& __del, const ::Ice::LocalObjectPtr& __cookie = 0)
    {
        return begin_setCallback(callback, &__ctx, __del, __cookie);
    }

    ::Ice::AsyncResultPtr begin_setCallback(const ::Demo::ChatCallbackPrx& callback, const ::Demo::Callback_ChatSession_setCallbackPtr& __del, const ::Ice::LocalObjectPtr& __cookie = 0)
    {
        return begin_setCallback(callback, 0, __del, __cookie);
    }

    ::Ice::AsyncResultPtr begin_setCallback(const ::Demo::ChatCallbackPrx& callback, const ::Ice::Context& __ctx, const ::Demo::Callback_ChatSession_setCallbackPtr& __del, const ::Ice::LocalObjectPtr& __cookie = 0)
    {
        return begin_setCallback(callback, &__ctx, __del, __cookie);
    }

    void end_setCallback(const ::Ice::AsyncResultPtr&);
    
private:

    void setCallback(const ::Demo::ChatCallbackPrx&, const ::Ice::Context*);
    ::Ice::AsyncResultPtr begin_setCallback(const ::Demo::ChatCallbackPrx&, const ::Ice::Context*, const ::IceInternal::CallbackBasePtr&, const ::Ice::LocalObjectPtr& __cookie = 0);
    
public:

    void say(const ::std::string& data)
    {
        say(data, 0);
    }
    void say(const ::std::string& data, const ::Ice::Context& __ctx)
    {
        say(data, &__ctx);
    }
#ifdef ICE_CPP11
    ::Ice::AsyncResultPtr
    begin_say(const ::std::string& data, const ::IceInternal::Function<void ()>& __response, const ::IceInternal::Function<void (const ::Ice::Exception&)>& __exception = ::IceInternal::Function<void (const ::Ice::Exception&)>(), const ::IceInternal::Function<void (bool)>& __sent = ::IceInternal::Function<void (bool)>())
    {
        return begin_say(data, 0, new ::IceInternal::Cpp11FnOnewayCallbackNC(__response, __exception, __sent));
    }
    ::Ice::AsyncResultPtr
    begin_say(const ::std::string& data, const ::IceInternal::Function<void (const ::Ice::AsyncResultPtr&)>& __completed, const ::IceInternal::Function<void (const ::Ice::AsyncResultPtr&)>& __sent = ::IceInternal::Function<void (const ::Ice::AsyncResultPtr&)>())
    {
        return begin_say(data, 0, ::Ice::newCallback(__completed, __sent), 0);
    }
    ::Ice::AsyncResultPtr
    begin_say(const ::std::string& data, const ::Ice::Context& __ctx, const ::IceInternal::Function<void ()>& __response, const ::IceInternal::Function<void (const ::Ice::Exception&)>& __exception = ::IceInternal::Function<void (const ::Ice::Exception&)>(), const ::IceInternal::Function<void (bool)>& __sent = ::IceInternal::Function<void (bool)>())
    {
        return begin_say(data, &__ctx, new ::IceInternal::Cpp11FnOnewayCallbackNC(__response, __exception, __sent), 0);
    }
    ::Ice::AsyncResultPtr
    begin_say(const ::std::string& data, const ::Ice::Context& __ctx, const ::IceInternal::Function<void (const ::Ice::AsyncResultPtr&)>& __completed, const ::IceInternal::Function<void (const ::Ice::AsyncResultPtr&)>& __sent = ::IceInternal::Function<void (const ::Ice::AsyncResultPtr&)>())
    {
        return begin_say(data, &__ctx, ::Ice::newCallback(__completed, __sent));
    }
#endif

    ::Ice::AsyncResultPtr begin_say(const ::std::string& data)
    {
        return begin_say(data, 0, ::IceInternal::__dummyCallback, 0);
    }

    ::Ice::AsyncResultPtr begin_say(const ::std::string& data, const ::Ice::Context& __ctx)
    {
        return begin_say(data, &__ctx, ::IceInternal::__dummyCallback, 0);
    }

    ::Ice::AsyncResultPtr begin_say(const ::std::string& data, const ::Ice::CallbackPtr& __del, const ::Ice::LocalObjectPtr& __cookie = 0)
    {
        return begin_say(data, 0, __del, __cookie);
    }

    ::Ice::AsyncResultPtr begin_say(const ::std::string& data, const ::Ice::Context& __ctx, const ::Ice::CallbackPtr& __del, const ::Ice::LocalObjectPtr& __cookie = 0)
    {
        return begin_say(data, &__ctx, __del, __cookie);
    }

    ::Ice::AsyncResultPtr begin_say(const ::std::string& data, const ::Demo::Callback_ChatSession_sayPtr& __del, const ::Ice::LocalObjectPtr& __cookie = 0)
    {
        return begin_say(data, 0, __del, __cookie);
    }

    ::Ice::AsyncResultPtr begin_say(const ::std::string& data, const ::Ice::Context& __ctx, const ::Demo::Callback_ChatSession_sayPtr& __del, const ::Ice::LocalObjectPtr& __cookie = 0)
    {
        return begin_say(data, &__ctx, __del, __cookie);
    }

    void end_say(const ::Ice::AsyncResultPtr&);
    
private:

    void say(const ::std::string&, const ::Ice::Context*);
    ::Ice::AsyncResultPtr begin_say(const ::std::string&, const ::Ice::Context*, const ::IceInternal::CallbackBasePtr&, const ::Ice::LocalObjectPtr& __cookie = 0);
    
public:
    
    ::IceInternal::ProxyHandle<ChatSession> ice_context(const ::Ice::Context& __context) const
    {
        return dynamic_cast<ChatSession*>(::IceProxy::Ice::Object::ice_context(__context).get());
    }
    
    ::IceInternal::ProxyHandle<ChatSession> ice_adapterId(const ::std::string& __id) const
    {
        return dynamic_cast<ChatSession*>(::IceProxy::Ice::Object::ice_adapterId(__id).get());
    }
    
    ::IceInternal::ProxyHandle<ChatSession> ice_endpoints(const ::Ice::EndpointSeq& __endpoints) const
    {
        return dynamic_cast<ChatSession*>(::IceProxy::Ice::Object::ice_endpoints(__endpoints).get());
    }
    
    ::IceInternal::ProxyHandle<ChatSession> ice_locatorCacheTimeout(int __timeout) const
    {
        return dynamic_cast<ChatSession*>(::IceProxy::Ice::Object::ice_locatorCacheTimeout(__timeout).get());
    }
    
    ::IceInternal::ProxyHandle<ChatSession> ice_connectionCached(bool __cached) const
    {
        return dynamic_cast<ChatSession*>(::IceProxy::Ice::Object::ice_connectionCached(__cached).get());
    }
    
    ::IceInternal::ProxyHandle<ChatSession> ice_endpointSelection(::Ice::EndpointSelectionType __est) const
    {
        return dynamic_cast<ChatSession*>(::IceProxy::Ice::Object::ice_endpointSelection(__est).get());
    }
    
    ::IceInternal::ProxyHandle<ChatSession> ice_secure(bool __secure) const
    {
        return dynamic_cast<ChatSession*>(::IceProxy::Ice::Object::ice_secure(__secure).get());
    }
    
    ::IceInternal::ProxyHandle<ChatSession> ice_preferSecure(bool __preferSecure) const
    {
        return dynamic_cast<ChatSession*>(::IceProxy::Ice::Object::ice_preferSecure(__preferSecure).get());
    }
    
    ::IceInternal::ProxyHandle<ChatSession> ice_router(const ::Ice::RouterPrx& __router) const
    {
        return dynamic_cast<ChatSession*>(::IceProxy::Ice::Object::ice_router(__router).get());
    }
    
    ::IceInternal::ProxyHandle<ChatSession> ice_locator(const ::Ice::LocatorPrx& __locator) const
    {
        return dynamic_cast<ChatSession*>(::IceProxy::Ice::Object::ice_locator(__locator).get());
    }
    
    ::IceInternal::ProxyHandle<ChatSession> ice_collocationOptimized(bool __co) const
    {
        return dynamic_cast<ChatSession*>(::IceProxy::Ice::Object::ice_collocationOptimized(__co).get());
    }
    
    ::IceInternal::ProxyHandle<ChatSession> ice_twoway() const
    {
        return dynamic_cast<ChatSession*>(::IceProxy::Ice::Object::ice_twoway().get());
    }
    
    ::IceInternal::ProxyHandle<ChatSession> ice_oneway() const
    {
        return dynamic_cast<ChatSession*>(::IceProxy::Ice::Object::ice_oneway().get());
    }
    
    ::IceInternal::ProxyHandle<ChatSession> ice_batchOneway() const
    {
        return dynamic_cast<ChatSession*>(::IceProxy::Ice::Object::ice_batchOneway().get());
    }
    
    ::IceInternal::ProxyHandle<ChatSession> ice_datagram() const
    {
        return dynamic_cast<ChatSession*>(::IceProxy::Ice::Object::ice_datagram().get());
    }
    
    ::IceInternal::ProxyHandle<ChatSession> ice_batchDatagram() const
    {
        return dynamic_cast<ChatSession*>(::IceProxy::Ice::Object::ice_batchDatagram().get());
    }
    
    ::IceInternal::ProxyHandle<ChatSession> ice_compress(bool __compress) const
    {
        return dynamic_cast<ChatSession*>(::IceProxy::Ice::Object::ice_compress(__compress).get());
    }
    
    ::IceInternal::ProxyHandle<ChatSession> ice_timeout(int __timeout) const
    {
        return dynamic_cast<ChatSession*>(::IceProxy::Ice::Object::ice_timeout(__timeout).get());
    }
    
    ::IceInternal::ProxyHandle<ChatSession> ice_connectionId(const ::std::string& __id) const
    {
        return dynamic_cast<ChatSession*>(::IceProxy::Ice::Object::ice_connectionId(__id).get());
    }
    
    ::IceInternal::ProxyHandle<ChatSession> ice_encodingVersion(const ::Ice::EncodingVersion& __v) const
    {
        return dynamic_cast<ChatSession*>(::IceProxy::Ice::Object::ice_encodingVersion(__v).get());
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

class ChatCallback : virtual public ::IceDelegate::Ice::Object
{
public:

    virtual void message(const ::std::string&, const ::Ice::Context*, ::IceInternal::InvocationObserver&) = 0;
};

class ChatSession : virtual public ::IceDelegate::Glacier2::Session
{
public:

    virtual void setCallback(const ::Demo::ChatCallbackPrx&, const ::Ice::Context*, ::IceInternal::InvocationObserver&) = 0;

    virtual void say(const ::std::string&, const ::Ice::Context*, ::IceInternal::InvocationObserver&) = 0;
};

}

}

namespace IceDelegateM
{

namespace Demo
{

class ChatCallback : virtual public ::IceDelegate::Demo::ChatCallback,
                     virtual public ::IceDelegateM::Ice::Object
{
public:

    virtual void message(const ::std::string&, const ::Ice::Context*, ::IceInternal::InvocationObserver&);
};

class ChatSession : virtual public ::IceDelegate::Demo::ChatSession,
                    virtual public ::IceDelegateM::Glacier2::Session
{
public:

    virtual void setCallback(const ::Demo::ChatCallbackPrx&, const ::Ice::Context*, ::IceInternal::InvocationObserver&);

    virtual void say(const ::std::string&, const ::Ice::Context*, ::IceInternal::InvocationObserver&);
};

}

}

namespace IceDelegateD
{

namespace Demo
{

class ChatCallback : virtual public ::IceDelegate::Demo::ChatCallback,
                     virtual public ::IceDelegateD::Ice::Object
{
public:

    virtual void message(const ::std::string&, const ::Ice::Context*, ::IceInternal::InvocationObserver&);
};

class ChatSession : virtual public ::IceDelegate::Demo::ChatSession,
                    virtual public ::IceDelegateD::Glacier2::Session
{
public:

    virtual void setCallback(const ::Demo::ChatCallbackPrx&, const ::Ice::Context*, ::IceInternal::InvocationObserver&);

    virtual void say(const ::std::string&, const ::Ice::Context*, ::IceInternal::InvocationObserver&);
};

}

}

namespace Demo
{

class ChatCallback : virtual public ::Ice::Object
{
public:

    typedef ChatCallbackPrx ProxyType;
    typedef ChatCallbackPtr PointerType;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual void message(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___message(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);

protected:
    virtual void __writeImpl(::IceInternal::BasicStream*) const;
    virtual void __readImpl(::IceInternal::BasicStream*);
    #ifdef __SUNPRO_CC
    using ::Ice::Object::__writeImpl;
    using ::Ice::Object::__readImpl;
    #endif
};

inline bool operator==(const ChatCallback& l, const ChatCallback& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

inline bool operator<(const ChatCallback& l, const ChatCallback& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}

class ChatSession : virtual public ::Glacier2::Session
{
public:

    typedef ChatSessionPrx ProxyType;
    typedef ChatSessionPtr PointerType;

    virtual bool ice_isA(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) const;
    virtual ::std::vector< ::std::string> ice_ids(const ::Ice::Current& = ::Ice::Current()) const;
    virtual const ::std::string& ice_id(const ::Ice::Current& = ::Ice::Current()) const;
    static const ::std::string& ice_staticId();

    virtual void setCallback(const ::Demo::ChatCallbackPrx&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___setCallback(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual void say(const ::std::string&, const ::Ice::Current& = ::Ice::Current()) = 0;
    ::Ice::DispatchStatus ___say(::IceInternal::Incoming&, const ::Ice::Current&);

    virtual ::Ice::DispatchStatus __dispatch(::IceInternal::Incoming&, const ::Ice::Current&);

protected:
    virtual void __writeImpl(::IceInternal::BasicStream*) const;
    virtual void __readImpl(::IceInternal::BasicStream*);
    #ifdef __SUNPRO_CC
    using ::Ice::Object::__writeImpl;
    using ::Ice::Object::__readImpl;
    #endif
};

inline bool operator==(const ChatSession& l, const ChatSession& r)
{
    return static_cast<const ::Ice::Object&>(l) == static_cast<const ::Ice::Object&>(r);
}

inline bool operator<(const ChatSession& l, const ChatSession& r)
{
    return static_cast<const ::Ice::Object&>(l) < static_cast<const ::Ice::Object&>(r);
}

}

namespace Demo
{

template<class T>
class CallbackNC_ChatCallback_message : public Callback_ChatCallback_message_Base, public ::IceInternal::OnewayCallbackNC<T>
{
public:

    typedef IceUtil::Handle<T> TPtr;

    typedef void (T::*Exception)(const ::Ice::Exception&);
    typedef void (T::*Sent)(bool);
    typedef void (T::*Response)();

    CallbackNC_ChatCallback_message(const TPtr& obj, Response cb, Exception excb, Sent sentcb)
        : ::IceInternal::OnewayCallbackNC<T>(obj, cb, excb, sentcb)
    {
    }
};

template<class T> Callback_ChatCallback_messagePtr
newCallback_ChatCallback_message(const IceUtil::Handle<T>& instance, void (T::*cb)(), void (T::*excb)(const ::Ice::Exception&), void (T::*sentcb)(bool) = 0)
{
    return new CallbackNC_ChatCallback_message<T>(instance, cb, excb, sentcb);
}

template<class T> Callback_ChatCallback_messagePtr
newCallback_ChatCallback_message(const IceUtil::Handle<T>& instance, void (T::*excb)(const ::Ice::Exception&), void (T::*sentcb)(bool) = 0)
{
    return new CallbackNC_ChatCallback_message<T>(instance, 0, excb, sentcb);
}

template<class T> Callback_ChatCallback_messagePtr
newCallback_ChatCallback_message(T* instance, void (T::*cb)(), void (T::*excb)(const ::Ice::Exception&), void (T::*sentcb)(bool) = 0)
{
    return new CallbackNC_ChatCallback_message<T>(instance, cb, excb, sentcb);
}

template<class T> Callback_ChatCallback_messagePtr
newCallback_ChatCallback_message(T* instance, void (T::*excb)(const ::Ice::Exception&), void (T::*sentcb)(bool) = 0)
{
    return new CallbackNC_ChatCallback_message<T>(instance, 0, excb, sentcb);
}

template<class T, typename CT>
class Callback_ChatCallback_message : public Callback_ChatCallback_message_Base, public ::IceInternal::OnewayCallback<T, CT>
{
public:

    typedef IceUtil::Handle<T> TPtr;

    typedef void (T::*Exception)(const ::Ice::Exception& , const CT&);
    typedef void (T::*Sent)(bool , const CT&);
    typedef void (T::*Response)(const CT&);

    Callback_ChatCallback_message(const TPtr& obj, Response cb, Exception excb, Sent sentcb)
        : ::IceInternal::OnewayCallback<T, CT>(obj, cb, excb, sentcb)
    {
    }
};

template<class T, typename CT> Callback_ChatCallback_messagePtr
newCallback_ChatCallback_message(const IceUtil::Handle<T>& instance, void (T::*cb)(const CT&), void (T::*excb)(const ::Ice::Exception&, const CT&), void (T::*sentcb)(bool, const CT&) = 0)
{
    return new Callback_ChatCallback_message<T, CT>(instance, cb, excb, sentcb);
}

template<class T, typename CT> Callback_ChatCallback_messagePtr
newCallback_ChatCallback_message(const IceUtil::Handle<T>& instance, void (T::*excb)(const ::Ice::Exception&, const CT&), void (T::*sentcb)(bool, const CT&) = 0)
{
    return new Callback_ChatCallback_message<T, CT>(instance, 0, excb, sentcb);
}

template<class T, typename CT> Callback_ChatCallback_messagePtr
newCallback_ChatCallback_message(T* instance, void (T::*cb)(const CT&), void (T::*excb)(const ::Ice::Exception&, const CT&), void (T::*sentcb)(bool, const CT&) = 0)
{
    return new Callback_ChatCallback_message<T, CT>(instance, cb, excb, sentcb);
}

template<class T, typename CT> Callback_ChatCallback_messagePtr
newCallback_ChatCallback_message(T* instance, void (T::*excb)(const ::Ice::Exception&, const CT&), void (T::*sentcb)(bool, const CT&) = 0)
{
    return new Callback_ChatCallback_message<T, CT>(instance, 0, excb, sentcb);
}

template<class T>
class CallbackNC_ChatSession_setCallback : public Callback_ChatSession_setCallback_Base, public ::IceInternal::OnewayCallbackNC<T>
{
public:

    typedef IceUtil::Handle<T> TPtr;

    typedef void (T::*Exception)(const ::Ice::Exception&);
    typedef void (T::*Sent)(bool);
    typedef void (T::*Response)();

    CallbackNC_ChatSession_setCallback(const TPtr& obj, Response cb, Exception excb, Sent sentcb)
        : ::IceInternal::OnewayCallbackNC<T>(obj, cb, excb, sentcb)
    {
    }
};

template<class T> Callback_ChatSession_setCallbackPtr
newCallback_ChatSession_setCallback(const IceUtil::Handle<T>& instance, void (T::*cb)(), void (T::*excb)(const ::Ice::Exception&), void (T::*sentcb)(bool) = 0)
{
    return new CallbackNC_ChatSession_setCallback<T>(instance, cb, excb, sentcb);
}

template<class T> Callback_ChatSession_setCallbackPtr
newCallback_ChatSession_setCallback(const IceUtil::Handle<T>& instance, void (T::*excb)(const ::Ice::Exception&), void (T::*sentcb)(bool) = 0)
{
    return new CallbackNC_ChatSession_setCallback<T>(instance, 0, excb, sentcb);
}

template<class T> Callback_ChatSession_setCallbackPtr
newCallback_ChatSession_setCallback(T* instance, void (T::*cb)(), void (T::*excb)(const ::Ice::Exception&), void (T::*sentcb)(bool) = 0)
{
    return new CallbackNC_ChatSession_setCallback<T>(instance, cb, excb, sentcb);
}

template<class T> Callback_ChatSession_setCallbackPtr
newCallback_ChatSession_setCallback(T* instance, void (T::*excb)(const ::Ice::Exception&), void (T::*sentcb)(bool) = 0)
{
    return new CallbackNC_ChatSession_setCallback<T>(instance, 0, excb, sentcb);
}

template<class T, typename CT>
class Callback_ChatSession_setCallback : public Callback_ChatSession_setCallback_Base, public ::IceInternal::OnewayCallback<T, CT>
{
public:

    typedef IceUtil::Handle<T> TPtr;

    typedef void (T::*Exception)(const ::Ice::Exception& , const CT&);
    typedef void (T::*Sent)(bool , const CT&);
    typedef void (T::*Response)(const CT&);

    Callback_ChatSession_setCallback(const TPtr& obj, Response cb, Exception excb, Sent sentcb)
        : ::IceInternal::OnewayCallback<T, CT>(obj, cb, excb, sentcb)
    {
    }
};

template<class T, typename CT> Callback_ChatSession_setCallbackPtr
newCallback_ChatSession_setCallback(const IceUtil::Handle<T>& instance, void (T::*cb)(const CT&), void (T::*excb)(const ::Ice::Exception&, const CT&), void (T::*sentcb)(bool, const CT&) = 0)
{
    return new Callback_ChatSession_setCallback<T, CT>(instance, cb, excb, sentcb);
}

template<class T, typename CT> Callback_ChatSession_setCallbackPtr
newCallback_ChatSession_setCallback(const IceUtil::Handle<T>& instance, void (T::*excb)(const ::Ice::Exception&, const CT&), void (T::*sentcb)(bool, const CT&) = 0)
{
    return new Callback_ChatSession_setCallback<T, CT>(instance, 0, excb, sentcb);
}

template<class T, typename CT> Callback_ChatSession_setCallbackPtr
newCallback_ChatSession_setCallback(T* instance, void (T::*cb)(const CT&), void (T::*excb)(const ::Ice::Exception&, const CT&), void (T::*sentcb)(bool, const CT&) = 0)
{
    return new Callback_ChatSession_setCallback<T, CT>(instance, cb, excb, sentcb);
}

template<class T, typename CT> Callback_ChatSession_setCallbackPtr
newCallback_ChatSession_setCallback(T* instance, void (T::*excb)(const ::Ice::Exception&, const CT&), void (T::*sentcb)(bool, const CT&) = 0)
{
    return new Callback_ChatSession_setCallback<T, CT>(instance, 0, excb, sentcb);
}

template<class T>
class CallbackNC_ChatSession_say : public Callback_ChatSession_say_Base, public ::IceInternal::OnewayCallbackNC<T>
{
public:

    typedef IceUtil::Handle<T> TPtr;

    typedef void (T::*Exception)(const ::Ice::Exception&);
    typedef void (T::*Sent)(bool);
    typedef void (T::*Response)();

    CallbackNC_ChatSession_say(const TPtr& obj, Response cb, Exception excb, Sent sentcb)
        : ::IceInternal::OnewayCallbackNC<T>(obj, cb, excb, sentcb)
    {
    }
};

template<class T> Callback_ChatSession_sayPtr
newCallback_ChatSession_say(const IceUtil::Handle<T>& instance, void (T::*cb)(), void (T::*excb)(const ::Ice::Exception&), void (T::*sentcb)(bool) = 0)
{
    return new CallbackNC_ChatSession_say<T>(instance, cb, excb, sentcb);
}

template<class T> Callback_ChatSession_sayPtr
newCallback_ChatSession_say(const IceUtil::Handle<T>& instance, void (T::*excb)(const ::Ice::Exception&), void (T::*sentcb)(bool) = 0)
{
    return new CallbackNC_ChatSession_say<T>(instance, 0, excb, sentcb);
}

template<class T> Callback_ChatSession_sayPtr
newCallback_ChatSession_say(T* instance, void (T::*cb)(), void (T::*excb)(const ::Ice::Exception&), void (T::*sentcb)(bool) = 0)
{
    return new CallbackNC_ChatSession_say<T>(instance, cb, excb, sentcb);
}

template<class T> Callback_ChatSession_sayPtr
newCallback_ChatSession_say(T* instance, void (T::*excb)(const ::Ice::Exception&), void (T::*sentcb)(bool) = 0)
{
    return new CallbackNC_ChatSession_say<T>(instance, 0, excb, sentcb);
}

template<class T, typename CT>
class Callback_ChatSession_say : public Callback_ChatSession_say_Base, public ::IceInternal::OnewayCallback<T, CT>
{
public:

    typedef IceUtil::Handle<T> TPtr;

    typedef void (T::*Exception)(const ::Ice::Exception& , const CT&);
    typedef void (T::*Sent)(bool , const CT&);
    typedef void (T::*Response)(const CT&);

    Callback_ChatSession_say(const TPtr& obj, Response cb, Exception excb, Sent sentcb)
        : ::IceInternal::OnewayCallback<T, CT>(obj, cb, excb, sentcb)
    {
    }
};

template<class T, typename CT> Callback_ChatSession_sayPtr
newCallback_ChatSession_say(const IceUtil::Handle<T>& instance, void (T::*cb)(const CT&), void (T::*excb)(const ::Ice::Exception&, const CT&), void (T::*sentcb)(bool, const CT&) = 0)
{
    return new Callback_ChatSession_say<T, CT>(instance, cb, excb, sentcb);
}

template<class T, typename CT> Callback_ChatSession_sayPtr
newCallback_ChatSession_say(const IceUtil::Handle<T>& instance, void (T::*excb)(const ::Ice::Exception&, const CT&), void (T::*sentcb)(bool, const CT&) = 0)
{
    return new Callback_ChatSession_say<T, CT>(instance, 0, excb, sentcb);
}

template<class T, typename CT> Callback_ChatSession_sayPtr
newCallback_ChatSession_say(T* instance, void (T::*cb)(const CT&), void (T::*excb)(const ::Ice::Exception&, const CT&), void (T::*sentcb)(bool, const CT&) = 0)
{
    return new Callback_ChatSession_say<T, CT>(instance, cb, excb, sentcb);
}

template<class T, typename CT> Callback_ChatSession_sayPtr
newCallback_ChatSession_say(T* instance, void (T::*excb)(const ::Ice::Exception&, const CT&), void (T::*sentcb)(bool, const CT&) = 0)
{
    return new Callback_ChatSession_say<T, CT>(instance, 0, excb, sentcb);
}

}

#endif