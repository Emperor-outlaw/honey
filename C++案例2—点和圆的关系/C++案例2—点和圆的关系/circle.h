#pragma once
#include <iostream>
#include "point.h"
using namespace std;

class circle
{
public:
	//����Բ�İ뾶
	void set_r(int r);
	//����Բ��
	void set_center(point center);
	//��ȡԲ�İ뾶
	int get_r();
	//��ȡԲ��
	point get_center();
private:
	int c_r;
	point c_center;
};