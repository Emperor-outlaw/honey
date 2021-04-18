#define _CRT_SECURE_NO_WARNINGS 1
//对应字符串长的数无法用Long long存储下，要改进
#include <iostream>
#include <string>
#include <cstring>
using namespace std;
#define N 55
char str[N];
long long num[N][N];
long long result[N][N];
int main()
{
	int m = 0;     //加号的个数
	cin >> m;
	cin >> str;
	int len = strlen(str);
	int n = len;   //数字的个数

	for (int i = 1; i <= len; i++)
	{
		for (int j = i; j <= len; j++)
		{
			char s[N];
			strncpy(s, str + i - 1, j - i + 1);
			*(s + (j - i + 1)) = '\0';
			//cout << s << endl;
			num[i][j] = (long long)atof(s);
		}
	}
	//m 加号   n数字
	//v(m,n)
	//n - 1 == m 每个字符之和
	//m == 0     前n个字符的值
	//v(m - 1, i)(i = m, n - 1) + num(i + 1, n);
	int i = 0;
	for (i = 1; i <= len; i++)
	{
		result[0][i] = num[1][i];
	}
	i = 1;
	int j = 2;
	long long tmp = 1;
	while (i <= m)
	{
		tmp += num[i + 1][j];
		result[i++][j++] = tmp;
	}
	for (int i = 1; i <= m; i++)
	{
		int count = 2;
		int k = i + 1;
		long long ret = result[i - 1][k];
		for (int j = i + 2; j <= len; j++)
		{
			//找最小值（时间复杂度：n!）
			long long tmp = result[i - 1][i] + num[i + 1][j];
			//cout << tmp << endl;
			for (int k = i + 1; k < j; k++)
			{
				if ((result[i - 1][k] + num[k + 1][j]) < tmp)
					tmp = result[i - 1][k] + num[k + 1][j];
				//cout << "hhhh = " << tmp << endl;
			}
			//cout << tmp << endl;
			result[i][j] = tmp;
		}
	}
	//cout << "m = " << m << " " << " n = " << n << endl;
	cout << result[m][n] << endl;
	return 0;
}