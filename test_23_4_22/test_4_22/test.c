#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

////写一个函数打印乘法口诀表，行数由自己定义
//void print_multables(int n)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= n; i++) //打印n行
//	{
//		for (j = 1; j <= i; j++) //打印第i行
//		{
//			printf("%d * %d = %-3d", i, j, i * j);
//		}
//		printf("\n"); //换行
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	print_multables(n);
//	return 0;
//}


////实现一个函数来交换两个整数的内容。
//void swap(int* pa, int* pb)
//{
//	int tmp = *pa;
//	*pa = *pb;
//	*pb = tmp;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	printf("交换前:a = %d, b = %d\n", a, b);
//	swap(&a, &b);
//	printf("交换后:a = %d, b = %d\n", a, b);
//	return 0;
//}



////实现函数判断year是不是润年。
//int is_leapyear(int year) //是闰年返回1，否则返回0
//{
//	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	int year = 0;
//	scanf("%d", &year);
//	if (is_leapyear(year))
//		printf("是闰年\n");
//	else
//		printf("不是闰年\n");
//	return 0;
//}




//实现一个函数，判断一个数是不是素数。
//利用上面实现的函数打印100到200之间的素数。
#include <math.h>
int is_prime(int n) //是素数返回1，否则返回0
{
	int i = 0;
	for (i = 2; i <= sqrt(n); i++)
	{
		if (0 == n % i)
			return 0;
	}
	return 1;
}
int main()
{
	int i = 0;
	int count = 0;
	for (i = 100; i <= 200; i++)
	{
		if (is_prime(i))
		{
			printf("%d ", i);
			count++;
		}
	}
	printf("\ncount = %d\n", count);
}