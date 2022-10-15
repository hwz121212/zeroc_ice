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

const ::std::string __Test__MyObject__getName_name = "getName";

}
::IceProxy::Ice::Object* ::IceProxy::Test::upCast(::IceProxy::Test::MyObject* p) { return p; }

void
::IceProxy::Test::__read(::IceInternal::BasicStream* __is, ::IceInternal::ProxyHandle< ::IceProxy::Test::MyObject>& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::Test::MyObject;
        v->__copyFrom(proxy);
    }
}

::std::string
IceProxy::Test::MyObject::getName(const ::Ice::Context* __ctx)
{
    ::IceInternal::InvocationObserver __observer(this, __Test__MyObject__getName_name, __ctx);
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__Test__MyObject__getName_name);
            __delBase = __getDelegate(false);
            ::IceDelegate::Test::MyObject* __del = dynamic_cast< ::IceDelegate::Test::MyObject*>(__delBase.get());
            return __del->getName(__ctx, __observer);
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
IceProxy::Test::MyObject::begin_getName(const ::Ice::Context* __ctx, const ::IceInternal::CallbackBasePtr& __del, const ::Ice::LocalObjectPtr& __cookie)
{
    __checkAsyncTwowayOnly(__Test__MyObject__getName_name);
    ::IceInternal::OutgoingAsyncPtr __result = new ::IceInternal::OutgoingAsync(this, __Test__MyObject__getName_name, __del, __cookie);
    try
    {
        __result->__prepare(__Test__MyObject__getName_name, ::Ice::Normal, __ctx);
        __result->__writeEmptyParams();
        __result->__send(true);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __result->__exceptionAsync(__ex);
    }
    return __result;
}

::std::string
IceProxy::Test::MyObject::end_getName(const ::Ice::AsyncResultPtr& __result)
{
    ::Ice::AsyncResult::__check(__result, this, __Test__MyObject__getName_name);
    ::std::string __ret;
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
IceProxy::Test::MyObject::ice_staticId()
{
    return ::Test::MyObject::ice_staticId();
}

::IceInternal::Handle< ::IceDelegateM::Ice::Object>
IceProxy::Test::MyObject::__createDelegateM()
{
    return ::IceInternal::Handle< ::IceDelegateM::Ice::Object>(new ::IceDelegateM::Test::MyObject);
}

::IceInternal::Handle< ::IceDelegateD::Ice::Object>
IceProxy::Test::MyObject::__createDelegateD()
{
    return ::IceInternal::Handle< ::IceDelegateD::Ice::Object>(new ::IceDelegateD::Test::MyObject);
}

::IceProxy::Ice::Object*
IceProxy::Test::MyObject::__newInstance() const
{
    return new MyObject;
}

::std::string
IceDelegateM::Test::MyObject::getName(const ::Ice::Context* __context, ::IceInternal::InvocationObserver& __observer)
{
    ::IceInternal::Outgoing __og(__handler.get(), __Test__MyObject__getName_name, ::Ice::Normal, __context, __observer);
    __og.writeEmptyParams();
    bool __ok = __og.invoke();
    ::std::string __ret;
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

::std::string
IceDelegateD::Test::MyObject::getName(const ::Ice::Context* __context, ::IceInternal::InvocationObserver&)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::std::string& __result, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _result(__result)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::Test::MyObject* servant = dynamic_cast< ::Test::MyObject*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            _result = servant->getName(_current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::std::string& _result;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __Test__MyObject__getName_name, ::Ice::Normal, __context);
    ::std::string __result;
    try
    {
        _DirectI __direct(__result, __current);
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

::Ice::Object* Test::upCast(::Test::MyObject* p) { return p; }

namespace
{
const ::std::string __Test__MyObject_ids[2] =
{
    "::Ice::Object",
    "::Test::MyObject"
};

}

bool
Test::MyObject::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__Test__MyObject_ids, __Test__MyObject_ids + 2, _s);
}

::std::vector< ::std::string>
Test::MyObject::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__Test__MyObject_ids[0], &__Test__MyObject_ids[2]);
}

const ::std::string&
Test::MyObject::ice_id(const ::Ice::Current&) const
{
    return __Test__MyObject_ids[1];
}

const ::std::string&
Test::MyObject::ice_staticId()
{
    return __Test__MyObject_ids[1];
}

::Ice::DispatchStatus
Test::MyObject::___getName(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    __inS.readEmptyParams();
    ::std::string __ret = getName(__current);
    ::IceInternal::BasicStream* __os = __inS.__startWriteParams(::Ice::DefaultFormat);
    __os->write(__ret);
    __inS.__endWriteParams(true);
    return ::Ice::DispatchOK;
}

namespace
{
const ::std::string __Test__MyObject_all[] =
{
    "getName",
    "ice_id",
    "ice_ids",
    "ice_isA",
    "ice_ping"
};

}

::Ice::DispatchStatus
Test::MyObject::__dispatch(::IceInternal::Incoming& in, const ::Ice::Current& current)
{
    ::std::pair< const ::std::string*, const ::std::string*> r = ::std::equal_range(__Test__MyObject_all, __Test__MyObject_all + 5, current.operation);
    if(r.first == r.second)
    {
        throw ::Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
    }

    switch(r.first - __Test__MyObject_all)
    {
        case 0:
        {
            return ___getName(in, current);
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
    }

    assert(false);
    throw ::Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
}

void
Test::MyObject::__writeImpl(::IceInternal::BasicStream* __os) const
{
    __os->startWriteSlice(ice_staticId(), -1, true);
    __os->endWriteSlice();
}

void
Test::MyObject::__readImpl(::IceInternal::BasicStream* __is)
{
    __is->startReadSlice();
    __is->endReadSlice();
}

void 
Test::__patch(MyObjectPtr& handle, const ::Ice::ObjectPtr& v)
{
    handle = ::Test::MyObjectPtr::dynamicCast(v);
    if(v && !handle)
    {
        IceInternal::Ex::throwUOE(::Test::MyObject::ice_staticId(), v);
    }
}
