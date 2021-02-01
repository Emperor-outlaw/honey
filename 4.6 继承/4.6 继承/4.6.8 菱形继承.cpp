#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;
//菱形继承（砖石继承）概念（图形类似于菱形图案）：
//两个派生类继承同一个基类
//又有某个类同时继承了两个派生类

//解决方法：虚继承
//在继承方式前面加virtual关键字
//此时公共的父类称为虚基类

//动物类
class Animal
{
public:
	int age;
};
//羊类
class Sheep :virtual public Animal
{
};
//骆驼类
class Camel :virtual public Animal
{
};
//羊驼（草泥马）
class Alpaca :public Sheep, public Camel
{
};

void test01()
{
	//问题：羊和骆驼都分别继承了动物的年龄（age），而羊驼又继承了羊类和骆驼类中的年龄
	//      此时年龄出现了二义性
//	cout << "虚继承前的大小 = " << sizeof(Alpaca) << endl;  //8
//	Alpaca alpaca;
////	alpaca.age = 10;              //提示错误age不明确，因为我不知道这是羊 还是 骆驼下的age
////	cout << alpaca.age << endl;   //提示错误age不明确，因为我不知道这是羊 还是 骆驼下的age
//	//1、可以通过加作用域来解决这样的赋值问题(但是Alpaca类中任然有两份age,浪费空间，这种情况我们只需要一份就可以)
//	alpaca.Sheep::age = 100;
//	alpaca.Camel::age = 200;
//	cout << alpaca.Sheep::age << endl;    //虚继承之前输出100  之后输出200
//	cout << alpaca.Camel::age << endl;    //虚继承之前输出200  之后输出200

	//2、虚继承
	cout << "虚继承后的大小 = " << sizeof(Alpaca) << endl;  //12(一个age,两个虚基指针vbptr（指向虚基表vbtable）)
	Alpaca alpaca;
	alpaca.age = 100;  //虚继承后就不用作用域了
	cout << alpaca.age << endl;
}

int main()
{
	test01();
	return 0;
}