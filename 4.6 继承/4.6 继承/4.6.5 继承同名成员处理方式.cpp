//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//using namespace std;
////当子类与父类出现同名成员时，如何通过子类对象，访问到子类或父类中的同名数据
////同名成员函数又是怎样的？
//
//class Base
//{
//public:
//	Base()
//	{
//		age = 100;
//	}
//	void fun()
//	{
//		cout << "Base 的函数" << endl;
//	}
//public:
//	int age;
//};
//
//class Son :public Base
//{
//public:
//	Son()
//	{
//		age = 50;
//	}
//	void fun()
//	{
//		cout << "Son 的函数" << endl;
//	}
//public:
//	int age;
//};
//
//void test01()
//{
//	Son son;
//	//1、同名成员访问
//	//通过子类的对象直接访问 访问的是子类的同名成员
//	cout << son.age << endl;
//	//通过加父类的作用域访问 访问的是父类的同名成员
//	cout << son.Base::age << endl;
//
//	//2、同名成员函数
//	//通过子类对象直接访问 访问到的是子类的同名成员函数
//	son.fun();
//	//通过加作用域访问 访问到的是父类中的同名成员函数
//	son.Base::fun();
//}
//
//int main()
//{
//	test01();
//	return 0;
//}
//
////总结：
////访问语法：子类对象 . 父类 ：：父类成员
//
////访问子类同名成员时  直接访问即可
////访问父类同名成员时  需要加作用域
//
////当子类与父类拥有同名成员函数，子类会隐藏父类中的同名成员函数
////加作用域可以访问到父类中的同名函数