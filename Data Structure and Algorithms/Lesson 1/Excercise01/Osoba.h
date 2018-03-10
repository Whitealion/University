#pragma once
#include <string>
class Osoba
{
public:
	Osoba(std::string ime, std::string prezime);
	Osoba(std::string ime, std::string prezime, int oib);
	void set_oib(int oib);
	std::string to_string();
private:
	std::string ime;
	std::string prezime;
	int oib;
};
