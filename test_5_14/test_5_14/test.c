#define _CRT_SECURE_NO_WARNINGS 1
//输出乘法口诀表
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%-2d* %-2d=%-2d ", i, j, i*j);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//判断100~200之间的素数
//#include <stdio.h>
//#include <math.h>
//int main()
//{
	/*int i = 0;
	int count = 0;
	int num = 100;
	while (num<=200)
	{
		for (i = 2; i < num; i++)
		{
			if ((num%i) == 0)
				break;
		}
		if (i == num)
		{
			printf("%d ", num);
			count++;
		}
		num++;
	}
	printf("\ncount = %d", count);*/

//	int i = 0;
//	int count = 0;
//	int num = 0;
//	for (num = 1; num <= 200; num++)
//	{
//		for (i = 2; i <= sqrt(num); i++)//让它依次除以小于它的开方的数
//		{
//			if (num % i == 0)
//				break;
//		}
//		if (i > sqrt(num))
//		{
//			printf("%d ", num);
//			count++;
//		}
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}
//判断是否为闰年1000-2000
//1.能被4整除，不能被100整除
//2.能被400整除
//#include <stdio.h>
//int main()
//{
//	int num = 0;
//	int count = 0;
//	for (num = 1000; num <= 2000; num++)
//	{
//		/*if (!(num % 4 ) && num % 100)
//		{
//		printf("%d ", num);
//		count++;
//		}
//		else if (!(num % 400))
//		{
//		printf("%d ", num);
//		count++;
//		}*/
//		//对上面判断的合并
//		if (!(num % 4) && num % 100 || !(num % 400))
//		{
//			printf("%d ", num);
//			count++;
//		}
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}
//判断一个数是否为奇数
//#include <stdio.h>
//int main()
//{
//	int input = 0;
//	printf("请输入一个数:>");
//	scanf("%d", &input);
//	if (input % 2)
//		printf("是奇数！\n");
//	else
//		printf("不是奇数！\n");
//	return 0;
//}
////输出1-100之间的奇数
//#include <stdio.h>
//int main()
//{
//	int num = 0;
//	//第一种
//	/*for (num = 1; num <= 100; num++)
//	{
//		if (num % 2)
//			printf("%d ", num);
//	}*/
//	//第二种
//	for (num = 1; num <= 100; num += 2)
//	{
//		printf("%d ", num);
//	}
//	return 0;
//}
//将输入的任意小写字母输出为大写字母
//#include <stdio.h>
//int main()
//{
//	char ch = 0;
//	while ((ch = getchar())!= EOF)
//	{
//		if (ch >= 'a' && ch <= 'z')
//			putchar(ch - 32);
//		else
//			putchar(ch);
//	}
//	return 0;
//}
//创建一个变量将两个数交换
//#include <stdio.h>
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int tmp = 0;
//	printf("a = %d b = %d\n", a, b);
//	tmp = a;
//	a = b;
//	b = tmp;
//	printf("a = %d b = %d\n", a, b);
//	return 0;
//}
//不创建变量将两个数交换
//#include <stdio.h>
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("a = %d b = %d\n", a, b);
//	//第一种（加减法转换）
//	/*a = a + b;
//	b = a - b;
//	a = a - b;*/
//	//第二种（按位运算）
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("a = %d b = %d\n", a, b);
//	return 0;
//}
////求最大公约数
//#include <stdio.h>
//int main()
//{
//	int a = 8;
//	int b = 23;
//	int temp = 0;
//	scanf("%d %d", &a, &b);
//	while (temp = a % b)
//	{
//		a = b;
//		b = temp;
//	}
//	printf("最大公约数是:%d\n",b);
//	return 0;
//}
////求最小公倍数
//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int temp = a % b;
//	int c = a*b;
//	if (!temp)
//	{
//		printf("最小公倍数是:%d\n", a);
//		return 0;
//	}
//	while (temp)
//	{
//		a = b;
//		b = temp;
//		temp = a % b;
//	}
//	a = c / b;
//	printf("最小公倍数是:%d\n", a);
//	return 0;
//}