#include "triangle.h"
#include <exception>


Triangle::Triangle(float base, float height) : _base(base), _height(height)
{
}

Triangle::~Triangle()
{
}

float Triangle::get_area() const //the signatures were different so you should add or remove bool has_depth = false from both
{
	return float(0.5 * _base * _height);
}
