// **********************************************************************
//
// Copyright (c) 2003-2013 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************

#ifndef ICE_NETWORK_H
#define ICE_NETWORK_H

#ifdef __hpux
#   define _XOPEN_SOURCE_EXTENDED
#endif

#include <Ice/Config.h>

#include <Ice/NetworkF.h>
#include <Ice/PropertiesF.h> // For setTcpBufSize
#include <Ice/LoggerF.h> // For setTcpBufSize
#include <Ice/Protocol.h> 
#include <Ice/EndpointTypes.h>

#ifdef ICE_OS_WINRT
#   include <Ice/EventHandlerF.h>
#elif defined(_WIN32)
#   include <winsock2.h>
#   include <ws2tcpip.h>
#  if !defined(__MINGW32__)
typedef int ssize_t;
#  endif
#else
#   include <unistd.h>
#   include <fcntl.h>
#   include <sys/socket.h>
#   include <sys/poll.h>
#   include <netinet/in.h>
#   include <netinet/tcp.h>
#   include <arpa/inet.h>
#   include <netdb.h>
#endif

#if defined(__linux) && !defined(ICE_NO_EPOLL)
#   define ICE_USE_EPOLL 1
#elif (defined(__APPLE__) || defined(__FreeBSD__)) && !defined(ICE_NO_KQUEUE)
#   define ICE_USE_KQUEUE 1
#elif defined(_WIN32)
#  if defined(ICE_OS_WINRT)
#  elif !defined(ICE_NO_IOCP)
#     define ICE_USE_IOCP 1
#  else
#     define ICE_USE_SELECT 1
#  endif
#else
#   define ICE_USE_POLL 1
#endif

#if defined(_WIN32) || defined(__osf__) 
typedef int socklen_t;
#endif

#if !defined(_WIN32)
#   define SOCKET int
#   define INVALID_SOCKET -1
#   define SOCKET_ERROR -1
#elif defined(ICE_OS_WINRT)
    typedef Platform::Object^ SOCKET;
#   define INVALID_SOCKET nullptr
#   define SOCKET_ERROR -1
#endif

#ifndef SHUT_RD
#   define SHUT_RD 0
#endif

#ifndef SHUT_WR
#   define SHUT_WR 1
#endif

#ifndef SHUT_RDWR
#   define SHUT_RDWR 2
#endif

#ifndef NETDB_INTERNAL
#   define NETDB_INTERNAL -1
#endif

#ifndef NETDB_SUCCESS
#   define NETDB_SUCCESS 0
#endif

#if defined(__MINGW32__) && !defined WSAID_CONNECTEX
#  define WSAID_CONNECTEX {0x25a207b9,0xddf3,0x4660,{0x8e,0xe9,0x76,0xe5,0x8c,0x74,0x06,0x3e}}
#  define WSAID_ACCEPTEX {0xb5367df1,0xcbac,0x11cf,{0x95,0xca,0x00,0x80,0x5f,0x48,0xa1,0x92}}
#  define SO_UPDATE_ACCEPT_CONTEXT   0x700B
#  define SO_UPDATE_CONNECT_CONTEXT  0x7010
    typedef BOOL (PASCAL FAR * LPFN_CONNECTEX) (IN SOCKET s, IN const struct sockaddr FAR *name, IN int namelen,
                                                IN PVOID lpSendBuffer OPTIONAL, IN DWORD dwSendDataLength,
                                                OUT LPDWORD lpdwBytesSent, IN LPOVERLAPPED lpOverlapped);

    typedef BOOL (PASCAL FAR * LPFN_ACCEPTEX)(IN SOCKET sListenSocket, IN SOCKET sAcceptSocket, 
                                              IN PVOID lpOutputBuffer, IN DWORD dwReceiveDataLength,
                                              IN DWORD dwLocalAddressLength, IN DWORD dwRemoteAddressLength,
                                              OUT LPDWORD lpdwBytesReceived, IN LPOVERLAPPED lpOverlapped);
#endif
    
namespace IceInternal
{

//
// Use Address struct or union depending on the platform
//
#ifdef ICE_OS_WINRT
struct Address
{
    Windows::Networking::HostName^ host;
    Platform::String^ port;
};
#else
union Address
{
    sockaddr sa;
    sockaddr_in saIn;
    sockaddr_in6 saIn6;
    sockaddr_storage saStorage;
};
#endif

enum SocketOperation
{
    SocketOperationNone = 0,
    SocketOperationRead = 1,
    SocketOperationWrite = 2,
    SocketOperationConnect = 2
};

//
// AsyncInfo struct for Windows IOCP or WinRT holds the result of
// asynchronous operations after it completed.
//
#if defined(ICE_USE_IOCP)
struct AsyncInfo : WSAOVERLAPPED
{
    AsyncInfo(SocketOperation);

    SocketOperation status;
    WSABUF buf;
    DWORD flags;
    DWORD count;
    int error;
};
#elif defined(ICE_OS_WINRT)
struct AsyncInfo
{
    int count;
    int error;
};
  
public delegate void SocketOperationCompletedHandler(int);
#endif

class NativeInfo : virtual public IceUtil::Shared
{
public:
    
    NativeInfo(SOCKET socketFd = INVALID_SOCKET) : _fd(socketFd)
    {
    }

    SOCKET fd()
    {
        return _fd;
    }

    //
    // This is implemented by transceiver and acceptor implementations.
    //
#if defined(ICE_USE_IOCP)
    virtual AsyncInfo* getAsyncInfo(SocketOperation) = 0;
#elif defined(ICE_OS_WINRT)
    virtual void setCompletedHandler(SocketOperationCompletedHandler^) = 0;
#endif

protected:

    SOCKET _fd;
};
typedef IceUtil::Handle<NativeInfo> NativeInfoPtr;

class Buffer;

class NetworkProxy : virtual public IceUtil::Shared
{
public:

    //
    // Write the connection request on the connection established
    // with the network proxy server. This is called right after
    // the connection establishment succeeds.
    //
    virtual void beginWriteConnectRequest(const Address&, Buffer&) = 0;
    virtual void endWriteConnectRequest(Buffer&) = 0;

    //
    // Once the connection request has been sent, this is called
    // to prepare and read the response from the proxy server.
    //
    virtual void beginReadConnectRequestResponse(Buffer&) = 0;
    virtual void endReadConnectRequestResponse(Buffer&) = 0;

    //
    // If the proxy host needs to be resolved, this should return
    // a new NetworkProxy containing the IP address of the proxy.
    // This is called from the endpoint host resolver thread, so
    // it's safe if this this method blocks.
    //
    virtual NetworkProxyPtr resolveHost() const = 0;

    //
    // Returns the IP address of the network proxy. This method
    // must not block. It's only called on a network proxy object
    // returned by resolveHost().
    //
    virtual Address getAddress() const = 0;

    //
    // Returns the name of the proxy, used for tracing purposes.
    //
    virtual std::string getName() const = 0;
};

#ifndef ICE_OS_WINRT

class SOCKSNetworkProxy : virtual public NetworkProxy
{
public:

    SOCKSNetworkProxy(const std::string&, int);
    SOCKSNetworkProxy(const Address&);

    virtual void beginWriteConnectRequest(const Address&, Buffer&);
    virtual void endWriteConnectRequest(Buffer&);
    virtual void beginReadConnectRequestResponse(Buffer&);
    virtual void endReadConnectRequestResponse(Buffer&);
    virtual NetworkProxyPtr resolveHost() const;
    virtual Address getAddress() const;
    virtual std::string getName() const;

private:

    std::string _host;
    int _port;
    Address _address;
};
typedef IceUtil::Handle<SOCKSNetworkProxy> SOCKSNetworkProxyPtr;

#endif // ICE_OS_WINRT

bool noMoreFds(int);
std::string errorToStringDNS(int);
std::vector<Address> getAddresses(const std::string&, int, ProtocolSupport, Ice::EndpointSelectionType, bool, 
                                          bool);
ProtocolSupport getProtocolSupport(const Address&);
Address getAddressForServer(const std::string&, int, ProtocolSupport, bool);
int compareAddress(const Address&, const Address&);

SOCKET createSocket(bool, const Address&);
SOCKET createServerSocket(bool, const Address&, ProtocolSupport);
void closeSocketNoThrow(SOCKET);
void closeSocket(SOCKET);

std::string addrToString(const Address&);
void fdToLocalAddress(SOCKET, Address&);
bool fdToRemoteAddress(SOCKET, Address&);
std::string fdToString(SOCKET, const NetworkProxyPtr&, const Address&, bool);
std::string fdToString(SOCKET);
void fdToAddressAndPort(SOCKET, std::string&, int&, std::string&, int&);
void addrToAddressAndPort(const Address&, std::string&, int&);
std::string addressesToString(const Address&, const Address&, bool);
bool isAddressValid(const Address&);

std::vector<std::string> getHostsForEndpointExpand(const std::string&, ProtocolSupport, bool);

std::string inetAddrToString(const Address&);
int getPort(const Address&);
void setPort(Address&, int);

bool isMulticast(const Address&);
void setTcpBufSize(SOCKET, const Ice::PropertiesPtr&, const Ice::LoggerPtr&);

void setBlock(SOCKET, bool);
void setSendBufferSize(SOCKET, int);
int getSendBufferSize(SOCKET);
void setRecvBufferSize(SOCKET, int);
int getRecvBufferSize(SOCKET);

void setMcastGroup(SOCKET, const Address&, const std::string&);
void setMcastInterface(SOCKET, const std::string&, const Address&);
void setMcastTtl(SOCKET, int, const Address&);
void setReuseAddress(SOCKET, bool);

Address doBind(SOCKET, const Address&);

#ifndef ICE_OS_WINRT
bool interrupted();
bool acceptInterrupted();
bool noBuffers();
bool wouldBlock();
bool notConnected();
bool recvTruncated();

bool connectFailed();
bool connectionRefused();
bool connectInProgress();
bool connectionLost();

void doListen(SOCKET, int);
bool doConnect(SOCKET, const Address&);
void doFinishConnect(SOCKET);
SOCKET doAccept(SOCKET);

void createPipe(SOCKET fds[2]);

int getSocketErrno();
#else
void checkConnectErrorCode(const char*, int, HRESULT, Windows::Networking::HostName^);
void checkErrorCode(const char*, int, HRESULT);
#endif

#if defined(ICE_USE_IOCP)
void doConnectAsync(SOCKET, const Address&, AsyncInfo&);
void doFinishConnectAsync(SOCKET, AsyncInfo&);
#endif
}

#endif
