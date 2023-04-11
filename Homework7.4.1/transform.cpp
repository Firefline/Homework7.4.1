#include "transform.h"

transform::transform(const Shape& sh)
{
	shape = sh;
}

Shape transform::shift(int m, int n, int k)
{
	if (shape.getType() == 0 || shape.getType() == 1)
	{
		shape.x += m; shape.y += n;
	}
	else if (shape.getType() == 2)
	{
		shape.x += m; shape.y += n; shape.z += k;
	}
	return shape;
}

Shape transform::scaleX(int a)
{
	if (shape.getType() == 0 || shape.getType() == 1 || shape.getType() == 2)
	{
		shape.x *= a;
	}
	return shape;
}

Shape transform::scaleY(int d)
{
	if (shape.getType() == 0 || shape.getType() == 1 || shape.getType() == 2)
	{
		shape.x *= d;
	}
	return shape;
}

Shape transform::scaleZ(int e)
{
	if (shape.getType() == 0 || shape.getType() == 1 || shape.getType() == 2)
	{
		shape.x *= e;
	}
	return shape;
}

Shape transform::scale(int s)
{
	if (shape.getType() == 0 || shape.getType() == 1)
	{
		shape.x /= s; shape.y /= s;
	}
	else if (shape.getType() == 2)
	{
		shape.x /= s; shape.y /= s; shape.z /= s;
	}
	return shape;
}