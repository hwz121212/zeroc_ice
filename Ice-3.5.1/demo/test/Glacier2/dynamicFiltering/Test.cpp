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

#include <Test.h>
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

const ::std::string __Test__Backend__check_name = "check";

const ::std::string __Test__Backend__shutdown_name = "shutdown";

const ::std::string __Test__TestController__step_name = "step";

const ::std::string __Test__TestController__shutdown_name = "shutdown";

const ::std::string __Test__TestSession__shutdown_name = "shutdown";

}

namespace Ice
{
}
::IceProxy::Ice::Object* ::IceProxy::Test::upCast(::IceProxy::Test::Backend* p) { return p; }

void
::IceProxy::Test::__read(::IceInternal::BasicStream* __is, ::IceInternal::ProxyHandle< ::IceProxy::Test::Backend>& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::Test::Backend;
        v->__copyFrom(proxy);
    }
}

void
IceProxy::Test::Backend::check(const ::Ice::Context* __ctx)
{
    ::IceInternal::InvocationObserver __observer(this, __Test__Backend__check_name, __ctx);
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __delBase = __getDelegate(false);
            ::IceDelegate::Test::Backend* __del = dynamic_cast< ::IceDelegate::Test::Backend*>(__delBase.get());
            __del->check(__ctx, __observer);
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
IceProxy::Test::Backend::begin_check(const ::Ice::Context* __ctx, const ::IceInternal::CallbackBasePtr& __del, const ::Ice::LocalObjectPtr& __cookie)
{
    ::IceInternal::OutgoingAsyncPtr __result = new ::IceInternal::OutgoingAsync(this, __Test__Backend__check_name, __del, __cookie);
    try
    {
        __result->__prepare(__Test__Backend__check_name, ::Ice::Normal, __ctx);
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
IceProxy::Test::Backend::end_check(const ::Ice::AsyncResultPtr& __result)
{
    __end(__result, __Test__Backend__check_name);
}

void
IceProxy::Test::Backend::shutdown(const ::Ice::Context* __ctx)
{
    ::IceInternal::InvocationObserver __observer(this, __Test__Backend__shutdown_name, __ctx);
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __delBase = __getDelegate(false);
            ::IceDelegate::Test::Backend* __del = dynamic_cast< ::IceDelegate::Test::Backend*>(__delBase.get());
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
IceProxy::Test::Backend::begin_shutdown(const ::Ice::Context* __ctx, const ::IceInternal::CallbackBasePtr& __del, const ::Ice::LocalObjectPtr& __cookie)
{
    ::IceInternal::OutgoingAsyncPtr __result = new ::IceInternal::OutgoingAsync(this, __Test__Backend__shutdown_name, __del, __cookie);
    try
    {
        __result->__prepare(__Test__Backend__shutdown_name, ::Ice::Normal, __ctx);
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
IceProxy::Test::Backend::end_shutdown(const ::Ice::AsyncResultPtr& __result)
{
    __end(__result, __Test__Backend__shutdown_name);
}

const ::std::string&
IceProxy::Test::Backend::ice_staticId()
{
    return ::Test::Backend::ice_staticId();
}

::IceInternal::Handle< ::IceDelegateM::Ice::Object>
IceProxy::Test::Backend::__createDelegateM()
{
    return ::IceInternal::Handle< ::IceDelegateM::Ice::Object>(new ::IceDelegateM::Test::Backend);
}

::IceInternal::Handle< ::IceDelegateD::Ice::Object>
IceProxy::Test::Backend::__createDelegateD()
{
    return ::IceInternal::Handle< ::IceDelegateD::Ice::Object>(new ::IceDelegateD::Test::Backend);
}

::IceProxy::Ice::Object*
IceProxy::Test::Backend::__newInstance() const
{
    return new Backend;
}
::IceProxy::Ice::Object* ::IceProxy::Test::upCast(::IceProxy::Test::TestController* p) { return p; }

void
::IceProxy::Test::__read(::IceInternal::BasicStream* __is, ::IceInternal::ProxyHandle< ::IceProxy::Test::TestController>& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::Test::TestController;
        v->__copyFrom(proxy);
    }
}

void
IceProxy::Test::TestController::step(const ::Glacier2::SessionPrx& currentSession, const ::Test::TestToken& currentState, ::Test::TestToken& newState, const ::Ice::Context* __ctx)
{
    ::IceInternal::InvocationObserver __observer(this, __Test__TestController__step_name, __ctx);
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__Test__TestController__step_name);
            __delBase = __getDelegate(false);
            ::IceDelegate::Test::TestController* __del = dynamic_cast< ::IceDelegate::Test::TestController*>(__delBase.get());
            __del->step(currentSession, currentState, newState, __ctx, __observer);
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
IceProxy::Test::TestController::begin_step(const ::Glacier2::SessionPrx& currentSession, const ::Test::TestToken& currentState, const ::Ice::Context* __ctx, const ::IceInternal::CallbackBasePtr& __del, const ::Ice::LocalObjectPtr& __cookie)
{
    __checkAsyncTwowayOnly(__Test__TestController__step_name);
    ::IceInternal::OutgoingAsyncPtr __result = new ::IceInternal::OutgoingAsync(this, __Test__TestController__step_name, __del, __cookie);
    try
    {
        __result->__prepare(__Test__TestController__step_name, ::Ice::Normal, __ctx);
        ::IceInternal::BasicStream* __os = __result->__startWriteParams(::Ice::DefaultFormat);
        __os->write(currentSession);
        __os->write(currentState);
        __result->__endWriteParams();
        __result->__send(true);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __result->__exceptionAsync(__ex);
    }
    return __result;
}

void
IceProxy::Test::TestController::end_step(::Test::TestToken& newState, const ::Ice::AsyncResultPtr& __result)
{
    ::Ice::AsyncResult::__check(__result, this, __Test__TestController__step_name);
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
        __is->read(newState);
        __result->__endReadParams();
    }
    catch(const ::Ice::LocalException& ex)
    {
        __result->__getObserver().failed(ex.ice_name());
        throw;
    }
}

void
IceProxy::Test::TestController::shutdown(const ::Ice::Context* __ctx)
{
    ::IceInternal::InvocationObserver __observer(this, __Test__TestController__shutdown_name, __ctx);
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __delBase = __getDelegate(false);
            ::IceDelegate::Test::TestController* __del = dynamic_cast< ::IceDelegate::Test::TestController*>(__delBase.get());
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
IceProxy::Test::TestController::begin_shutdown(const ::Ice::Context* __ctx, const ::IceInternal::CallbackBasePtr& __del, const ::Ice::LocalObjectPtr& __cookie)
{
    ::IceInternal::OutgoingAsyncPtr __result = new ::IceInternal::OutgoingAsync(this, __Test__TestController__shutdown_name, __del, __cookie);
    try
    {
        __result->__prepare(__Test__TestController__shutdown_name, ::Ice::Normal, __ctx);
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
IceProxy::Test::TestController::end_shutdown(const ::Ice::AsyncResultPtr& __result)
{
    __end(__result, __Test__TestController__shutdown_name);
}

const ::std::string&
IceProxy::Test::TestController::ice_staticId()
{
    return ::Test::TestController::ice_staticId();
}

::IceInternal::Handle< ::IceDelegateM::Ice::Object>
IceProxy::Test::TestController::__createDelegateM()
{
    return ::IceInternal::Handle< ::IceDelegateM::Ice::Object>(new ::IceDelegateM::Test::TestController);
}

::IceInternal::Handle< ::IceDelegateD::Ice::Object>
IceProxy::Test::TestController::__createDelegateD()
{
    return ::IceInternal::Handle< ::IceDelegateD::Ice::Object>(new ::IceDelegateD::Test::TestController);
}

::IceProxy::Ice::Object*
IceProxy::Test::TestController::__newInstance() const
{
    return new TestController;
}
::IceProxy::Ice::Object* ::IceProxy::Test::upCast(::IceProxy::Test::TestSession* p) { return p; }

void
::IceProxy::Test::__read(::IceInternal::BasicStream* __is, ::IceInternal::ProxyHandle< ::IceProxy::Test::TestSession>& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::Test::TestSession;
        v->__copyFrom(proxy);
    }
}

void
IceProxy::Test::TestSession::shutdown(const ::Ice::Context* __ctx)
{
    ::IceInternal::InvocationObserver __observer(this, __Test__TestSession__shutdown_name, __ctx);
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __delBase = __getDelegate(false);
            ::IceDelegate::Test::TestSession* __del = dynamic_cast< ::IceDelegate::Test::TestSession*>(__delBase.get());
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
IceProxy::Test::TestSession::begin_shutdown(const ::Ice::Context* __ctx, const ::IceInternal::CallbackBasePtr& __del, const ::Ice::LocalObjectPtr& __cookie)
{
    ::IceInternal::OutgoingAsyncPtr __result = new ::IceInternal::OutgoingAsync(this, __Test__TestSession__shutdown_name, __del, __cookie);
    try
    {
        __result->__prepare(__Test__TestSession__shutdown_name, ::Ice::Normal, __ctx);
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
IceProxy::Test::TestSession::end_shutdown(const ::Ice::AsyncResultPtr& __result)
{
    __end(__result, __Test__TestSession__shutdown_name);
}

const ::std::string&
IceProxy::Test::TestSession::ice_staticId()
{
    return ::Test::TestSession::ice_staticId();
}

::IceInternal::Handle< ::IceDelegateM::Ice::Object>
IceProxy::Test::TestSession::__createDelegateM()
{
    return ::IceInternal::Handle< ::IceDelegateM::Ice::Object>(new ::IceDelegateM::Test::TestSession);
}

::IceInternal::Handle< ::IceDelegateD::Ice::Object>
IceProxy::Test::TestSession::__createDelegateD()
{
    return ::IceInternal::Handle< ::IceDelegateD::Ice::Object>(new ::IceDelegateD::Test::TestSession);
}

::IceProxy::Ice::Object*
IceProxy::Test::TestSession::__newInstance() const
{
    return new TestSession;
}

void
IceDelegateM::Test::Backend::check(const ::Ice::Context* __context, ::IceInternal::InvocationObserver& __observer)
{
    ::IceInternal::Outgoing __og(__handler.get(), __Test__Backend__check_name, ::Ice::Normal, __context, __observer);
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

void
IceDelegateM::Test::Backend::shutdown(const ::Ice::Context* __context, ::IceInternal::InvocationObserver& __observer)
{
    ::IceInternal::Outgoing __og(__handler.get(), __Test__Backend__shutdown_name, ::Ice::Normal, __context, __observer);
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

void
IceDelegateM::Test::TestController::step(const ::Glacier2::SessionPrx& currentSession, const ::Test::TestToken& currentState, ::Test::TestToken& newState, const ::Ice::Context* __context, ::IceInternal::InvocationObserver& __observer)
{
    ::IceInternal::Outgoing __og(__handler.get(), __Test__TestController__step_name, ::Ice::Normal, __context, __observer);
    try
    {
        ::IceInternal::BasicStream* __os = __og.startWriteParams(::Ice::DefaultFormat);
        __os->write(currentSession);
        __os->write(currentState);
        __og.endWriteParams();
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
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
        __is->read(newState);
        __og.endReadParams();
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

void
IceDelegateM::Test::TestController::shutdown(const ::Ice::Context* __context, ::IceInternal::InvocationObserver& __observer)
{
    ::IceInternal::Outgoing __og(__handler.get(), __Test__TestController__shutdown_name, ::Ice::Normal, __context, __observer);
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

void
IceDelegateM::Test::TestSession::shutdown(const ::Ice::Context* __context, ::IceInternal::InvocationObserver& __observer)
{
    ::IceInternal::Outgoing __og(__handler.get(), __Test__TestSession__shutdown_name, ::Ice::Normal, __context, __observer);
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

void
IceDelegateD::Test::Backend::check(const ::Ice::Context* __context, ::IceInternal::InvocationObserver&)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::Test::Backend* servant = dynamic_cast< ::Test::Backend*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            servant->check(_current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __Test__Backend__check_name, ::Ice::Normal, __context);
    try
    {
        _DirectI __direct(__current);
        try
        {
            __direct.getServant()->__collocDispatch(__direct);
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
    }
    catch(const ::Ice::SystemException&)
    {
        throw;
    }
    catch(const ::IceInternal::LocalExceptionWrapper&)
    {
        throw;
    }
    catch(const ::std::exception& __ex)
    {
        ::IceInternal::LocalExceptionWrapper::throwWrapper(__ex);
    }
    catch(...)
    {
        throw ::IceInternal::LocalExceptionWrapper(::Ice::UnknownException(__FILE__, __LINE__, "unknown c++ exception"), false);
    }
}

void
IceDelegateD::Test::Backend::shutdown(const ::Ice::Context* __context, ::IceInternal::InvocationObserver&)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::Test::Backend* servant = dynamic_cast< ::Test::Backend*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            servant->shutdown(_current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __Test__Backend__shutdown_name, ::Ice::Normal, __context);
    try
    {
        _DirectI __direct(__current);
        try
        {
            __direct.getServant()->__collocDispatch(__direct);
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
    }
    catch(const ::Ice::SystemException&)
    {
        throw;
    }
    catch(const ::IceInternal::LocalExceptionWrapper&)
    {
        throw;
    }
    catch(const ::std::exception& __ex)
    {
        ::IceInternal::LocalExceptionWrapper::throwWrapper(__ex);
    }
    catch(...)
    {
        throw ::IceInternal::LocalExceptionWrapper(::Ice::UnknownException(__FILE__, __LINE__, "unknown c++ exception"), false);
    }
}

void
IceDelegateD::Test::TestController::step(const ::Glacier2::SessionPrx& currentSession, const ::Test::TestToken& currentState, ::Test::TestToken& newState, const ::Ice::Context* __context, ::IceInternal::InvocationObserver&)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(const ::Glacier2::SessionPrx& __p_currentSession, const ::Test::TestToken& __p_currentState, ::Test::TestToken& __p_newState, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _m_currentSession(__p_currentSession),
            _m_currentState(__p_currentState),
            _m_newState(__p_newState)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::Test::TestController* servant = dynamic_cast< ::Test::TestController*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            servant->step(_m_currentSession, _m_currentState, _m_newState, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        const ::Glacier2::SessionPrx& _m_currentSession;
        const ::Test::TestToken& _m_currentState;
        ::Test::TestToken& _m_newState;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __Test__TestController__step_name, ::Ice::Normal, __context);
    try
    {
        _DirectI __direct(currentSession, currentState, newState, __current);
        try
        {
            __direct.getServant()->__collocDispatch(__direct);
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
    }
    catch(const ::Ice::SystemException&)
    {
        throw;
    }
    catch(const ::IceInternal::LocalExceptionWrapper&)
    {
        throw;
    }
    catch(const ::std::exception& __ex)
    {
        ::IceInternal::LocalExceptionWrapper::throwWrapper(__ex);
    }
    catch(...)
    {
        throw ::IceInternal::LocalExceptionWrapper(::Ice::UnknownException(__FILE__, __LINE__, "unknown c++ exception"), false);
    }
}

void
IceDelegateD::Test::TestController::shutdown(const ::Ice::Context* __context, ::IceInternal::InvocationObserver&)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::Test::TestController* servant = dynamic_cast< ::Test::TestController*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            servant->shutdown(_current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __Test__TestController__shutdown_name, ::Ice::Normal, __context);
    try
    {
        _DirectI __direct(__current);
        try
        {
            __direct.getServant()->__collocDispatch(__direct);
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
    }
    catch(const ::Ice::SystemException&)
    {
        throw;
    }
    catch(const ::IceInternal::LocalExceptionWrapper&)
    {
        throw;
    }
    catch(const ::std::exception& __ex)
    {
        ::IceInternal::LocalExceptionWrapper::throwWrapper(__ex);
    }
    catch(...)
    {
        throw ::IceInternal::LocalExceptionWrapper(::Ice::UnknownException(__FILE__, __LINE__, "unknown c++ exception"), false);
    }
}

void
IceDelegateD::Test::TestSession::shutdown(const ::Ice::Context* __context, ::IceInternal::InvocationObserver&)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::Test::TestSession* servant = dynamic_cast< ::Test::TestSession*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            servant->shutdown(_current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __Test__TestSession__shutdown_name, ::Ice::Normal, __context);
    try
    {
        _DirectI __direct(__current);
        try
        {
            __direct.getServant()->__collocDispatch(__direct);
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
    }
    catch(const ::Ice::SystemException&)
    {
        throw;
    }
    catch(const ::IceInternal::LocalExceptionWrapper&)
    {
        throw;
    }
    catch(const ::std::exception& __ex)
    {
        ::IceInternal::LocalExceptionWrapper::throwWrapper(__ex);
    }
    catch(...)
    {
        throw ::IceInternal::LocalExceptionWrapper(::Ice::UnknownException(__FILE__, __LINE__, "unknown c++ exception"), false);
    }
}

::Ice::Object* Test::upCast(::Test::Backend* p) { return p; }

namespace
{
const ::std::string __Test__Backend_ids[2] =
{
    "::Ice::Object",
    "::Test::Backend"
};

}

bool
Test::Backend::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__Test__Backend_ids, __Test__Backend_ids + 2, _s);
}

::std::vector< ::std::string>
Test::Backend::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__Test__Backend_ids[0], &__Test__Backend_ids[2]);
}

const ::std::string&
Test::Backend::ice_id(const ::Ice::Current&) const
{
    return __Test__Backend_ids[1];
}

const ::std::string&
Test::Backend::ice_staticId()
{
    return __Test__Backend_ids[1];
}

::Ice::DispatchStatus
Test::Backend::___check(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    __inS.readEmptyParams();
    check(__current);
    __inS.__writeEmptyParams();
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
Test::Backend::___shutdown(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    __inS.readEmptyParams();
    shutdown(__current);
    __inS.__writeEmptyParams();
    return ::Ice::DispatchOK;
}

namespace
{
const ::std::string __Test__Backend_all[] =
{
    "check",
    "ice_id",
    "ice_ids",
    "ice_isA",
    "ice_ping",
    "shutdown"
};

}

::Ice::DispatchStatus
Test::Backend::__dispatch(::IceInternal::Incoming& in, const ::Ice::Current& current)
{
    ::std::pair< const ::std::string*, const ::std::string*> r = ::std::equal_range(__Test__Backend_all, __Test__Backend_all + 6, current.operation);
    if(r.first == r.second)
    {
        throw ::Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
    }

    switch(r.first - __Test__Backend_all)
    {
        case 0:
        {
            return ___check(in, current);
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
Test::Backend::__writeImpl(::IceInternal::BasicStream* __os) const
{
    __os->startWriteSlice(ice_staticId(), -1, true);
    __os->endWriteSlice();
}

void
Test::Backend::__readImpl(::IceInternal::BasicStream* __is)
{
    __is->startReadSlice();
    __is->endReadSlice();
}

void 
Test::__patch(BackendPtr& handle, const ::Ice::ObjectPtr& v)
{
    handle = ::Test::BackendPtr::dynamicCast(v);
    if(v && !handle)
    {
        IceInternal::Ex::throwUOE(::Test::Backend::ice_staticId(), v);
    }
}

::Ice::Object* Test::upCast(::Test::TestController* p) { return p; }

namespace
{
const ::std::string __Test__TestController_ids[2] =
{
    "::Ice::Object",
    "::Test::TestController"
};

}

bool
Test::TestController::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__Test__TestController_ids, __Test__TestController_ids + 2, _s);
}

::std::vector< ::std::string>
Test::TestController::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__Test__TestController_ids[0], &__Test__TestController_ids[2]);
}

const ::std::string&
Test::TestController::ice_id(const ::Ice::Current&) const
{
    return __Test__TestController_ids[1];
}

const ::std::string&
Test::TestController::ice_staticId()
{
    return __Test__TestController_ids[1];
}

::Ice::DispatchStatus
Test::TestController::___step(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.startReadParams();
    ::Glacier2::SessionPrx currentSession;
    ::Test::TestToken currentState;
    __is->read(currentSession);
    __is->read(currentState);
    __inS.endReadParams();
    ::Test::TestToken newState;
    step(currentSession, currentState, newState, __current);
    ::IceInternal::BasicStream* __os = __inS.__startWriteParams(::Ice::DefaultFormat);
    __os->write(newState);
    __inS.__endWriteParams(true);
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
Test::TestController::___shutdown(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    __inS.readEmptyParams();
    shutdown(__current);
    __inS.__writeEmptyParams();
    return ::Ice::DispatchOK;
}

namespace
{
const ::std::string __Test__TestController_all[] =
{
    "ice_id",
    "ice_ids",
    "ice_isA",
    "ice_ping",
    "shutdown",
    "step"
};

}

::Ice::DispatchStatus
Test::TestController::__dispatch(::IceInternal::Incoming& in, const ::Ice::Current& current)
{
    ::std::pair< const ::std::string*, const ::std::string*> r = ::std::equal_range(__Test__TestController_all, __Test__TestController_all + 6, current.operation);
    if(r.first == r.second)
    {
        throw ::Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
    }

    switch(r.first - __Test__TestController_all)
    {
        case 0:
        {
            return ___ice_id(in, current);
        }
        case 1:
        {
            return ___ice_ids(in, current);
        }
        case 2:
        {
            return ___ice_isA(in, current);
        }
        case 3:
        {
            return ___ice_ping(in, current);
        }
        case 4:
        {
            return ___shutdown(in, current);
        }
        case 5:
        {
            return ___step(in, current);
        }
    }

    assert(false);
    throw ::Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
}

void
Test::TestController::__writeImpl(::IceInternal::BasicStream* __os) const
{
    __os->startWriteSlice(ice_staticId(), -1, true);
    __os->endWriteSlice();
}

void
Test::TestController::__readImpl(::IceInternal::BasicStream* __is)
{
    __is->startReadSlice();
    __is->endReadSlice();
}

void 
Test::__patch(TestControllerPtr& handle, const ::Ice::ObjectPtr& v)
{
    handle = ::Test::TestControllerPtr::dynamicCast(v);
    if(v && !handle)
    {
        IceInternal::Ex::throwUOE(::Test::TestController::ice_staticId(), v);
    }
}

::Ice::Object* Test::upCast(::Test::TestSession* p) { return p; }

namespace
{
const ::std::string __Test__TestSession_ids[3] =
{
    "::Glacier2::Session",
    "::Ice::Object",
    "::Test::TestSession"
};

}

bool
Test::TestSession::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__Test__TestSession_ids, __Test__TestSession_ids + 3, _s);
}

::std::vector< ::std::string>
Test::TestSession::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__Test__TestSession_ids[0], &__Test__TestSession_ids[3]);
}

const ::std::string&
Test::TestSession::ice_id(const ::Ice::Current&) const
{
    return __Test__TestSession_ids[2];
}

const ::std::string&
Test::TestSession::ice_staticId()
{
    return __Test__TestSession_ids[2];
}

::Ice::DispatchStatus
Test::TestSession::___shutdown(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    __inS.readEmptyParams();
    shutdown(__current);
    __inS.__writeEmptyParams();
    return ::Ice::DispatchOK;
}

namespace
{
const ::std::string __Test__TestSession_all[] =
{
    "destroy",
    "ice_id",
    "ice_ids",
    "ice_isA",
    "ice_ping",
    "shutdown"
};

}

::Ice::DispatchStatus
Test::TestSession::__dispatch(::IceInternal::Incoming& in, const ::Ice::Current& current)
{
    ::std::pair< const ::std::string*, const ::std::string*> r = ::std::equal_range(__Test__TestSession_all, __Test__TestSession_all + 6, current.operation);
    if(r.first == r.second)
    {
        throw ::Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
    }

    switch(r.first - __Test__TestSession_all)
    {
        case 0:
        {
            return ___destroy(in, current);
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
Test::TestSession::__writeImpl(::IceInternal::BasicStream* __os) const
{
    __os->startWriteSlice(ice_staticId(), -1, true);
    __os->endWriteSlice();
}

void
Test::TestSession::__readImpl(::IceInternal::BasicStream* __is)
{
    __is->startReadSlice();
    __is->endReadSlice();
}

void 
Test::__patch(TestSessionPtr& handle, const ::Ice::ObjectPtr& v)
{
    handle = ::Test::TestSessionPtr::dynamicCast(v);
    if(v && !handle)
    {
        IceInternal::Ex::throwUOE(::Test::TestSession::ice_staticId(), v);
    }
}