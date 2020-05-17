#define _CRT_SECURE_NO_WARNINGS 1
////求十个整数的最大值
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int tmp = 0;
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		if (tmp < arr[i])
//		{
//			tmp = arr[i];
//		}
//	}
//	printf("%d\n", tmp);
//	return 0;
//}
//将三个数从大到小排列
//#include <stdio.h>
//int main()
//{
//	int arr[] = { 34, 67, -23 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0, j = 0;
//	for (i = 0; i < sz; i++)
//	{
//		for (j = 0; j < sz - i - 1; j++)
//		{
//			if (arr[j] < arr[j + 1])
//			{
//				int tmp = arr[j + 1];
//				arr[j + 1] = arr[j];
//				arr[j] = tmp;
//			}
//		}
//	}
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
////将十个数由大到小排列
//#include <stdio.h>
//int main()
//{
//	int arr[] = { 34, 67, -23, 34, 56, 89, 67, 234, 45, -78 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0, j = 0;
//	int flag = 1;
//	for (i = 0; i < sz; i++)
//	{
//		for (j = 0; j < sz - i - 1; j++)
//		{
//			if (arr[j] < arr[j + 1])
//			{
//				int tmp = arr[j + 1];
//				arr[j + 1] = arr[j];
//				arr[j] = tmp;
//				flag = -1;
//			}
//		}
//		if (1 == flag)//如果flag不等于-1，说明判断语句没有进去，也就是该数组开始就符合由大到小排列
//			break;
//	}
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
////求一个数的阶乘
//#include <stdio.h>
//int main()
//{
//	int num = 0;
//	int i = 0;
//	int sum = 1;
//	while (1)
//	{
//		sum = 1;
//		printf("请输入一个正整数:>");
//		scanf("%d", &num);
//		for (i = 1; i <= num; i++)
//			sum *= i;
//		printf("%d\n", sum);
//	}
//	return 0;
//}
////1!+2!+3!+4!的阶乘
//#include <stdio.h>
//int main()
//{
//	/*int i = 0;
//	int j = 0;
//	int sum = 1;
//	int temp = 0;
//	for (i = 1; i <= 5; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			sum *= j;
//		}
//		temp += sum;
//		sum = 1;
//	}
//	printf("%d\n",temp);*/
//	//(第二种)
//	int i = 0;
//	int n = 5;
//	int sum = 0;
//	int ret = 1;
//	if (0 != n)
//	{
//		for (i = 1; i <= n; i++)
//		{
//			ret *= i;
//			sum += ret;
//		}
//		printf("%d\n", sum);
//	}
//	else
//	{
//		printf("%d\n", 1);
//	}
//	return 0;
//}
////在一个有序的数组中查找具体的某一个数字n(折半查找/二分查找)——前题数组要有序
//#include <stdio.h>
//int main()
//{
//	int arr[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	int n = 3;
//	while (left <= right)
//	{
//		int i = (left + right) / 2;
//		if (arr[i] > n)
//		{
//			right = i - 1;
//		}
//		else if (arr[i] < n)
//		{
//			left = i + 1;
//		}
//		else
//		{
//			printf("找到了，下标是:>%d", i);
//			return 0;
//		}
//	}
//	printf("找不到!\n");
//	return 0;
//}