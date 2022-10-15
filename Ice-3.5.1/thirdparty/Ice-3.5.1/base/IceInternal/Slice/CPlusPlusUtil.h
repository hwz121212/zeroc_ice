// **********************************************************************
//
// Copyright (c) 2003-2013 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

#ifndef C_PLUS_PLUS_UTIL_H
#define C_PLUS_PLUS_UTIL_H

#include <Slice/Parser.h>
#include <IceUtil/OutputUtil.h>

namespace Slice
{

extern FeatureProfile featureProfile;

struct ToIfdef
{
    char operator()(char);
};

void printHeader(::IceUtilInternal::Output&);
void printVersionCheck(::IceUtilInternal::Output&);
void printDllExportStuff(::IceUtilInternal::Output&, const std::string&);

const int TypeContextInParam = 1;
const int TypeContextAMIEnd = 2;
const int TypeContextAMIPrivateEnd = 4;
const int TypeContextAMICallPrivateEnd = 8;

const int TypeContextUseWstring = 16;

std::string typeToString(const TypePtr&, const StringList& = StringList(), int = 0);
std::string typeToString(const TypePtr&, bool, const StringList& = StringList(), int = 0);
std::string returnTypeToString(const TypePtr&, bool, const StringList& = StringList(), int = 0);
std::string inputTypeToString(const TypePtr&, bool, const StringList& = StringList(), int = 0);
std::string outputTypeToString(const TypePtr&, bool, const StringList& = StringList(), int = 0);
std::string operationModeToString(Operation::Mode);
std::string opFormatTypeToString(const OperationPtr&);

std::string fixKwd(const std::string&);

void writeMarshalUnmarshalCode(::IceUtilInternal::Output&, const TypePtr&, bool, int, const std::string&,
                                         bool, const StringList& = StringList(), int = 0, const std::string& = "",
                                         bool = true);
                                             
void writeMarshalCode(::IceUtilInternal::Output&, const ParamDeclList&, const OperationPtr&, int = 0);
void writeUnmarshalCode(::IceUtilInternal::Output&, const ParamDeclList&, const OperationPtr&, int = 0);
void writeAllocateCode(::IceUtilInternal::Output&, const ParamDeclList&, const OperationPtr&, int = 0);

std::string getEndArg(const TypePtr&, const StringList&, const std::string&);
void writeEndCode(::IceUtilInternal::Output&, const ParamDeclList&, const OperationPtr&);

std::string findMetaData(const StringList&, int = 0);
bool inWstringModule(const SequencePtr&);

std::string getDataMemberRef(const DataMemberPtr&);
}

#endif
