// **********************************************************************
//
// Copyright (c) 2003-2013 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

#ifndef ICE_PATCH2_UTIL_H
#define ICE_PATCH2_UTIL_H

#include <Ice/Ice.h>
#include <IcePatch2/FileInfo.h>
#include <stdio.h>

namespace IcePatch2
{

extern const char* checksumFile;
extern const char* logFile;

std::string lastError();

std::string bytesToString(const Ice::ByteSeq&);
Ice::ByteSeq stringToBytes(const std::string&);

std::string simplify(const std::string&);

bool isRoot(const std::string&);

std::string getSuffix(const std::string&);
std::string getWithoutSuffix(const std::string&);
bool ignoreSuffix(const std::string&);

std::string getBasename(const std::string&);
std::string getDirname(const std::string&);

void rename(const std::string&, const std::string&);

void remove(const std::string&);
void removeRecursive(const std::string&);

Ice::StringSeq readDirectory(const std::string&);

void createDirectory(const std::string&);
void createDirectoryRecursive(const std::string&);

void compressBytesToFile(const std::string&, const Ice::ByteSeq&, Ice::Int);
void decompressFile(const std::string&);
void setFileFlags(const std::string&, const FileInfo&);

struct FileInfoEqual: public std::binary_function<const FileInfo&, const FileInfo&, bool>
{
    bool
    operator()(const FileInfo& lhs, const FileInfo& rhs)
    {
        if(lhs.path != rhs.path)
        {
            return false;
        }

        //
        // For the size portion of the comparison, we only distinquish
        // between file (size >= 0) and directory (size == -1). We do
        // not take the actual size into account, as it might be set
        // to 0 if no compressed file is available.
        //
        Ice::Int lsz = lhs.size > 0 ? 0 : lhs.size;
        Ice::Int rsz = rhs.size > 0 ? 0 : rhs.size;
        if(lsz != rsz)
        {
            return false;
        }

        if(lhs.executable != rhs.executable)
        {
            return false;
        }
        
        return lhs.checksum == rhs.checksum;
    }
};

struct FileInfoWithoutFlagsLess: public std::binary_function<const FileInfo&, const FileInfo&, bool>
{
    bool
    operator()(const FileInfo& lhs, const FileInfo& rhs)
    {
        return compareWithoutFlags(lhs, rhs) < 0;
    }

    int
    compareWithoutFlags(const FileInfo& lhs, const FileInfo& rhs)
    {
        if(lhs.path < rhs.path)
        {
            return -1;
        }
        else if(rhs.path < lhs.path)
        {
            return 1;
        }

        //
        // For the size portion of the comparison, we only distinquish
        // between file (size >= 0) and directory (size == -1). We do
        // not take the actual size into account, as it might be set
        // to 0 if no compressed file is available.
        //
        Ice::Int lsz = lhs.size > 0 ? 0 : lhs.size;
        Ice::Int rsz = rhs.size > 0 ? 0 : rhs.size;
        if(lsz < rsz)
        {
            return -1;
        }
        else if(rsz < lsz)
        {
            return 1;
        }

        if(lhs.checksum < rhs.checksum)
        {
            return -1;
        }
        else if(rhs.checksum < lhs.checksum)
        {
            return 1;
        }
        
        return 0;
    }
};

struct FileInfoLess : public FileInfoWithoutFlagsLess
{
    bool
    operator()(const FileInfo& lhs, const FileInfo& rhs)
    {
        int rc = compareWithoutFlags(lhs, rhs);
        if(rc < 0)
        {
            return true;
        }
        else if(rc > 0)
        {
            return false;
        }

        return lhs.executable < rhs.executable;
    }
};

class GetFileInfoSeqCB
{
public:

    virtual ~GetFileInfoSeqCB() { }

    virtual bool remove(const std::string&) = 0;
    virtual bool checksum(const std::string&) = 0;
    virtual bool compress(const std::string&) = 0;
};

bool getFileInfoSeq(const std::string&, int, GetFileInfoSeqCB*, FileInfoSeq&);
bool getFileInfoSeqSubDir(const std::string&, const std::string&, int, GetFileInfoSeqCB*, FileInfoSeq&);

void saveFileInfoSeq(const std::string&, const FileInfoSeq&);
void loadFileInfoSeq(const std::string&, FileInfoSeq&);

bool readFileInfo(FILE*, FileInfo&);
bool writeFileInfo(FILE*, const FileInfo&);

struct FileTree1
{
    FileInfoSeq files;
    Ice::ByteSeq checksum;
};

typedef std::vector<FileTree1> FileTree1Seq;

struct FileTree0
{
    FileTree1Seq nodes;
    Ice::ByteSeq checksum;
};

void getFileTree0(const FileInfoSeq&, FileTree0&);

}

#endif
