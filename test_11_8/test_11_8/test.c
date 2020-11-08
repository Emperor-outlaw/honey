#define _CRT_SECURE_NO_WARNINGS 1
////写一个初始化函数Init
//#include <stdio.h>
//void Init(int arr[], int sz, int k)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = k;
//	}
//}
//int main()
//{
//	int i = 0;
//	int arr[10] = { 0 };
//	Init(arr, sizeof(arr) / sizeof(arr[0]), 9);
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

////写一个清空函数empty
//#include <stdio.h>
//void empty(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = 0;
//	}
//}
//int main()
//{
//	int i = 0;
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	empty(arr, sizeof(arr) / sizeof(arr[0]));
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

////写一个函数reverse将数组中的元素逆置
//#include <stdio.h>
//void reverse(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//void print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//int main()
//{
//	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print(arr, sz);
//	reverse(arr, sz);
//	print(arr, sz);
//
//
//	return 0;
//}

////输入1234，将其按1 2 3 4打印在屏幕上（递归实现）
//#include <stdio.h>
//void print(int n)
//{
//	if (n > 9)
//		print(n / 10);
//	printf("%d ", n % 10);
//}
//int main()
//{
//	int n = 0;
//	printf("请输入一个数\n");
//	scanf("%d", &n);
//	print(n);
//	return 0;
//}

////递归实现阶乘
//#include <stdio.h>
//int factorial(int num)
//{
//	if (num <= 1)
//		return 1;
//	return (num * factorial(num - 1));
//}
//int main()
//{
//	int num = 0;
//	printf("请输入一个正数\n");
//	scanf("%d", &num);
//	int ret = factorial(num);
//	printf("ret = %d\n", ret);
//	return 0;
//}

////求第n个斐波那契数列（递归和非递归）
//#include <stdio.h>
////递归
////int fib(int n)
////{
////	if (n <= 2)
////		return 1;
////	else
////		return fib(n - 1) + fib(n - 2);
////}

////非递归
//int fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 0;
//	int i = 0;
//	for (i = 2; i < n; i++)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//	}
//	return b;
//}
//
//int main()
//{
//	int n = 0;
//	printf("情输入你要去第几个斐波那契数\n");
//	scanf("%d", &n);
//	int ret = fib(n);
//	printf("%d\n", ret);
//	return 0;
//}