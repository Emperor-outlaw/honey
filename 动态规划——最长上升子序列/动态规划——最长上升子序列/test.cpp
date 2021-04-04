#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;
//2 4 7 1 4 5 7 8 37 45 7 432 2 54 12 23 5 6 7 90
int my_max(int a, int b)
{
	return a > b ? a : b;
}

int search_max(int *p, int n)
{
	int max = 0;
	for (int i = 1; i < n; i++)
	{
		if (p[i] > p[max])
			max = i;
	}
	return p[max];
}

int main()
{
	const int MAX = 1010;
	int a[MAX];
	int maxlen[MAX];
	int n = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		maxlen[i] = 1;
	}
	for (int i = 1; i < n; i++)
	{
		for (int j = 0; j < i; j++)
		{
			if (a[i] > a[j])
				maxlen[i] = my_max(maxlen[i], maxlen[j] + 1);
		}
	}
	cout << search_max(maxlen, n) << endl;
	return 0;
}