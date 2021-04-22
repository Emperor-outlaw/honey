#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;
//【问题描述】
//舒老师爬楼梯，他可以每次走1级或者2级，输入楼梯的级数，求不同的走法
//【输入】
//输入包含若干行，每行包含一个正整数N，代表楼梯级数，1<=N<=30输出不同的走法数，每一行输入对应一行
//【输出】
//不同的走法数，每一行输入对应一行输出
//【样例输入】
//5
//8
//10
//【样例输出】
//8
//34
//89
////提示：f(n) = f(n - 1) + f(n - 2)
//int stair_up(int n)
//{
//	if (n == 1)
//		return 1;
//	if (n == 2)
//		return 2;
//	return stair_up(n - 1) + stair_up(n - 2);
//}
//int main()
//{
//	int N = 0;
//	cin >> N;
//	int ret = stair_up(N);
//	cout << "ret = " << ret << endl;
//	return 0;
//}

//【问题扩展】
//如果有N阶楼梯，一次可以走1阶，2阶，3阶，.......甚至n阶，求有几种走法
//【输入】
//输入一个N(台阶数)，一个n（一次最多可以走的阶数），n<=N;
//【输出】
//输入N个台阶的全部走法
int stair_up(int N, int n)
{

	int val = 0;
	for (int i = 1; i <= n; i++)
	{
		val += stair_up(N - i, n);
	}
	return val;
}
int main()
{
	int n = 0;
	int N = 0;
	cin >> N >> n;
	int ret = stair_up(N, n);
	cout << "ret = " << ret << endl;
	return 0;
}