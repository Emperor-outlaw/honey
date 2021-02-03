#define _CRT_SECURE_NO_WARNINGS 1
//提示：本项目中类中的成员函数将在类外实现
//这里有两个版本的代码，第一个时错误的，涉及到 不完全类型（incompete type） 

//第一种
#include <iostream>
#include <string>
using namespace std;
class GoodGay;  //前向声明(虽然有这个声明但是第13行依然会报错：使用了未定义类型“GoodGay”)
//原因：在声明之后，定义之前，此类（GoodGay）是一个不完全类型，即已知向前声明过的类是一个类型，但 不知道包含哪些成员
//不完全类型只能以有限方式使用，不能定义 该类型的对象，不完全类型只能定义指向该类型的 指针及引用，或者用于声明（而不是定义）使用该类型作为 形参类型或返回类型的函数
class Building
{
	//告诉编译器 GoodGay类中的visit1() 是 Building类的好朋友，可以访问类中的私有内容
	//注意：类中的成员函数友元声明时 前面要加 类名：：(GoodGay::),说明时哪个类下的成员
	friend void GoodGay::visit1();
public:
	Building();
public:
	string m_SittingRoom;
private:
	string m_BedRoom;
};

class GoodGay
{
public:
	GoodGay();
	void visit1();     //让visit1可以访问Building类中的私有成员
	void visit2();     //让visit2不可以访问Building类中的私有成员
public:
	Building *building;
};

Building::Building()
{
	m_SittingRoom = "客厅";
	m_BedRoom = "卧室";
}

GoodGay::GoodGay()
{
	building = new Building;
}

void GoodGay::visit1()
{
	cout << "好基友正在访问：" << building->m_SittingRoom << endl;
	cout << "好基友正在访问：" << building->m_BedRoom << endl;
}

void GoodGay::visit2()
{
	cout << "好基友正在访问：" << building->m_SittingRoom << endl;
	//cout << "好基友正在访问：" << building->m_BedRoom << endl;   //没有对visit2做友元，所以不能访问类的私有成员
}

void test01()
{
	GoodGay gg;
	gg.visit1();
	gg.visit2();
}

int main()
{
	test01();
	return 0;
}

//第二种
//#include <iostream>
//#include <string>
//using namespace std;
//class Building;
//class GoodGay
//{
//public:
//	GoodGay();
//	void visit1();     //让visit1可以访问Building类中的私有成员
//	void visit2();     //让visit2不可以访问Building类中的私有成员
//public:
//	Building *building;
//};
//
//class Building
//{
//	//告诉编译器 GoodGay类中的visit1() 是 Building类的好朋友，可以访问类中的私有内容
//	//注意：类中的成员函数友元声明时 前面要加 类名：：(GoodGay::),说明时哪个类下的成员
//	friend void GoodGay::visit1();
//public:
//	Building();
//public:
//	string m_SittingRoom;
//private:
//	string m_BedRoom;
//};
//
//Building::Building()
//{
//	m_SittingRoom = "客厅";
//	m_BedRoom = "卧室";
//}
//
//GoodGay::GoodGay()
//{
//	building = new Building;
//}
//
//void GoodGay::visit1()
//{
//	cout << "好基友正在访问：" << building->m_SittingRoom << endl;
//	cout << "好基友正在访问：" << building->m_BedRoom << endl;
//}
//
//void GoodGay::visit2()
//{
//	cout << "好基友正在访问：" << building->m_SittingRoom << endl;
//	//cout << "好基友正在访问：" << building->m_BedRoom << endl;   //没有对visit2做友元，所以不能访问类的私有成员
//}
//
//void test01()
//{
//	GoodGay gg;
//	gg.visit1();
//	gg.visit2();
//}
//
//int main()
//{
//	test01();
//	return 0;
//}