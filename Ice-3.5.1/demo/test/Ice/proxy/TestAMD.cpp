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
// Generated from file `TestAMD.ice'
//
// Warning: do not edit this file.
//
// </auto-generated>
//

#include <TestAMD.h>
#include <Ice/LocalException.h>
#include <Ice/ObjectFactory.h>
#include <Ice/BasicStream.h>
#include <Ice/Object.h>
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

const ::std::string __Test__MyClass__shutdown_name = "shutdown";

const ::std::string __Test__MyClass__getContext_name = "getContext";

const ::std::string __Test__MyDerivedClass__echo_name = "echo";

}

IceAsync::Test::AMD_MyClass_shutdown::AMD_MyClass_shutdown(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::Test::AMD_MyClass_shutdown::ice_response()
{
    if(__validateResponse(true))
    {
        __writeEmptyParams();
        __response();
    }
}

IceAsync::Test::AMD_MyClass_getContext::AMD_MyClass_getContext(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::Test::AMD_MyClass_getContext::ice_response(const ::Ice::Context& __ret)
{
    if(__validateResponse(true))
    {
        try
        {
            ::IceInternal::BasicStream* __os = __startWriteParams(::Ice::DefaultFormat);
            __os->write(__ret);
            __endWriteParams(true);
        }
        catch(const ::Ice::Exception& __ex)
        {
            __exception(__ex);
            return;
        }
        __response();
    }
}

IceAsync::Test::AMD_MyDerivedClass_echo::AMD_MyDerivedClass_echo(::IceInternal::Incoming& in) :
    ::IceInternal::IncomingAsync(in)
{
}

void
IceAsync::Test::AMD_MyDerivedClass_echo::ice_response(const ::Ice::ObjectPrx& __ret)
{
    if(__validateResponse(true))
    {
        try
        {
            ::IceInternal::BasicStream* __os = __startWriteParams(::Ice::DefaultFormat);
            __os->write(__ret);
            __endWriteParams(true);
        }
        catch(const ::Ice::Exception& __ex)
        {
            __exception(__ex);
            return;
        }
        __response();
    }
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

void
IceProxy::Test::MyClass::shutdown(const ::Ice::Context* __ctx)
{
    ::IceInternal::InvocationObserver __observer(this, __Test__MyClass__shutdown_name, __ctx);
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __delBase = __getDelegate(false);
            ::IceDelegate::Test::MyClass* __del = dynamic_cast< ::IceDelegate::Test::MyClass*>(__delBase.get());
            __del->shutdown(__ctx, __observer);
            return;
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__delBase, __ex, __observer);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, true, __cnt, __observer);
        }
    }
}

::Ice::AsyncResultPtr
IceProxy::Test::MyClass::begin_shutdown(const ::Ice::Context* __ctx, const ::IceInternal::CallbackBasePtr& __del, const ::Ice::LocalObjectPtr& __cookie)
{
    ::IceInternal::OutgoingAsyncPtr __result = new ::IceInternal::OutgoingAsync(this, __Test__MyClass__shutdown_name, __del, __cookie);
    try
    {
        __result->__prepare(__Test__MyClass__shutdown_name, ::Ice::Normal, __ctx);
        __result->__writeEmptyParams();
        __result->__send(true);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __result->__exceptionAsync(__ex);
    }
    return __result;
}

void
IceProxy::Test::MyClass::end_shutdown(const ::Ice::AsyncResultPtr& __result)
{
    __end(__result, __Test__MyClass__shutdown_name);
}

::Ice::Context
IceProxy::Test::MyClass::getContext(const ::Ice::Context* __ctx)
{
    ::IceInternal::InvocationObserver __observer(this, __Test__MyClass__getContext_name, __ctx);
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__Test__MyClass__getContext_name);
            __delBase = __getDelegate(false);
            ::IceDelegate::Test::MyClass* __del = dynamic_cast< ::IceDelegate::Test::MyClass*>(__delBase.get());
            return __del->getContext(__ctx, __observer);
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__delBase, __ex, __observer);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, true, __cnt, __observer);
        }
    }
}

::Ice::AsyncResultPtr
IceProxy::Test::MyClass::begin_getContext(const ::Ice::Context* __ctx, const ::IceInternal::CallbackBasePtr& __del, const ::Ice::LocalObjectPtr& __cookie)
{
    __checkAsyncTwowayOnly(__Test__MyClass__getContext_name);
    ::IceInternal::OutgoingAsyncPtr __result = new ::IceInternal::OutgoingAsync(this, __Test__MyClass__getContext_name, __del, __cookie);
    try
    {
        __result->__prepare(__Test__MyClass__getContext_name, ::Ice::Normal, __ctx);
        __result->__writeEmptyParams();
        __result->__send(true);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __result->__exceptionAsync(__ex);
    }
    return __result;
}

::Ice::Context
IceProxy::Test::MyClass::end_getContext(const ::Ice::AsyncResultPtr& __result)
{
    ::Ice::AsyncResult::__check(__result, this, __Test__MyClass__getContext_name);
    ::Ice::Context __ret;
    bool __ok = __result->__wait();
    try
    {
        if(!__ok)
        {
            try
            {
                __result->__throwUserException();
            }
            catch(const ::Ice::UserException& __ex)
            {
                throw ::Ice::UnknownUserException(__FILE__, __LINE__, __ex.ice_name());
            }
        }
        ::IceInternal::BasicStream* __is = __result->__startReadParams();
        __is->read(__ret);
        __result->__endReadParams();
        return __ret;
    }
    catch(const ::Ice::LocalException& ex)
    {
        __result->__getObserver().failed(ex.ice_name());
        throw;
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
::IceProxy::Ice::Object* ::IceProxy::Test::upCast(::IceProxy::Test::MyDerivedClass* p) { return p; }

void
::IceProxy::Test::__read(::IceInternal::BasicStream* __is, ::IceInternal::ProxyHandle< ::IceProxy::Test::MyDerivedClass>& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::Test::MyDerivedClass;
        v->__copyFrom(proxy);
    }
}

::Ice::ObjectPrx
IceProxy::Test::MyDerivedClass::echo(const ::Ice::ObjectPrx& obj, const ::Ice::Context* __ctx)
{
    ::IceInternal::InvocationObserver __observer(this, __Test__MyDerivedClass__echo_name, __ctx);
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__Test__MyDerivedClass__echo_name);
            __delBase = __getDelegate(false);
            ::IceDelegate::Test::MyDerivedClass* __del = dynamic_cast< ::IceDelegate::Test::MyDerivedClass*>(__delBase.get());
            return __del->echo(obj, __ctx, __observer);
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__delBase, __ex, __observer);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, true, __cnt, __observer);
        }
    }
}

::Ice::AsyncResultPtr
IceProxy::Test::MyDerivedClass::begin_echo(const ::Ice::ObjectPrx& obj, const ::Ice::Context* __ctx, const ::IceInternal::CallbackBasePtr& __del, const ::Ice::LocalObjectPtr& __cookie)
{
    __checkAsyncTwowayOnly(__Test__MyDerivedClass__echo_name);
    ::IceInternal::OutgoingAsyncPtr __result = new ::IceInternal::OutgoingAsync(this, __Test__MyDerivedClass__echo_name, __del, __cookie);
    try
    {
        __result->__prepare(__Test__MyDerivedClass__echo_name, ::Ice::Normal, __ctx);
        ::IceInternal::BasicStream* __os = __result->__startWriteParams(::Ice::DefaultFormat);
        __os->write(obj);
        __result->__endWriteParams();
        __result->__send(true);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __result->__exceptionAsync(__ex);
    }
    return __result;
}

::Ice::ObjectPrx
IceProxy::Test::MyDerivedClass::end_echo(const ::Ice::AsyncResultPtr& __result)
{
    ::Ice::AsyncResult::__check(__result, this, __Test__MyDerivedClass__echo_name);
    ::Ice::ObjectPrx __ret;
    bool __ok = __result->__wait();
    try
    {
        if(!__ok)
        {
            try
            {
                __result->__throwUserException();
            }
            catch(const ::Ice::UserException& __ex)
            {
                throw ::Ice::UnknownUserException(__FILE__, __LINE__, __ex.ice_name());
            }
        }
        ::IceInternal::BasicStream* __is = __result->__startReadParams();
        __is->read(__ret);
        __result->__endReadParams();
        return __ret;
    }
    catch(const ::Ice::LocalException& ex)
    {
        __result->__getObserver().failed(ex.ice_name());
        throw;
    }
}

const ::std::string&
IceProxy::Test::MyDerivedClass::ice_staticId()
{
    return ::Test::MyDerivedClass::ice_staticId();
}

::IceInternal::Handle< ::IceDelegateM::Ice::Object>
IceProxy::Test::MyDerivedClass::__createDelegateM()
{
    return ::IceInternal::Handle< ::IceDelegateM::Ice::Object>(new ::IceDelegateM::Test::MyDerivedClass);
}

::IceInternal::Handle< ::IceDelegateD::Ice::Object>
IceProxy::Test::MyDerivedClass::__createDelegateD()
{
    return ::IceInternal::Handle< ::IceDelegateD::Ice::Object>(new ::IceDelegateD::Test::MyDerivedClass);
}

::IceProxy::Ice::Object*
IceProxy::Test::MyDerivedClass::__newInstance() const
{
    return new MyDerivedClass;
}

void
IceDelegateM::Test::MyClass::shutdown(const ::Ice::Context* __context, ::IceInternal::InvocationObserver& __observer)
{
    ::IceInternal::Outgoing __og(__handler.get(), __Test__MyClass__shutdown_name, ::Ice::Normal, __context, __observer);
    __og.writeEmptyParams();
    bool __ok = __og.invoke();
    if(__og.hasResponse())
    {
        try
        {
            if(!__ok)
            {
                try
                {
                    __og.throwUserException();
                }
                catch(const ::Ice::UserException& __ex)
                {
                    ::Ice::UnknownUserException __uue(__FILE__, __LINE__, __ex.ice_name());
                    throw __uue;
                }
            }
            __og.readEmptyParams();
        }
        catch(const ::Ice::LocalException& __ex)
        {
            throw ::IceInternal::LocalExceptionWrapper(__ex, false);
        }
    }
}

::Ice::Context
IceDelegateM::Test::MyClass::getContext(const ::Ice::Context* __context, ::IceInternal::InvocationObserver& __observer)
{
    ::IceInternal::Outgoing __og(__handler.get(), __Test__MyClass__getContext_name, ::Ice::Normal, __context, __observer);
    __og.writeEmptyParams();
    bool __ok = __og.invoke();
    ::Ice::Context __ret;
    try
    {
        if(!__ok)
        {
            try
            {
                __og.throwUserException();
            }
            catch(const ::Ice::UserException& __ex)
            {
                ::Ice::UnknownUserException __uue(__FILE__, __LINE__, __ex.ice_name());
                throw __uue;
            }
        }
        ::IceInternal::BasicStream* __is = __og.startReadParams();
        __is->read(__ret);
        __og.endReadParams();
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::ObjectPrx
IceDelegateM::Test::MyDerivedClass::echo(const ::Ice::ObjectPrx& obj, const ::Ice::Context* __context, ::IceInternal::InvocationObserver& __observer)
{
    ::IceInternal::Outgoing __og(__handler.get(), __Test__MyDerivedClass__echo_name, ::Ice::Normal, __context, __observer);
    try
    {
        ::IceInternal::BasicStream* __os = __og.startWriteParams(::Ice::DefaultFormat);
        __os->write(obj);
        __og.endWriteParams();
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    ::Ice::ObjectPrx __ret;
    try
    {
        if(!__ok)
        {
            try
            {
                __og.throwUserException();
            }
            catch(const ::Ice::UserException& __ex)
            {
                ::Ice::UnknownUserException __uue(__FILE__, __LINE__, __ex.ice_name());
                throw __uue;
            }
        }
        ::IceInternal::BasicStream* __is = __og.startReadParams();
        __is->read(__ret);
        __og.endReadParams();
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

void
IceDelegateD::Test::MyClass::shutdown(const ::Ice::Context*, ::IceInternal::InvocationObserver&)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
}

::Ice::Context
IceDelegateD::Test::MyClass::getContext(const ::Ice::Context*, ::IceInternal::InvocationObserver&)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::Context(); // to avoid a warning with some compilers;
}

::Ice::ObjectPrx
IceDelegateD::Test::MyDerivedClass::echo(const ::Ice::ObjectPrx&, const ::Ice::Context*, ::IceInternal::InvocationObserver&)
{
    throw ::Ice::CollocationOptimizationException(__FILE__, __LINE__);
    return ::Ice::ObjectPrx(); // to avoid a warning with some compilers;
}

::Ice::Object* Test::upCast(::Test::MyClass* p) { return p; }
::Ice::ObjectPtr
Test::MyClass::ice_clone() const
{
    throw ::Ice::CloneNotImplementedException(__FILE__, __LINE__);
    return 0; // to avoid a warning with some compilers
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

::Ice::DispatchStatus
Test::MyClass::___shutdown(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    __inS.readEmptyParams();
    ::Test::AMD_MyClass_shutdownPtr __cb = new IceAsync::Test::AMD_MyClass_shutdown(__inS);
    try
    {
        shutdown_async(__cb, __current);
    }
    catch(const ::std::exception& __ex)
    {
        __cb->ice_exception(__ex);
    }
    catch(...)
    {
        __cb->ice_exception();
    }
    return ::Ice::DispatchAsync;
}

::Ice::DispatchStatus
Test::MyClass::___getContext(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    __inS.readEmptyParams();
    ::Test::AMD_MyClass_getContextPtr __cb = new IceAsync::Test::AMD_MyClass_getContext(__inS);
    try
    {
        getContext_async(__cb, __current);
    }
    catch(const ::std::exception& __ex)
    {
        __cb->ice_exception(__ex);
    }
    catch(...)
    {
        __cb->ice_exception();
    }
    return ::Ice::DispatchAsync;
}

namespace
{
const ::std::string __Test__MyClass_all[] =
{
    "getContext",
    "ice_id",
    "ice_ids",
    "ice_isA",
    "ice_ping",
    "shutdown"
};

}

::Ice::DispatchStatus
Test::MyClass::__dispatch(::IceInternal::Incoming& in, const ::Ice::Current& current)
{
    ::std::pair< const ::std::string*, const ::std::string*> r = ::std::equal_range(__Test__MyClass_all, __Test__MyClass_all + 6, current.operation);
    if(r.first == r.second)
    {
        throw ::Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
    }

    switch(r.first - __Test__MyClass_all)
    {
        case 0:
        {
            return ___getContext(in, current);
        }
        case 1:
        {
            return ___ice_id(in, current);
        }
        case 2:
        {
            return ___ice_ids(in, current);
        }
        case 3:
        {
            return ___ice_isA(in, current);
        }
        case 4:
        {
            return ___ice_ping(in, current);
        }
        case 5:
        {
            return ___shutdown(in, current);
        }
    }

    assert(false);
    throw ::Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
}

void
Test::MyClass::__writeImpl(::IceInternal::BasicStream* __os) const
{
    __os->startWriteSlice(ice_staticId(), -1, true);
    __os->endWriteSlice();
}

void
Test::MyClass::__readImpl(::IceInternal::BasicStream* __is)
{
    __is->startReadSlice();
    __is->endReadSlice();
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

::Ice::Object* Test::upCast(::Test::MyDerivedClass* p) { return p; }
::Ice::ObjectPtr
Test::MyDerivedClass::ice_clone() const
{
    throw ::Ice::CloneNotImplementedException(__FILE__, __LINE__);
    return 0; // to avoid a warning with some compilers
}

namespace
{
const ::std::string __Test__MyDerivedClass_ids[3] =
{
    "::Ice::Object",
    "::Test::MyClass",
    "::Test::MyDerivedClass"
};

}

bool
Test::MyDerivedClass::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__Test__MyDerivedClass_ids, __Test__MyDerivedClass_ids + 3, _s);
}

::std::vector< ::std::string>
Test::MyDerivedClass::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__Test__MyDerivedClass_ids[0], &__Test__MyDerivedClass_ids[3]);
}

const ::std::string&
Test::MyDerivedClass::ice_id(const ::Ice::Current&) const
{
    return __Test__MyDerivedClass_ids[2];
}

const ::std::string&
Test::MyDerivedClass::ice_staticId()
{
    return __Test__MyDerivedClass_ids[2];
}

::Ice::DispatchStatus
Test::MyDerivedClass::___echo(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.startReadParams();
    ::Ice::ObjectPrx obj;
    __is->read(obj);
    __inS.endReadParams();
    ::Test::AMD_MyDerivedClass_echoPtr __cb = new IceAsync::Test::AMD_MyDerivedClass_echo(__inS);
    try
    {
        echo_async(__cb, obj, __current);
    }
    catch(const ::std::exception& __ex)
    {
        __cb->ice_exception(__ex);
    }
    catch(...)
    {
        __cb->ice_exception();
    }
    return ::Ice::DispatchAsync;
}

namespace
{
const ::std::string __Test__MyDerivedClass_all[] =
{
    "echo",
    "getContext",
    "ice_id",
    "ice_ids",
    "ice_isA",
    "ice_ping",
    "shutdown"
};

}

::Ice::DispatchStatus
Test::MyDerivedClass::__dispatch(::IceInternal::Incoming& in, const ::Ice::Current& current)
{
    ::std::pair< const ::std::string*, const ::std::string*> r = ::std::equal_range(__Test__MyDerivedClass_all, __Test__MyDerivedClass_all + 7, current.operation);
    if(r.first == r.second)
    {
        throw ::Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
    }

    switch(r.first - __Test__MyDerivedClass_all)
    {
        case 0:
        {
            return ___echo(in, current);
        }
        case 1:
        {
            return ___getContext(in, current);
        }
        case 2:
        {
            return ___ice_id(in, current);
        }
        case 3:
        {
            return ___ice_ids(in, current);
        }
        case 4:
        {
            return ___ice_isA(in, current);
        }
        case 5:
        {
            return ___ice_ping(in, current);
        }
        case 6:
        {
            return ___shutdown(in, current);
        }
    }

    assert(false);
    throw ::Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
}

void
Test::MyDerivedClass::__writeImpl(::IceInternal::BasicStream* __os) const
{
    __os->startWriteSlice(ice_staticId(), -1, false);
    __os->endWriteSlice();
    ::Test::MyClass::__writeImpl(__os);
}

void
Test::MyDerivedClass::__readImpl(::IceInternal::BasicStream* __is)
{
    __is->startReadSlice();
    __is->endReadSlice();
    ::Test::MyClass::__readImpl(__is);
}

void 
Test::__patch(MyDerivedClassPtr& handle, const ::Ice::ObjectPtr& v)
{
    handle = ::Test::MyDerivedClassPtr::dynamicCast(v);
    if(v && !handle)
    {
        IceInternal::Ex::throwUOE(::Test::MyDerivedClass::ice_staticId(), v);
    }
}
