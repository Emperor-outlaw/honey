//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//using namespace std;
////运算符重载：对已有的运算符重新定义，赋予其另一种功能，以适应不同的数据类型
////1、实现成员函数+号运算符重载
//class Person
//{
//public:
//	Person()
//	{
//		m_A = 10;
//		m_B = 20;
//	}
//	//成员函数+号运算符重载
//	Person operator+(const Person &p)
//	{
//		Person tmp;
//		tmp.m_A = m_A + p.m_A;
//		tmp.m_B = m_B + p.m_B;
//		return tmp;
//	}
//public:
//	int m_A;
//	int m_B;
//};
//
//void test01()
//{
//	Person p1;
//	Person p2;
//	Person p3 = p1 + p2;   //Person p3 = p1.operator+(p2);
//	cout << p3.m_A << endl;
//	cout << p3.m_B << endl;
//}
//int main()
//{
//	test01();
//	return 0;
//}

////2、实现全局函数+号运算符重载
//class Person
//{
//public:
//	Person()
//	{
//		m_A = 10;
//		m_B = 20;
//	}
//public:
//	int m_A;
//	int m_B;
//};
////全局函数+号重载运算符
//Person operator+(Person &p1, Person &p2)
//{
//	Person tmp;
//	tmp.m_A = p1.m_A + p2.m_A;
//	tmp.m_B = p1.m_B + p2.m_B;
//	return tmp;
//}
////int operator+(int &a, int &b)
////{
////
////}
//void test01()
//{
//	Person p1;
//	Person p2;
//	Person p3 = p1 + p2;   //Person p3 = p1.operator+(p2);
//	cout << p3.m_A << endl;
//	cout << p3.m_B << endl;
//}
//int main()
//{
//	test01();
//	return 0;
//}

////总结：1、对于内置的数据类型的表达式的运算符时不可能改变的
////      2、不要滥用运算符重载