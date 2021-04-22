#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <algorithm>
using namespace std;
//7
//1 7 3 5 9 4 8
//4
#define N 1010
int a[N];
int maxlen[N];
int max(int a, int b)
{
	return a > b ? a : b;
}
int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		maxlen[i] = 1;
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i; j++)
		{
			if (a[j] < a[i])
			{
				maxlen[i] = max(maxlen[i], maxlen[j] + 1);
			}
		}
	}
	cout << *max_element(maxlen + 1, maxlen + n + 1) << endl;
	return 0;
}