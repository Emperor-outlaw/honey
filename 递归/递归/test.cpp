#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;
////递归阶乘
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


////汉诺塔游戏
//void Hanio(int n, char scr, char mid, char dest)
//{
//	if (n == 1)
//	{
//		cout << n  << "从" << scr << "->" << dest << endl;
//		return;
//	}
//	Hanio(n - 1, scr, dest, mid);
//	cout << n  << "从" << scr << "->" << dest << endl;
//	Hanio(n - 1, mid, scr, dest);
//}
//int main()
//{
//	int n = 0;
//	cin >> n;
//	Hanio(n, 'A', 'B', 'C');
//	return 0;
//}


////N皇后
//#include <cmath>
//int Case = 1;  //第n个结果的标志
//void output_result(int queen[], int n)
//{
//	cout << "Case " << Case++ << endl;
//	for (int i = 0; i < n; i++)
//	{
//		cout << queen[i] + 1 << " ";
//	}
//	cout << endl;
//}
//void squeen(int queen[], int n, int k)
//{
//	if (k == n)
//	{
//		output_result(queen, n);
//		return;
//	}
//	//认为前1~k-1个已经摆好了，现在开始摆第k个
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
//	int T = 0;
//	cin >> T;
//	for (int i = 0; i < T; i++)
//	{
//		int n = 0;
//		cin >> n;
//		squeen(queen, n, 0);
//	}
//	return 0;
//}

////逆波兰表达式
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

////上台阶(一次可以走一个台阶，一次也可以走两个台阶，问n个台阶有多少种走法)
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


//上台阶(一次可以走一个台阶，一次也可以走两个台阶，一次也可以走n个台阶，问n个台阶有多少种走法)
int stair(int n)
{

	for (int i = 1; i <= n; i++)
	{
		return stair(n - i);
	}

}
int main()
{
	int n = 0;
	cin >> n;
	int ret = stair(n);
	cout << ret << endl;
	return 0;
}

