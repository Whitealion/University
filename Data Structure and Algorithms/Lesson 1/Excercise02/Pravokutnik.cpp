#include "Pravokutnik.h"
#include <iostream>
using namespace std;

Pravokutnik::Pravokutnik()
{
}

double Pravokutnik::get_sirina()
{
	return sirina;
}

double Pravokutnik::get_visina()
{
	return visina;
}

void Pravokutnik::set_sirina(int x)
{
	sirina = x;
}

void Pravokutnik::set_visina(int y)
{
	visina = y;
}
