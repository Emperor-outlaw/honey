#pragma once
#include <iostream>
using namespace std;

//��
class point
{
private:
	int c_x;
	int c_y;
public:
	//���õ������
	void set_point(int x, int y);
	//��ȡ��ĺ�����
	int get_x();
	//��ȡ���������
	int get_y();
};