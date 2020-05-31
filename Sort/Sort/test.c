#define _CRT_SECURE_NO_WARNINGS 1
////第一种：插入排序(1.(简单)直接插入排序 2.折半插入排序  3.希尔排序)
//#define MAX 100   //数组的大小
//#define COUNT 100  //放入到数组中的元素个数
//#include <stdio.h>
//#include <time.h>
//#include <stdlib.h>
//#include <Windows.h>
//void smp_inssort(int arr[], int start, int end)
//{
//	for (int i = start + 1; i <= end; i++)
//	{
//		if (arr[i - 1] > arr[i])
//		{
//			int tmp = arr[i];
//			int j = i - 1;
//			while (arr[j] > tmp && j >= start)
//			{
//				arr[j + 1] = arr[j];
//				j--;
//			}
//			arr[j + 1] = tmp;
//		}
//	}
//}
//
//
//void bin_inssort(int arr[],int start, int end)
//{
//	for (int i = start + 1; i <= end; i++)
//	{
//		if (arr[i - 1] > arr[i])
//		{
//			int tmp = arr[i];
//			int left = start;
//			int right = i - 1;
//			while (left <= right)     //折半插入运用到了折半查找
//			{
//				int mid = (left + right) / 2;
//				if (arr[mid] > tmp)
//					right = mid - 1;  //比较的值留在了左边
//				else
//					left = mid + 1;   //比较的值留在了右边（比较的值大于arr[mid]和等于arr[mid]的情况)
//			}
//			for (int j = i - 1; j >= left; j++)  //将比 比较值大的元素全部向后移动（从后往前移，减少了创建一个临时变量，从前往后移会导致元素覆盖）
//				arr[j + 1] = arr[j];
//			arr[left] = tmp;
//		}
//	}
//}
//
//
//
//
//void shell_sort(int arr[], int start, int end)
//{
//	int ret = 0;
//	int increment = end - start + 1;    //初始化分量
//	do
//	{
//		increment = increment / 3 + 1;    // 直到Increment等于1
//		for (int i = start + increment; i <= end; i += increment)  //依次向后寻找子序列中的元素（每次增加增量）
//		{
//			if (arr[i - increment] > arr[i])                 //采用直接插入排序
//			{
//				int tmp = arr[i];
//				int j = i - increment;
//				while (arr[j] > tmp && j >= start)
//				{
//					arr[j + increment] = arr[j];
//					j -= increment;
//				}
//				arr[j + increment] = tmp;
//			}
//		}
//	} while (increment > 1);
//}
//
//void randomnum(int arr[], int count)
//{
//	int i = 0;
//	for (i = 0; i < count; i++)     
//	{
//		arr[i] = rand() % COUNT;
//	}
//}
//
//void print(int arr[], int sz)
//{
//	for (int i = 0; i < sz; i++)
//	{
//		if (0 == i % 20)
//			printf("\n");
//		printf("%-3d  ", arr[i]);
//	}
//}
//
//int main()
//{
//	double num = 0;
//	clock_t start_time, finish_time;
//	srand((unsigned int)time(NULL));
//	int arr[MAX] = { 0 };       //创建一个数组
//	randomnum(arr, COUNT);    //随机获取COUNT个数放到数组中
//	
//
//
//	//1.(简单)直接插入排序
//	start_time = clock();   //排序开始执行的时间
//	Sleep(2000);
//	smp_inssort(arr, 0, MAX - 1); 
//	finish_time = clock();     //排序结束的时间
//	num = (double)(finish_time - start_time);
//	printf("排序所用的时间是: %lf ms", num);
//	print(arr, MAX);             //打印数组元素
//	printf("\n");
//
//
//	//2.折半插入排序
//	start_time = clock();   //排序开始执行的时间
//	Sleep(2000);
//    bin_inssort(arr, 0, MAX - 1);
//	finish_time = clock();     //排序结束的时间
//	num = (double)(finish_time - start_time);
//	printf("排序所用的时间是: %lf ms", num);
//	print(arr, MAX);             //打印数组元素
//	printf("\n");
//	
//
//	//3.希尔排序
//	start_time = clock();   //排序开始执行的时间
//	Sleep(2000);
//	shell_sort(arr, 0, MAX - 1);
//	finish_time = clock();     //排序结束的时间
//	num = (double)(finish_time - start_time);
//	printf("排序所用的时间是: %lf ms", num);
//	print(arr, MAX);             //打印数组元素
//
//
//	return 0;
//}




////第二种：选择排序(1.简单选择排序  2.归并排序)
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//#include <Windows.h>
//#define COUNT 100  //放入数组中的元素
//#define MAX  100   //素组的大小
//void smp_selesort(int arr[], int n)
//{
//	//第一种
//	int i = 0;
//	int j = 0;
//	int tmp = 0;
//	for (i = 0; i < n - 1; i++)
//	{
//		int k = i;
//		for (j = i + 1; j < n; j++)
//		{
//			if (arr[j] < arr[k])   //每次发现后面元素比当前元素小只要将元素下标赋给它（避免方法二中的多次元素交换）
//				k = j;
//		}
//		if (k != i)            //判断是否发生了下标的赋值
//		{
//			tmp = arr[i];
//			arr[i] = arr[k];
//			arr[k] = tmp;
//		}
//	}
//	//第二种
//	//int i = 0;
//	//int j = 0;
//	//for (i = 0; i < n - 1; i++)
//	//{
//	//	for (j = i + 1; j < n; j++)
//	//	{
//	//		if (arr[j] < arr[i])     //每次发现后面元素比当前元素小就要交换一次
//	//		{
//	//			int tmp = arr[i];
//	//			arr[i] = arr[j];
//	//			arr[j] = tmp;
//	//		}
//	//	}
//	//}
//}
//
//
//void randomnum(int arr[], int count)
//{
//	int i = 0;
//	for (i = 0; i < count; i++)     
//	{
//		arr[i] = rand() % COUNT;
//	}
//}
//
//void print(int arr[], int sz)
//{
//	for (int i = 0; i < sz; i++)
//	{
//		if (0 == i % 20)
//			printf("\n");
//		printf("%-3d  ", arr[i]);
//	}
//}
//
//
//void merge(int arr[], int parr[], int start,int mid, int end)       
//{
//	int Lpos = start;
//	int Rpos = mid + 1;
//	int tmpLpos = start;
//	while (Lpos <= mid  && Rpos <= end)
//	{
//		if (arr[Lpos] > arr[Rpos])
//			parr[tmpLpos++] = arr[Rpos++];  //第二个有序表中的元素小于第一个有序表中的元素
//		else
//			parr[tmpLpos++] = arr[Lpos++];  //第一个有序表中的元素小于第二个有序表中的元素，或者两个有序表中的元素相等
//	}
//	if (Lpos <= mid)    //第一个有序表没有全部转移到Parr[]数组中
//	{
//		while (Lpos <= mid)   //将第一个有序表中剩余的元素全部转移到parr[]中
//			parr[tmpLpos++] = arr[Lpos++];
//	}
//	else              //第二个有序表没有全部转移到parr[]数组中
//	{
//		while (Rpos <= end)    //将第二个有序表中剩余的元素全部转移到parr[]中
//			parr[tmpLpos++] = arr[Rpos++];
//	}
//	while (Rpos-- > start, tmpLpos--) //将parr[]中的元素转回到原来是的有序表当中
//	{
//		arr[Rpos] = parr[tmpLpos];
//	}
//}
//
//
//void merge_sort(int arr[],int parr[], int start, int end)
//{
//	if (start < end)
//	{
//		int mid = (start + end) / 2;
//		merge_sort(arr, parr, start, mid);     //数组左半边依次递归排序
//		merge_sort(arr, parr, mid + 1, end);   //数组右半边依次递归排序
//		merge(arr, parr, start, mid, end);     //将排好的两个数组合并
//	}
//
//}
//
//
//int main()
//{
//	double num = 0;
//	clock_t start_time, finish_time;
//	srand((unsigned int)time(NULL));
//	int arr[MAX] = { 0 };       //创建一个数组
//	randomnum(arr, COUNT);    //随机获取COUNT个数放到数组中
//
//	//1.简单选择排序
//	printf("简单选择排序！\n");
//	start_time = clock(); 
//	Sleep(3000);
//	smp_selesort(arr, MAX);
//	finish_time = clock();
//	num = (double)(finish_time - start_time);
//	system("color 05");
//	printf("排序所用的时间是: %lf ms", num);
//	print(arr, MAX);             //打印数组元素
//	printf("\n");
//
//
//	//2.归并排序
//	int *parr = calloc(MAX, sizeof(int));   //分配一个和arr[]一样大的数组，用与后面合并两个有序表操作时，将合并后的有序元素暂时存放起来.
//	if (parr != NULL)
//		;     //分配成功
//	else
//	{
//		printf("分配数组失败!\n");
//		return 0;
//	}
//	printf("归并排序！\n");
//	start_time = clock();
//	Sleep(3000);
//	merge_sort(arr, parr, 0,  MAX - 1);
//	finish_time = clock();
//	free(parr);           //将分配的空间释放掉
//	parr = NULL;  
//	num = (double)(finish_time - start_time);
//	system("color 05");
//	printf("排序所用的时间是: %lf ms", num);
//	print(arr, MAX);      //打印数组元素
//	printf("\n");
//
//	return 0;
//}

//第三种：交换排序(1.冒泡排序 2.快速排序)
#include <stdio.h>
#include <time.h>
#include <Windows.h>
#define MAX 100
#define COUNT 100

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


void bubble_sort(int arr[], int n)
{
	//int flag = 1;
	//int i = 0;
	//int m = n;
	//while (n-- > 1 && flag ==1 )
	//{
	//	for (i = 0; i < n; i++)
	//	{
	//		flag = 0;
	//		if (arr[i] > arr[i + 1])
	//		{
	//			flag = 1;
	//			int tmp = arr[i];
	//			arr[i] = arr[i + 1];
	//			arr[i + 1] = tmp;
	//		}
	//	}
	//}


	//对冒泡排序的改进
	int k = 0;  //用于记录每次for循环最后依次交换的元素下标
	while (n-- > 1)
	{
		k = 1;
		for (int i = 0; i < n; i++)
		{
			if (arr[i] > arr[i + 1])
			{
				int tmp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = tmp;
				k = i + 1;
			}
		}
		n = k;
	}
}



void qk_sort(int arr[], int low, int hight)
{
	//枢纽是每个子序列的第一个元素
	//int left = low;
	//int right = hight;
	//int tmp = arr[left];
	//if (left >= right)
	//	return;
	//while (left < right)
	//{
	//	while (arr[right] >= tmp && left < right)
	//		right--;
	//	if (left < right)
	//	{
	//		arr[left] = arr[right];
	//		left++;
	//	}
	//	while (arr[left] <= tmp && left < right)
	//		left++;
	//	if (left < right)
	//	{
	//		arr[right] = arr[left];
	//		right--;
	//	}
	//}
	//arr[left] = tmp;
	//qk_sort(arr, low, left - 1);
	//qk_sort(arr, left + 1, hight);


	//对上面算法的改进（去除了元素与枢纽的频繁交换）
	//三者取中法
	int left = low;
	int right = hight;
	int mid = (left + right) / 2;
	int tmp = 0;
	int ret = 0;
	if (arr[left] > arr[mid])      //将三个里面中间的元素排列在最后
	{
		tmp = arr[left];
		arr[left] = arr[mid];
		arr[mid] = tmp;
	}
	else if (arr[mid] > arr[right])
	{
		tmp = arr[mid]; 
		arr[mid] = arr[right];
		arr[right] = tmp;
	}
	tmp = arr[right--];
	while (left < right)
	{
		while (arr[left] < tmp && left < right)
			left++;
		while (arr[right] > tmp && left < right)
			right--;
		if (left < right)
		{
			ret = arr[left];
			arr[left] = arr[right];
			arr[right] = ret;
		}
		left++;
	}
	arr[hight] = arr[right];
	arr[right] = tmp;









}



int main()
{
	double num = 0;
	clock_t start_time, finish_time;
	srand((unsigned int)time(NULL));
	int arr[MAX] = { 0 };       //创建一个数组
	randomnum(arr, COUNT);    //随机获取COUNT个数放到数组中



	//1.简单选择排序
	system("color 05");
	printf("冒泡排序结果为！\n");
	start_time = clock();
	Sleep(3000);
	bubble_sort(arr, MAX);
	finish_time = clock();
	num = (double)(finish_time - start_time);
	printf("排序所用的时间是: %lf ms", num);
	print(arr, MAX);             //打印数组元素
	printf("\n");



	//快速排序
	system("color 05");
	printf("快速排序结果为！\n");
	start_time = clock();
	Sleep(3000);
	qk_sort(arr, 0, MAX - 1);
	finish_time = clock();
	num = (double)(finish_time - start_time);
	system("color 0E");
	printf("排序所用的时间是: %lf ms", num);
	print(arr, MAX);             //打印数组元素
	printf("\n");

	return 0;
}


