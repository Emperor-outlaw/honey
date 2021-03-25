#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <cstring>
using namespace std;
int room[60][60];
int color[60][60];
int maxnum = 0;
int num = 0;

void dfs(int i, int j)
{
	if (color[i][j])
		return;
	num++;
	color[i][j] = 1;
	if ((room[i][j] & 1) == 0)
		dfs(i, j - 1);
	if ((room[i][j] & 2) == 0)
		dfs(i - 1, j);
	if ((room[i][j] & 4) == 0)
		dfs(i, j + 1);
	if ((room[i][j] & 8) == 0)
		dfs(i + 1, j);
}

int my_max(int a, int b)
{
	return a > b ? a : b;
}

int main()
{
	int C = 0;
	int R = 0;
	cin >> C >> R;
	for (int i = 0; i < C; i++)
	{
		for (int j = 0; j < R; j++)
		{
			cin >> room[i][j];
		}
	}
	memset(color, 0, sizeof(color));
	for (int i = 0; i < C; i++)
	{
		for (int j = 0; j < R; j++)
		{
			if (!color[i][j])
			{
				num = 0;
				dfs(i, j);
				//cout << num << endl;
				maxnum = my_max(maxnum, num);
			}
		}
	}
	cout << maxnum << endl;
	return 0;
}