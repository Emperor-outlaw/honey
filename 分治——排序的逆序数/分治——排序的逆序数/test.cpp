#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;
#define MAX 1010
int a[MAX];
int count;
void memger(int L, int M, int R)
{
	int tmp[MAX];
	int i = L;
	int j = M + 1;
	int k = 0;
	while (i <= M && j <= R)
	{
		if (a[i] >= a[j])
			tmp[k++] = a[i++];
		if (a[j] >= a[i])
			tmp[k++] = a[j++];
	}
	while (i <= M)
		tmp[k++] = a[i++];
	while (j <= R)
		tmp[k++] = a[j++];
	for (i = 0; i < k; i++)
	{
		a[L + i] = tmp[i];
	}
}
void calculate_count(int L, int M, int R)
{
	int i = L;
	int j = M + 1;
	while (i <= M && j <= R)
	{
		if (a[i] > a[j])
		{
			::count += R - j + 1;
			i++;
		}
		else
			j++;
	}
}
void memger_sort(int L, int R)
{
	if (L < R)
	{
		int mid = L + (R - L) / 2;
		memger_sort(L, mid);
		memger_sort(mid + 1, R);
		calculate_count(L, mid, R);
		memger(L, mid, R);
	}
}
int main()
{
	//1 34 574 3 67 3 6 8 8 45 5 -45 425
	int n = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
    memger_sort(0, n - 1);
	cout << ::count << endl;
	return 0;
}