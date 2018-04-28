#include "WaterLevel.h"
#include <sstream>

WaterLevel::WaterLevel(const int year, const double level)
{
	this->year = year;
	this->level = level;
}

int WaterLevel::get_year() const
{
	return year;
}

std::string WaterLevel::to_string()
{
	std::stringstream ss;
	ss << year << ": " << level;
	return ss.str();
}
