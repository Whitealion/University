#include "MyDoubleVector.h"



MyDoubleVector::MyDoubleVector()
{
	values = new double[0];
	next = 0;
	cap = 0;
}

MyDoubleVector::MyDoubleVector(int n)
{
	values = new double[n];
	next = n;
	cap = n;
}

MyDoubleVector::MyDoubleVector(int n, double val) : MyDoubleVector(n)
{
	for (int i = 0; i < n; i++)
	{
		values[i] = val;
	}
}


MyDoubleVector::~MyDoubleVector()
{
	if (values != nullptr)
	{
		delete[] values;
	}
}

unsigned MyDoubleVector::size()
{
	return next;
}

unsigned MyDoubleVector::capacity()
{
	return cap;
}

double MyDoubleVector::at(unsigned i)
{
	return values[i];
}

void MyDoubleVector::push_back(double val)
{
	if (next == cap)
	{
		grow();
	}
	values[next++] = val;
}

void MyDoubleVector::insert(unsigned pos, double val)
{
	if (next == cap)
	{
		grow();
	}

	for (unsigned i = next; i >= pos; i--)
	{
		values[next] = values[next - 1];
	}
	
	next++;
	values[pos] = val;
}

void MyDoubleVector::grow()
{
	cap += cap / 3;

	double *new_values = new double[cap];
	for (unsigned i = 0; i < next; i++)
	{
		new_values[i] = values[i];
	}
	delete[] values;
	values = new_values;
}
