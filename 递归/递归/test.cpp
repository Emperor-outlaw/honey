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


//��ŵ����Ϸ
void Hanio(int n, char scr, char mid, char dest)
{
	if (n == 1)
	{
		cout << n  << "��" << scr << "->" << dest << endl;
		return;
	}
	Hanio(n - 1, scr, dest, mid);
	cout << n  << "��" << scr << "->" << dest << endl;
	Hanio(n - 1, mid, scr, dest);
}
int main()
{
	int n = 0;
	cin >> n;
	Hanio(n, 'A', 'B', 'C');
	return 0;
}


////n�ʺ�
//#include <cmath>
//int Case = 1;  //��n������ı�־
//int count = 0;
//void output_result(int queen[], int n)
//{
//	cout << "case " << ::Case++ << endl;
//	for (int i = 0; i < n; i++)
//	{
//		cout << queen[i] + 1 << " ";
//	}
//	::count++;
//	cout << endl;
//}
//void squeen(int queen[], int n, int k)
//{
//	if (k == n)
//	{
//		output_result(queen, n);
//		return;
//	}
//	//��Ϊǰ1~k-1���Ѿ��ں��ˣ����ڿ�ʼ�ڵ�k��
//	for (int i = 0; i < n; i++)
//	{
//		int j = 0;
//		for (j = 0; j < k; j++)
//		{
//			if ((queen[j] == i) || abs(queen[j] - i) == abs(k - j))
//				break;
//		}
//		if (j == k)
//		{
//			queen[k] = i;
//			squeen(queen, n, k + 1);
//		}
//	}
//}
//
//int main()
//{
//	int queen[50];
//	int t = 0;
//	cin >> t;
//	for (int i = 0; i < t; i++)
//	{
//		int n = 0;
//		cin >> n;
//		squeen(queen, n, 0);
//	}
//	cout << " count = " << ::count << endl;
//	return 0;
//}

////�沨�����ʽ
//#include <cmath>
//double exp()
//{
//	char arr[10];
//	cin >> arr;
//	switch (arr[0])
//	{
//	case '+':
//		return exp() + exp();
//	case '-':
//		return exp() + exp();
//	case '*':
//		return exp() + exp();
//	case '/':
//		return exp() + exp();
//	default: 
//		return atof(arr);
//		break;
//	}
//}
//int main()
//{
//	double ret = exp();
//	cout << ret << endl;
//	return 0;
//}

////��̨��(һ�ο�����һ��̨�ף�һ��Ҳ����������̨�ף���n��̨���ж������߷�)
////f(n) = f(n - 1) + f(n - 2)
//int stair(int n)
//{
//	if (n == 1)
//		return 1;
//	if (n == 2)
//		return 2;
//	return stair(n - 1) + stair(n - 2);
//}
//int main()
//{
//	int n = 0;
//	cin >> n;
//	int ret = stair(n);
//	cout << ret << endl;
//	return 0;
//}


////��̨��(һ�ο�����һ��̨�ף�һ��Ҳ����������̨�ף�һ��Ҳ������n��̨�ף���n��̨���ж������߷�)
//int stair(int n)
//{
//
//	for (int i = 1; i <= n; i++)
//	{
//		return stair(n - i);
//	}
//
//}
//int main()
//{
//	int n = 0;
//	cin >> n;
//	int ret = stair(n);
//	cout << ret << endl;
//	return 0;
//}

