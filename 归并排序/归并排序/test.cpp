#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;
void merge(int arr[],int L,int mid,int R)
{
	int tmp[20];
	int S = L;
	int M = mid + 1;
	int i = 0;
	while (S <= mid && M <= R)
	{
		if (arr[S] < arr[M])
			tmp[i++] = arr[S++];
		else
			tmp[i++] = arr[M++];
	}
	while (S <= mid)
		tmp[i++] = arr[S++];
	while (M <= R)
		tmp[i++] = arr[M++];
	for (int k = 0; k < R - L + 1; k++)
		arr[L + k] = tmp[k];
}

void merge_sort(int arr[], int L, int R)
{
	if (L == R)
		return;
	int mid = L + (R - L) / 2;
	merge_sort(arr, L, mid);
	merge_sort(arr, mid + 1, R);
	merge(arr, L, mid, R);
}
int main()
{
	int arr[] = { 2, 4, 7, -4, 0, 67, 4, -67, 24, 99 };
	merge_sort(arr, 0, sizeof(arr) / sizeof(arr[0]) - 1);
	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		cout << arr[i] << " " << endl;
	}
	return 0;
}