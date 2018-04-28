#pragma once
#include <string>

class WaterLevel
{
public:
	WaterLevel(std::string year, double level);
	std::string get_year();
	double get_level();
private:
	std::string year;
	double level;
};

