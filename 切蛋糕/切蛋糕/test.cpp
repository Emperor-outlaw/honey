#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <cmath>
using namespace std;
int s[21]; //���n��ʱ�����ϴ������Ҫ������ܺ�s[n]
int maxh[1000][22];
int minarea = 0x7fffffff;
int area = 0;
int N = 0;
int M = 0;
int min(int a, int b)
{
	return a < b ? a : b;
}
void bfs(int v, int n, int r, int h)
{
	if (n == 0)
	{
		if (v)
			return;
		else
			minarea = min(minarea, area);
	}
	//��֦1������ǰ���������С���ʱ����
	if (area >= minarea)
		return;
	//��֦����ǰʣ������v����Ѿ�����ʣ�µĴ����
	if (v < s[n])
		return;
	//��֦����ǰʣ������v�����ᳬ��ʣ�´ʱ����
	if (v > r * r * h * n)
		return;
	if (v <= 0)
		return;
	for (int rr = r; rr >= n; rr--)
	{
		if (n == M)
			area = rr * rr;
		for (int hh = h; hh >= n; hh--)
		{
			area += rr * 2 * hh;
			bfs(v - rr * rr * hh, n - 1, rr - 1, hh - 1);
			area -= rr * 2 * hh;
		}
	}
}
int main()
{
	cin >> N >> M;
	int tmp = 0;
	for (int i = 1; i <= M; i++)
	{
		tmp += (int)pow(i, 3);
		s[i] = tmp;
	}
	int maxr = (int)sqrt((N - s[M - 1]) / M) + 1;
	int maxh = (N - s[M - 1]) / (M * M) + 1;
	bfs(N, M, maxr, maxh);
	//cout << "s = " << minarea << endl;
	if (minarea != 0x7fffffff)
		cout << minarea << endl;
	else
		cout << 0 << endl;
	return 0;
}

//100 2
//68
//
//100 3
//85
//100 4
//76
//100 5
//0


//1000 10
//0
//1000 2
//313
//1000 4
//320
//1000 5
//340
//932 4
//309


//3476 19
//0
//2134 3
//513
//31 4
//0
//3124 8
//772