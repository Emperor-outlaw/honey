//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//using namespace std;
//
////��̬�У�ͨ���麯����ʵ���Ǻ�������ģ���Ҫ�ǵ���������д������
//
////��˿��Խ��麯����Ϊ ���麯��
//
////���麯���﷨�� virtual ����ֵ���� ������ �������б� = 0��
//
////���������˴��麯���������Ҳ��Ϊ ������
//
////��������ص㣺
////1���޷�ʵ��������
////2�����������д�������е� ���麯��������Ҳ���ڳ�����
//
//class Base
//{
//public:
//	//����ֻҪ��һ�����麯���ͳ�Ϊ ������
//	virtual void fun() = 0;
//};
//
//class Son :public Base
//{
//public:
//	virtual void fun()
//	{
//		cout << "fun��������" << endl;
//	}
//};
//
//void test01()
//{
//	Base *base1 = new Son;
//	base1->fun();
//	delete base1;
//	base1 = NULL;
//
////	Base *base2 = new Base;  //���󣬳������޷�ʵ��������
//}
//int main()
//{
//	test01();
//	return 0;
//
//}