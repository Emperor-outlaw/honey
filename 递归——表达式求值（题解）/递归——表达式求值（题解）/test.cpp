#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;
//��������
//����Ϊ����������ʽ���������֡�+��-��*��/����������ɣ�û�пո�Ҫ������ֵ������������������������
//�����롿
//��2+3��*��5+7��+9/3
//�������
//63
//��˼��ʾ�����ʽ��������ļӼ���ɣ�����+����ߣ���-�
//          ����������ӳ˳����ɣ�������*���ӣ����ߣ�����/���ӣ�
//          ���ӿ�����'('���ʽ'��'����һ���������ɣ�'('���ʽ'��'���� ����
int exp_val();
int term_val();
int factor_val();
//����һ�����ӵ�ֵ
int factor_val()
{
	int result = 0;
	char ch = cin.peek();
	if (ch == '(')
	{
		cin.get(); //��ȡ������
	    result += exp_val(); //���������м���ʽ��ֵ
		cin.get(); //��ȡ������
	}
	else if (isdigit(ch))
	{
		while (isdigit(ch))
		{
			cin.get();
			result = result * 10 + ch - '0';
			ch = cin.peek();
		}
	}
	return result;
}
//������һ�����ֵ
int term_val()
{
	int result = factor_val();
	while (1)
	{
		char ch = cin.peek();
		if (ch == '*')
		{
			cin.get();
			result *= factor_val();
		}
		else if (ch == '/')
		{
			cin.get();
			result /= factor_val();
		}
		else
			return result;
	}
}
//����һ�����ʽ��ֵ
int exp_val()
{
	int result = term_val();
	while (1)
	{
		char ch = cin.peek();
		if (ch == '+')
		{
			cin.get(); //��+�Ż�ȡ��
			result += term_val();
		}
		else if (ch == '-')
		{
			cin.get(); //��-�Ż�ȡ��
			result -= term_val();
		}
		else
			return result;
	}
}
int main()
{
	cout << exp_val() << endl;
	return 0;
}