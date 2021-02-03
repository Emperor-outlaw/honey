#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <fstream>
using namespace std;

//二进制文件读取

class Person
{
public:
	char buf[100];
	char sex[100];
	int age;
};

void test01()
{
	//1、包含头文件

	//2、创建流对象
	ifstream ifs;

	//3、打开文件 并且 判断是否打开成功
	ifs.open("person.txt", ios::binary | ios::in);

	if (!ifs.is_open())
	{
		cout << "打开文件失败" << endl;
		return;
	}

	//4、读文件
	Person p;
	ifs.read((char *)&p, sizeof(p));
	cout << p.buf << endl;
	cout << p.sex << endl;
	cout << p.age << endl;

	//5、关闭文件
	ifs.close();
}

int main()
{
	test01();
	return 0;
}