#include "WaterLevel.h"

WaterLevel::WaterLevel(std::string year, double level)
{
	this->year = year;
	this->level = level;
}

std::string WaterLevel::get_year()
{
	return year;
}

double WaterLevel::get_level()
{
	return level;
}
