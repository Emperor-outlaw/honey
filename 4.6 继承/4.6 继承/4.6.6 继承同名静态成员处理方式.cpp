//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//using namespace std;
////继承中同名的静态成员在子类对象上如何进行访问？
//
////注意：静态成员的三大特征
////1、共享同一块空间
////2、类内声明 类外初始化
////3、编译期间分配内存空间
//
////静态成员有两种访问方式
////1、通过对象访问
////2、通过类名访问
//
//class Base
//{
//public:
//	static void fun()
//	{
//		cout << "Base 下的函数" << endl;
//	}
//public:
//	static int age;
//};
//int Base::age = 100;
//
//class Son :public Base
//{
//public:
//	static void fun()
//	{
//		cout << "Son 下的函数" << endl;
//	}
//public:
//	static int age;
//};
//int Son::age = 50;
//
//void test01()
//{
//	//通过对象访问
//	cout << "通过对象访问" << endl;
//	Son son;
//	cout << son.age << endl;
//	son.fun();
//	cout << son.Base::age << endl;
//	son.Base::fun();
//
//	//通过类名访问
//	cout << "通过类名访问" << endl;
//	//第一个::代表Son类中    第二个::代表Base作用域下
//	cout << Son::Base::age << endl;
//	Son::Base::fun();
//}
//
//int main()
//{
//	test01();
//	return 0;
//}

//总结：静态成员访问和非静态成员访问一样（静态成员有两种访问方式）