#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;
////�ݹ�׳�
//int Factorial(int n)
//{
//	if (n == 0 || n == 1)
//		return 1;
//	else
//		return n * Factorial(n - 1);
//}
//int main()
//{
//	int n = 0;
//	cin >> n;
//	cout << Factorial(n) << endl;
//	return 0;
//}


////��ŵ����Ϸ
//void Hanio(int n, char scr, char mid, char dest)
//{
//	if (n == 1)
//	{
//		cout << n  << "��" << scr << "->" << dest << endl;
//		return;
//	}
//	Hanio(n - 1, scr, dest, mid);
//	cout << n  << "��" << scr << "->" << dest << endl;
//	Hanio(n - 1, mid, scr, dest);
//}
//int main()
//{
//	int n = 0;
//	cin >> n;
//	Hanio(n, 'A', 'B', 'C');
//	return 0;
//}


////N�ʺ�
//int main()
//{
//	int n = 0;
//	cin >> n;
//
//	return 0;
//}

//�沨�����ʽ

#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char *fun(char(*a)[81], int num, char *max)
{
	int i = 0;
	max = a[0];
	for (i = 0; i<num; i++)         /*�ҳ����һ���ַ���*/
		if (strlen(max)<strlen(a[i]))
			max = a[i];
	return max;                /*������ַ����ĵ�ַ*/
}
void main()
{
	FILE *wf;
	char ss[10][81], *ps = NULL;
	char s[3][81] = { "abcd", "deg", "diegns" }, *p = NULL;
	int  i = 0, n;
	system("CLS");
	printf("�������ɸ��ַ�����");
	gets(ss[i]);
	puts(ss[i]);
	while (!strcmp(ss[i], "****") == 0)  /*��4���Ǻ���Ϊ��������ı�־*/
	{
		i++;
		gets(ss[i]);
		puts(ss[i]);
	}
	n = i;
	ps = fun(ss, n, ps);
	printf("\nmax=%s\n", ps);
	/******************************/
	wf = fopen("out.dat", "w");
	p = fun(s, 3, p);
	fprintf(wf, "%s", p);
	fclose(wf);
	/*****************************/
}
