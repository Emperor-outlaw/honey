//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//#include <string>
//using namespace std;
//
////����������������ͨд���Ͷ�̬���������ʵ��������������������ļ�������
//
////��̬���ŵ㣺
////1��������֯�ṹ����
////2���ɶ���ǿ
////3������ǰ�ںͺ��ڵ���չ�Լ�ά��
//
//////��ͨʵ��
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
////	//�����ʱ����Ҫ���һ�����������ұ���Ҫ�޸�Դ�룬�ܲ����ں��ڵķ�չ
////}
////int main()
////{
////	test01();
////	return 0;
////}
//
////��̬ʵ��
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
//	//�����ӷ�������
//	Calculator *cal = new Add;
//	cal->Num1 = 10;
//	cal->Num2 = 20;
//	cout << "Num1 + Num2 = " << cal->get_result() << endl;
//	delete cal;
//	cal = NULL;
//
//	//��������������
//	cal = new Sub;
//	cal->Num1 = 10;
//	cal->Num2 = 20;
//	cout << "Num1 - Num2 = " << cal->get_result() << endl;
//	delete cal;
//	cal = NULL;
//
//	//�����˷�������
//	cal = new Mul;
//	cal->Num1 = 10;
//	cal->Num2 = 20;
//	cout << "Num1 * Num2 = " << cal->get_result() << endl;
//	delete cal;
//	cal = NULL;
//
//	//�����Ҫ��չ���㹦�ܣ�ֻ��Ҫд��Ӧ���ܵ��༴��
//}
//int main()
//{
//	test01();
//	return 0;
//}