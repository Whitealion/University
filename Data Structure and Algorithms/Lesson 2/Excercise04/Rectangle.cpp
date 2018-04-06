#include "Rectangle.h"
#include <iostream>
#include <sstream>

Rectangle::Rectangle(double x, double y)
{
	if (x < 1 || y < 1)
	{
		throw std::exception("Invalid values!");
	}

	length = x;
	height = y;
}

void Rectangle::draw(char border, char inside, bool need_inside)
{
	std::stringstream ss;
	for (int i = 1; i <= height; i++) {
		for (int j = 1; j <= length; j++) {
			if (i == 1 || i == height) {
				ss << border;
			}
			else if (j == 1 || j == length) {
				ss << border;
			}
			else {
				if (need_inside) {
					ss << inside;
				}
				else {
					ss << " ";
				}
			}
		}

		ss << std::endl;
	}

	std::cout << ss.str() << std::endl;
}
