#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;
//【问题描述】
//给定一个如下图所示的数字三角形，从顶部出发，在每一结点可以选择移动至其左下方的结点或移动至其右下方的结点，
//一直走到底层，要求找出一条路径，使路径上的数字的和最大。
//    7
//   3 8
//  8 1 0
// 2 7 4 4
//4 5 2 6 5
//【输入格式】
//第一行包含整数 n，表示数字三角形的层数。
//接下来 n 行，每行包含若干整数，其中第 i 行表示数字三角形第 i 层包含的整数。
//【输出格式】
//输出一个整数，表示最大的路径数字和。
//【数据范围】
//1≤n≤500
//−10000≤三角形中的整数≤10000
//【输入样例】
//5
//7 
//3 8 
//8 1 0
//2 7 4 4 
//4 5 2 6 5
//【输出样例】
//30

//递归
//#define N 510
//int data[N][N];
//int result[N];
//int max(int a, int b)
//{
//	return a > b ? a : b;
//}
//void f(int n)
//{
//	if (n == 0)
//	{
//		cout << result[0] << endl;
//		return;
//	}
//	for (int i = 0; i < n; i++)
//	{
//		result[i] = data[n - 1][i] + max(result[i], result[i + 1]);
//	}
//	f(n - 1);
//}
//int main()
//{
//	int n = 0;
//	cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j <= i; j++)
//		{
//			cin >> data[i][j];
//		}
//	}
//	for (int i = 0; i < n; i++)
//	{
//		result[i] = data[n - 1][i];
//	}
//	f(n - 1);
//	return 0;
//}

//递归（时间复杂度高）
//#define N 510
//int data[N][N];
//int n = 0;
//int max(int a, int b)
//{
//	return a > b ? a : b;
//}
//int maxnum(int i, int j) //从第i行第j个数字开始走
//{
//	if (i == n)
//		return data[i][j];
//	return data[i][j] + max(maxnum(i + 1, j), maxnum(i + 1, j + 1));
//}
//int main()
//{
//	cin >> n;
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= i; j++)
//		{
//			cin >> data[i][j];
//		}
//	}
//	cout << maxnum(1, 1) << endl;
//	return 0;
//}


//递推
#define N 510
int data[N][N];
int max(int a, int b)
{
	return a > b ? a : b;
}
int main()
{
	int n = 0;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cin >> data[i][j];
		}
	}
	for (int i = n - 1; i >= 1; i--)
	{
		for (int j = 1; j <= i; j++)
		{
			data[n][j] = max(data[n][j], data[n][j + 1]) + data[i][j];
		}
	}
	cout << data[n][1];
	return 0;
}