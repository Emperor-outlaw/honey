#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;
//#define MAX 105
//int a[MAX][MAX];
//int n = 0;
////递归（数据大可导致栈溢出）
//int f_max(int a, int b)
//{
//	return  a > b ? a : b;
//}
//int max_len(int i, int j)
//{
//	if (i == n)
//		return a[i][j];
//	return f_max(max_len(i + 1, j), max_len(i + 1, j + 1)) + a[i][j];
//}
//int main()
//{
//	cin >> n;
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= i; j++)
//		{
//			cin >> a[i][j];
//		}
//	}
//	int ret = max_len(1, 1);
//	cout << ret << endl;
//	return 0;
//}

//动态规划
//将递归转化为递推
#define MAX 100
int main()
{
	int a[MAX][MAX];
	int n = 0;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cin >> a[i][j];
		}
	}
	for (int i = n - 1; i >= 1; i--)
	{
		for (int j = 1; j <= i; j++)
		{
			if (a[n][j] > a[n][j + 1])
				a[n][j] = a[n][j] + a[i][j];
			else
				a[n][j] = a[n][j + 1] + a[i][j];
		}
	}
	cout << a[n][1] << endl;
	return 0;
}