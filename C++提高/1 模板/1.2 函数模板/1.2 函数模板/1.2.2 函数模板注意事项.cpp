//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//using namespace std;
//
////ע������
////1���Զ������Ƶ��������Ƶ���һ�µ���������T,�ſ���ʹ��
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
//	my_swap(a, b);  //��ȷ���������Ƶ���һ�µ�T
//	//my_swap(a, c);  //���󡪡��������Ƶ���һ�µ�T
//}
//
////2��ģ�����Ҫȷʵ��T���������ͣ��ſ���ʹ��
//template <typename T>
//void fun()
//{
//	cout << "fun�����ĵ��ã�" << endl;
//}
//void test02()
//{
//	//fun();  //����ģ�岻�ܶ���ʹ�ã�����Ҫȷ����T������
//	fun<int>();//������ʾָ�����ͷ�ʽ����Tһ�����ͣ��ſ���ʹ�ø�ģ��
//}
//int main()
//{
//	//test01();
//	test02();
//	return 0;
//}
//
////�ܽ᣺ʹ��ģ��ʱ������ȷ����ͨ����������T,�����ܹ��Ƴ�һ������