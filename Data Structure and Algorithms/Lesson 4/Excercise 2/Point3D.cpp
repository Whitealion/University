#include "Point3D.h"

Point3D::Point3D()
{
}

Point3D::Point3D(int length, int height, int depth)
{
	this->length = length;
	this->height = height;
	this->depth = depth;
}

int Point3D::get_length()
{
	return length;
}

int Point3D::get_height()
{
	return height;
}

int Point3D::get_depth()
{
	return depth;
}
