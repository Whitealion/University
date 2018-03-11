#pragma once
#include <string>

class ComplexNumber
{
public:
	ComplexNumber();
	ComplexNumber(int z, int i);
	ComplexNumber(ComplexNumber k1, ComplexNumber k2);
	void set_real(int x);
	void set_imaginary(int x);
	std::string get();
private:
	int real;
	int imaginary;
};