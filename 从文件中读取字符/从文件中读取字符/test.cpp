#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <sstream>
#include <fstream>
using namespace std;
int main()
{
	//����һ��������
	ifstream ifs("test.txt");
	string str[2];
	for (int i = 0; i < 2; i++)
	{
		//�����ļ��ж�ȡ���ַ��ȷ���ostringstream�������buf��
		ostringstream buf;
		char ch;
		while (buf && ifs.get(ch))
		{
			buf.put(ch);
			if (ch == '\n')
				break;
		}
		//��ֵ������ buf.str�Ǻ�buf�������һ���ַ���
		str[i] = buf.str();
	}
	for (int i = 0; i < 2; i++)
	{
		cout << str[i];
	}
	return 0;
}