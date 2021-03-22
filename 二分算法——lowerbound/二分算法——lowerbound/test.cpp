#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;
//从小到大的Int数组a里查找比给定整数P小的，下标最大的的元素，找到返回其下标，找不到则返回-1
int lowerbound(int a[], int size, int k)
{
	int tmp = -1;
	int L = 0;
	int R = size - 1;
	int mid = 0;
	while (L <= R)
	{
		mid = L + (R - L) / 2;
		if (a[mid] >= k)
			R = mid - 1;
		else
		{
			tmp = mid;
			L = mid + 1;
		}
	}	
	return tmp;
}
int main()
{
	int a[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int ret = lowerbound(a, sizeof(a) / sizeof(a[0]), 0);
	cout << ret << endl;
	return 0;
}