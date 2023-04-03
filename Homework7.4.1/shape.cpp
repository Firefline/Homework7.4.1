#define _USE_MATH_DEFINES
#include"shape.h"
#include<cmath>
Shape::Shape(int _type, int _x, int _y, int _z)
{
	type = _type;
	switch (type)
	{
	case line:
		x = abs(_x); y = abs(_y);
		square = 0;
		volume = 0;
		break;
	case sqr:
		x = abs(_x); y = abs(_y);
		square = x * y;
		volume = 0;
		break;
	case cube:
		x = abs(_x); y = abs(_y); z = abs(_z);
		square = 2 * x * y + 2 * x * z + 2 * y * z;
		volume = x * y * z;
		break;
	default:
		break;
	}
}

Shape::Shape(int _type, int _x, int _y, double R, double H)
{
	type = _type;
	switch (type)
	{
	case circle:
		x = _x; y = _y;
		radius = R;
		square = M_PI * R * R;
		break;
	case cylinder:
		x = _x; y = _y;
		radius = R;
		height = H;
		square = M_PI * R * R + 2 * R * height;
		volume = M_PI * R * R * height;
		break;
	default:
		break;
	}
}