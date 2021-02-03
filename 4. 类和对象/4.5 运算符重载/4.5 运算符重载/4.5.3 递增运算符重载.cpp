//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//using namespace std;
////1、实现前置递增运算符重载
////2、实现后置递增运算符重载
//class Person
//{
//public:
//	Person()
//	{
//		m_Num = 80;
//	}
//	////1、实现前置递增运算符重载(具有链式访问，因为返回值时引用，见测试函数)
//	//Person & operator++()
//	//{
//	//	//成员自增
//	//	m_Num++;
//	//	//返回类本身
//	//	return *this;
//	//}
//	//2、实现后置递增运算符重载（没有链式访问，因为里面时临时创建的变量，见测试函数）
//	Person operator++(int)   //int 代表占位参数 可用于区分前置和后置递增
//	{
//		//记录当前本身的值（为递增之前）
//		Person tmp = *this;
//		//让本身自增
//		m_Num++;
//		//返回递增之前的值
//		return tmp;
//	}
//public:
//	int m_Num;
//};
//
////全局函数实现<<运算符重载
//ostream & operator<<(ostream &cout, Person &p)
//{
//	cout << "m_Num = " << p.m_Num;
//	return cout;
//}
//
//////前置递增运算符测试函数
////void test01()
////{
////	Person p1;
////	cout << ++(++p1) << endl;
////	cout << p1 << endl;
////}
//
////后置运算符测试函数
//void test02()
//{
//	Person p1;
//	cout << p1++ << endl;
//	cout << p1 << endl;
//}
//
//int main()
//{
//	//test01();
//	int * a = new int;
//	cout << a << endl;
//	test02();
//	return 0;
//}
//
