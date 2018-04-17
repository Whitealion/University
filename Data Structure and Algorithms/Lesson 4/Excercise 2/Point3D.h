#pragma once
class Point3D
{
public:
	Point3D();
	Point3D(int length, int height, int depth);
	int get_length();
	int get_height();
	int get_depth();
private:
	int length;
	int height;
	int depth;
};

