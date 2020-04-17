#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <string.h>
//void init(int arr[], int sz)
//{
//	int i = 0;
//	int j = 1;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = j;
//		j++;
//	}
//}
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
//void display(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//void empty(int arr[], int sz)
//{
//	memset(arr, 0, sz*sizeof(arr[0]));//memset每次只改变一个字节
//}
//int main()
//{
//	int i = 0;
//	int arr[10] = { 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	init(arr,sz);      //初始化数组
//	display(arr, sz);  //打印数组
//	reverse(arr, sz);  //数组内元素逆置
//	display(arr, sz);
//	empty(arr, sz);    //清空数组
//	display(arr, sz);
//	return 0;
//}
