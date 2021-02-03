//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//using namespace std;
//
////多态中，通常虚函数的实现是毫无意义的，主要是调用子类重写的内容
//
////因此可以将虚函数改为 纯虚函数
//
////纯虚函数语法： virtual 返回值类型 函数名 （参数列表） = 0；
//
////当类中有了纯虚函数，这个类也称为 抽象类
//
////抽象类的特点：
////1、无法实例化对象
////2、子类必须重写抽象类中的 纯虚函数，否则也属于抽象类
//
//class Base
//{
//public:
//	//类中只要有一个纯虚函数就称为 抽象类
//	virtual void fun() = 0;
//};
//
//class Son :public Base
//{
//public:
//	virtual void fun()
//	{
//		cout << "fun函数调用" << endl;
//	}
//};
//
//void test01()
//{
//	Base *base1 = new Son;
//	base1->fun();
//	delete base1;
//	base1 = NULL;
//
////	Base *base2 = new Base;  //错误，抽象类无法实例化对象
//}
//int main()
//{
//	test01();
//	return 0;
//
//}