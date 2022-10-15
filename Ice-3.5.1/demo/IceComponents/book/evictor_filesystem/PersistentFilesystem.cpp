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
// Generated from file `PersistentFilesystem.ice'
//
// Warning: do not edit this file.
//
// </auto-generated>
//

#include <PersistentFilesystem.h>
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

const ::std::string __Filesystem__PersistentDirectory__removeNode_name = "removeNode";

}
::IceProxy::Ice::Object* ::IceProxy::Filesystem::upCast(::IceProxy::Filesystem::PersistentNode* p) { return p; }

void
::IceProxy::Filesystem::__read(::IceInternal::BasicStream* __is, ::IceInternal::ProxyHandle< ::IceProxy::Filesystem::PersistentNode>& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::Filesystem::PersistentNode;
        v->__copyFrom(proxy);
    }
}

const ::std::string&
IceProxy::Filesystem::PersistentNode::ice_staticId()
{
    return ::Filesystem::PersistentNode::ice_staticId();
}

::IceInternal::Handle< ::IceDelegateM::Ice::Object>
IceProxy::Filesystem::PersistentNode::__createDelegateM()
{
    return ::IceInternal::Handle< ::IceDelegateM::Ice::Object>(new ::IceDelegateM::Filesystem::PersistentNode);
}

::IceInternal::Handle< ::IceDelegateD::Ice::Object>
IceProxy::Filesystem::PersistentNode::__createDelegateD()
{
    return ::IceInternal::Handle< ::IceDelegateD::Ice::Object>(new ::IceDelegateD::Filesystem::PersistentNode);
}

::IceProxy::Ice::Object*
IceProxy::Filesystem::PersistentNode::__newInstance() const
{
    return new PersistentNode;
}
::IceProxy::Ice::Object* ::IceProxy::Filesystem::upCast(::IceProxy::Filesystem::PersistentFile* p) { return p; }

void
::IceProxy::Filesystem::__read(::IceInternal::BasicStream* __is, ::IceInternal::ProxyHandle< ::IceProxy::Filesystem::PersistentFile>& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::Filesystem::PersistentFile;
        v->__copyFrom(proxy);
    }
}

const ::std::string&
IceProxy::Filesystem::PersistentFile::ice_staticId()
{
    return ::Filesystem::PersistentFile::ice_staticId();
}

::IceInternal::Handle< ::IceDelegateM::Ice::Object>
IceProxy::Filesystem::PersistentFile::__createDelegateM()
{
    return ::IceInternal::Handle< ::IceDelegateM::Ice::Object>(new ::IceDelegateM::Filesystem::PersistentFile);
}

::IceInternal::Handle< ::IceDelegateD::Ice::Object>
IceProxy::Filesystem::PersistentFile::__createDelegateD()
{
    return ::IceInternal::Handle< ::IceDelegateD::Ice::Object>(new ::IceDelegateD::Filesystem::PersistentFile);
}

::IceProxy::Ice::Object*
IceProxy::Filesystem::PersistentFile::__newInstance() const
{
    return new PersistentFile;
}
::IceProxy::Ice::Object* ::IceProxy::Filesystem::upCast(::IceProxy::Filesystem::PersistentDirectory* p) { return p; }

void
::IceProxy::Filesystem::__read(::IceInternal::BasicStream* __is, ::IceInternal::ProxyHandle< ::IceProxy::Filesystem::PersistentDirectory>& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::Filesystem::PersistentDirectory;
        v->__copyFrom(proxy);
    }
}

void
IceProxy::Filesystem::PersistentDirectory::removeNode(const ::std::string& name, const ::Ice::Context* __ctx)
{
    ::IceInternal::InvocationObserver __observer(this, __Filesystem__PersistentDirectory__removeNode_name, __ctx);
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __delBase = __getDelegate(false);
            ::IceDelegate::Filesystem::PersistentDirectory* __del = dynamic_cast< ::IceDelegate::Filesystem::PersistentDirectory*>(__delBase.get());
            __del->removeNode(name, __ctx, __observer);
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
IceProxy::Filesystem::PersistentDirectory::begin_removeNode(const ::std::string& name, const ::Ice::Context* __ctx, const ::IceInternal::CallbackBasePtr& __del, const ::Ice::LocalObjectPtr& __cookie)
{
    ::IceInternal::OutgoingAsyncPtr __result = new ::IceInternal::OutgoingAsync(this, __Filesystem__PersistentDirectory__removeNode_name, __del, __cookie);
    try
    {
        __result->__prepare(__Filesystem__PersistentDirectory__removeNode_name, ::Ice::Normal, __ctx);
        ::IceInternal::BasicStream* __os = __result->__startWriteParams(::Ice::DefaultFormat);
        __os->write(name);
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
IceProxy::Filesystem::PersistentDirectory::end_removeNode(const ::Ice::AsyncResultPtr& __result)
{
    __end(__result, __Filesystem__PersistentDirectory__removeNode_name);
}

const ::std::string&
IceProxy::Filesystem::PersistentDirectory::ice_staticId()
{
    return ::Filesystem::PersistentDirectory::ice_staticId();
}

::IceInternal::Handle< ::IceDelegateM::Ice::Object>
IceProxy::Filesystem::PersistentDirectory::__createDelegateM()
{
    return ::IceInternal::Handle< ::IceDelegateM::Ice::Object>(new ::IceDelegateM::Filesystem::PersistentDirectory);
}

::IceInternal::Handle< ::IceDelegateD::Ice::Object>
IceProxy::Filesystem::PersistentDirectory::__createDelegateD()
{
    return ::IceInternal::Handle< ::IceDelegateD::Ice::Object>(new ::IceDelegateD::Filesystem::PersistentDirectory);
}

::IceProxy::Ice::Object*
IceProxy::Filesystem::PersistentDirectory::__newInstance() const
{
    return new PersistentDirectory;
}

void
IceDelegateM::Filesystem::PersistentDirectory::removeNode(const ::std::string& name, const ::Ice::Context* __context, ::IceInternal::InvocationObserver& __observer)
{
    ::IceInternal::Outgoing __og(__handler.get(), __Filesystem__PersistentDirectory__removeNode_name, ::Ice::Normal, __context, __observer);
    try
    {
        ::IceInternal::BasicStream* __os = __og.startWriteParams(::Ice::DefaultFormat);
        __os->write(name);
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
IceDelegateD::Filesystem::PersistentDirectory::removeNode(const ::std::string& name, const ::Ice::Context* __context, ::IceInternal::InvocationObserver&)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(const ::std::string& __p_name, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _m_name(__p_name)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::Filesystem::PersistentDirectory* servant = dynamic_cast< ::Filesystem::PersistentDirectory*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            servant->removeNode(_m_name, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        const ::std::string& _m_name;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __Filesystem__PersistentDirectory__removeNode_name, ::Ice::Normal, __context);
    try
    {
        _DirectI __direct(name, __current);
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

::Ice::Object* Filesystem::upCast(::Filesystem::PersistentNode* p) { return p; }
::Ice::ObjectPtr
Filesystem::PersistentNode::ice_clone() const
{
    throw ::Ice::CloneNotImplementedException(__FILE__, __LINE__);
    return 0; // to avoid a warning with some compilers
}

namespace
{
const ::std::string __Filesystem__PersistentNode_ids[3] =
{
    "::Filesystem::Node",
    "::Filesystem::PersistentNode",
    "::Ice::Object"
};

}

bool
Filesystem::PersistentNode::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__Filesystem__PersistentNode_ids, __Filesystem__PersistentNode_ids + 3, _s);
}

::std::vector< ::std::string>
Filesystem::PersistentNode::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__Filesystem__PersistentNode_ids[0], &__Filesystem__PersistentNode_ids[3]);
}

const ::std::string&
Filesystem::PersistentNode::ice_id(const ::Ice::Current&) const
{
    return __Filesystem__PersistentNode_ids[1];
}

const ::std::string&
Filesystem::PersistentNode::ice_staticId()
{
    return __Filesystem__PersistentNode_ids[1];
}

namespace
{
const ::std::string __Filesystem__PersistentNode_all[] =
{
    "destroy",
    "ice_id",
    "ice_ids",
    "ice_isA",
    "ice_ping",
    "name"
};

}

::Ice::DispatchStatus
Filesystem::PersistentNode::__dispatch(::IceInternal::Incoming& in, const ::Ice::Current& current)
{
    ::std::pair< const ::std::string*, const ::std::string*> r = ::std::equal_range(__Filesystem__PersistentNode_all, __Filesystem__PersistentNode_all + 6, current.operation);
    if(r.first == r.second)
    {
        throw ::Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
    }

    switch(r.first - __Filesystem__PersistentNode_all)
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
            return ___name(in, current);
        }
    }

    assert(false);
    throw ::Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
}

namespace
{
const int __Filesystem__PersistentNode_operationAttributes[] = 
{
    5, // destroy
    0, // ice_id
    0, // ice_ids
    0, // ice_isA
    0, // ice_ping
    0 // name
};

}

::Ice::Int
Filesystem::PersistentNode::ice_operationAttributes(const ::std::string& opName) const
{
    ::std::pair< const ::std::string*, const ::std::string*> r = ::std::equal_range(__Filesystem__PersistentNode_all, __Filesystem__PersistentNode_all + 6, opName);
    if(r.first == r.second)
    {
        return -1;
    }
    return __Filesystem__PersistentNode_operationAttributes[r.first - __Filesystem__PersistentNode_all];
}

void
Filesystem::PersistentNode::__writeImpl(::IceInternal::BasicStream* __os) const
{
    __os->startWriteSlice(ice_staticId(), -1, true);
    __os->write(nodeName);
    __os->write(parent);
    __os->endWriteSlice();
}

void
Filesystem::PersistentNode::__readImpl(::IceInternal::BasicStream* __is)
{
    __is->startReadSlice();
    __is->read(nodeName);
    __is->read(parent);
    __is->endReadSlice();
}

void 
Filesystem::__patch(PersistentNodePtr& handle, const ::Ice::ObjectPtr& v)
{
    handle = ::Filesystem::PersistentNodePtr::dynamicCast(v);
    if(v && !handle)
    {
        IceInternal::Ex::throwUOE(::Filesystem::PersistentNode::ice_staticId(), v);
    }
}

::Ice::Object* Filesystem::upCast(::Filesystem::PersistentFile* p) { return p; }
::Ice::ObjectPtr
Filesystem::PersistentFile::ice_clone() const
{
    throw ::Ice::CloneNotImplementedException(__FILE__, __LINE__);
    return 0; // to avoid a warning with some compilers
}

namespace
{
const ::std::string __Filesystem__PersistentFile_ids[5] =
{
    "::Filesystem::File",
    "::Filesystem::Node",
    "::Filesystem::PersistentFile",
    "::Filesystem::PersistentNode",
    "::Ice::Object"
};

}

bool
Filesystem::PersistentFile::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__Filesystem__PersistentFile_ids, __Filesystem__PersistentFile_ids + 5, _s);
}

::std::vector< ::std::string>
Filesystem::PersistentFile::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__Filesystem__PersistentFile_ids[0], &__Filesystem__PersistentFile_ids[5]);
}

const ::std::string&
Filesystem::PersistentFile::ice_id(const ::Ice::Current&) const
{
    return __Filesystem__PersistentFile_ids[2];
}

const ::std::string&
Filesystem::PersistentFile::ice_staticId()
{
    return __Filesystem__PersistentFile_ids[2];
}

namespace
{
const ::std::string __Filesystem__PersistentFile_all[] =
{
    "destroy",
    "ice_id",
    "ice_ids",
    "ice_isA",
    "ice_ping",
    "name",
    "read",
    "write"
};

}

::Ice::DispatchStatus
Filesystem::PersistentFile::__dispatch(::IceInternal::Incoming& in, const ::Ice::Current& current)
{
    ::std::pair< const ::std::string*, const ::std::string*> r = ::std::equal_range(__Filesystem__PersistentFile_all, __Filesystem__PersistentFile_all + 8, current.operation);
    if(r.first == r.second)
    {
        throw ::Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
    }

    switch(r.first - __Filesystem__PersistentFile_all)
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
            return ___name(in, current);
        }
        case 6:
        {
            return ___read(in, current);
        }
        case 7:
        {
            return ___write(in, current);
        }
    }

    assert(false);
    throw ::Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
}

namespace
{
const int __Filesystem__PersistentFile_operationAttributes[] = 
{
    5, // destroy
    0, // ice_id
    0, // ice_ids
    0, // ice_isA
    0, // ice_ping
    0, // name
    0, // read
    5 // write
};

}

::Ice::Int
Filesystem::PersistentFile::ice_operationAttributes(const ::std::string& opName) const
{
    ::std::pair< const ::std::string*, const ::std::string*> r = ::std::equal_range(__Filesystem__PersistentFile_all, __Filesystem__PersistentFile_all + 8, opName);
    if(r.first == r.second)
    {
        return -1;
    }
    return __Filesystem__PersistentFile_operationAttributes[r.first - __Filesystem__PersistentFile_all];
}

void
Filesystem::PersistentFile::__writeImpl(::IceInternal::BasicStream* __os) const
{
    __os->startWriteSlice(ice_staticId(), -1, false);
    __os->write(text);
    __os->endWriteSlice();
    ::Filesystem::PersistentNode::__writeImpl(__os);
}

void
Filesystem::PersistentFile::__readImpl(::IceInternal::BasicStream* __is)
{
    __is->startReadSlice();
    __is->read(text);
    __is->endReadSlice();
    ::Filesystem::PersistentNode::__readImpl(__is);
}

void 
Filesystem::__patch(PersistentFilePtr& handle, const ::Ice::ObjectPtr& v)
{
    handle = ::Filesystem::PersistentFilePtr::dynamicCast(v);
    if(v && !handle)
    {
        IceInternal::Ex::throwUOE(::Filesystem::PersistentFile::ice_staticId(), v);
    }
}

::Ice::Object* Filesystem::upCast(::Filesystem::PersistentDirectory* p) { return p; }
::Ice::ObjectPtr
Filesystem::PersistentDirectory::ice_clone() const
{
    throw ::Ice::CloneNotImplementedException(__FILE__, __LINE__);
    return 0; // to avoid a warning with some compilers
}

namespace
{
const ::std::string __Filesystem__PersistentDirectory_ids[5] =
{
    "::Filesystem::Directory",
    "::Filesystem::Node",
    "::Filesystem::PersistentDirectory",
    "::Filesystem::PersistentNode",
    "::Ice::Object"
};

}

bool
Filesystem::PersistentDirectory::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__Filesystem__PersistentDirectory_ids, __Filesystem__PersistentDirectory_ids + 5, _s);
}

::std::vector< ::std::string>
Filesystem::PersistentDirectory::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__Filesystem__PersistentDirectory_ids[0], &__Filesystem__PersistentDirectory_ids[5]);
}

const ::std::string&
Filesystem::PersistentDirectory::ice_id(const ::Ice::Current&) const
{
    return __Filesystem__PersistentDirectory_ids[2];
}

const ::std::string&
Filesystem::PersistentDirectory::ice_staticId()
{
    return __Filesystem__PersistentDirectory_ids[2];
}

::Ice::DispatchStatus
Filesystem::PersistentDirectory::___removeNode(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.startReadParams();
    ::std::string name;
    __is->read(name);
    __inS.endReadParams();
    removeNode(name, __current);
    __inS.__writeEmptyParams();
    return ::Ice::DispatchOK;
}

namespace
{
const ::std::string __Filesystem__PersistentDirectory_all[] =
{
    "createDirectory",
    "createFile",
    "destroy",
    "find",
    "ice_id",
    "ice_ids",
    "ice_isA",
    "ice_ping",
    "list",
    "name",
    "removeNode"
};

}

::Ice::DispatchStatus
Filesystem::PersistentDirectory::__dispatch(::IceInternal::Incoming& in, const ::Ice::Current& current)
{
    ::std::pair< const ::std::string*, const ::std::string*> r = ::std::equal_range(__Filesystem__PersistentDirectory_all, __Filesystem__PersistentDirectory_all + 11, current.operation);
    if(r.first == r.second)
    {
        throw ::Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
    }

    switch(r.first - __Filesystem__PersistentDirectory_all)
    {
        case 0:
        {
            return ___createDirectory(in, current);
        }
        case 1:
        {
            return ___createFile(in, current);
        }
        case 2:
        {
            return ___destroy(in, current);
        }
        case 3:
        {
            return ___find(in, current);
        }
        case 4:
        {
            return ___ice_id(in, current);
        }
        case 5:
        {
            return ___ice_ids(in, current);
        }
        case 6:
        {
            return ___ice_isA(in, current);
        }
        case 7:
        {
            return ___ice_ping(in, current);
        }
        case 8:
        {
            return ___list(in, current);
        }
        case 9:
        {
            return ___name(in, current);
        }
        case 10:
        {
            return ___removeNode(in, current);
        }
    }

    assert(false);
    throw ::Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
}

namespace
{
const int __Filesystem__PersistentDirectory_operationAttributes[] = 
{
    5, // createDirectory
    5, // createFile
    5, // destroy
    0, // find
    0, // ice_id
    0, // ice_ids
    0, // ice_isA
    0, // ice_ping
    0, // list
    0, // name
    5 // removeNode
};

}

::Ice::Int
Filesystem::PersistentDirectory::ice_operationAttributes(const ::std::string& opName) const
{
    ::std::pair< const ::std::string*, const ::std::string*> r = ::std::equal_range(__Filesystem__PersistentDirectory_all, __Filesystem__PersistentDirectory_all + 11, opName);
    if(r.first == r.second)
    {
        return -1;
    }
    return __Filesystem__PersistentDirectory_operationAttributes[r.first - __Filesystem__PersistentDirectory_all];
}

void
Filesystem::PersistentDirectory::__writeImpl(::IceInternal::BasicStream* __os) const
{
    __os->startWriteSlice(ice_staticId(), -1, false);
    __os->write(nodes);
    __os->endWriteSlice();
    ::Filesystem::PersistentNode::__writeImpl(__os);
}

void
Filesystem::PersistentDirectory::__readImpl(::IceInternal::BasicStream* __is)
{
    __is->startReadSlice();
    __is->read(nodes);
    __is->endReadSlice();
    ::Filesystem::PersistentNode::__readImpl(__is);
}

void 
Filesystem::__patch(PersistentDirectoryPtr& handle, const ::Ice::ObjectPtr& v)
{
    handle = ::Filesystem::PersistentDirectoryPtr::dynamicCast(v);
    if(v && !handle)
    {
        IceInternal::Ex::throwUOE(::Filesystem::PersistentDirectory::ice_staticId(), v);
    }
}