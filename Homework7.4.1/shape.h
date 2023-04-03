#pragma once
#include<string>
class Shape
{
protected:
	int type = 0;

	double volume = 0;
	double square = 0;
	double height = 0;
	double radius = 0;
public:
	static const int line = 0;
	static const int sqr = 1;
	static const int cube = 2;
	static const int circle = 3;
	static const int cylinder = 4;

	Shape() = default;
	Shape(int type, int _x, int _y, int _z);
	Shape(int type, int _x, int _y, double R, double H);
	int getType() { return type; }

	int x = 0, y = 0, z = 0;
};