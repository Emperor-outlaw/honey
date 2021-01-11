#pragma once
#include <iostream>
#include "point.h"
using namespace std;

class circle
{
public:
	//设置圆的半径
	void set_r(int r);
	//设置圆心
	void set_center(point center);
	//获取圆的半径
	int get_r();
	//获取圆心
	point get_center();
private:
	int c_r;
	point c_center;
};