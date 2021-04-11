#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;
#define MAX 20
void merge_sort(int a[], int L,int mid, int R)
{
	int tmp[MAX];
	int i = L;
	int j = mid + 1;
	int k = 0;
	while (i <= mid && j <= R)
	{
		while (a[i] >= a[j] && i <= mid)
			tmp[k++] = a[i++];
		while (a[i] <= a[j] && j <= R)
			tmp[k++] = a[j++];
	}
	while (i <= mid)
		tmp[k++] = a[i++];
	while (j <= R)
		tmp[k++] = a[j++];
	for (k = 0; k < R - L + 1; k++)
		a[L + k] = tmp[k];
}

void merge_reverse(int a[], int L, int R, int &count)
{
	if (L == R)
		return;
	int mid = L + (R - L) / 2;
	int i = L;
	int j = mid + 1;
	merge_reverse(a, L, mid, count);
	merge_reverse(a, mid + 1, R, count);
	while ()
	{
		while (a[i] >= a[j] && j <= R)
		{
			if (a[i] != a[j])
				count++;
			j++;
		}
		while (a[i] <= a[j] && i <= mid)
		{
			if (a[i] != a[j])
				count++;
			i++;
		}
	}
	merge_sort(a, L, mid, R);

}

int main()
{
	int a[] = { 2, 5, 8, 3, 1, 0 };
	int count = 0;
	merge_reverse(a, 0, sizeof(a) / sizeof(a[0]) - 1, count);
	for (int i = 0; i < sizeof(a) / sizeof(a[0]); i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
	cout << count << endl;
	return 0;
}