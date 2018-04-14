#pragma once
#include <string>
#include <ctime>

class Students
{
public:
	Students();
	void set_name(std::string name);
	void set_surn(std::string surname);
	void set_year(unsigned year);
	std::string get_name();
	std::string get_surname();
	int get_year();
private:
	std::string name;
	std::string surname;
	unsigned year;
};

