//#define _CRT_SECURE_NO_WARNINGS 1
//#include <iostream>
//#include <fstream>
//using namespace std;
////文件可以将数据持久化
////C++中对文件操作需要包含头文件<fstream>
//
////文件类型分为两种：
////1、文本文件——文件以文本的ASCII形式存储在计算机中
////2、二进制文件——文件以文本的二进制形式存储在计算机中，用户一般不能直接读懂它们
//
////操作文件的三大类
////1、ofstream:写操作
////2、ifstream:读操作
////3、fstream:读写操作
//
////写文本文件的步骤：
////1、包含头文件
////#include <fstream>
//
////2、创建流对象
////ofstream ofs;
//
////3、打开文件
////ofs.open("文件路径",打开方式);
//
////4、写数据
////ofs << "写入数据";
//
////5、关闭文件
////ofs.close();
//
////文件的打开方式
////打开方式               解释
////ios::in                为读文件而打开文件
////ios::out               为写文件而打开文件
////ios::ate               初始位置：文件尾
////ios::app               追加方式写文件
////ios::trunc             如果文件存在，先删除，再创建
////ios::binary            二进制方式
////注意：文件打开方式可以配合使用，利用 '|' 操作符
////例如：用二进制方式写文件 ios::binary | ios::out
//
//
//int main()
//{
//	ofstream ofs;
//	ofs.open("test.txt", ios::out);
//	ofs << "姓名：王海楼" << endl << "年龄：20" << endl << "性别：男" << endl;
//	ofs.close();
//	return 0;
//}