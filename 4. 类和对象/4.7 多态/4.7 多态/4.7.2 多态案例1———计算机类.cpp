//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//#include <string>
//using namespace std;
//
////案例描述：利用普通写法和多态技术，设计实现两个操作数进行运算的计算器类
//
////多态的优点：
////1、代码组织结构清晰
////2、可读性强
////3、利于前期和后期的扩展以及维护
//
//////普通实现
////class Calculator
////{
////public:
////	int get_result(string oper)
////	{
////		if ("+" == oper)
////		{
////			return Num1 + Num2;
////		}
////		else if ("-" == oper)
////		{
////			return Num1 - Num2;
////		}
////		else if ("*" == oper)
////		{
////			return Num1 * Num2;
////		}
////	}
////	int Num1;
////	int Num2;
////};
////
////void test01()
////{
////	Calculator cal;
////	cal.Num1 = 10;
////	cal.Num2 = 20;
////	cout << "Num1 + Num2 = " << cal.get_result("+") << endl;
////	cout << "Num1 - Num2 = " << cal.get_result("-") << endl;
////	cout << "Num1 * Num2 = " << cal.get_result("*") << endl;
////	//如果此时我需要添加一个除法，那我必须要修改源码，很不利于后期的发展
////}
////int main()
////{
////	test01();
////	return 0;
////}
//
////多态实现
//class Calculator
//{
//public:
//	virtual int get_result()
//	{
//		return 0;
//	}
//	int Num1;
//	int Num2;
//};
//
//class Add :public Calculator
//{
//	int get_result()
//	{
//		return Num1 + Num2;
//	}
//};
//
//class Sub :public Calculator
//{
//	int get_result()
//	{
//		return Num1 - Num2;
//	}
//};
//
//class Mul :public Calculator
//{
//	int get_result()
//	{
//		return Num1 * Num2;
//	}
//};
//
//
//void test01()
//{
//	//创建加法计算器
//	Calculator *cal = new Add;
//	cal->Num1 = 10;
//	cal->Num2 = 20;
//	cout << "Num1 + Num2 = " << cal->get_result() << endl;
//	delete cal;
//	cal = NULL;
//
//	//创建减法计算器
//	cal = new Sub;
//	cal->Num1 = 10;
//	cal->Num2 = 20;
//	cout << "Num1 - Num2 = " << cal->get_result() << endl;
//	delete cal;
//	cal = NULL;
//
//	//创建乘法计算器
//	cal = new Mul;
//	cal->Num1 = 10;
//	cal->Num2 = 20;
//	cout << "Num1 * Num2 = " << cal->get_result() << endl;
//	delete cal;
//	cal = NULL;
//
//	//如果想要扩展计算功能，只需要写对应功能的类即可
//}
//int main()
//{
//	test01();
//	return 0;
//}