#define _CRT_SECURE_NO_WARNINGS 1
////��������,�������������ֵ
//#include <stdio.h>
//int is_max(int a, int b)
//{
//	return a > b ? a : b;
//}
//int main()
//{
//	int a = 12;
//	int b = 34;
//	int ret = is_max(a, b);
//	printf("ret = %d", ret);
//	return 0;
//}
////�������ã������������н���
//#include <stdio.h>
//void Swap(int* p1, int *p2)
//{
//	*p1 = *p1 + *p2;
//	*p2 = *p1 - *p2;
//	*p1 = *p1 - *p2;
//}
//int main()
//{
//	int a = 90;
//	int b = 45;
//	printf("a = %d b = %d\n", a, b);
//	Swap(&a, &b);
//	printf("a = %d b = %d\n", a, b);
//	return 0;
//}
////���ú���,�ö��ַ� ʵ��һ��������������Ĳ��� 
//#include <stdio.h>
//int binary_search(int arr[], int sz,int num)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (num > arr[mid])
//			left = mid + 1;
//		else if (num < arr[right])
//			right = mid - 1;
//		else
//			return mid;
//	}
//	return -1;
//}
//int main()
//{
//	int arr[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int n = 3;
//	int ret = binary_search(arr, sz, n);
//	if (-1 == ret)
//		printf("û���ҵ���\n");
//	else
//		printf("�ҵ��ˣ�Ԫ�ص��±���%d\n", ret);
//	return 0;
//}
////дһ������,ÿ����һ���������,�ͽ�sumֵ��һ
//#include <stdio.h>
//void Add_one(int* p)
//{
//	return (*p)++;
//}
//int main()
//{
//	int sum = 0;
//	int n = 10;
//	while (n--)
//	{
//		Add_one(&sum);
//	}
//	printf("%d\n", sum);
//	return 0;
//}