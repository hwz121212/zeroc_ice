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

const ::std::string __Test__Timeout__op_name = "op";

const ::std::string __Test__Timeout__sendData_name = "sendData";

const ::std::string __Test__Timeout__sleep_name = "sleep";

const ::std::string __Test__Timeout__holdAdapter_name = "holdAdapter";

const ::std::string __Test__Timeout__shutdown_name = "shutdown";

}
::IceProxy::Ice::Object* ::IceProxy::Test::upCast(::IceProxy::Test::Timeout* p) { return p; }

void
::IceProxy::Test::__read(::IceInternal::BasicStream* __is, ::IceInternal::ProxyHandle< ::IceProxy::Test::Timeout>& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::Test::Timeout;
        v->__copyFrom(proxy);
    }
}

void
IceProxy::Test::Timeout::op(const ::Ice::Context* __ctx)
{
    ::IceInternal::InvocationObserver __observer(this, __Test__Timeout__op_name, __ctx);
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __delBase = __getDelegate(false);
            ::IceDelegate::Test::Timeout* __del = dynamic_cast< ::IceDelegate::Test::Timeout*>(__delBase.get());
            __del->op(__ctx, __observer);
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
IceProxy::Test::Timeout::begin_op(const ::Ice::Context* __ctx, const ::IceInternal::CallbackBasePtr& __del, const ::Ice::LocalObjectPtr& __cookie)
{
    ::IceInternal::OutgoingAsyncPtr __result = new ::IceInternal::OutgoingAsync(this, __Test__Timeout__op_name, __del, __cookie);
    try
    {
        __result->__prepare(__Test__Timeout__op_name, ::Ice::Normal, __ctx);
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
IceProxy::Test::Timeout::end_op(const ::Ice::AsyncResultPtr& __result)
{
    __end(__result, __Test__Timeout__op_name);
}

void
IceProxy::Test::Timeout::sendData(const ::Test::ByteSeq& seq, const ::Ice::Context* __ctx)
{
    ::IceInternal::InvocationObserver __observer(this, __Test__Timeout__sendData_name, __ctx);
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __delBase = __getDelegate(false);
            ::IceDelegate::Test::Timeout* __del = dynamic_cast< ::IceDelegate::Test::Timeout*>(__delBase.get());
            __del->sendData(seq, __ctx, __observer);
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
IceProxy::Test::Timeout::begin_sendData(const ::Test::ByteSeq& seq, const ::Ice::Context* __ctx, const ::IceInternal::CallbackBasePtr& __del, const ::Ice::LocalObjectPtr& __cookie)
{
    ::IceInternal::OutgoingAsyncPtr __result = new ::IceInternal::OutgoingAsync(this, __Test__Timeout__sendData_name, __del, __cookie);
    try
    {
        __result->__prepare(__Test__Timeout__sendData_name, ::Ice::Normal, __ctx);
        ::IceInternal::BasicStream* __os = __result->__startWriteParams(::Ice::DefaultFormat);
        __os->write(seq);
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
IceProxy::Test::Timeout::end_sendData(const ::Ice::AsyncResultPtr& __result)
{
    __end(__result, __Test__Timeout__sendData_name);
}

void
IceProxy::Test::Timeout::sleep(::Ice::Int to, const ::Ice::Context* __ctx)
{
    ::IceInternal::InvocationObserver __observer(this, __Test__Timeout__sleep_name, __ctx);
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __delBase = __getDelegate(false);
            ::IceDelegate::Test::Timeout* __del = dynamic_cast< ::IceDelegate::Test::Timeout*>(__delBase.get());
            __del->sleep(to, __ctx, __observer);
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
IceProxy::Test::Timeout::begin_sleep(::Ice::Int to, const ::Ice::Context* __ctx, const ::IceInternal::CallbackBasePtr& __del, const ::Ice::LocalObjectPtr& __cookie)
{
    ::IceInternal::OutgoingAsyncPtr __result = new ::IceInternal::OutgoingAsync(this, __Test__Timeout__sleep_name, __del, __cookie);
    try
    {
        __result->__prepare(__Test__Timeout__sleep_name, ::Ice::Normal, __ctx);
        ::IceInternal::BasicStream* __os = __result->__startWriteParams(::Ice::DefaultFormat);
        __os->write(to);
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
IceProxy::Test::Timeout::end_sleep(const ::Ice::AsyncResultPtr& __result)
{
    __end(__result, __Test__Timeout__sleep_name);
}

void
IceProxy::Test::Timeout::holdAdapter(::Ice::Int to, const ::Ice::Context* __ctx)
{
    ::IceInternal::InvocationObserver __observer(this, __Test__Timeout__holdAdapter_name, __ctx);
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __delBase = __getDelegate(false);
            ::IceDelegate::Test::Timeout* __del = dynamic_cast< ::IceDelegate::Test::Timeout*>(__delBase.get());
            __del->holdAdapter(to, __ctx, __observer);
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
IceProxy::Test::Timeout::begin_holdAdapter(::Ice::Int to, const ::Ice::Context* __ctx, const ::IceInternal::CallbackBasePtr& __del, const ::Ice::LocalObjectPtr& __cookie)
{
    ::IceInternal::OutgoingAsyncPtr __result = new ::IceInternal::OutgoingAsync(this, __Test__Timeout__holdAdapter_name, __del, __cookie);
    try
    {
        __result->__prepare(__Test__Timeout__holdAdapter_name, ::Ice::Normal, __ctx);
        ::IceInternal::BasicStream* __os = __result->__startWriteParams(::Ice::DefaultFormat);
        __os->write(to);
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
IceProxy::Test::Timeout::end_holdAdapter(const ::Ice::AsyncResultPtr& __result)
{
    __end(__result, __Test__Timeout__holdAdapter_name);
}

void
IceProxy::Test::Timeout::shutdown(const ::Ice::Context* __ctx)
{
    ::IceInternal::InvocationObserver __observer(this, __Test__Timeout__shutdown_name, __ctx);
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __delBase = __getDelegate(false);
            ::IceDelegate::Test::Timeout* __del = dynamic_cast< ::IceDelegate::Test::Timeout*>(__delBase.get());
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
IceProxy::Test::Timeout::begin_shutdown(const ::Ice::Context* __ctx, const ::IceInternal::CallbackBasePtr& __del, const ::Ice::LocalObjectPtr& __cookie)
{
    ::IceInternal::OutgoingAsyncPtr __result = new ::IceInternal::OutgoingAsync(this, __Test__Timeout__shutdown_name, __del, __cookie);
    try
    {
        __result->__prepare(__Test__Timeout__shutdown_name, ::Ice::Normal, __ctx);
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
IceProxy::Test::Timeout::end_shutdown(const ::Ice::AsyncResultPtr& __result)
{
    __end(__result, __Test__Timeout__shutdown_name);
}

const ::std::string&
IceProxy::Test::Timeout::ice_staticId()
{
    return ::Test::Timeout::ice_staticId();
}

::IceInternal::Handle< ::IceDelegateM::Ice::Object>
IceProxy::Test::Timeout::__createDelegateM()
{
    return ::IceInternal::Handle< ::IceDelegateM::Ice::Object>(new ::IceDelegateM::Test::Timeout);
}

::IceInternal::Handle< ::IceDelegateD::Ice::Object>
IceProxy::Test::Timeout::__createDelegateD()
{
    return ::IceInternal::Handle< ::IceDelegateD::Ice::Object>(new ::IceDelegateD::Test::Timeout);
}

::IceProxy::Ice::Object*
IceProxy::Test::Timeout::__newInstance() const
{
    return new Timeout;
}

void
IceDelegateM::Test::Timeout::op(const ::Ice::Context* __context, ::IceInternal::InvocationObserver& __observer)
{
    ::IceInternal::Outgoing __og(__handler.get(), __Test__Timeout__op_name, ::Ice::Normal, __context, __observer);
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
IceDelegateM::Test::Timeout::sendData(const ::Test::ByteSeq& seq, const ::Ice::Context* __context, ::IceInternal::InvocationObserver& __observer)
{
    ::IceInternal::Outgoing __og(__handler.get(), __Test__Timeout__sendData_name, ::Ice::Normal, __context, __observer);
    try
    {
        ::IceInternal::BasicStream* __os = __og.startWriteParams(::Ice::DefaultFormat);
        __os->write(seq);
        __og.endWriteParams();
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
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
IceDelegateM::Test::Timeout::sleep(::Ice::Int to, const ::Ice::Context* __context, ::IceInternal::InvocationObserver& __observer)
{
    ::IceInternal::Outgoing __og(__handler.get(), __Test__Timeout__sleep_name, ::Ice::Normal, __context, __observer);
    try
    {
        ::IceInternal::BasicStream* __os = __og.startWriteParams(::Ice::DefaultFormat);
        __os->write(to);
        __og.endWriteParams();
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
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
IceDelegateM::Test::Timeout::holdAdapter(::Ice::Int to, const ::Ice::Context* __context, ::IceInternal::InvocationObserver& __observer)
{
    ::IceInternal::Outgoing __og(__handler.get(), __Test__Timeout__holdAdapter_name, ::Ice::Normal, __context, __observer);
    try
    {
        ::IceInternal::BasicStream* __os = __og.startWriteParams(::Ice::DefaultFormat);
        __os->write(to);
        __og.endWriteParams();
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
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
IceDelegateM::Test::Timeout::shutdown(const ::Ice::Context* __context, ::IceInternal::InvocationObserver& __observer)
{
    ::IceInternal::Outgoing __og(__handler.get(), __Test__Timeout__shutdown_name, ::Ice::Normal, __context, __observer);
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
IceDelegateD::Test::Timeout::op(const ::Ice::Context* __context, ::IceInternal::InvocationObserver&)
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
            ::Test::Timeout* servant = dynamic_cast< ::Test::Timeout*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            servant->op(_current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __Test__Timeout__op_name, ::Ice::Normal, __context);
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
IceDelegateD::Test::Timeout::sendData(const ::Test::ByteSeq& seq, const ::Ice::Context* __context, ::IceInternal::InvocationObserver&)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(const ::Test::ByteSeq& __p_seq, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _m_seq(__p_seq)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::Test::Timeout* servant = dynamic_cast< ::Test::Timeout*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            servant->sendData(_m_seq, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        const ::Test::ByteSeq& _m_seq;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __Test__Timeout__sendData_name, ::Ice::Normal, __context);
    try
    {
        _DirectI __direct(seq, __current);
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
IceDelegateD::Test::Timeout::sleep(::Ice::Int to, const ::Ice::Context* __context, ::IceInternal::InvocationObserver&)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::Ice::Int __p_to, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _m_to(__p_to)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::Test::Timeout* servant = dynamic_cast< ::Test::Timeout*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            servant->sleep(_m_to, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::Ice::Int _m_to;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __Test__Timeout__sleep_name, ::Ice::Normal, __context);
    try
    {
        _DirectI __direct(to, __current);
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
IceDelegateD::Test::Timeout::holdAdapter(::Ice::Int to, const ::Ice::Context* __context, ::IceInternal::InvocationObserver&)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::Ice::Int __p_to, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _m_to(__p_to)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::Test::Timeout* servant = dynamic_cast< ::Test::Timeout*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            servant->holdAdapter(_m_to, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::Ice::Int _m_to;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __Test__Timeout__holdAdapter_name, ::Ice::Normal, __context);
    try
    {
        _DirectI __direct(to, __current);
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
IceDelegateD::Test::Timeout::shutdown(const ::Ice::Context* __context, ::IceInternal::InvocationObserver&)
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
            ::Test::Timeout* servant = dynamic_cast< ::Test::Timeout*>(object);
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
    __initCurrent(__current, __Test__Timeout__shutdown_name, ::Ice::Normal, __context);
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

::Ice::Object* Test::upCast(::Test::Timeout* p) { return p; }

namespace
{
const ::std::string __Test__Timeout_ids[2] =
{
    "::Ice::Object",
    "::Test::Timeout"
};

}

bool
Test::Timeout::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__Test__Timeout_ids, __Test__Timeout_ids + 2, _s);
}

::std::vector< ::std::string>
Test::Timeout::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__Test__Timeout_ids[0], &__Test__Timeout_ids[2]);
}

const ::std::string&
Test::Timeout::ice_id(const ::Ice::Current&) const
{
    return __Test__Timeout_ids[1];
}

const ::std::string&
Test::Timeout::ice_staticId()
{
    return __Test__Timeout_ids[1];
}

::Ice::DispatchStatus
Test::Timeout::___op(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    __inS.readEmptyParams();
    op(__current);
    __inS.__writeEmptyParams();
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
Test::Timeout::___sendData(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.startReadParams();
    ::Test::ByteSeq seq;
    __is->read(seq);
    __inS.endReadParams();
    sendData(seq, __current);
    __inS.__writeEmptyParams();
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
Test::Timeout::___sleep(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.startReadParams();
    ::Ice::Int to;
    __is->read(to);
    __inS.endReadParams();
    sleep(to, __current);
    __inS.__writeEmptyParams();
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
Test::Timeout::___holdAdapter(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.startReadParams();
    ::Ice::Int to;
    __is->read(to);
    __inS.endReadParams();
    holdAdapter(to, __current);
    __inS.__writeEmptyParams();
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
Test::Timeout::___shutdown(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    __inS.readEmptyParams();
    shutdown(__current);
    __inS.__writeEmptyParams();
    return ::Ice::DispatchOK;
}

namespace
{
const ::std::string __Test__Timeout_all[] =
{
    "holdAdapter",
    "ice_id",
    "ice_ids",
    "ice_isA",
    "ice_ping",
    "op",
    "sendData",
    "shutdown",
    "sleep"
};

}

::Ice::DispatchStatus
Test::Timeout::__dispatch(::IceInternal::Incoming& in, const ::Ice::Current& current)
{
    ::std::pair< const ::std::string*, const ::std::string*> r = ::std::equal_range(__Test__Timeout_all, __Test__Timeout_all + 9, current.operation);
    if(r.first == r.second)
    {
        throw ::Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
    }

    switch(r.first - __Test__Timeout_all)
    {
        case 0:
        {
            return ___holdAdapter(in, current);
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
            return ___op(in, current);
        }
        case 6:
        {
            return ___sendData(in, current);
        }
        case 7:
        {
            return ___shutdown(in, current);
        }
        case 8:
        {
            return ___sleep(in, current);
        }
    }

    assert(false);
    throw ::Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
}

void
Test::Timeout::__writeImpl(::IceInternal::BasicStream* __os) const
{
    __os->startWriteSlice(ice_staticId(), -1, true);
    __os->endWriteSlice();
}

void
Test::Timeout::__readImpl(::IceInternal::BasicStream* __is)
{
    __is->startReadSlice();
    __is->endReadSlice();
}

void 
Test::__patch(TimeoutPtr& handle, const ::Ice::ObjectPtr& v)
{
    handle = ::Test::TimeoutPtr::dynamicCast(v);
    if(v && !handle)
    {
        IceInternal::Ex::throwUOE(::Test::Timeout::ice_staticId(), v);
    }
}