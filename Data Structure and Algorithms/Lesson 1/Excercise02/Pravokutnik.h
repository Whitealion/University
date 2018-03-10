#pragma once
class Pravokutnik
{
public:
	Pravokutnik();
	double get_sirina();
	double get_visina();
	void set_sirina(int x);
	void set_visina(int y);
private:
	double sirina;
	double visina;
};

