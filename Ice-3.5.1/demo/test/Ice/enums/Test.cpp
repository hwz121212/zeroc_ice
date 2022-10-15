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
#include <Ice/Stream.h>
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

const ::std::string __Test__TestIntf__opByte_name = "opByte";

const ::std::string __Test__TestIntf__opShort_name = "opShort";

const ::std::string __Test__TestIntf__opInt_name = "opInt";

const ::std::string __Test__TestIntf__opSimple_name = "opSimple";

const ::std::string __Test__TestIntf__shutdown_name = "shutdown";

}

namespace Ice
{
}
::IceProxy::Ice::Object* ::IceProxy::Test::upCast(::IceProxy::Test::TestIntf* p) { return p; }

void
::IceProxy::Test::__read(::IceInternal::BasicStream* __is, ::IceInternal::ProxyHandle< ::IceProxy::Test::TestIntf>& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::Test::TestIntf;
        v->__copyFrom(proxy);
    }
}

::Test::ByteEnum
IceProxy::Test::TestIntf::opByte(::Test::ByteEnum b1, ::Test::ByteEnum& b2, const ::Ice::Context* __ctx)
{
    ::IceInternal::InvocationObserver __observer(this, __Test__TestIntf__opByte_name, __ctx);
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__Test__TestIntf__opByte_name);
            __delBase = __getDelegate(false);
            ::IceDelegate::Test::TestIntf* __del = dynamic_cast< ::IceDelegate::Test::TestIntf*>(__delBase.get());
            return __del->opByte(b1, b2, __ctx, __observer);
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
IceProxy::Test::TestIntf::begin_opByte(::Test::ByteEnum b1, const ::Ice::Context* __ctx, const ::IceInternal::CallbackBasePtr& __del, const ::Ice::LocalObjectPtr& __cookie)
{
    __checkAsyncTwowayOnly(__Test__TestIntf__opByte_name);
    ::IceInternal::OutgoingAsyncPtr __result = new ::IceInternal::OutgoingAsync(this, __Test__TestIntf__opByte_name, __del, __cookie);
    try
    {
        __result->__prepare(__Test__TestIntf__opByte_name, ::Ice::Normal, __ctx);
        ::IceInternal::BasicStream* __os = __result->__startWriteParams(::Ice::DefaultFormat);
        __os->write(b1);
        __result->__endWriteParams();
        __result->__send(true);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __result->__exceptionAsync(__ex);
    }
    return __result;
}

::Test::ByteEnum
IceProxy::Test::TestIntf::end_opByte(::Test::ByteEnum& b2, const ::Ice::AsyncResultPtr& __result)
{
    ::Ice::AsyncResult::__check(__result, this, __Test__TestIntf__opByte_name);
    ::Test::ByteEnum __ret;
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
        __is->read(b2);
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

::Test::ShortEnum
IceProxy::Test::TestIntf::opShort(::Test::ShortEnum s1, ::Test::ShortEnum& s2, const ::Ice::Context* __ctx)
{
    ::IceInternal::InvocationObserver __observer(this, __Test__TestIntf__opShort_name, __ctx);
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__Test__TestIntf__opShort_name);
            __delBase = __getDelegate(false);
            ::IceDelegate::Test::TestIntf* __del = dynamic_cast< ::IceDelegate::Test::TestIntf*>(__delBase.get());
            return __del->opShort(s1, s2, __ctx, __observer);
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
IceProxy::Test::TestIntf::begin_opShort(::Test::ShortEnum s1, const ::Ice::Context* __ctx, const ::IceInternal::CallbackBasePtr& __del, const ::Ice::LocalObjectPtr& __cookie)
{
    __checkAsyncTwowayOnly(__Test__TestIntf__opShort_name);
    ::IceInternal::OutgoingAsyncPtr __result = new ::IceInternal::OutgoingAsync(this, __Test__TestIntf__opShort_name, __del, __cookie);
    try
    {
        __result->__prepare(__Test__TestIntf__opShort_name, ::Ice::Normal, __ctx);
        ::IceInternal::BasicStream* __os = __result->__startWriteParams(::Ice::DefaultFormat);
        __os->write(s1);
        __result->__endWriteParams();
        __result->__send(true);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __result->__exceptionAsync(__ex);
    }
    return __result;
}

::Test::ShortEnum
IceProxy::Test::TestIntf::end_opShort(::Test::ShortEnum& s2, const ::Ice::AsyncResultPtr& __result)
{
    ::Ice::AsyncResult::__check(__result, this, __Test__TestIntf__opShort_name);
    ::Test::ShortEnum __ret;
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
        __is->read(s2);
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

::Test::IntEnum
IceProxy::Test::TestIntf::opInt(::Test::IntEnum i1, ::Test::IntEnum& i2, const ::Ice::Context* __ctx)
{
    ::IceInternal::InvocationObserver __observer(this, __Test__TestIntf__opInt_name, __ctx);
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__Test__TestIntf__opInt_name);
            __delBase = __getDelegate(false);
            ::IceDelegate::Test::TestIntf* __del = dynamic_cast< ::IceDelegate::Test::TestIntf*>(__delBase.get());
            return __del->opInt(i1, i2, __ctx, __observer);
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
IceProxy::Test::TestIntf::begin_opInt(::Test::IntEnum i1, const ::Ice::Context* __ctx, const ::IceInternal::CallbackBasePtr& __del, const ::Ice::LocalObjectPtr& __cookie)
{
    __checkAsyncTwowayOnly(__Test__TestIntf__opInt_name);
    ::IceInternal::OutgoingAsyncPtr __result = new ::IceInternal::OutgoingAsync(this, __Test__TestIntf__opInt_name, __del, __cookie);
    try
    {
        __result->__prepare(__Test__TestIntf__opInt_name, ::Ice::Normal, __ctx);
        ::IceInternal::BasicStream* __os = __result->__startWriteParams(::Ice::DefaultFormat);
        __os->write(i1);
        __result->__endWriteParams();
        __result->__send(true);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __result->__exceptionAsync(__ex);
    }
    return __result;
}

::Test::IntEnum
IceProxy::Test::TestIntf::end_opInt(::Test::IntEnum& i2, const ::Ice::AsyncResultPtr& __result)
{
    ::Ice::AsyncResult::__check(__result, this, __Test__TestIntf__opInt_name);
    ::Test::IntEnum __ret;
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
        __is->read(i2);
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

::Test::SimpleEnum
IceProxy::Test::TestIntf::opSimple(::Test::SimpleEnum s1, ::Test::SimpleEnum& s2, const ::Ice::Context* __ctx)
{
    ::IceInternal::InvocationObserver __observer(this, __Test__TestIntf__opSimple_name, __ctx);
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__Test__TestIntf__opSimple_name);
            __delBase = __getDelegate(false);
            ::IceDelegate::Test::TestIntf* __del = dynamic_cast< ::IceDelegate::Test::TestIntf*>(__delBase.get());
            return __del->opSimple(s1, s2, __ctx, __observer);
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
IceProxy::Test::TestIntf::begin_opSimple(::Test::SimpleEnum s1, const ::Ice::Context* __ctx, const ::IceInternal::CallbackBasePtr& __del, const ::Ice::LocalObjectPtr& __cookie)
{
    __checkAsyncTwowayOnly(__Test__TestIntf__opSimple_name);
    ::IceInternal::OutgoingAsyncPtr __result = new ::IceInternal::OutgoingAsync(this, __Test__TestIntf__opSimple_name, __del, __cookie);
    try
    {
        __result->__prepare(__Test__TestIntf__opSimple_name, ::Ice::Normal, __ctx);
        ::IceInternal::BasicStream* __os = __result->__startWriteParams(::Ice::DefaultFormat);
        __os->write(s1);
        __result->__endWriteParams();
        __result->__send(true);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __result->__exceptionAsync(__ex);
    }
    return __result;
}

::Test::SimpleEnum
IceProxy::Test::TestIntf::end_opSimple(::Test::SimpleEnum& s2, const ::Ice::AsyncResultPtr& __result)
{
    ::Ice::AsyncResult::__check(__result, this, __Test__TestIntf__opSimple_name);
    ::Test::SimpleEnum __ret;
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
        __is->read(s2);
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

void
IceProxy::Test::TestIntf::shutdown(const ::Ice::Context* __ctx)
{
    ::IceInternal::InvocationObserver __observer(this, __Test__TestIntf__shutdown_name, __ctx);
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __delBase = __getDelegate(false);
            ::IceDelegate::Test::TestIntf* __del = dynamic_cast< ::IceDelegate::Test::TestIntf*>(__delBase.get());
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
IceProxy::Test::TestIntf::begin_shutdown(const ::Ice::Context* __ctx, const ::IceInternal::CallbackBasePtr& __del, const ::Ice::LocalObjectPtr& __cookie)
{
    ::IceInternal::OutgoingAsyncPtr __result = new ::IceInternal::OutgoingAsync(this, __Test__TestIntf__shutdown_name, __del, __cookie);
    try
    {
        __result->__prepare(__Test__TestIntf__shutdown_name, ::Ice::Normal, __ctx);
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
IceProxy::Test::TestIntf::end_shutdown(const ::Ice::AsyncResultPtr& __result)
{
    __end(__result, __Test__TestIntf__shutdown_name);
}

const ::std::string&
IceProxy::Test::TestIntf::ice_staticId()
{
    return ::Test::TestIntf::ice_staticId();
}

::IceInternal::Handle< ::IceDelegateM::Ice::Object>
IceProxy::Test::TestIntf::__createDelegateM()
{
    return ::IceInternal::Handle< ::IceDelegateM::Ice::Object>(new ::IceDelegateM::Test::TestIntf);
}

::IceInternal::Handle< ::IceDelegateD::Ice::Object>
IceProxy::Test::TestIntf::__createDelegateD()
{
    return ::IceInternal::Handle< ::IceDelegateD::Ice::Object>(new ::IceDelegateD::Test::TestIntf);
}

::IceProxy::Ice::Object*
IceProxy::Test::TestIntf::__newInstance() const
{
    return new TestIntf;
}

::Test::ByteEnum
IceDelegateM::Test::TestIntf::opByte(::Test::ByteEnum b1, ::Test::ByteEnum& b2, const ::Ice::Context* __context, ::IceInternal::InvocationObserver& __observer)
{
    ::IceInternal::Outgoing __og(__handler.get(), __Test__TestIntf__opByte_name, ::Ice::Normal, __context, __observer);
    try
    {
        ::IceInternal::BasicStream* __os = __og.startWriteParams(::Ice::DefaultFormat);
        __os->write(b1);
        __og.endWriteParams();
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    ::Test::ByteEnum __ret;
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
        __is->read(b2);
        __is->read(__ret);
        __og.endReadParams();
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Test::ShortEnum
IceDelegateM::Test::TestIntf::opShort(::Test::ShortEnum s1, ::Test::ShortEnum& s2, const ::Ice::Context* __context, ::IceInternal::InvocationObserver& __observer)
{
    ::IceInternal::Outgoing __og(__handler.get(), __Test__TestIntf__opShort_name, ::Ice::Normal, __context, __observer);
    try
    {
        ::IceInternal::BasicStream* __os = __og.startWriteParams(::Ice::DefaultFormat);
        __os->write(s1);
        __og.endWriteParams();
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    ::Test::ShortEnum __ret;
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
        __is->read(s2);
        __is->read(__ret);
        __og.endReadParams();
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Test::IntEnum
IceDelegateM::Test::TestIntf::opInt(::Test::IntEnum i1, ::Test::IntEnum& i2, const ::Ice::Context* __context, ::IceInternal::InvocationObserver& __observer)
{
    ::IceInternal::Outgoing __og(__handler.get(), __Test__TestIntf__opInt_name, ::Ice::Normal, __context, __observer);
    try
    {
        ::IceInternal::BasicStream* __os = __og.startWriteParams(::Ice::DefaultFormat);
        __os->write(i1);
        __og.endWriteParams();
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    ::Test::IntEnum __ret;
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
        __is->read(i2);
        __is->read(__ret);
        __og.endReadParams();
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Test::SimpleEnum
IceDelegateM::Test::TestIntf::opSimple(::Test::SimpleEnum s1, ::Test::SimpleEnum& s2, const ::Ice::Context* __context, ::IceInternal::InvocationObserver& __observer)
{
    ::IceInternal::Outgoing __og(__handler.get(), __Test__TestIntf__opSimple_name, ::Ice::Normal, __context, __observer);
    try
    {
        ::IceInternal::BasicStream* __os = __og.startWriteParams(::Ice::DefaultFormat);
        __os->write(s1);
        __og.endWriteParams();
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    ::Test::SimpleEnum __ret;
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
        __is->read(s2);
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
IceDelegateM::Test::TestIntf::shutdown(const ::Ice::Context* __context, ::IceInternal::InvocationObserver& __observer)
{
    ::IceInternal::Outgoing __og(__handler.get(), __Test__TestIntf__shutdown_name, ::Ice::Normal, __context, __observer);
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

::Test::ByteEnum
IceDelegateD::Test::TestIntf::opByte(::Test::ByteEnum b1, ::Test::ByteEnum& b2, const ::Ice::Context* __context, ::IceInternal::InvocationObserver&)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::Test::ByteEnum& __result, ::Test::ByteEnum __p_b1, ::Test::ByteEnum& __p_b2, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _result(__result),
            _m_b1(__p_b1),
            _m_b2(__p_b2)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::Test::TestIntf* servant = dynamic_cast< ::Test::TestIntf*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            _result = servant->opByte(_m_b1, _m_b2, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::Test::ByteEnum& _result;
        ::Test::ByteEnum _m_b1;
        ::Test::ByteEnum& _m_b2;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __Test__TestIntf__opByte_name, ::Ice::Normal, __context);
    ::Test::ByteEnum __result;
    try
    {
        _DirectI __direct(__result, b1, b2, __current);
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
    return __result;
}

::Test::ShortEnum
IceDelegateD::Test::TestIntf::opShort(::Test::ShortEnum s1, ::Test::ShortEnum& s2, const ::Ice::Context* __context, ::IceInternal::InvocationObserver&)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::Test::ShortEnum& __result, ::Test::ShortEnum __p_s1, ::Test::ShortEnum& __p_s2, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _result(__result),
            _m_s1(__p_s1),
            _m_s2(__p_s2)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::Test::TestIntf* servant = dynamic_cast< ::Test::TestIntf*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            _result = servant->opShort(_m_s1, _m_s2, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::Test::ShortEnum& _result;
        ::Test::ShortEnum _m_s1;
        ::Test::ShortEnum& _m_s2;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __Test__TestIntf__opShort_name, ::Ice::Normal, __context);
    ::Test::ShortEnum __result;
    try
    {
        _DirectI __direct(__result, s1, s2, __current);
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
    return __result;
}

::Test::IntEnum
IceDelegateD::Test::TestIntf::opInt(::Test::IntEnum i1, ::Test::IntEnum& i2, const ::Ice::Context* __context, ::IceInternal::InvocationObserver&)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::Test::IntEnum& __result, ::Test::IntEnum __p_i1, ::Test::IntEnum& __p_i2, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _result(__result),
            _m_i1(__p_i1),
            _m_i2(__p_i2)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::Test::TestIntf* servant = dynamic_cast< ::Test::TestIntf*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            _result = servant->opInt(_m_i1, _m_i2, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::Test::IntEnum& _result;
        ::Test::IntEnum _m_i1;
        ::Test::IntEnum& _m_i2;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __Test__TestIntf__opInt_name, ::Ice::Normal, __context);
    ::Test::IntEnum __result;
    try
    {
        _DirectI __direct(__result, i1, i2, __current);
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
    return __result;
}

::Test::SimpleEnum
IceDelegateD::Test::TestIntf::opSimple(::Test::SimpleEnum s1, ::Test::SimpleEnum& s2, const ::Ice::Context* __context, ::IceInternal::InvocationObserver&)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::Test::SimpleEnum& __result, ::Test::SimpleEnum __p_s1, ::Test::SimpleEnum& __p_s2, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _result(__result),
            _m_s1(__p_s1),
            _m_s2(__p_s2)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::Test::TestIntf* servant = dynamic_cast< ::Test::TestIntf*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            _result = servant->opSimple(_m_s1, _m_s2, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::Test::SimpleEnum& _result;
        ::Test::SimpleEnum _m_s1;
        ::Test::SimpleEnum& _m_s2;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __Test__TestIntf__opSimple_name, ::Ice::Normal, __context);
    ::Test::SimpleEnum __result;
    try
    {
        _DirectI __direct(__result, s1, s2, __current);
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
    return __result;
}

void
IceDelegateD::Test::TestIntf::shutdown(const ::Ice::Context* __context, ::IceInternal::InvocationObserver&)
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
            ::Test::TestIntf* servant = dynamic_cast< ::Test::TestIntf*>(object);
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
    __initCurrent(__current, __Test__TestIntf__shutdown_name, ::Ice::Normal, __context);
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

::Ice::Object* Test::upCast(::Test::TestIntf* p) { return p; }

namespace
{
const ::std::string __Test__TestIntf_ids[2] =
{
    "::Ice::Object",
    "::Test::TestIntf"
};

}

bool
Test::TestIntf::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__Test__TestIntf_ids, __Test__TestIntf_ids + 2, _s);
}

::std::vector< ::std::string>
Test::TestIntf::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__Test__TestIntf_ids[0], &__Test__TestIntf_ids[2]);
}

const ::std::string&
Test::TestIntf::ice_id(const ::Ice::Current&) const
{
    return __Test__TestIntf_ids[1];
}

const ::std::string&
Test::TestIntf::ice_staticId()
{
    return __Test__TestIntf_ids[1];
}

::Ice::DispatchStatus
Test::TestIntf::___opByte(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.startReadParams();
    ::Test::ByteEnum b1;
    __is->read(b1);
    __inS.endReadParams();
    ::Test::ByteEnum b2;
    ::Test::ByteEnum __ret = opByte(b1, b2, __current);
    ::IceInternal::BasicStream* __os = __inS.__startWriteParams(::Ice::DefaultFormat);
    __os->write(b2);
    __os->write(__ret);
    __inS.__endWriteParams(true);
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
Test::TestIntf::___opShort(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.startReadParams();
    ::Test::ShortEnum s1;
    __is->read(s1);
    __inS.endReadParams();
    ::Test::ShortEnum s2;
    ::Test::ShortEnum __ret = opShort(s1, s2, __current);
    ::IceInternal::BasicStream* __os = __inS.__startWriteParams(::Ice::DefaultFormat);
    __os->write(s2);
    __os->write(__ret);
    __inS.__endWriteParams(true);
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
Test::TestIntf::___opInt(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.startReadParams();
    ::Test::IntEnum i1;
    __is->read(i1);
    __inS.endReadParams();
    ::Test::IntEnum i2;
    ::Test::IntEnum __ret = opInt(i1, i2, __current);
    ::IceInternal::BasicStream* __os = __inS.__startWriteParams(::Ice::DefaultFormat);
    __os->write(i2);
    __os->write(__ret);
    __inS.__endWriteParams(true);
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
Test::TestIntf::___opSimple(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.startReadParams();
    ::Test::SimpleEnum s1;
    __is->read(s1);
    __inS.endReadParams();
    ::Test::SimpleEnum s2;
    ::Test::SimpleEnum __ret = opSimple(s1, s2, __current);
    ::IceInternal::BasicStream* __os = __inS.__startWriteParams(::Ice::DefaultFormat);
    __os->write(s2);
    __os->write(__ret);
    __inS.__endWriteParams(true);
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
Test::TestIntf::___shutdown(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    __inS.readEmptyParams();
    shutdown(__current);
    __inS.__writeEmptyParams();
    return ::Ice::DispatchOK;
}

namespace
{
const ::std::string __Test__TestIntf_all[] =
{
    "ice_id",
    "ice_ids",
    "ice_isA",
    "ice_ping",
    "opByte",
    "opInt",
    "opShort",
    "opSimple",
    "shutdown"
};

}

::Ice::DispatchStatus
Test::TestIntf::__dispatch(::IceInternal::Incoming& in, const ::Ice::Current& current)
{
    ::std::pair< const ::std::string*, const ::std::string*> r = ::std::equal_range(__Test__TestIntf_all, __Test__TestIntf_all + 9, current.operation);
    if(r.first == r.second)
    {
        throw ::Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
    }

    switch(r.first - __Test__TestIntf_all)
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
            return ___opByte(in, current);
        }
        case 5:
        {
            return ___opInt(in, current);
        }
        case 6:
        {
            return ___opShort(in, current);
        }
        case 7:
        {
            return ___opSimple(in, current);
        }
        case 8:
        {
            return ___shutdown(in, current);
        }
    }

    assert(false);
    throw ::Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
}

void
Test::TestIntf::__writeImpl(::IceInternal::BasicStream* __os) const
{
    __os->startWriteSlice(ice_staticId(), -1, true);
    __os->endWriteSlice();
}

void
Test::TestIntf::__readImpl(::IceInternal::BasicStream* __is)
{
    __is->startReadSlice();
    __is->endReadSlice();
}

void
Test::TestIntf::__writeImpl(const ::Ice::OutputStreamPtr& __os) const
{
    __os->startSlice(ice_staticId(), -1, true);
    __os->endSlice();
}

void
Test::TestIntf::__readImpl(const ::Ice::InputStreamPtr& __is)
{
    __is->startSlice();
    __is->endSlice();
}

void 
Test::__patch(TestIntfPtr& handle, const ::Ice::ObjectPtr& v)
{
    handle = ::Test::TestIntfPtr::dynamicCast(v);
    if(v && !handle)
    {
        IceInternal::Ex::throwUOE(::Test::TestIntf::ice_staticId(), v);
    }
}