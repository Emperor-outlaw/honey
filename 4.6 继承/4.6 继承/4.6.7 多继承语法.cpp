//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//using namespace std;
////C++����һ����̳ж����
////�﷨��class ���� : �̳з�ʽ ����1 , �̳з�ʽ ����2......
////ȱ�㣺��̳п��ܻ�������������ͬ����Ա���֣���Ҫ������������
//
//class Base1
//{
//public:
//	Base1()
//	{
//		age = 100;
//	}
//public:
//	int age;
//};
//
//class Base2
//{
//public:
//	Base2()
//	{
//		age = 200;
//	}
//public:
//	int age;
//};
//
//class Son :public Base1, public Base2
//{
//public:
//	int val;
//
//};
//
//void test01()
//{
//	//12
//	cout << "sizeof = " << sizeof(Son) << endl;
//	Son son;
//	cout << "����1�µĳ�Աage = " << son.Base1::age << endl;
//	cout << "����2�µĳ�Աage = " << son.Base2::age << endl;
//}
//
//int main()
//{
//	test01();
//	return 0;
//}