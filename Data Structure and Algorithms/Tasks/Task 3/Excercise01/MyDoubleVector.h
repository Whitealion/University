#pragma once
class MyDoubleVector
{
public:
	MyDoubleVector();
	MyDoubleVector(int n);
	MyDoubleVector(int n, double val);
	~MyDoubleVector();
	unsigned size();
	unsigned capacity();
	double at(unsigned i);
	void push_back(double val);
	void insert(unsigned pos, double val);
private:
	unsigned next;
	unsigned cap;
	double *values = nullptr;
	void grow();
};

