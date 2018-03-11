#include "ComplexNumber.h"
#include <sstream>
#include <string>
using namespace std;

ComplexNumber::ComplexNumber()
{
}

ComplexNumber::ComplexNumber(int z, int i)
{
	real = z;
	imaginary = i;
}

ComplexNumber::ComplexNumber(ComplexNumber k1, ComplexNumber k2)
{
	real = k1.real + k2.real;
	imaginary = k1.imaginary + k2.imaginary;
}

void ComplexNumber::set_real(int x)
{
	real = x;
}

void ComplexNumber::set_imaginary(int x)
{
	imaginary = x;
}

string ComplexNumber::get()
{
	stringstream ss;
	ss << real << " + " << imaginary << "i";
	return ss.str();
}
