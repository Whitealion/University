#include "MyStrVect.h"

MyStrVect::MyStrVect(unsigned n, std::string val)
{
	values = new std::string[n];
	for (unsigned i = 0; i < n; i++) 
	{
		values[i] = val;
	}
	next = n;
	cap = n;
}

MyStrVect::~MyStrVect()
{
	if (values != nullptr) {
		delete[] values;
	}
}

void MyStrVect::push_back(std::string val)
{
	if (next == cap) 
	{
		grow();
	}
	values[next++] = val;
}

unsigned MyStrVect::size()
{
	return next;
}

unsigned MyStrVect::capacity()
{
	return cap;
}

std::string MyStrVect::at(unsigned i)
{
	return values[i];
}

void MyStrVect::grow()
{
	cap += 5;
	std::string *new_values = new std::string[cap];
	for (unsigned i = 0; i < next; i++)
	{
		new_values[i] = values[i];
	}
	delete[] values;
	values = new_values;
}
