//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//using namespace std;
////C++允许一个类继承多个类
////语法：class 子类 : 继承方式 父类1 , 继承方式 父类2......
////缺点：多继承可能会引发父类中有同名成员出现，需要加作用域区分
//
//class Base1
//{
//public:
//	Base1()
//	{
//		age = 100;
//	}
//public:
//	int age;
//};
//
//class Base2
//{
//public:
//	Base2()
//	{
//		age = 200;
//	}
//public:
//	int age;
//};
//
//class Son :public Base1, public Base2
//{
//public:
//	int val;
//
//};
//
//void test01()
//{
//	//12
//	cout << "sizeof = " << sizeof(Son) << endl;
//	Son son;
//	cout << "父类1下的成员age = " << son.Base1::age << endl;
//	cout << "父类2下的成员age = " << son.Base2::age << endl;
//}
//
//int main()
//{
//	test01();
//	return 0;
//}