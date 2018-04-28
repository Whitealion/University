#pragma once
#include <string>
class WaterLevel
{
public:
	WaterLevel(const int year, const double level);
	int get_year() const;
	std::string to_string();
private:
	int year;
	double level;
};

