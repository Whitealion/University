#include "Point.h"
#include <cmath>

Point::Point() : x(0), y(0)
{
}

void Point::init(int x, int y)
{
	this->x = x;
	this->y = y;
}

double Point::distance()
{
	return sqrt(pow(x, 2) + pow(y, 2));
}

int Point::get_x()
{
	return x;
}

int Point::get_y()
{
	return x;
}
