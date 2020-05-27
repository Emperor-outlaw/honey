#define _CRT_SECURE_NO_WARNINGS 1
////≤Â»Î≈≈–Ú
//#include <stdio.h>
//void smp_inssort(int arr[], int n)
//{
//	int i = 0;
//	int k = 0;
//	for (i = 1; i < n; i++)
//	{
//		k = i;
//		while (k > 0)
//		{
//			if (arr[k] < arr[k - 1])
//			{
//				int tmp = arr[k];
//				arr[k] = arr[k - 1];
//				arr[k - 1] = tmp;
//			}
//			k--;
//		}
//	}
//}
//int main()
//{
//	int i = 0;
//	int arr[] = { 8, 1, 4, 9, 6, 3, 5, 2, 7, 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	smp_inssort(arr, sz);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//—°‘Ò≈≈–Ú
//#include <stdio.h>
//void smp_selesort(int arr[], int n)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < n; i++)
//	{
//		int k = i;
//		for (j = 1 + i; j < n; j++)
//		{
//			if (arr[k] > arr[j])
//			{
//				k = j;
//			}
//		}
//		if (i != k)
//		{
//			int tmp = arr[k];
//			arr[k] = arr[i];
//			arr[i] = tmp;
//		}
//	}
//}
//int main()
//{
//	int i = 0;
//	int arr[] = { 8, 1, 4, 9, 6, 3, 5, 2, 7, 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	smp_selesort(arr, sz);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//ª·≤¢≈≈–Ú
