#define _CRT_SECURE_NO_WARNINGS 1
//调整数组使奇数全部位于偶数前面
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		while ( left<right && arr[left] % 2 != 0)//找偶数
//		{
//			left++;
//		}
//		while ( left<right && arr[right] % 2 != 1)//找奇数
//		{
//			right--;
//		}		
//		if (left < right)
//		{
//			int tmp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = tmp;
//		}
//		left++;
//		right--;
//	}
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
////杨氏矩阵
////有一个二维数组，数组从左到右是递增的，每列从上到下是递增的，在这样的数组中查找一个数字是是否存在
////时间复杂都小于O(n)
////数组
////1 2 3
////2 3 4
////3 4 5
//#include <stdio.h>
//void locate_num(int arr[3][3], int* row, int* col, int k)
//{
//	int x = 0;
//	int y = *col - 1;
//	while (x < *row && y < *col)
//	{
//		if (k > arr[x][y])//根据右上角的元素，逐渐逼近右下角（也可根据左下角的元素判断逐渐逼近右上角）
//		{
//			x++;
//		}
//		else if (k < arr[x][y])
//		{
//			y--;
//		}
//		else
//		{
//			*row = x;
//			*col = y;
//			return;
//		}
//	}
//	*row = -1;
//	*col = -1;
//	return;
//}
//int main()
//{
//	int arr[3][3] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int row = 3;
//	int col = 3;
//	locate_num(arr, &row, &col, 7);
//	if (row == -1 && col == -1)
//	{
//		printf("找不到!\n");
//	}
//	else
//	{
//		printf("找到了，下标分别为：%d %d\n", row, col);
//	}
//	return 0;
//}