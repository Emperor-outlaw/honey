//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//using namespace std;
//
////�̳еķ�ʽ������
////1�������̳�
////2�������̳�
////3��˽�м̳�
//
//
//class Base
//{
//public:
//	int m_A;
//protected:
//	int m_B;
//private:
//	int m_C;
//};
//
////�����̳�
//class Son1 :public Base
//{
//public:
//	Son1()
//	{
//		m_A = 10;  //���Է���publicȨ��
//		m_B = 20;  //���Է���protectedȨ��
////		m_C = 30;  //�����Է���privateȨ��
//	}
//};
//void test01()
//{
//	Son1 son1;
//	son1.m_A; //����ֻ�ܷ��ʵ�����Ȩ��
//
//}
////�����̳�
//class Son2 :protected Base
//{
//public:
//	Son2()
//	{
//		m_A = 10;  //���Է���publicȨ��
//		m_B = 20;  //���Է���protectedȨ��
////		m_C = 30;  //�����Է���privateȨ��
//	}
//};
//void test02()
//{
//	Son2 son2;
////	son2.m_A;  //������ʲ����κγ�Ա
//}
//
////˽�м̳�
//class Son3 :private Base
//{
////public:
//	Son3()
//	{
//		m_A = 10;  //���Է���publicȨ��
//		m_B = 20;  //���Է���protectedȨ��
////		m_C = 30;  //�����Է���privateȨ��
//	}
//};
//void test03()
//{
//	Son3 son3;
//	//son3.m_A;  //������ʲ����κγ�Ա
//}