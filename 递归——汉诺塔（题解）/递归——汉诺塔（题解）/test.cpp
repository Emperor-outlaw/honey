#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;
//�Ŵ���һ��������������������A��B��C��A������64�����ӣ����Ӵ�С���ȣ�������£�С�����ϡ�
//��һ�����������64�����Ӵ�A���ƶ���C��
//��ÿ��ֻ�������ƶ�һ�����ӣ��������ƶ������У�3����λ������ʼ�ձ��ִ������£�С�����ϡ�
//���ƶ������п�������B����Ҫ������ƶ����衣
int count = 0;  //��¼�ƶ��Ĵ���
void Hanoi(int n, char X, char Y, char Z)
{
	if (n == 1)
	{
		::count++;
		cout << n << " �� " << X << "----->" << Z << endl;
		return;
	}
	Hanoi(n - 1, X, Z, Y);
	::count++;
	cout << n << " �� " << X << "----->" << Z << endl;
	Hanoi(n - 1, Y, X, Z);
}
int main()
{
	int n = 0;
	cin >> n;
	Hanoi(n, 'A', 'B', 'C');
	cout << ::count << endl;
	return 0;
}