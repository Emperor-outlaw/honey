#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;
//����n��n<=100000�����������ҳ����е�������������֮�͵�������m(�ٶ��϶��н�)������������������int����ʾ
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
	int x = -1;  //����ҵ��ĵ�һ����
	int y = -1;  //����ҵ��ĵڶ�����
	int a[] = { -34, 45, 26, 53, 56, -25, 25, 674, 252, 0, 0, 26, 2, 2, 6, -7, 9, 6 };
	q_sort(a, 0, sizeof(a) / sizeof(a[0]) - 1);
	search(a, sizeof(a) / sizeof(a[0]), 699, x, y);
	cout << x << " " << y << endl;
	return 0;
}