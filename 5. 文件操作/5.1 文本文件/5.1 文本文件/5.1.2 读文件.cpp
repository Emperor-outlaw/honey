//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//#include <fstream>
//#include <string>
//using namespace std;
//
////读文本文件的步骤：
////1、包含头文件
////#include <fstream>
//
////2、创建流对象
////ifstream ofs;
//
////3、打开文件 并 判断文件是否打开成功
////ifs.open("文件路径",打开方式);
//
////4、读数据
////四种方式读取
//
////5、关闭文件
////ifs.close();
//
//int main()
//{
//	ifstream ifs;
//	ifs.open("test.txt", ios::in);
//
//	//bool 流对象.is_open() 判断文件是否打开成功，打开成功返回真，失败返回假
//	if (!ifs.is_open())
//	{
//		cout << "文件打开失败" << endl;
//		return 0;
//	}
//
//	//读文件
//	////第一种方式
//	//char buf[1024] = { 0 };
//	//while (ifs >> buf)
//	//{
//	//	cout << buf << endl;
//	//}
//
//	////第二种方式
//	//char buf[1024] = { 0 };
//	//while (ifs.getline(buf, sizeof(buf)))
//	//{
//	//	cout << buf << endl;
//	//}
//
//	////第三种方式
//	//string buf;
//	//while (getline(ifs, buf))
//	//{
//	//	cout << buf << endl;
//	//}
//
//	//第四种方式
//	char c;
//	while ((c = ifs.get()) != EOF)
//	{
//		cout << c;
//	}
//
//	ifs.close();
//
//	return 0;
//}