#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;
//选择排序（由小到大）
void select_sort(int* xx, int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		int min = i;
		for (int j = i + 1; j < n - 1; j++)
		{
			if (xx[j] < xx[min])
				min = j;
		}
		if (min != i)
		{
			//按位异或的方法交换两个数
			xx[i] = xx[i] ^ xx[min];
			xx[min] = xx[i] ^ xx[min];
			xx[i] = xx[i] ^ xx[min];
		}
	}
}

//插入排序(1)
void insert_sort1(int* xx, int n)
{
	//从第二个元素xx[i]开始认为是乱序的元素，依次找到合适的位置插入到有序序列中
	for (int i = 1; i < n; i++)
	{
		////从0到i顺序查找，从下标位0的元素到i的元素（此处为有序序列）中为xx[i]找到合适插入位置
		for (int j = 0; j < i; j++)
		{
			if (xx[j] > xx[i])
			{
				int tmp = xx[i];
				int k = 0;
				for (k = i; k > j; k--)
				{
					xx[k] = xx[k - 1];
				}
				xx[k] = tmp;
			}
		}
	}
}

////插入排序(2)
//void insert_sort2(int* xx, int n)
//{
//	for (int i = 1; i < n; i++)
//	{
//		//逆序查找
//		int j = i - 1;
//		int tmp = xx[i];
//		while (tmp < xx[j])
//		{
//			xx[j + 1] = xx[j];
//			j--;
//		}
//		xx[j + 1] = tmp;
//	}
//}

//冒泡排序
void bubble_sort(int* xx, int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		int flag = 1;
		for (int j = 0; j < n - 2 - i; j++)
		{
			if (xx[j] > xx[j + 1])
			{
				int tmp = xx[j];
				xx[j] = xx[j + 1];
				xx[j + 1] = tmp;
				flag = 0;
			}
		}
		if (flag)
		{
			break;
		}
	}
}

//显示数组
void dis_play(int* xx, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << xx[i] << " ";
	}
	cout << endl;
}

int main()
{
	int xx[10] = { -34, 54, 4, 32, 6, 4, 0, 5, 2, 99 };

	////选择排序
	//select_sort(xx, 10);
	//dis_play(xx, 10);

	//插入排序
	////insert_sort1(xx, 10);
	//insert_sort2(xx, 10);
	//dis_play(xx, 10);

	//冒泡排序
	bubble_sort(xx, 10);
	dis_play(xx, 10);
	return 0;
}