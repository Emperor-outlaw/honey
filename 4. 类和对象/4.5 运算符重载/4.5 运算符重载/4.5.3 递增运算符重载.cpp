//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//using namespace std;
////1��ʵ��ǰ�õ������������
////2��ʵ�ֺ��õ������������
//class Person
//{
//public:
//	Person()
//	{
//		m_Num = 80;
//	}
//	////1��ʵ��ǰ�õ������������(������ʽ���ʣ���Ϊ����ֵʱ���ã������Ժ���)
//	//Person & operator++()
//	//{
//	//	//��Ա����
//	//	m_Num++;
//	//	//�����౾��
//	//	return *this;
//	//}
//	//2��ʵ�ֺ��õ�����������أ�û����ʽ���ʣ���Ϊ����ʱ��ʱ�����ı����������Ժ�����
//	Person operator++(int)   //int ����ռλ���� ����������ǰ�úͺ��õ���
//	{
//		//��¼��ǰ�����ֵ��Ϊ����֮ǰ��
//		Person tmp = *this;
//		//�ñ�������
//		m_Num++;
//		//���ص���֮ǰ��ֵ
//		return tmp;
//	}
//public:
//	int m_Num;
//};
//
////ȫ�ֺ���ʵ��<<���������
//ostream & operator<<(ostream &cout, Person &p)
//{
//	cout << "m_Num = " << p.m_Num;
//	return cout;
//}
//
//////ǰ�õ�����������Ժ���
////void test01()
////{
////	Person p1;
////	cout << ++(++p1) << endl;
////	cout << p1 << endl;
////}
//
////������������Ժ���
//void test02()
//{
//	Person p1;
//	cout << p1++ << endl;
//	cout << p1 << endl;
//}
//
//int main()
//{
//	//test01();
//	int * a = new int;
//	cout << a << endl;
//	test02();
//	return 0;
//}
//
