// **********************************************************************
//
// Copyright (c) 2003-2013 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

#ifndef ICE_INITIALIZE_H
#define ICE_INITIALIZE_H

#include <Ice/CommunicatorF.h>
#include <Ice/PropertiesF.h>
#include <Ice/InstanceF.h>
#include <Ice/LoggerF.h>
#include <Ice/StreamF.h>
#include <Ice/StatsF.h>
#include <Ice/InstrumentationF.h>
#include <Ice/Dispatcher.h>
#include <Ice/StringConverter.h>
#include <Ice/FactoryTable.h>
#include <Ice/BuiltinSequences.h>
#include <Ice/Version.h>

namespace Ice
{

void collectGarbage();

StringSeq argsToStringSeq(int, char*[]);

#ifdef _WIN32

StringSeq argsToStringSeq(int, wchar_t*[]);

StringSeq argsToStringSeq(int, wchar_t*[], const StringConverterPtr&);

#endif

//
// This function assumes that the string sequence only contains
// elements of the argument vector. The function shifts the
// the argument vector elements so that the vector matches the
// contents of the sequence.
//
void stringSeqToArgs(const StringSeq&, int&, char*[]);

PropertiesPtr createProperties(const StringConverterPtr& = 0);
PropertiesPtr createProperties(StringSeq&, const PropertiesPtr& = 0, const StringConverterPtr& = 0);
PropertiesPtr createProperties(int&, char*[], const PropertiesPtr& = 0, const StringConverterPtr& = 0);

//
// This class is used to notify user of when Ice threads are started
// and stopped.
//
class ThreadNotification : public IceUtil::Shared
{
public:

    virtual void start() = 0;
    virtual void stop() = 0;
};

typedef IceUtil::Handle<ThreadNotification> ThreadNotificationPtr;

//
// A special plug-in that installs thread hook during a communicator's initialization.
// Both initialize and destroy are no-op. See Ice::InitializationData.
//
class ThreadHookPlugin : public Ice::Plugin
{
public:

    ThreadHookPlugin(const CommunicatorPtr& communicator, const ThreadNotificationPtr&);

    virtual void initialize();

    virtual void destroy();
};

//
// Communicator initialization info
//
struct InitializationData
{
    PropertiesPtr properties;
    LoggerPtr logger;
    StatsPtr stats;
    Instrumentation::CommunicatorObserverPtr observer;
    StringConverterPtr stringConverter;
    WstringConverterPtr wstringConverter;
    ThreadNotificationPtr threadHook;
    DispatcherPtr dispatcher;
    CompactIdResolverPtr compactIdResolver;
};

CommunicatorPtr initialize(int&, char*[], const InitializationData& = InitializationData(),
                                   Int = ICE_INT_VERSION);

CommunicatorPtr initialize(Ice::StringSeq&, const InitializationData& = InitializationData(),
                                   Int = ICE_INT_VERSION);

CommunicatorPtr initialize(const InitializationData& = InitializationData(), 
                                   Int = ICE_INT_VERSION);


InputStreamPtr createInputStream(const CommunicatorPtr&, const ::std::vector< Byte >&);
InputStreamPtr createInputStream(const CommunicatorPtr&, const ::std::vector< Byte >&,
                                         const EncodingVersion&);
InputStreamPtr wrapInputStream(const CommunicatorPtr&, const ::std::vector< Byte >&);
InputStreamPtr wrapInputStream(const CommunicatorPtr&, const ::std::vector< Byte >&, const EncodingVersion&);
InputStreamPtr createInputStream(const CommunicatorPtr&,
                                         const ::std::pair< const Ice::Byte*, const Ice::Byte*>&);
InputStreamPtr createInputStream(const CommunicatorPtr&,
                                         const ::std::pair< const Ice::Byte*, const Ice::Byte*>&,
                                         const EncodingVersion&);
InputStreamPtr wrapInputStream(const CommunicatorPtr&,
                                       const ::std::pair< const Ice::Byte*, const Ice::Byte*>&);
InputStreamPtr wrapInputStream(const CommunicatorPtr&,
                                       const ::std::pair< const Ice::Byte*, const Ice::Byte*>&, 
                                       const EncodingVersion&);

OutputStreamPtr createOutputStream(const CommunicatorPtr&);
OutputStreamPtr createOutputStream(const CommunicatorPtr&, const EncodingVersion&);

LoggerPtr getProcessLogger();
void setProcessLogger(const LoggerPtr&);

}

namespace IceInternal
{

//
// Some Ice extensions need access to the Ice internal instance. Do
// not use this operation for regular application code! It is intended
// to be used by modules such as Freeze.
//
InstancePtr getInstance(const ::Ice::CommunicatorPtr&);

}

#endif
