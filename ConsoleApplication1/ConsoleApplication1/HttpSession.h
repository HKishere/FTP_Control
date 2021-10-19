#pragma once
#include <string>
#include <Winsock2.h>

class HttpCtl {

public:
	void POST_request(char* pHost, char* pUrl, int nport, char* pData);
	SOCKET SocketConnect(char* pHost, char* pUrl, int nport, char* pData);

public:
	std::string strHeader;
	std::string strSendBuf;
};