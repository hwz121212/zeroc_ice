// **********************************************************************
//
// Copyright (c) 2003-2013 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

#ifndef ICE_DB_H
#define ICE_DB_H

#include <IceUtil/Exception.h>
#include <IceUtil/Shared.h>
#include <IceUtil/Handle.h>

#include <Ice/Version.h>

#include <map>


namespace IceDB
{

class DatabaseException : public IceUtil::Exception
{
protected:

    DatabaseException(const char*, int);

    virtual std::string ice_name() const;
};

class DeadlockException : public DatabaseException
{
protected:

    DeadlockException(const char*, int);

    virtual std::string ice_name() const;
};

class NotFoundException : public DatabaseException
{
protected:

    NotFoundException(const char*, int);

    virtual std::string ice_name() const;
};

class DatabaseConnection : public IceUtil::Shared
{
public:

    virtual Ice::EncodingVersion getEncoding() const = 0;

    virtual void beginTransaction() = 0;
    virtual void commitTransaction() = 0;
    virtual void rollbackTransaction() = 0;
};
typedef IceUtil::Handle<DatabaseConnection> DatabaseConnectionPtr;

class TransactionHolder
{
public:
    
    TransactionHolder(const DatabaseConnectionPtr&);
    ~TransactionHolder();

    void commit();
    void rollback();

private:
    
    //
    // Not implemented
    //
    TransactionHolder(const TransactionHolder&);
    TransactionHolder& operator=(const TransactionHolder&);

    DatabaseConnectionPtr _connection;
};

class ConnectionPool : public IceUtil::Shared
{
public:
    
    virtual DatabaseConnectionPtr getConnection() = 0;
    virtual DatabaseConnectionPtr newConnection() = 0;
};
typedef IceUtil::Handle<ConnectionPool> ConnectionPoolPtr;

template<class Key, class Value> class Wrapper :  public IceUtil::Shared
{
public:

    virtual std::map<Key, Value> getMap() = 0;
    virtual void put(const Key&, const Value&) = 0;
    virtual Value find(const Key&) = 0;
    virtual void erase(const Key&) = 0;
    virtual void clear() = 0;
};

}

#endif
