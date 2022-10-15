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
// Generated from file `BenchTypes.ice'
//
// Warning: do not edit this file.
//
// </auto-generated>
//


// Freeze types in this file:
// name="Demo::IntIntMap", key="int", value="int"
// name="Demo::Struct1Struct2Map", key="Demo::Struct1", value="Demo::Struct2"
// name="Demo::Struct1Class1Map", key="Demo::Struct1", value="Demo::Class1"
// name="Demo::Struct1ObjectMap", key="Demo::Struct1", value="Object"
// name="Demo::IndexedIntIntMap", key="int", value="int"
// name="Demo::IndexedStruct1Struct2Map", key="Demo::Struct1", value="Demo::Struct2"
// name="Demo::IndexedStruct1Class1Map", key="Demo::Struct1", value="Demo::Class1"

#ifndef ____BenchTypes_h__
#define ____BenchTypes_h__

#include <Freeze/Map.h>
#include <Test.h>

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

namespace Demo
{

class IntIntMapKeyCodec
{
public:

    static void write(::Ice::Int, Freeze::Key&, const ::Ice::CommunicatorPtr&, const Ice::EncodingVersion&);
    static void read(::Ice::Int&, const Freeze::Key&, const ::Ice::CommunicatorPtr&, const Ice::EncodingVersion&);
    static const std::string& typeId();
};

class IntIntMapValueCodec
{
public:

    static void write(::Ice::Int, Freeze::Value&, const ::Ice::CommunicatorPtr&, const Ice::EncodingVersion&);
    static void read(::Ice::Int&, const Freeze::Value&, const ::Ice::CommunicatorPtr&, const Ice::EncodingVersion&);
    static const std::string& typeId();
};

typedef Freeze::Map< ::Ice::Int, ::Ice::Int, IntIntMapKeyCodec, IntIntMapValueCodec, Freeze::IceEncodingCompare > IntIntMap;

}

namespace Demo
{

class Struct1Struct2MapKeyCodec
{
public:

    static void write(const ::Demo::Struct1&, Freeze::Key&, const ::Ice::CommunicatorPtr&, const Ice::EncodingVersion&);
    static void read(::Demo::Struct1&, const Freeze::Key&, const ::Ice::CommunicatorPtr&, const Ice::EncodingVersion&);
    static const std::string& typeId();
};

class Struct1Struct2MapValueCodec
{
public:

    static void write(const ::Demo::Struct2&, Freeze::Value&, const ::Ice::CommunicatorPtr&, const Ice::EncodingVersion&);
    static void read(::Demo::Struct2&, const Freeze::Value&, const ::Ice::CommunicatorPtr&, const Ice::EncodingVersion&);
    static const std::string& typeId();
};

typedef Freeze::Map< ::Demo::Struct1, ::Demo::Struct2, Struct1Struct2MapKeyCodec, Struct1Struct2MapValueCodec, Freeze::IceEncodingCompare > Struct1Struct2Map;

}

namespace Demo
{

class Struct1Class1MapKeyCodec
{
public:

    static void write(const ::Demo::Struct1&, Freeze::Key&, const ::Ice::CommunicatorPtr&, const Ice::EncodingVersion&);
    static void read(::Demo::Struct1&, const Freeze::Key&, const ::Ice::CommunicatorPtr&, const Ice::EncodingVersion&);
    static const std::string& typeId();
};

class Struct1Class1MapValueCodec
{
public:

    static void write(const ::Demo::Class1Ptr&, Freeze::Value&, const ::Ice::CommunicatorPtr&, const Ice::EncodingVersion&);
    static void read(::Demo::Class1Ptr&, const Freeze::Value&, const ::Ice::CommunicatorPtr&, const Ice::EncodingVersion&);
    static const std::string& typeId();
};

typedef Freeze::Map< ::Demo::Struct1, ::Demo::Class1Ptr, Struct1Class1MapKeyCodec, Struct1Class1MapValueCodec, Freeze::IceEncodingCompare > Struct1Class1Map;

}

namespace Demo
{

class Struct1ObjectMapKeyCodec
{
public:

    static void write(const ::Demo::Struct1&, Freeze::Key&, const ::Ice::CommunicatorPtr&, const Ice::EncodingVersion&);
    static void read(::Demo::Struct1&, const Freeze::Key&, const ::Ice::CommunicatorPtr&, const Ice::EncodingVersion&);
    static const std::string& typeId();
};

class Struct1ObjectMapValueCodec
{
public:

    static void write(const ::Ice::ObjectPtr&, Freeze::Value&, const ::Ice::CommunicatorPtr&, const Ice::EncodingVersion&);
    static void read(::Ice::ObjectPtr&, const Freeze::Value&, const ::Ice::CommunicatorPtr&, const Ice::EncodingVersion&);
    static const std::string& typeId();
};

typedef Freeze::Map< ::Demo::Struct1, ::Ice::ObjectPtr, Struct1ObjectMapKeyCodec, Struct1ObjectMapValueCodec, Freeze::IceEncodingCompare > Struct1ObjectMap;

}

namespace Demo
{

class IndexedIntIntMapKeyCodec
{
public:

    static void write(::Ice::Int, Freeze::Key&, const ::Ice::CommunicatorPtr&, const Ice::EncodingVersion&);
    static void read(::Ice::Int&, const Freeze::Key&, const ::Ice::CommunicatorPtr&, const Ice::EncodingVersion&);
    static const std::string& typeId();
};

class IndexedIntIntMapValueCodec
{
public:

    static void write(::Ice::Int, Freeze::Value&, const ::Ice::CommunicatorPtr&, const Ice::EncodingVersion&);
    static void read(::Ice::Int&, const Freeze::Value&, const ::Ice::CommunicatorPtr&, const Ice::EncodingVersion&);
    static const std::string& typeId();
};

class IndexedIntIntMap : public Freeze::Map< ::Ice::Int, ::Ice::Int, IndexedIntIntMapKeyCodec, IndexedIntIntMapValueCodec, Freeze::IceEncodingCompare >
{
public:


    class ValueIndex : public Freeze::MapIndex< ::Ice::Int, ValueIndex, Freeze::IceEncodingCompare >
    {
    public:

        ValueIndex(const std::string&, const Freeze::IceEncodingCompare& = Freeze::IceEncodingCompare());

        static void write(::Ice::Int, Freeze::Key&, const Ice::CommunicatorPtr&, const Ice::EncodingVersion&);
        static void read(::Ice::Int&, const Freeze::Key&, const ::Ice::CommunicatorPtr&, const Ice::EncodingVersion&);

    protected:

        virtual void marshalKey(const Freeze::Value&, Freeze::Key&) const;
    };

    IndexedIntIntMap(const Freeze::ConnectionPtr&, const std::string&, bool = true, const Freeze::IceEncodingCompare& = Freeze::IceEncodingCompare());

    template <class _InputIterator>
    IndexedIntIntMap(const Freeze::ConnectionPtr& __connection, const std::string& __dbName, bool __createDb, _InputIterator __first, _InputIterator __last, const Freeze::IceEncodingCompare& __compare = Freeze::IceEncodingCompare())
        : Freeze::Map< ::Ice::Int, ::Ice::Int, IndexedIntIntMapKeyCodec, IndexedIntIntMapValueCodec, Freeze::IceEncodingCompare >(__connection->getCommunicator(), __connection->getEncoding())
    {
        Freeze::KeyCompareBasePtr __keyCompare = new Freeze::KeyCompare< ::Ice::Int, IndexedIntIntMapKeyCodec, Freeze::IceEncodingCompare >(__compare, this->_communicator, this->_encoding);
        std::vector<Freeze::MapIndexBasePtr> __indices;
        __indices.push_back(new ValueIndex("index"));
        this->_helper.reset(Freeze::MapHelper::create(__connection, __dbName, IndexedIntIntMapKeyCodec::typeId(), IndexedIntIntMapValueCodec::typeId(), __keyCompare, __indices, __createDb));
        while(__first != __last)
        {
            put(*__first);
            ++__first;
        }
    }
    static void recreate(const Freeze::ConnectionPtr&, const std::string&, const Freeze::IceEncodingCompare& = Freeze::IceEncodingCompare());


    iterator findByValue(::Ice::Int, bool = true);
    const_iterator findByValue(::Ice::Int, bool = true) const;
    iterator beginForValue();
    const_iterator beginForValue() const;
    iterator endForValue();
    const_iterator endForValue() const;
    iterator lowerBoundForValue(::Ice::Int);
    const_iterator lowerBoundForValue(::Ice::Int) const;
    iterator upperBoundForValue(::Ice::Int);
    const_iterator upperBoundForValue(::Ice::Int) const;
    std::pair<iterator, iterator> equalRangeForValue(::Ice::Int);
    std::pair<const_iterator, const_iterator> equalRangeForValue(::Ice::Int) const;
    int valueCount(::Ice::Int) const;
};

}

namespace Demo
{

class IndexedStruct1Struct2MapKeyCodec
{
public:

    static void write(const ::Demo::Struct1&, Freeze::Key&, const ::Ice::CommunicatorPtr&, const Ice::EncodingVersion&);
    static void read(::Demo::Struct1&, const Freeze::Key&, const ::Ice::CommunicatorPtr&, const Ice::EncodingVersion&);
    static const std::string& typeId();
};

class IndexedStruct1Struct2MapValueCodec
{
public:

    static void write(const ::Demo::Struct2&, Freeze::Value&, const ::Ice::CommunicatorPtr&, const Ice::EncodingVersion&);
    static void read(::Demo::Struct2&, const Freeze::Value&, const ::Ice::CommunicatorPtr&, const Ice::EncodingVersion&);
    static const std::string& typeId();
};

class IndexedStruct1Struct2Map : public Freeze::Map< ::Demo::Struct1, ::Demo::Struct2, IndexedStruct1Struct2MapKeyCodec, IndexedStruct1Struct2MapValueCodec, Freeze::IceEncodingCompare >
{
public:


    class SIndex : public Freeze::MapIndex< ::std::string, SIndex, Freeze::IceEncodingCompare >
    {
    public:

        SIndex(const std::string&, const Freeze::IceEncodingCompare& = Freeze::IceEncodingCompare());

        static void write(const ::std::string&, Freeze::Key&, const Ice::CommunicatorPtr&, const Ice::EncodingVersion&);
        static void read(::std::string&, const Freeze::Key&, const ::Ice::CommunicatorPtr&, const Ice::EncodingVersion&);

    protected:

        virtual void marshalKey(const Freeze::Value&, Freeze::Key&) const;
    };

    class S1Index : public Freeze::MapIndex< ::Demo::Struct1, S1Index, Freeze::IceEncodingCompare >
    {
    public:

        S1Index(const std::string&, const Freeze::IceEncodingCompare& = Freeze::IceEncodingCompare());

        static void write(const ::Demo::Struct1&, Freeze::Key&, const Ice::CommunicatorPtr&, const Ice::EncodingVersion&);
        static void read(::Demo::Struct1&, const Freeze::Key&, const ::Ice::CommunicatorPtr&, const Ice::EncodingVersion&);

    protected:

        virtual void marshalKey(const Freeze::Value&, Freeze::Key&) const;
    };

    IndexedStruct1Struct2Map(const Freeze::ConnectionPtr&, const std::string&, bool = true, const Freeze::IceEncodingCompare& = Freeze::IceEncodingCompare());

    template <class _InputIterator>
    IndexedStruct1Struct2Map(const Freeze::ConnectionPtr& __connection, const std::string& __dbName, bool __createDb, _InputIterator __first, _InputIterator __last, const Freeze::IceEncodingCompare& __compare = Freeze::IceEncodingCompare())
        : Freeze::Map< ::Demo::Struct1, ::Demo::Struct2, IndexedStruct1Struct2MapKeyCodec, IndexedStruct1Struct2MapValueCodec, Freeze::IceEncodingCompare >(__connection->getCommunicator(), __connection->getEncoding())
    {
        Freeze::KeyCompareBasePtr __keyCompare = new Freeze::KeyCompare< ::Demo::Struct1, IndexedStruct1Struct2MapKeyCodec, Freeze::IceEncodingCompare >(__compare, this->_communicator, this->_encoding);
        std::vector<Freeze::MapIndexBasePtr> __indices;
        __indices.push_back(new SIndex("s"));
        __indices.push_back(new S1Index("s1"));
        this->_helper.reset(Freeze::MapHelper::create(__connection, __dbName, IndexedStruct1Struct2MapKeyCodec::typeId(), IndexedStruct1Struct2MapValueCodec::typeId(), __keyCompare, __indices, __createDb));
        while(__first != __last)
        {
            put(*__first);
            ++__first;
        }
    }
    static void recreate(const Freeze::ConnectionPtr&, const std::string&, const Freeze::IceEncodingCompare& = Freeze::IceEncodingCompare());


    iterator findByS(const ::std::string&, bool = true);
    const_iterator findByS(const ::std::string&, bool = true) const;
    iterator beginForS();
    const_iterator beginForS() const;
    iterator endForS();
    const_iterator endForS() const;
    iterator lowerBoundForS(const ::std::string&);
    const_iterator lowerBoundForS(const ::std::string&) const;
    iterator upperBoundForS(const ::std::string&);
    const_iterator upperBoundForS(const ::std::string&) const;
    std::pair<iterator, iterator> equalRangeForS(const ::std::string&);
    std::pair<const_iterator, const_iterator> equalRangeForS(const ::std::string&) const;
    int sCount(const ::std::string&) const;

    iterator findByS1(const ::Demo::Struct1&, bool = true);
    const_iterator findByS1(const ::Demo::Struct1&, bool = true) const;
    iterator beginForS1();
    const_iterator beginForS1() const;
    iterator endForS1();
    const_iterator endForS1() const;
    iterator lowerBoundForS1(const ::Demo::Struct1&);
    const_iterator lowerBoundForS1(const ::Demo::Struct1&) const;
    iterator upperBoundForS1(const ::Demo::Struct1&);
    const_iterator upperBoundForS1(const ::Demo::Struct1&) const;
    std::pair<iterator, iterator> equalRangeForS1(const ::Demo::Struct1&);
    std::pair<const_iterator, const_iterator> equalRangeForS1(const ::Demo::Struct1&) const;
    int s1Count(const ::Demo::Struct1&) const;
};

}

namespace Demo
{

class IndexedStruct1Class1MapKeyCodec
{
public:

    static void write(const ::Demo::Struct1&, Freeze::Key&, const ::Ice::CommunicatorPtr&, const Ice::EncodingVersion&);
    static void read(::Demo::Struct1&, const Freeze::Key&, const ::Ice::CommunicatorPtr&, const Ice::EncodingVersion&);
    static const std::string& typeId();
};

class IndexedStruct1Class1MapValueCodec
{
public:

    static void write(const ::Demo::Class1Ptr&, Freeze::Value&, const ::Ice::CommunicatorPtr&, const Ice::EncodingVersion&);
    static void read(::Demo::Class1Ptr&, const Freeze::Value&, const ::Ice::CommunicatorPtr&, const Ice::EncodingVersion&);
    static const std::string& typeId();
};

class IndexedStruct1Class1Map : public Freeze::Map< ::Demo::Struct1, ::Demo::Class1Ptr, IndexedStruct1Class1MapKeyCodec, IndexedStruct1Class1MapValueCodec, Freeze::IceEncodingCompare >
{
public:


    class SIndex : public Freeze::MapIndex< ::std::string, SIndex, Freeze::IceEncodingCompare >
    {
    public:

        SIndex(const std::string&, const Freeze::IceEncodingCompare& = Freeze::IceEncodingCompare());

        static void write(const ::std::string&, Freeze::Key&, const Ice::CommunicatorPtr&, const Ice::EncodingVersion&);
        static void read(::std::string&, const Freeze::Key&, const ::Ice::CommunicatorPtr&, const Ice::EncodingVersion&);

    protected:

        virtual void marshalKey(const Freeze::Value&, Freeze::Key&) const;
    };

    IndexedStruct1Class1Map(const Freeze::ConnectionPtr&, const std::string&, bool = true, const Freeze::IceEncodingCompare& = Freeze::IceEncodingCompare());

    template <class _InputIterator>
    IndexedStruct1Class1Map(const Freeze::ConnectionPtr& __connection, const std::string& __dbName, bool __createDb, _InputIterator __first, _InputIterator __last, const Freeze::IceEncodingCompare& __compare = Freeze::IceEncodingCompare())
        : Freeze::Map< ::Demo::Struct1, ::Demo::Class1Ptr, IndexedStruct1Class1MapKeyCodec, IndexedStruct1Class1MapValueCodec, Freeze::IceEncodingCompare >(__connection->getCommunicator(), __connection->getEncoding())
    {
        Freeze::KeyCompareBasePtr __keyCompare = new Freeze::KeyCompare< ::Demo::Struct1, IndexedStruct1Class1MapKeyCodec, Freeze::IceEncodingCompare >(__compare, this->_communicator, this->_encoding);
        std::vector<Freeze::MapIndexBasePtr> __indices;
        __indices.push_back(new SIndex("s"));
        this->_helper.reset(Freeze::MapHelper::create(__connection, __dbName, IndexedStruct1Class1MapKeyCodec::typeId(), IndexedStruct1Class1MapValueCodec::typeId(), __keyCompare, __indices, __createDb));
        while(__first != __last)
        {
            put(*__first);
            ++__first;
        }
    }
    static void recreate(const Freeze::ConnectionPtr&, const std::string&, const Freeze::IceEncodingCompare& = Freeze::IceEncodingCompare());


    iterator findByS(const ::std::string&, bool = true);
    const_iterator findByS(const ::std::string&, bool = true) const;
    iterator beginForS();
    const_iterator beginForS() const;
    iterator endForS();
    const_iterator endForS() const;
    iterator lowerBoundForS(const ::std::string&);
    const_iterator lowerBoundForS(const ::std::string&) const;
    iterator upperBoundForS(const ::std::string&);
    const_iterator upperBoundForS(const ::std::string&) const;
    std::pair<iterator, iterator> equalRangeForS(const ::std::string&);
    std::pair<const_iterator, const_iterator> equalRangeForS(const ::std::string&) const;
    int sCount(const ::std::string&) const;
};

}

#endif