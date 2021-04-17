#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;
//【问题描述】
//把M个同样的苹果放在N个同样的盘子里，允许有的盘子空着不放，问共有多少种不同的分法？（用K表示）5，1，1和1，5，1 是同一种分法。
//【Input】
//第一行是测试数据的数目t（0 <= t <= 20）。以下每行均包含二个整数M和N，以空格分开。1 <= M，N <= 10。
//【Output】
//对输入的每组数据M和N，用一行输出相应的K。
//【Sample Input】
//1
//7 3
//【Sample Output】
//8
int put(int m, int n)
{
	if (n > m)
		return put(m, m);
	if (n == 1 || m == 0)
		return 1;
	return put(m, n - 1) + put(m - n, n);
}
int main()
{
	int m, n; //m：苹果 n:盘子
	cin >> m >> n;
	int ret = put(m, n);
	cout << "ret = " << ret << endl;
	return 0;
}
