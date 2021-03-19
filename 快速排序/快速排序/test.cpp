#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;
void swap(int &a, int &b)
{
	int tmp = a;
	a = b;
	b = tmp;
}
void q_sort(int arr[], int L, int R)
{
	if (L >= R)
		return;
	int k = arr[L];
	int i = L;
	int j = R;
	while (i < j)
	{
		while (j > i && arr[j] >= k)
			j--;
		swap(arr[i], arr[j]);
		while (i < j && arr[i] <= k)
			i++;
		swap(arr[i], arr[j]);
	}
	q_sort(arr, L, i - 1);
	q_sort(arr, i + 1, R);
}
int main()
{
	int arr[] = { -35, 3, 7, 9, 1, 2, -56, 0, 34 };
	q_sort(arr, 0, sizeof(arr) / sizeof(arr[0]) - 1);
	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
	{
		cout << arr[i] << endl;
	}
	return 0;
}