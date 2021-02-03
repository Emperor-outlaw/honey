//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//using namespace std;
////多态分为两类
////1、静态多态：函数重载 和 运算符重载属于静态多态，复用函数名
////2、动态多态：派生类 和 虚函数实现运行时多态
//
////静态多态和动态多态区别
////1、静态多态的函数地址早绑定——编译阶段确定函数地址
////2、动态多态的函数地址晚绑定——运行阶段确定函数地址
//
//
//////下面通过看一个案例了解多态
//////第一部分
////class Animal
////{
////public:
////	void speak()
////	{
////		cout << "动物在说话" << endl;
////	}
////};
////
////class Cat :public Animal
////{
////public:
////	void speak()
////	{
////		cout << "猫在说话" << endl;
////	}
////};
////
////void DoSpeak(Animal &animal)
////{
////	animal.speak();
////}
////
////void test01()
////{
////	Cat cat;
////	//问题：我创建一个猫类，传到DoSpeak里，而DoSpeak使用一个Animal类的引用接收的，这样可以吗？
////	//解决：首先C++编译器是允许 父类的指针 指向 子类
////	//问题：我传cat过去 DoSpeak调用Cat类里的speak 还是调用Animal类里的speak
////	//解决：运行结果发现调用的是Animal类中的speak
////	//原因：产生了静态多态，函数地址早绑定：编译期间animal已经指向了Animal类中的speak函数，无论你传什么参数，我都会指向Animal类
////	DoSpeak(cat);
////	//如果我想要让猫说话，怎么解决
////	//使用动态多态
////	//看下面第二部分
////}
////
////int main()
////{
////	test01();
////
////	return 0;
////}
//
////第二部分
////多态的满足条件
////1、有继承关系
////2、子类重写父类中的虚函数
//
////多态使用：
////父类指针或者引用指向子类的对象
//class Animal
//{
//public:
//	//函数前面加上virtual关键字，变成虚函数，那么编译器在编译的时候就不能确定函数调用了
//	virtual void speak()
//	{
//		cout << "动物在说话" << endl;
//	}
//};
//
//class Cat :public Animal
//{
//public:
//	 void speak()
//	{
//		cout << "猫在说话" << endl;
//	}
//};
//
//class Dog :public Animal
//{
//public:
//	 void speak()
//	{
//		cout << "狗在说话" << endl;
//	}
//};
//void DoSpeak(Animal &animal)
//{
//	animal.speak();
//}
//
//void test01()
//{
//	Cat cat;
//	DoSpeak(cat);
//	Dog dog;
//	DoSpeak(dog);
//}
//
//int main()
//{
//	test01();
//	return 0;
//}