#define _CRT_SECURE_NO_WARNINGS 1
////顺序查找(从数组下标为1开始放入数据)
//#include <stdio.h>
//typedef struct Date
//{
//	int key;
//}Date;
//int sepsearch(Date arr[], int sz,int key)
//{
//	arr[0].key = key;
//	while (arr[sz].key != key)
//		sz--;
//	return sz;
//}
//int main()
//{
//	Date arr[21] = { 0 };
//	int n = 12;
//	int i = 0;
//	for (i = 1; i <= 20; i++)
//		arr[i].key = i;
//	int sz = 20;
//	printf("%d", sz);
//	int ret = sepsearch(arr, sz, n);
//	if (ret != 0)
//		printf("找到了，下标是:>%d\n", ret);
//	else
//		printf("找不到!\n");
//	return 0;
//}
 
////折半查找（二分查找）——有序表
//#include <stdio.h>
//int Binarysearch(int arr[], int n, int sz)
//{
//	int low = 0;
//	int hight = sz - 1;
//	while (low <= hight)
//	{
//		int mid = (low + hight) / 2;
//		if (n > arr[mid])
//			low = mid + 1;
//		else if (n < arr[mid])
//			hight = mid - 1;
//		else
//			return mid;
//	}
//	return -1;
//}
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int n = 3;
//	int ret = Binarysearch(arr, n, sz);
//	if (ret != -1)
//		printf("找到了，下标是;>%d\n", ret);
//	else
//		printf("找不到！\n");
//	return 0;
//}

////索引查找
//#include <stdio.h>
//typedef struct DateType
//{
//	int key;
//	int link;
//}DateType;
//int IndexSequelSearch(DateType arr1[], int arr2[], int sz, int key)
//{
//	int i = 0;
//	int j = 0;
//	while (i < sz-2 && key > arr1[i].key)
//		i++;
//	if (i == 4)
//		return -1;
//	else
//	{
//		j = arr1[i].link;
//		while (key != arr2[j] && j < arr1[i + 1].link)
//			j++;
//		if (key == arr2[j])
//			return j;
//		else
//			return -1;
//	}
//}
//int main()
//{
//	//创建一个索引表
//	DateType arr1[5] = { { 3, 0 }, { 50, 6 }, { 78, 12 }, { 365, 18 }, { 0, 19 } };
//	//创建一个查找表
//	int arr2[] = { -12, -1, 0, 1, 2, 3, 8, 9, 12, 35, 45, 50, 55, 58, 60, 62, 64, 78, 80, 89, 99, 101, 108, 365 };
//	int n = 580;
//	int ret = IndexSequelSearch(arr1, arr2, 5, n);
//	if (ret == -1)
//		printf("找不到！\n");
//	else
//		printf("找到了，下标是:>%d\n", ret);
//	return 0;
//}

