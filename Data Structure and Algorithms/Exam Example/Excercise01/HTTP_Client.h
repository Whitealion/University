#pragma once
#include <string>
class HTTP_Client
{
public:
	HTTP_Client(std::string url);
	HTTP_Client(std::string url, int port);
	std::string get_url();
	int get_port();
	std::string post();
	std::string get();
private:
	std::string url;
	unsigned port;
};

