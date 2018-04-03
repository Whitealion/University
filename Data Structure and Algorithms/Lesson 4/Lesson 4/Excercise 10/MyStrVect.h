#pragma once
#include <string>

class MyStrVect
{
public:
	MyStrVect(unsigned n, std::string val);
	~MyStrVect();
	void push_back(std::string val);
	unsigned size();
	unsigned capacity();
	std::string at(unsigned i);
private:
	std::string *values = nullptr;
	unsigned next = 0;
	unsigned cap = 0;
	void grow();
};

