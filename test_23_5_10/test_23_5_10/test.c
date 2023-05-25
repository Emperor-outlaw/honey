#include <stdio.h>

//创建一个整形数组，完成对数组的操作
//实现函数init() 初始化数组为全0
//实现print()  打印数组的每个元素
//实现reverse()  函数完成数组元素的逆置。
//要求：自己设计以上函数的参数，返回值。

////初始化数组
//#include <stdlib.h>
//void InitArry(int* arr, int n)
//{
//	int i = 0;
//	for (i = 0; i < n; i++)
//		arr[i] = 0;
//}
////打印数组
//void PrintArry(int* arr, int n)
//{
//	int i = 0;
//	for (i = 0; i < n; i++)
//		printf("%d ", arr[i]);
//}
////反转数组
//void ReverseArry(int* arr, int n)
//{
//	int i = 0;
//	for (i = 0; i < n / 2; i++)
//	{
//		int tmp = arr[i];
//		arr[i] = arr[n - i - 1];
//		arr[n - i - 1] = tmp;
//	}
//}
//int main()
//{
//	int* arr = (int*)malloc(sizeof(int) * 10);
//	InitArry(arr, 10);
//	printf("数组初始化：");
//	PrintArry(arr, 10);
//	for (int i = 0; i < 10; i++)
//	{
//		arr[i] = i + 1;
//	}
//	printf("\n反转数组前：");
//	PrintArry(arr, 10);
//	ReverseArry(arr, 10);
//	printf("\n反转数组后：");
//	PrintArry(arr, 10);
//	return 0;
//}


////实现一个对整形数组的冒泡排序(由小到大)
//void PrintArry(int* arr, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//void SwapElem(int* pa, int* pb)
//{
//	int tmp = *pa;
//	*pa = *pb;
//	*pb = tmp;
//}
//
//void BubbleSort(int* arr, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++) //总共进行sz-1趟冒泡
//	{
//		int j = 0;
//		int flag = 0; //辅助标志
//		for (j = 0; j < sz - 1 - i; j++) //一趟冒泡
//		{
//			if (arr[j] > arr[j + 1])  //两两进行比较
//			{
//				SwapElem(&arr[j], &arr[j + 1]); // 前者大于后者，进行交换
//				flag = 1;
//			}
//		}
//		if (flag == 0) //已经有序
//			break;
//	}
//}
//int main()
//{
//	int arr[10] = { -23,-23,23,3,1,6,0,0,53,4 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("排序前：");
//	PrintArry(arr, sz);
//	BubbleSort(arr, sz);
//	printf("\n排序后：");
//	PrintArry(arr, sz);
//	return 0;
//}



int main()
{
	double a = 3.14;
	int b = a;
	printf("%d", b);
	return 0;
}