//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//using namespace std;
////��������أ������е���������¶��壬��������һ�ֹ��ܣ�����Ӧ��ͬ����������
////1��ʵ�ֳ�Ա����+�����������
//class Person
//{
//public:
//	Person()
//	{
//		m_A = 10;
//		m_B = 20;
//	}
//	//��Ա����+�����������
//	Person operator+(const Person &p)
//	{
//		Person tmp;
//		tmp.m_A = m_A + p.m_A;
//		tmp.m_B = m_B + p.m_B;
//		return tmp;
//	}
//public:
//	int m_A;
//	int m_B;
//};
//
//void test01()
//{
//	Person p1;
//	Person p2;
//	Person p3 = p1 + p2;   //Person p3 = p1.operator+(p2);
//	cout << p3.m_A << endl;
//	cout << p3.m_B << endl;
//}
//int main()
//{
//	test01();
//	return 0;
//}

////2��ʵ��ȫ�ֺ���+�����������
//class Person
//{
//public:
//	Person()
//	{
//		m_A = 10;
//		m_B = 20;
//	}
//public:
//	int m_A;
//	int m_B;
//};
////ȫ�ֺ���+�����������
//Person operator+(Person &p1, Person &p2)
//{
//	Person tmp;
//	tmp.m_A = p1.m_A + p2.m_A;
//	tmp.m_B = p1.m_B + p2.m_B;
//	return tmp;
//}
////int operator+(int &a, int &b)
////{
////
////}
//void test01()
//{
//	Person p1;
//	Person p2;
//	Person p3 = p1 + p2;   //Person p3 = p1.operator+(p2);
//	cout << p3.m_A << endl;
//	cout << p3.m_B << endl;
//}
//int main()
//{
//	test01();
//	return 0;
//}

////�ܽ᣺1���������õ��������͵ı��ʽ�������ʱ�����ܸı��
////      2����Ҫ�������������