#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <cmath>
using namespace std;
//【Description】
//在N*N的方格棋盘放置了N个皇后，使得它们不相互攻击（即任意2个皇后不允许处在同一排，同一列，也不允许处在与棋盘边框成45角的斜线上）
//你的任务是，对于给定的N，输出所有的摆法。
//【Input】
//输入一个正整数N,则程序输出N皇后问题的全部摆法
//【Output】
//输出的结果里的每一行都代表一种摆法。行里的第i个数字皇后的行、列编号都是从1开始计算
//【Sample Input】
//4
//【Sample Output】
//2 4 1 3
//3 1 4 2

#define MAX 100
int result[MAX];
int N;
void Nqueen(int n)//我认为第1到n-1已经摆放好了，现在摆放第n个
{
	if (n - 1 == N)
	{
		for (int i = 1; i <= N; i++)
		{
			cout << result[i] << " ";
		}
		cout << endl;
		return;
	}
	//逐个尝试第n个皇后的位置
	for (int i = 1; i <= N; i++)
	{
		//和已经摆放好的n-1个皇后位置比较，看是否冲突
		int j = 0;
		for (j = 1; j < n; j++)
		{
			if (result[j] == i || abs(result[j] - i) == abs(n - j))
				break;  //冲突尝试下一个位置
		}
		//如果if条件成立，此位置没有和前面任何皇后的位置冲突
		if (j == n)
		{
			//cout << "i = " << i << endl;
			
			result[n] = i; //将第k个皇后的位置保存下来
			//cout << "result = " << result[n] << endl;
			Nqueen(n + 1);
		}
	}
}
int main()
{
	cin >> N;
	Nqueen(1);
	return 0;
}