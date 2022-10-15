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
// Generated from file `NameIndex.ice'
//
// Warning: do not edit this file.
//
// </auto-generated>
//


// Freeze types in this file:
// name="NameIndex", type="Demo::Contact", member="name" (case insensitive)

#ifndef ____NameIndex_h__
#define ____NameIndex_h__

#include <Freeze/Index.h>
#include <PhoneBook.h>

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

class NameIndex : public Freeze::Index
{
public:

    NameIndex(const std::string&, const std::string& = "");

    std::vector<Ice::Identity>
    findFirst(const ::std::string&, Ice::Int) const;

    std::vector<Ice::Identity>
    find(const ::std::string&) const;

    Ice::Int
    count(const ::std::string&) const;

private:

    virtual bool
    marshalKey(const Ice::ObjectPtr&, Freeze::Key&) const;

    void
    marshalKey(const ::std::string&, Freeze::Key&) const;
};

typedef IceUtil::Handle<NameIndex> NameIndexPtr;

#endif