//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//using namespace std;
////父类和子类的构造和析构顺序是怎样的？
//
//class Base
//{
//public:
//	Base()
//	{
//		cout << "Base的构造函数" << endl;
//	}
//	~Base()
//	{
//		cout << "Base的硒鼓函数" << endl;
//	}
//};
//
//class Son :public Base
//{
//public:
//	Son()
//	{
//		cout << "Son的构造函数" << endl;
//	}
//	~Son()
//	{
//		cout << "Son的析构函数" << endl;
//	}
//};
//void test01()
//{
//	Son son;  
//	//发现：先有父类再有子类，先解析子类，后解析父类
//}
//int main()
//{
//	test01();
//	return 0;
//}
////总结：子类继承父类后，当创建子类对象，也会调用父类的构造函数