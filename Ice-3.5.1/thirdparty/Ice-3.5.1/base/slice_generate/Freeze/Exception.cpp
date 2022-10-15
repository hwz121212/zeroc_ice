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
// Generated from file `Exception.ice'
//
// Warning: do not edit this file.
//
// </auto-generated>
//

#include <Freeze/Exception.h>
#include <Ice/SliceChecksums.h>
#include <IceUtil/Iterator.h>
#include <IceUtil/DisableWarnings.h>

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

}

namespace
{

const char* __Freeze__DatabaseException_name = "Freeze::DatabaseException";

}

Freeze::DatabaseException::DatabaseException(const char* __file, int __line) :
    ::Ice::LocalException(__file, __line)
{
}

Freeze::DatabaseException::DatabaseException(const char* __file, int __line, const ::std::string& __ice_message) :
    ::Ice::LocalException(__file, __line),
    message(__ice_message)
{
}

Freeze::DatabaseException::~DatabaseException() throw()
{
}

::std::string
Freeze::DatabaseException::ice_name() const
{
    return __Freeze__DatabaseException_name;
}

Freeze::DatabaseException*
Freeze::DatabaseException::ice_clone() const
{
    return new DatabaseException(*this);
}

void
Freeze::DatabaseException::ice_throw() const
{
    throw *this;
}

namespace
{

const char* __Freeze__NotFoundException_name = "Freeze::NotFoundException";

}

Freeze::NotFoundException::NotFoundException(const char* __file, int __line) :
    ::Freeze::DatabaseException(__file, __line)
{
}

Freeze::NotFoundException::NotFoundException(const char* __file, int __line, const ::std::string& __ice_message) :
    ::Freeze::DatabaseException(__file, __line, __ice_message)
{
}

Freeze::NotFoundException::~NotFoundException() throw()
{
}

::std::string
Freeze::NotFoundException::ice_name() const
{
    return __Freeze__NotFoundException_name;
}

Freeze::NotFoundException*
Freeze::NotFoundException::ice_clone() const
{
    return new NotFoundException(*this);
}

void
Freeze::NotFoundException::ice_throw() const
{
    throw *this;
}

namespace
{

const char* __Freeze__DeadlockException_name = "Freeze::DeadlockException";

}

Freeze::DeadlockException::DeadlockException(const char* __file, int __line) :
    ::Freeze::DatabaseException(__file, __line)
{
}

Freeze::DeadlockException::DeadlockException(const char* __file, int __line, const ::std::string& __ice_message, const ::Freeze::TransactionPtr& __ice_tx) :
    ::Freeze::DatabaseException(__file, __line, __ice_message),
    tx(__ice_tx)
{
}

Freeze::DeadlockException::~DeadlockException() throw()
{
}

::std::string
Freeze::DeadlockException::ice_name() const
{
    return __Freeze__DeadlockException_name;
}

Freeze::DeadlockException*
Freeze::DeadlockException::ice_clone() const
{
    return new DeadlockException(*this);
}

void
Freeze::DeadlockException::ice_throw() const
{
    throw *this;
}

namespace
{

const char* __Freeze__InvalidPositionException_name = "Freeze::InvalidPositionException";

}

Freeze::InvalidPositionException::InvalidPositionException(const char* __file, int __line) :
    ::Ice::LocalException(__file, __line)
{
}

Freeze::InvalidPositionException::~InvalidPositionException() throw()
{
}

::std::string
Freeze::InvalidPositionException::ice_name() const
{
    return __Freeze__InvalidPositionException_name;
}

Freeze::InvalidPositionException*
Freeze::InvalidPositionException::ice_clone() const
{
    return new InvalidPositionException(*this);
}

void
Freeze::InvalidPositionException::ice_throw() const
{
    throw *this;
}

namespace
{

const char* __Freeze__IndexNotFoundException_name = "Freeze::IndexNotFoundException";

}

Freeze::IndexNotFoundException::IndexNotFoundException(const char* __file, int __line) :
    ::Ice::LocalException(__file, __line)
{
}

Freeze::IndexNotFoundException::IndexNotFoundException(const char* __file, int __line, const ::std::string& __ice_mapName, const ::std::string& __ice_indexName) :
    ::Ice::LocalException(__file, __line),
    mapName(__ice_mapName),
    indexName(__ice_indexName)
{
}

Freeze::IndexNotFoundException::~IndexNotFoundException() throw()
{
}

::std::string
Freeze::IndexNotFoundException::ice_name() const
{
    return __Freeze__IndexNotFoundException_name;
}

Freeze::IndexNotFoundException*
Freeze::IndexNotFoundException::ice_clone() const
{
    return new IndexNotFoundException(*this);
}

void
Freeze::IndexNotFoundException::ice_throw() const
{
    throw *this;
}

namespace Ice
{
}
