#define _CRT_SECURE_NO_WARNINGS 1
//��Ӧ�ַ����������޷���Long long�洢�£�Ҫ�Ľ�
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
	int m = 0;     //�Ӻŵĸ���
	cin >> m;
	cin >> str;
	int len = strlen(str);
	int n = len;   //���ֵĸ���

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
	//m �Ӻ�   n����
	//v(m,n)
	//n - 1 == m ÿ���ַ�֮��
	//m == 0     ǰn���ַ���ֵ
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
			//����Сֵ��ʱ�临�Ӷȣ�n!��
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