// **********************************************************************
//
// Copyright (c) 2003-2013 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

#ifndef FREEZE_INITIALIZE_H
#define FREEZE_INITIALIZE_H

#include <Ice/Ice.h>
#include <Freeze/EvictorF.h>
#include <Freeze/ConnectionF.h>
#include <Freeze/Index.h>
#include <Freeze/Transaction.h>

//
// Berkeley DB's DbEnv and DbTxn
//
class DbEnv;
class DbTxn;

namespace Freeze
{

typedef std::map<std::string, std::string> FacetTypeMap;

Freeze::BackgroundSaveEvictorPtr 
createBackgroundSaveEvictor(const Ice::ObjectAdapterPtr& adapter,
                            const std::string& envName, 
                            const std::string& filename,
                            const ServantInitializerPtr& initializer = 0,
                            const std::vector<IndexPtr>& indices = std::vector<IndexPtr>(),
                            bool createDb = true);

BackgroundSaveEvictorPtr
createBackgroundSaveEvictor(const Ice::ObjectAdapterPtr& adapter,
                            const std::string& envName,
                            DbEnv& dbEnv, 
                            const std::string& filename,
                            const ServantInitializerPtr& initializer = 0,
                            const std::vector<IndexPtr>& indices = std::vector<IndexPtr>(),
                            bool createDb = true);

TransactionalEvictorPtr 
createTransactionalEvictor(const Ice::ObjectAdapterPtr& adapter,
                           const std::string& envName, 
                           const std::string& filename,
                           const FacetTypeMap& facetTypes = FacetTypeMap(),
                           const ServantInitializerPtr& initializer = 0,
                           const std::vector<IndexPtr>& indices = std::vector<IndexPtr>(),
                           bool createDb = true);

TransactionalEvictorPtr 
createTransactionalEvictor(const Ice::ObjectAdapterPtr& adapter,
                           const std::string& envName,
                           DbEnv& dbEnv, 
                           const std::string& filename,
                           const FacetTypeMap& facetTypes = FacetTypeMap(),
                           const ServantInitializerPtr& initializer = 0,
                           const std::vector<IndexPtr>& indices = std::vector<IndexPtr>(),
                           bool createDb = true);

//
// TransactionalEvictorDeadlockException propagates through collocation-optimized calls
// The TransactionalEvictor catches and retries on this exception
//
class TransactionalEvictorDeadlockException : public Ice::SystemException
{
public:
  
    TransactionalEvictorDeadlockException(const char*, int, const TransactionPtr& = 0);

    virtual ~TransactionalEvictorDeadlockException() throw();

    virtual std::string ice_name() const;
    virtual TransactionalEvictorDeadlockException* ice_clone() const;
    virtual void ice_throw() const;

    TransactionPtr tx;
};


ConnectionPtr createConnection(const Ice::CommunicatorPtr& communicator,
                                          const std::string& envName);

ConnectionPtr createConnection(const Ice::CommunicatorPtr& communicator,
                                          const std::string& envName, 
                                          DbEnv& dbEnv);

const std::string& catalogName();
const std::string& catalogIndexListName();

DbTxn* getTxn(const TransactionPtr&);


typedef void (*FatalErrorCallback)(const BackgroundSaveEvictorPtr&, const Ice::CommunicatorPtr&);
FatalErrorCallback registerFatalErrorCallback(FatalErrorCallback);

}

#endif
