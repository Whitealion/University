#include "Osoba.h"
#include <sstream>

Osoba::Osoba(std::string ime, std::string prezime)
{
	this->ime = ime;
	this->prezime = prezime;
}

Osoba::Osoba(std::string ime, std::string prezime, int oib) : Osoba(ime, prezime)
{
	set_oib(oib);
}

void Osoba::set_oib(int oib)
{
	this->oib = oib;
}

std::string Osoba::to_string()
{
	std::stringstream ss;
	ss << prezime << ", " << ime << "(" << oib << ")";
	return ss.str();
}