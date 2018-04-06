#pragma once
#include <string>
#include <iostream>
#include <sstream>

class IPaddress
{
public:
	IPaddress(int a, int b, int c, int d);
	char which_class();
	std::string to_string();
private:
	int a, b, c, d;
};

