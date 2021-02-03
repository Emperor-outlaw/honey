#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <string>
using namespace std;
//函数调用运算符()也可以发生重载
//由于重载后使用的方式非常像函数的调用，因此称为仿函数
//仿函数没有固定写法，非常灵活

class MyPrint
{
public:
	void operator()(string str)
	{
		cout << str << endl;
	}
};
void test01()
{
	MyPrint myprint;
	myprint("hello world");
}
class Add
{
public:
	int operator()(int a, int b)
	{
		return a + b;
	}
};
void test02()
{
	Add add;
	int ret = add(10, 30);
	cout << "ret = " << ret << endl;
	cout << "Add()(100,100) = " << Add()(100, 100) << endl; //匿名对象调用
}
int main()
{
	test01();
	test02();
	return 0;
}