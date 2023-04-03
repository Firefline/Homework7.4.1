#include "transform.h"

transform::transform(const Shape& sh)
{
	shape = sh;
}

Shape transform::shift(int m, int n, int k)
{
	switch (shape.getType())
	{
	case Shape::line:
		shape.x += m; shape.y += n;
		break;
	case Shape::sqr:
		shape.x += m; shape.y += n;
		break;
	case Shape::cube:
		shape.x += m; shape.y += n; shape.z += k;
		break;
	}
	return shape;
}

Shape transform::scaleX(int a)
{
	switch (shape.getType())
	{
	case Shape::line:
		shape.x *= a;
		break;
	case Shape::sqr:
		shape.x *= a;
		break;
	case Shape::cube:
		shape.x *= a;
		break;
	}
	return shape;
}

Shape transform::scaleY(int d)
{
	switch (shape.getType())
	{
	case Shape::line:
		shape.x *= d;
		break;
	case Shape::sqr:
		shape.x *= d;
		break;
	case Shape::cube:
		shape.x *= d;
		break;
	}
	return shape;
}

Shape transform::scaleZ(int e)
{
	switch (shape.getType())
	{
	case Shape::line:
		shape.x *= e;
		break;
	case Shape::sqr:
		shape.x *= e;
		break;
	case Shape::cube:
		shape.x *= e;
		break;
	}
	return shape;
}

Shape transform::scale(int s)
{
	switch (shape.getType())
	{
	case Shape::line:
		shape.x /= s; shape.y /= s;
		break;
	case Shape::sqr:
		shape.x /= s; shape.y /= s;
		break;
	case Shape::cube:
		shape.x /= s; shape.y /= s; shape.z /= s;
		break;
	}

	return shape;
}