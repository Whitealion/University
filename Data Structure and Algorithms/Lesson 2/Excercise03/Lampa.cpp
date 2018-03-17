#include "Lampa.h"
#include <sstream>

Lampa::Lampa()
{
}

Lampa::Lampa(std::string model)
{
	set_model(model);
}

void Lampa::set_model(const std::string model)
{
	this->model = model;
}

std::string Lampa::get_model() const
{
	return model;
}

void Lampa::set_proizvodac(const std::string proizvodac)
{
	this->proizvodac = proizvodac;
}

std::string Lampa::get_proizvodac() const
{
	return proizvodac;
}

void Lampa::set_broj(const int broj)
{
	this->broj = broj;
}

int Lampa::get_broj() const
{
	return broj;
}

void Lampa::set_snaga(const double snaga)
{
	this->snaga = snaga;
}

double Lampa::get_snaga() const
{
	return snaga;
}

std::string Lampa::to_string() const
{
	std::stringstream ss;
	ss << model << ", " << proizvodac << ", " << broj << ", " << snaga << ", ";
	return ss.str();
}
