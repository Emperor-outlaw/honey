//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//using namespace std;
//
////继承的方式有三类
////1、公共继承
////2、保护继承
////3、私有继承
//
//
//class Base
//{
//public:
//	int m_A;
//protected:
//	int m_B;
//private:
//	int m_C;
//};
//
////公共继承
//class Son1 :public Base
//{
//public:
//	Son1()
//	{
//		m_A = 10;  //可以访问public权限
//		m_B = 20;  //可以访问protected权限
////		m_C = 30;  //不可以访问private权限
//	}
//};
//void test01()
//{
//	Son1 son1;
//	son1.m_A; //类外只能访问到公共权限
//
//}
////保护继承
//class Son2 :protected Base
//{
//public:
//	Son2()
//	{
//		m_A = 10;  //可以访问public权限
//		m_B = 20;  //可以访问protected权限
////		m_C = 30;  //不可以访问private权限
//	}
//};
//void test02()
//{
//	Son2 son2;
////	son2.m_A;  //类外访问不到任何成员
//}
//
////私有继承
//class Son3 :private Base
//{
////public:
//	Son3()
//	{
//		m_A = 10;  //可以访问public权限
//		m_B = 20;  //可以访问protected权限
////		m_C = 30;  //不可以访问private权限
//	}
//};
//void test03()
//{
//	Son3 son3;
//	//son3.m_A;  //类外访问不到任何成员
//}