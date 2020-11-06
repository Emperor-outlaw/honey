#define _CRT_SECURE_NO_WARNINGS 1
////#完数
//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	int count = 0;
//	for (int i = 2; i <= 1000; i++)
//	{
//		int sum = 1;
//		for (int j = 2; j <= sqrt(i); j++)
//		{
//			if (0 == i % j)
//			{
//				sum = sum + j + i / j;
//			}
//		}
//		if (i == sum)
//		{
//			printf("%d ", sum);
//		}
//	}
//	return 0;
//}
////将一个4✖4的数组逆时针旋转90°输出
////要求：数组随机输入
//#include <stdio.h>
//int main()
//{
//	printf("请任意输入16个整形数字,将会组成一个4✖4的数组\n");
//	int arr1[4][4] = { 0 };
//	int arr2[4][4] = { 0 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 4; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			scanf("%d", *(arr1 + i) + j);
//			arr2[3 - j][i] = arr1[i][j];
//		}
//	}
//	for (i = 0; i < 4; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			printf("%-2d ", arr2[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

////将数组中的元素由大到小排列
//#include <stdio.h>
//void print(int arr[],int sz,FILE* fp)
//{
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//		fprintf(fp, "%d ", arr[i]);
//	}
//	printf("\n");
//}
//void sort(int* p, int sz)
//{
//	for (int i = 0; i < sz - 1; i++)
//	{
//		int k = i;
//		for (int j = i + 1; j < sz; j++)
//		{
//			if (*(p + k) < *(p + j))
//			{
//				k = j;
//			}
//		}
//		if (k != i)
//		{
//			int tmp = *(p + i);
//			*(p + i) = *(p + k);
//			*(p + k) = tmp;
//		}
//	}
//}

////交换两个数组中的元素
//#include <stdio.h>
//#include <string.h>
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
//	int arr1[3] = { 1, 3, 5 };
//	int arr2[3] = { 2, 4, 6 };
//	int i = 0;
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	printf("打印前\n");
//	print(arr1, sz);
//	print(arr2, sz);
//	for (i = 0; i < sz; i++)
//	{
//		int tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//	}
//	printf("打印后\n");
//	print(arr1, sz);
//	print(arr2, sz);
//	return 0;
//}

////求和 1/1-1/2+1/3-1/4+1/5-1/6+ .....
//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	int i = 0;
//	double sum = 0;
//	int flag = 1;
//	printf("请输入一个整数\n");
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		sum += flag * (1.0 / i);
//		flag = -flag;
//	}
//	printf("sum = %lf\n", sum);
//	return 0;
//}

////求1到100内自然数中带9的自然数的个数
//#include <stdio.h>
//int main()
//{
//	int count = 0;
//	int i = 0;
//	for (i = 0; i <= 100; i++)
//	{
//		if (9 == i % 10)
//			count++;
//		if (9 == i / 10)
//			count++;
//	}
//	printf("count = %d\n", count);
//	return 0;
//}


////求最大公因数
//#include <stdio.h>
//int main()
//{
//	int n1 = 0;
//	int n2 = 0;
//	int ret = 0;
//	printf("请输入两个整数\n");
//	scanf("%d%d", &n1, &n2);
//	while (ret = n1 % n2)
//	{
//		n1 = n2;
//		n2 = ret;
//	}
//	printf("%d\n", n2);
//	return 0;
//}


////求最小公倍数
//#include <stdio.h>
//int main()
//{
//	int n1 = 0;
//	int n2 = 0;
//	int ret = 0;
//	int product = 0;
//	printf("请输入两个整数\n");
//	scanf("%d%d", &n1, &n2);
//	product = n1 * n2;
//	while (ret = n1 % n2)
//	{
//		n1 = n2;
//		n2 = ret;
//	}
//	printf("%d\n", product / n2);
//	return 0;
//}


////模拟用户登录，输入密码，最多只能输入三次、
//#include <stdio.h>
//#include <string.h>
//int main()
//{
//	char password[20] = { 0 };
//	int i = 3;
//	printf("请输入密码\n");
//	while (i > 0)
//	{
//		scanf("%s", password);
//		if (0 == strcmp(password, "wanghailou"))
//		{
//			printf("登录成功！\n");
//			break;
//		}
//		printf("密码输入错误，请重新输入！\n");
//		i--;
//	}
//	if (0 == i)
//		printf("很遗憾，密码输入失败！\n");
//	return 0;
//}


////求一个数的阶乘
//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int ret = 1;
//	printf("请输入一个整数\n");
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	printf("ret = %d\n",ret);
//	return 0;
//}

////求1！+ 2！+ 3！+ 4！+.....
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int n = 0;
//	int sum = 0;
//	printf("情输入一个整数\n");
//	scanf("%d", &n);
//  if (0 == n)
//      printf("sum = %d", 1);
//	for (i = 1; i <= n; i++)
//	{
//		int ret = 1;
//		for (j = 1; j <= i; j++)
//		{
//			ret *= j;
//		}
//		sum += ret;
//	}
//	printf("sum = %d\n", sum);
//	return 0;
//}
////对上面算法的改进
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int ret = 1;
//	int sum = 0;
//	printf("情输入一个整数\n");
//	scanf("%d", &n);
//	if (0 == n)
//		printf("sum = %d", 1);
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//		sum += ret;
//	}
//	printf("sum = %d\n", sum);
//	return 0;
//}

////二分查找(数组必须是有序)
//#include <stdio.h>
//int binarry(int arr[], int sz, int n)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = left + (right - left) / 2;
//		if (arr[mid] < n)
//			left = mid + 1;
//		else if (arr[mid] > n)
//			right = mid - 1;
//		else
//			return mid;
//	}
//	return -1;
//}
//int main()
//{
//	int arr[10] = { -1, 1, 2, 3, 4, 5, 6, 7, 8, 9};
//	int n = 7;
//	int ret = binarry(arr, sizeof(arr) / sizeof(arr[0]), n);
//	if (ret != -1)
//	{
//		printf("找到了,下标是：%d\n", ret);
//	}
//	else
//	{
//		printf("没有找到！\n");
//	}
//	return 0;
//}

