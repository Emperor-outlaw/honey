#pragma once
#include <iostream>
using namespace std;

//点
class point
{
private:
	int c_x;
	int c_y;
public:
	//设置点的坐标
	void set_point(int x, int y);
	//获取点的横坐标
	int get_x();
	//获取点的纵坐标
	int get_y();
};