#pragma once
#include<string>
#define _USE_MATH_DEFINES
#include<cmath>

class Shape
{
protected:
	int type = 0;
	std::string type_name = "Фигура";

	double volume = 0;
	double square = 0;
	double height = 0;
	double radius = 0;

public:
	int x = 0;
	int y = 0;
	int z = 0;

	Shape() = default;
	Shape(int type, int _x, int _y, int _z);
	Shape(int type, int _x, int _y, double _R, double _H);
	int getType() { return type; };
};

class Line : public Shape
{
public:
	Line(int a) : Shape(0, 0, 0, 0)
	{
		type = 0;
		type_name = "Line";
		x = abs(a);
		y = 0;
		z = 0;
		square = 0;
		volume = 0;
	}
};

class Sqr : public Shape
{
public:
	Sqr(int a) : Shape(1, 0, 0, 0)
	{
		type = 1;
		type_name = "Sqr";
		x = abs(a);
		y = abs(a);
		z = 0;
		square = x * y;
		volume = 0;
	}
};

class Cube : public Shape
{
public:
	Cube(int a) : Shape(2, 0, 0, 0)
	{
		type = 2;
		type_name = "Cube";
		x = abs(a);
		y = abs(a);
		z = abs(a);
		square = 2 * x * y + 2 * x * z + 2 * y * z;
		volume = x * y * z;
	}
};

class Circle : public Shape
{
public:
	Circle(int a, double R, double H) : Shape(3, 0, 0, 0, 0)
	{
		type = 3;
		type_name = "Circle";
		x = abs(a);
		y = abs(a);
		z = 0;
		radius = R;
		square = M_PI * R * R;
	}
};

class Cylinder : public Shape
{
public:
	Cylinder(int a, int b, double R, double H) : Shape(4, 0, 0, 0, 0)
	{
		type = 4;
		type_name = "Cylinder";
		x = abs(a);
		y = abs(b);
		z = abs(a);
		radius = R;
		height = H;
		square = M_PI * R * R + 2 * R * height;
		volume = M_PI * R * R * height;
	}
};