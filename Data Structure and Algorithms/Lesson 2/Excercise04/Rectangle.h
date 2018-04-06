#pragma once
class Rectangle
{
public:
	Rectangle(double x, double y);
	void draw(char border, char inside, bool need_inside);
private:
	double length;
	double height;
};
