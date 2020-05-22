#define _CRT_SECURE_NO_WARNINGS 1
////函数调用,求两个数的最大值
//#include <stdio.h>
//int is_max(int a, int b)
//{
//	return a > b ? a : b;
//}
//int main()
//{
//	int a = 12;
//	int b = 34;
//	int ret = is_max(a, b);
//	printf("ret = %d", ret);
//	return 0;
//}
////函数调用，对两个数进行交换
//#include <stdio.h>
//void Swap(int* p1, int *p2)
//{
//	*p1 = *p1 + *p2;
//	*p2 = *p1 - *p2;
//	*p1 = *p1 - *p2;
//}
//int main()
//{
//	int a = 90;
//	int b = 45;
//	printf("a = %d b = %d\n", a, b);
//	Swap(&a, &b);
//	printf("a = %d b = %d\n", a, b);
//	return 0;
//}
////调用函数,用二分法 实现一个整形有序数组的查找 
//#include <stdio.h>
//int binary_search(int arr[], int sz,int num)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (num > arr[mid])
//			left = mid + 1;
//		else if (num < arr[right])
//			right = mid - 1;
//		else
//			return mid;
//	}
//	return -1;
//}
//int main()
//{
//	int arr[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int n = 3;
//	int ret = binary_search(arr, sz, n);
//	if (-1 == ret)
//		printf("没有找到！\n");
//	else
//		printf("找到了，元素的下标是%d\n", ret);
//	return 0;
//}
////写一个函数,每调用一次这个函数,就将sum值加一
//#include <stdio.h>
//void Add_one(int* p)
//{
//	return (*p)++;
//}
//int main()
//{
//	int sum = 0;
//	int n = 10;
//	while (n--)
//	{
//		Add_one(&sum);
//	}
//	printf("%d\n", sum);
//	return 0;
//}

////打印
////      * 
////     *** 
////    ***** 
////   ******* 
////  ********* 
//// *********** 
////*************
//// ***********
////  *********
////   ******* 
////    ***** 
////     *** 
////      * 
//#include <stdio.h>
//int main()
//{
//	int line = 0;
//	printf("请输入行数;>");
//	scanf("%d", &line);
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < line; i++)
//	{
//		for (j = 0; j < line - i - 1; j++)
//		{
//			printf(" ");//先打印空格
//		}
//		for (j = 0; j < i * 2 + 1; j++)
//		{
//			printf("*");//再打印星号
//		}
//		printf("\n");
//	}
//	for (i = 0; i < line - 1; i++)
//	{
//		for (j = 0; j < i + 1; j++)
//		{
//			printf(" ");//先打印空格
//		}
//		for (j = 0; j < (line - i - 1) * 2 - 1; j++)
//		{
//			printf("*");//再打印星号
//		}
//		printf("\n");
//	}
//	return 0;
//}

////编写一个程序，求任意数区间的水仙花数并输出（通式）
//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	int i = 0;
//	for (i = 1; i < 100000; i++)
//	{
//		int count = 0;
//		int temp = i;
//		while (temp)
//		{
//			temp /= 10;
//			count++;
//		}
//		temp = i;
//		double sum = 0;
//		while (temp)
//		{
//			sum += pow(temp % 10, count);
//			temp /= 10;
//		}
//		if (sum == i)
//			printf("%d ", i);
//	}
//	return 0;
//}

////Sn = a + aa + aaa + aaaa + aaaaa  求n项这样的和，其中a是数字
////例如：2+22+222+2222+22222 —— 5项2的和 
//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	//第一种
//	//int num = 0;
//	//int sum = 0;
//	//int i = 0;
//	//int n = 0;
//	//printf("请输入你要求哪个数字的几项和:>");
//	//scanf("%d %d", &num, &n);
//	//for (i = 1; i <= n; i++)
//	//{
//	//	int temp = 0;
//	//	int tmp = i;
//	//	while (tmp--)
//	//	{
//	//		temp += num*pow(10, tmp);//计算每个加项（每次求一个加项）
//	//	}
//	//	sum += temp;//对每个加项求和
//	//}
//	//printf("%d\n", sum);
//
//	//第二种
//	int num = 0;
//	int n = 0;
//	int sum = 0;
//	printf("请输入你要求哪个数字的几项和:>");
//	scanf("%d %d", &num, &n);
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < n; i++)
//	{
//		j = j * 10 + num;
//		sum += j;
//	}
//	printf("%d \n", sum);	
//	return 0;
//}

////编写一个程序，可以一直接收键盘字符，
////如果接收是小写字符就输出大写字符；如果接收是大写字符就输出小写字符 
////如果是数字字符就不输出 
//#include <stdio.h>
//#include <ctype.h>
//#include <stdlib.h>
//int main()
//{
//	//自己写判断条件
//	/*char ch = 0;
//	do
//	{
//	    ch = getchar();
//		if (ch >= 'a' && ch =< 'z')
//			putchar(ch - 32);
//		else if (ch >= 'A' && ch =< 'Z')
//			putchar(ch + 32);
//		else if (ch >= '0' && ch =< '9')
//			;        //continue
//		else
//			putchar(ch);
//	} while (ch != EOF);*/
//
//	//利用库函数当判断条件
//	char ch = 0;
//	while (ch != EOF)
//	{
//		ch = getchar();
//		if (islower(ch))
//			putchar(toupper(ch));
//		else if (isupper(ch))
//			putchar(tolower(ch));
//		else if (isdigit(ch))
//			;
//		else
//			putchar(ch);
//	}
//	return 0;
//}


////函数的递归调用：把1234循序打印在屏幕上1 2 3 4
//#include <stdio.h>
//void print(int n)
//{
//	if (n > 0)
//	{
//		print(n / 10);
//		printf("%d ", n % 10);
//	}
//}
//int main()
//{
//	int n = 1234;
//	print(n);
//	return 0;
//}