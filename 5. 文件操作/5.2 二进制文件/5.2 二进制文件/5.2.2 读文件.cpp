#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <fstream>
using namespace std;

//�������ļ���ȡ

class Person
{
public:
	char buf[100];
	char sex[100];
	int age;
};

void test01()
{
	//1������ͷ�ļ�

	//2������������
	ifstream ifs;

	//3�����ļ� ���� �ж��Ƿ�򿪳ɹ�
	ifs.open("person.txt", ios::binary | ios::in);

	if (!ifs.is_open())
	{
		cout << "���ļ�ʧ��" << endl;
		return;
	}

	//4�����ļ�
	Person p;
	ifs.read((char *)&p, sizeof(p));
	cout << p.buf << endl;
	cout << p.sex << endl;
	cout << p.age << endl;

	//5���ر��ļ�
	ifs.close();
}

int main()
{
	test01();
	return 0;
}