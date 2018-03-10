#include "Razlomak.h"
#include <sstream>
#include <string>
using namespace std;


Razlomak::Razlomak()
{
}

Razlomak::Razlomak(int x, int y)
{
	brojnik = x;
	nazivnik = y;
}


string Razlomak::mnozenje(int s)
{
	brojnik *= s;
	return to_string();
}


string Razlomak::to_string()
{
	stringstream ss;
	ss << brojnik << "/" << nazivnik;
	return ss.str();
}