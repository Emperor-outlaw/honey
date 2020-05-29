#define _CRT_SECURE_NO_WARNINGS 1
////插入排序
#define MAX 1000   //数组的大小
#define COUNT 1000  //放入到数组中的元素个数
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <Windows.h>
void smp_inssort(int arr[], int start, int end)
{
	for (int i = start + 1; i <= end; i++)
	{
		if (arr[i - 1] > arr[i])
		{
			int tmp = arr[i];
			int j = i - 1;
			while (arr[j] > tmp && j >= start)
			{
				arr[j + 1] = arr[j];
				j--;
			}
			arr[j + 1] = tmp;
		}
	}
}


void bin_inssort(int arr[],int start, int end)
{
	for (int i = start + 1; i <= end; i++)
	{
		if (arr[i - 1] > arr[i])
		{
			int tmp = arr[i];
			int left = start;
			int right = i - 1;
			while (left <= right)     //折半插入运用到了折半查找
			{
				int mid = (left + right) / 2;
				if (arr[mid] > tmp)
					right = mid - 1;  //比较的值留在了左边
				else
					left = mid + 1;   //比较的值留在了右边（比较的值大于arr[mid]和等于arr[mid]的情况)
			}
			for (int j = i - 1; j >= left; j++)  //将比 比较值大的元素全部向后移动（从后往前移，减少了创建一个临时变量，从前往后移会导致元素覆盖）
				arr[j + 1] = arr[j];
			arr[left] = tmp;
		}
	}
}




void shell_sort(int arr[], int start, int end)
{
	int ret = 0;
	int increment = end - start + 1;    //初始化分量
	do
	{
		increment = increment / 3 + 1;    // 直到Increment等于1
		for (int i = start + increment; i <= end; i += increment)  //依次向后寻找子序列中的元素（每次增加增量）
		{
			if (arr[i - increment] > arr[i])                 //采用直接插入排序
			{
				int tmp = arr[i];
				int j = i - increment;
				while (arr[j] > tmp && j >= start)
				{
					arr[j + increment] = arr[j];
					j -= increment;
				}
				arr[j + increment] = tmp;
			}
		}
	} while (increment > 1);
}

void randomnum(int arr[], int count)
{
	int i = 0;
	for (i = 0; i < count; i++)     
	{
		arr[i] = rand() % COUNT;
	}
}

void print(int arr[], int sz)
{
	for (int i = 0; i < sz; i++)
	{
		if (0 == i % 20)
			printf("\n");
		printf("%-3d  ", arr[i]);
	}
}

int main()
{
	double num = 0;
	clock_t start_time, finish_time;
	srand((unsigned int)time(NULL));
	int arr[MAX] = { 0 };       //创建一个数组
	int sz = sizeof(arr) / sizeof(arr[0]);
	randomnum(arr, COUNT);    //随机获取100个数放到数组中
	


	//直接插入排序
	start_time = clock();   //排序开始执行的时间
	Sleep(2000);
	smp_inssort(arr, 0, sz - 1); 
	finish_time = clock();     //排序结束的时间
	num = (double)(finish_time - start_time);
	printf("排序所用的时间是: %lf ms", num);
	print(arr, sz);             //打印数组元素
	printf("\n");


	//折半插入排序
	start_time = clock();   //排序开始执行的时间
	Sleep(2000);
    bin_inssort(arr, 0, sz - 1);
	finish_time = clock();     //排序结束的时间
	num = (double)(finish_time - start_time);
	printf("排序所用的时间是: %lf ms", num);
	print(arr, sz);             //打印数组元素
	printf("\n");
	

	//希尔排序
	start_time = clock();   //排序开始执行的时间
	Sleep(2000);
	shell_sort(arr, 0, sz - 1);
	finish_time = clock();     //排序结束的时间
	num = (double)(finish_time - start_time);
	printf("排序所用的时间是: %lf ms", num);
	print(arr, sz);             //打印数组元素


	return 0;
}







//选择排序
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
//归并排序

