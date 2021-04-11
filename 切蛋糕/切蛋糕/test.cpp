#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <cmath>
using namespace std;
int s[21] = { 0 }; //���n��ʱ�����ϴ������Ҫ������ܺ�s[n]
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
	//��֦1������ǰ���������С���ʱ����
	if (area >= minarea)
		return;
	//��֦����ǰʣ������v����Ѿ�����ʣ�µĴ����
	if (v < s[n])
		return;
	//��֦����ǰʣ������v�����ᳬ��ʣ�µĴʱ����
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