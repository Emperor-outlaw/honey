#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;
int binary_search(int arr[], int n, int size)
{
	int left = 0;
	int right = size;
	while (left <= right)
	{
		int mid = left + (right - left) / 2;
		if (arr[mid] > n)
			right = mid - 1;
		else if (arr[mid] < n)
			left = mid + 1;
		else
			return mid;
	}
	return -1;
}
int main()
{
	int arr[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	//找到返回元素的下标，找不到返回-1
	int ret = binary_search(arr, 99, sizeof(arr) / sizeof(arr[0]) - 1);
	cout << ret << endl;
	return 0;
}