#include "IPaddress.h"

IPaddress::IPaddress(int a, int b, int c, int d)
{
	this->a = a;
	this->b = b;
	this->c = c;
	this->d = d;
}

char IPaddress::which_class()
{
	if (a <= 127) {
		return 'A';
	}
	else if (a <= 191) {
		return 'B';
	}
	else if (a <= 223) {
		return 'C';
	}
	else if (a <= 239) {
		return 'D';
	}
	else if (a <= 247) {
		return 'E';
	}
	return '?';
}

std::string IPaddress::to_string()
{
	std::stringstream ss;
	ss << a << "." << b << "." << c << "." << d;
	return ss.str();
}
