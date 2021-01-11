#define _CRT_SECURE_NO_WARNINGS 1
#include "circle.h"

void circle::set_r(int r)
{
	c_r = r;
}

void circle::set_center(point center)
{
	c_center = center;
}

point circle::get_center()
{
	return c_center;
}
int circle::get_r()
{
	return c_r;
}


