// **********************************************************************
//
// Copyright (c) 2003-2013 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

#ifndef ICESTORM_SERVICE_H
#define ICESTORM_SERVICE_H

#include <IceBox/IceBox.h>
#include <IceStorm/IceStorm.h>



// This API is internal to Ice, and should not be used by external
// applications.
namespace IceStormInternal
{

class Service;
typedef ::IceInternal::Handle< IceStormInternal::Service> ServicePtr;

class Service : public ::IceBox::Service
{
public:

    static ServicePtr create(const Ice::CommunicatorPtr&,
                             const Ice::ObjectAdapterPtr&,
                             const Ice::ObjectAdapterPtr&,
                             const std::string&,
                             const Ice::Identity&,
                             const std::string&);

    virtual void start(const std::string&, const Ice::CommunicatorPtr&, const Ice::StringSeq&) = 0;

    virtual IceStorm::TopicManagerPrx getTopicManager() const = 0;

    virtual void stop() = 0;
};

};

#endif
