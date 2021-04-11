#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <sstream>
#include <fstream>
using namespace std;
int main()
{
	//创建一个输入流
	ifstream ifs("test.txt");
	string str[2];
	for (int i = 0; i < 2; i++)
	{
		//将从文件中读取的字符先放在ostringstream流里面的buf里
		ostringstream buf;
		char ch;
		while (buf && ifs.get(ch))
		{
			buf.put(ch);
			if (ch == '\n')
				break;
		}
		//赋值操作： buf.str是和buf相关联的一个字符串
		str[i] = buf.str();
	}
	for (int i = 0; i < 2; i++)
	{
		cout << str[i];
	}
	return 0;
}