#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <string>
using namespace std;
//�������������()Ҳ���Է�������
//�������غ�ʹ�õķ�ʽ�ǳ������ĵ��ã���˳�Ϊ�º���
//�º���û�й̶�д�����ǳ����

class MyPrint
{
public:
	void operator()(string str)
	{
		cout << str << endl;
	}
};
void test01()
{
	MyPrint myprint;
	myprint("hello world");
}
class Add
{
public:
	int operator()(int a, int b)
	{
		return a + b;
	}
};
void test02()
{
	Add add;
	int ret = add(10, 30);
	cout << "ret = " << ret << endl;
	cout << "Add()(100,100) = " << Add()(100, 100) << endl; //�����������
}
int main()
{
	test01();
	test02();
	return 0;
}