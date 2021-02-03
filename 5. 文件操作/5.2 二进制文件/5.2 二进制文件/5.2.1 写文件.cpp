//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//#include <fstream>
//using namespace std;
////二进制方式写文件主要利用流对象调用成员函数write
////函数原型：ostream& write (const chat * buffer, int len)
////参数解释：buffer:指向内存中一段存储空间   len:读写的字节数
////二进制可以读写自定义类型
//
//class Person
//{
//public:
//	char buf[100];
//	char sex[100];
//	int age;
//};
//
//void test01()
//{
//	//1、包含头文件
//
//	//2、创建输出流对象
//	ofstream ofs("person.txt", ios::out | ios::binary);//可以创建流对象的时候打开文件（ofs里面有对应的构造函数）
//
//	//3、打开文件
//	//ofs.open("person.txt", ios::out | ios::binary);
//
//	//4、写文件
//	Person p = { "王海楼", "男", 20 };   //创建写入的内容
//	ofs.write((const char *)&p, sizeof(p));
//
//	//5、关闭文件
//	ofs.close();
//}
//int main()
//{
//	test01();
//	return 0;
//}