#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;
#define MAX 10000
//输出前m大的数
//
void swap(int &a, int &b)
{
	int tmp = a;
	a = b;
	b = tmp;
}

void q_sort(int a[], int L, int R)
{
	if (L >= R)
		return;
	int k = a[L];
	int i = L;
	int j = R;
	while (i < j)
	{
		while (a[j] >= k && i < j)
			j--;
		swap(a[i], a[j]);
		while (a[i] <= k && i < j)
			i++;
		swap(a[i], a[j]);
	}
	q_sort(a, L, i - 1);
	q_sort(a, i + 1, R);
}

void arrange_num(int a[], int L, int R, int m)
{
	if (m == 0)
		return;
	int k = a[L];
	int i = L;
	int j = R;
	while (i < j)
	{
		while (a[j] >= k && i < j)
			j--;
		swap(a[i], a[j]);
		while (a[i] <= k && i < j)
			i++;
		swap(a[i], a[j]);
	}
	if (R - i + 1 > m)
		arrange_num(a, i + 1, R, m);
	else
	{
		q_sort(a, i, R);
		arrange_num(a, L, i - 1, m - R + i - 1);
	}
}

void output_result(int a[], int n, int m)
{
	while (m--)
	{
		cout << a[n - 1] << " ";
		n--;
	}
	cout << endl;
}

int main()
{
	int a[MAX];
	int n = 0;
	int m = 0;
	cin >> n;
	cin >> m;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	arrange_num(a, 0, n - 1, m);
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
	output_result(a, n, m);
	return 0;
}