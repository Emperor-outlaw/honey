//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//using namespace std;
////�̳���ͬ���ľ�̬��Ա�������������ν��з��ʣ�
//
////ע�⣺��̬��Ա����������
////1������ͬһ��ռ�
////2���������� �����ʼ��
////3�������ڼ�����ڴ�ռ�
//
////��̬��Ա�����ַ��ʷ�ʽ
////1��ͨ���������
////2��ͨ����������
//
//class Base
//{
//public:
//	static void fun()
//	{
//		cout << "Base �µĺ���" << endl;
//	}
//public:
//	static int age;
//};
//int Base::age = 100;
//
//class Son :public Base
//{
//public:
//	static void fun()
//	{
//		cout << "Son �µĺ���" << endl;
//	}
//public:
//	static int age;
//};
//int Son::age = 50;
//
//void test01()
//{
//	//ͨ���������
//	cout << "ͨ���������" << endl;
//	Son son;
//	cout << son.age << endl;
//	son.fun();
//	cout << son.Base::age << endl;
//	son.Base::fun();
//
//	//ͨ����������
//	cout << "ͨ����������" << endl;
//	//��һ��::����Son����    �ڶ���::����Base��������
//	cout << Son::Base::age << endl;
//	Son::Base::fun();
//}
//
//int main()
//{
//	test01();
//	return 0;
//}

//�ܽ᣺��̬��Ա���ʺͷǾ�̬��Ա����һ������̬��Ա�����ַ��ʷ�ʽ��