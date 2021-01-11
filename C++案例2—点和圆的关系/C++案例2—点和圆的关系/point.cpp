#define _CRT_SECURE_NO_WARNINGS 1
#include "point.h"

void point::set_point(int x, int y)
{
	c_x = x;
	c_y = y;
}

int point::get_x()
{
	return c_x;
}

int point::get_y()
{
	return c_y;
}


