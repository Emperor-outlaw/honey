//#define _CRT_SECURE_NO_WARNINGS 1
//
////C++提供了两种模板机制：函数模板 和 类模板
//
////函数模板作用：
////建立一个通用函数，其函数返回值类型和形参类型可以不具体制定，用一个 虚拟的类型 来代表
//
////语法
////template<typename T>
////函数声明或定义
////解释
////template——声明创建模板
////typename——表明其后面的符号是一种数据类型，可以用class代替
////T——通用的数据类型，名称可以替换，通常为大写字母
//
//
//#include <iostream>
//using namespace std;
//
//void my_swap1(int &a, int &b)
//{
//	int tmp = a;
//	a = b;
//	b = tmp;
//}
//
//void my_swap2(double &c, double&d)
//{
//	double tmp = c;
//	c = d;
//	d = tmp;
//}
//
////利用模板提供通用的交换函数
//template<typename T>
//void my_swap(T &a, T &b)
//{
//	T tmp = a;
//	a = b;
//	b = tmp;
//}
//
//int main()
//{
//	//没有使用模板交换两个数
//	//1、两个整形变量交换
//	int a = 10;
//	int b = 20;
//	my_swap1(a, b);
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//
//	//2、两个浮点型变量交换
//	double c = 1.1;
//	double d = 1.6;
//	my_swap2(c, d);
//	cout << "c = " << c << endl;
//	cout << "d = " << d << endl;
//
//	//使用模板提供通用的交换函数 交换两个数
//	int m = 20;
//	int n = 40;
//	////方法
//	////1、自动类型推到
//	//my_swap(m, n);
//	//cout << "m = " << m << endl;
//	//cout << "n = " << n << endl;
//
//	//2、显示指定类型
//	my_swap<int>(m, n);
//	cout << "m = " << m << endl;
//	cout << "n = " << n << endl;
//
//	return 0;
//}
//
////总结：
////1、使用模板有两种方式：自动类型推导、显示指定类型
////2、模板的目的是为了提高复用率，将类型参数化