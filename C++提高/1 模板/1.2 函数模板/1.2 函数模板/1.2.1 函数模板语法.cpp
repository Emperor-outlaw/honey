//#define _CRT_SECURE_NO_WARNINGS 1
//
////C++�ṩ������ģ����ƣ�����ģ�� �� ��ģ��
//
////����ģ�����ã�
////����һ��ͨ�ú������亯������ֵ���ͺ��β����Ϳ��Բ������ƶ�����һ�� ��������� ������
//
////�﷨
////template<typename T>
////������������
////����
////template������������ģ��
////typename�������������ķ�����һ���������ͣ�������class����
////T����ͨ�õ��������ͣ����ƿ����滻��ͨ��Ϊ��д��ĸ
//
//
//#include <iostream>
//using namespace std;
//
//void my_swap1(int &a, int &b)
//{
//	int tmp = a;
//	a = b;
//	b = tmp;
//}
//
//void my_swap2(double &c, double&d)
//{
//	double tmp = c;
//	c = d;
//	d = tmp;
//}
//
////����ģ���ṩͨ�õĽ�������
//template<typename T>
//void my_swap(T &a, T &b)
//{
//	T tmp = a;
//	a = b;
//	b = tmp;
//}
//
//int main()
//{
//	//û��ʹ��ģ�彻��������
//	//1���������α�������
//	int a = 10;
//	int b = 20;
//	my_swap1(a, b);
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//
//	//2�����������ͱ�������
//	double c = 1.1;
//	double d = 1.6;
//	my_swap2(c, d);
//	cout << "c = " << c << endl;
//	cout << "d = " << d << endl;
//
//	//ʹ��ģ���ṩͨ�õĽ������� ����������
//	int m = 20;
//	int n = 40;
//	////����
//	////1���Զ������Ƶ�
//	//my_swap(m, n);
//	//cout << "m = " << m << endl;
//	//cout << "n = " << n << endl;
//
//	//2����ʾָ������
//	my_swap<int>(m, n);
//	cout << "m = " << m << endl;
//	cout << "n = " << n << endl;
//
//	return 0;
//}
//
////�ܽ᣺
////1��ʹ��ģ�������ַ�ʽ���Զ������Ƶ�����ʾָ������
////2��ģ���Ŀ����Ϊ����߸����ʣ������Ͳ�����