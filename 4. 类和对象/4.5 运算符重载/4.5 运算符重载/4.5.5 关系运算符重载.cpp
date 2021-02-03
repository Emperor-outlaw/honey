//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//#include <string>
//using namespace std;
////作用：让两个自定义运算符进行比较
////1、==运算符重载
////2、!=运算符重载
//class Person
//{
//public:
//	Person(int a, string name)
//	{
//		m_a = a;
//		m_name = name;
//	}
//	//1、==运算符重载(没有链式访问)
//	bool operator==(Person &p)
//	{
//		if (m_a == p.m_a && m_name == p.m_name)
//		{
//			return true;
//		}
//		return false;
//	}
//	//2、!=运算符重载（没有链式访问）
//	bool operator!=(Person &p)
//	{
//		if (m_a == p.m_a && m_name == p.m_name)
//		{
//			return false;
//		}
//		return true;
//	}
//public:
//	int m_a;
//	string m_name;
//};
//void test01()
//{
//	Person p1(20, "Tom");
//	Person p2(20, "Lisa");
//	cout << p1.m_a << p1.m_name << endl;
//	cout << p2.m_a << p2.m_name << endl;
//	if (p1 == p2)
//	{
//		cout << "两个相等！" << endl;
//	}
//	else
//	{
//		cout << "两个不相等！" << endl;
//	}
//	if (p1 != p2)
//	{
//		cout << "两个不相等！" << endl;
//	}
//	else
//	{
//		cout << "两个相等！" << endl;
//	}
//}
//int main()
//{
//	test01();
//	return 0;
//}