#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
//#include <stdlib.h>
//
//
////判断序列是否有序，有序返回1，无序返回0
//int isOrdered(int* arr, int n)
//{
//	int i = 0;
//	int flag1 = 0; //记录当前相邻元素是升序
//	int flag2 = 0; //记录当前相邻元素是降序
//	for (i = 0; i < n - 1; i++) //遍历序列
//	{
//		if (arr[i] < arr[i + 1]) //相邻元素是升序
//			flag1 = 1;
//		else if (arr[i] < arr[i + 1]) //相邻元素是降序
//			flag2 = 1;
//		//注：两个相邻元素相等，我什么事都不用做
//	}
//	if (flag1 + flag2 <= 1) //是升序
//		return 1;
//	else  //是降序
//		return 0;
//}
//
//int main()
//{
//	int n = 0;
//	int i = 0;
//	scanf("%d", &n); //获取序列的元素个数
//	int* arr = (int*)malloc(sizeof(int) * n); //开辟一个数组，存放序列中的元素
//	for (i = 0; i < n; i++) //获取每一个元素
//	{
//		scanf("%d", arr + i);
//	}
//
//	int ret = isOrdered(arr, n); //判断序列是否有序，有序返回1，无序返回0
//	if (ret == 1)
//		printf("有序！\n");
//	else
//		printf("无序！\n");
//	return 0;
//}

