#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;
//输入n（n<=100000）个整数，找出其中的两个数，他们之和等于整数m(假定肯定有解)。题中所有整数都用int来表示
void swap(int &a, int &b)
{
	int tmp = a;
	a = b;
	b = tmp;
}

void q_sort(int a[], int L, int R)
{
	if (L >=  R)
		return;
	int k = a[L];
	int i = L;
	int j = R;
	while (i < j)
	{
		while (a[j] >= k && i < j)
			j--;
		swap(a[j], a[i]);
	    while (a[i] <= k && i < j)
			i++;
		swap(a[i], a[j]);
	}
	q_sort(a, L, i - 1);
	q_sort(a, i + 1, R);	
}

void search(int a[], int size, int m, int &x, int &y)
{
	int L = 0;
	int R = size - 1;
	while (L < R)
	{
		if (a[L] + a[R] > m)
			R--;
		else if (a[L] + a[R] < m)
			L++;
		else 
		{
			x = a[L];
			y = a[R];
			return;
		}
	}
}

int main()
{
	int x = -1;  //存放找到的第一个数
	int y = -1;  //存放找到的第二个数
	int a[] = { -34, 45, 26, 53, 56, -25, 25, 674, 252, 0, 0, 26, 2, 2, 6, -7, 9, 6 };
	q_sort(a, 0, sizeof(a) / sizeof(a[0]) - 1);
	search(a, sizeof(a) / sizeof(a[0]), 699, x, y);
	cout << x << " " << y << endl;
	return 0;
}