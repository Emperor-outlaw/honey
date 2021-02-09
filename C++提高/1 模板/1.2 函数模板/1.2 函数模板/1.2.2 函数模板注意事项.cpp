//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//using namespace std;
//
////注意事项
////1、自动类型推导，必须推导出一致的数据类型T,才可以使用
//template <typename T>
//void my_swap(T &a, T &b)
//{
//	T tmp = a;
//	a = b;
//	b = tmp;
//}
//void test01()
//{
//	int a = 10;
//	int b = 20;
//	char c = 'c';
//	my_swap(a, b);  //正确——可以推导出一致的T
//	//my_swap(a, c);  //错误——不可以推导出一致的T
//}
//
////2、模板必须要确实出T的数据类型，才可以使用
//template <typename T>
//void fun()
//{
//	cout << "fun函数的调用！" << endl;
//}
//void test02()
//{
//	//fun();  //错误：模板不能独立使用，必须要确定出T的类型
//	fun<int>();//利用显示指定类型方式，给T一个类型，才可以使用该模板
//}
//int main()
//{
//	//test01();
//	test02();
//	return 0;
//}
//
////总结：使用模板时，必须确定出通用数据类型T,并且能够推出一致类型