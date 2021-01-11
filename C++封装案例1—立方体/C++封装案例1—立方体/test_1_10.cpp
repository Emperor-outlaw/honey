#define _CRT_SECURE_NO_WARNINGS 1
//练习案例1：设计立方体类
//1.设计立方体类(Cube)
//2.求出立方体的面积和体积
//3.分别用全局函数和成员函数判断两个立方体是否相等。
#include <iostream>
using namespace std;
class Cube
{
private:
	int c_l;
	int c_w;
	int c_h;

public:
	//设置立方体的长、宽、高
	void set_number(int l, int w, int h)
	{
		c_l = l;
		c_w = w;
		c_h = h;
	}
	//显示立方体的长、宽、高
	void get_number()
	{
		cout << "长：" << c_l << " 宽：" << c_w << " 高：" << c_h << endl;
	}
	//计算立方体的面积
	int calculate_s()
	{
		return ((c_l * c_w + c_l * c_h + c_w * c_h) * 2);
	}
	//计算立方体的体积
	int calculate_v()
	{
		return (c_l * c_w * c_h);
	}
	bool if_same(Cube &c_2)
	{
		cout << "first" << endl;
		if ((c_l * c_w * c_h) == c_2.calculate_v())
			return true;
		return false;
	}
};
bool if_same(Cube &c_1, Cube &c_2)
{
	cout << "secend" << endl;
	if (c_1.calculate_v() == c_2.calculate_v())
		return true;
	return false;
}
int main()
{
	//创建第一个立方体
	Cube c_1;
	//设置长、宽、高
	c_1.set_number(10, 10, 10);
	//显示长、宽、高
	c_1.get_number();
	//计算面积和体积
	cout << "第一个立方体的面积：" << c_1.calculate_s() << endl << "第一个立方体的体积：" << c_1.calculate_v() << endl;

	//创建第二个立方体
	Cube c_2;
	//设置长、宽、高
	c_2.set_number(20, 20, 20);
	//显示长、宽、高
	c_2.get_number();
	//计算面积和体积
	cout << "第二个立方体的面积：" << c_2.calculate_s() << endl << "第二个立方体的体积：" << c_2.calculate_v() << endl;

	//判断两个立方体是否相等
	//第一个种方法：全局函数
	cout << "全局函数" << endl;
	if (if_same(c_1, c_2) == true)
		cout << "相等！" << endl;
	else
		cout << "不相等！" << endl;

	//第二种方法：成员函数
	cout << "成员函数" << endl;
	if (c_1.if_same(c_2) == true)
		cout << "相等！" << endl;
	else
		cout << "不相等！" << endl;
	system("pause");
	return 0;
}
