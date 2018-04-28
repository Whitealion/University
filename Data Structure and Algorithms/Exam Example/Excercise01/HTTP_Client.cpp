#include "HTTP_Client.h"
#include <sstream>
#include <ctime>

HTTP_Client::HTTP_Client(std::string url)
{
	this->url = url;
	port = 80;
}

HTTP_Client::HTTP_Client(std::string url, int port) : HTTP_Client(url)
{
	this->port = port;
}

std::string HTTP_Client::get_url()
{
	return url;
}

int HTTP_Client::get_port()
{
	return port;
}


//returns a string of 10 random chars
std::string HTTP_Client::post()
{
	srand(time(nullptr));
	char temp;
	std::stringstream ss;
	for (unsigned i = 0; i < 10; i++) {
		temp = rand() % (122 - 97 + 1) + 97;
		ss << temp;
	}

	return ss.str();
}

std::string HTTP_Client::get()
{
	return post();
}
