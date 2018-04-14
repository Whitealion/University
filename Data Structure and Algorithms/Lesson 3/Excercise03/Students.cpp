#include "Students.h"

Students::Students()
{

}

void Students::set_name(std::string name)
{
	this->name = name;
}

void Students::set_surn(std::string surname)
{
	this->surname = surname;
}

void Students::set_year(unsigned year)
{
	this->year = year;
}

std::string Students::get_name()
{
	return name;
}

std::string Students::get_surname()
{
	return surname;
}

int Students::get_year()
{
	return year;
}
