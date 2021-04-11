#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <cmath>
using namespace std;
int s[21] = { 0 }; //搭建第n层时再往上搭建最少需要的面积总和s[n]
int minarea = 0x7fffffff;
int area = 0;
int V = 0;
int M = 0;
int min(int a, int b)
{
	return a < b ? a : b;
}
void bfs(int v, int n, int r, int h)
{
	//剪枝1：当当前面积大于最小面积时返回
	if (area >= minarea)
		return;
	//剪枝：当前剩余的体积v如果已经不够剩下的搭建返回
	if (v < s[n])
		return;
	//剪枝：当前剩余的体积v搭建如果会超过剩下的搭建时返回
	if (v > r * r * h)
		return;
	if (n == 0)
	{
		if (v)
			return;
		else
			minarea = min(minarea, area);
	}
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
	cin >> V >> M;
	int tmp = 0;
	for (int i = 1; i < 20; i++)
	{
		tmp += (int)pow(i, 3);
		s[i] = tmp;
	}
	bfs(V, M, 1000, 10);
	cout << "s = " << minarea << endl;
	if (minarea != 2 << 30)
		cout << "s = " << minarea << endl;
	else
		cout << " s = 0" << endl;
	return 0;
}