#pragma once
#include <string>

class Lampa
{
public:
	Lampa();
	Lampa(const std::string model);
	void set_model(const std::string model);
	std::string get_model() const;
	void set_proizvodac(const std::string proizvodac);
	std::string get_proizvodac() const;
	void set_broj(const int broj);
	int get_broj() const;
	void set_snaga(const double snaga);
	double get_snaga() const;
	std::string to_string() const;
private:
	std::string model;
	std::string proizvodac;
	int broj;
	double snaga;
};

