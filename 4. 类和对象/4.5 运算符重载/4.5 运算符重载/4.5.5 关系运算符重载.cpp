//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//#include <string>
//using namespace std;
////���ã��������Զ�����������бȽ�
////1��==���������
////2��!=���������
//class Person
//{
//public:
//	Person(int a, string name)
//	{
//		m_a = a;
//		m_name = name;
//	}
//	//1��==���������(û����ʽ����)
//	bool operator==(Person &p)
//	{
//		if (m_a == p.m_a && m_name == p.m_name)
//		{
//			return true;
//		}
//		return false;
//	}
//	//2��!=��������أ�û����ʽ���ʣ�
//	bool operator!=(Person &p)
//	{
//		if (m_a == p.m_a && m_name == p.m_name)
//		{
//			return false;
//		}
//		return true;
//	}
//public:
//	int m_a;
//	string m_name;
//};
//void test01()
//{
//	Person p1(20, "Tom");
//	Person p2(20, "Lisa");
//	cout << p1.m_a << p1.m_name << endl;
//	cout << p2.m_a << p2.m_name << endl;
//	if (p1 == p2)
//	{
//		cout << "������ȣ�" << endl;
//	}
//	else
//	{
//		cout << "��������ȣ�" << endl;
//	}
//	if (p1 != p2)
//	{
//		cout << "��������ȣ�" << endl;
//	}
//	else
//	{
//		cout << "������ȣ�" << endl;
//	}
//}
//int main()
//{
//	test01();
//	return 0;
//}