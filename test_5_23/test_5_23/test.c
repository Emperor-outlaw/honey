#define _CRT_SECURE_NO_WARNINGS 1
//1、编写函数, 求字符串的长度
//#include <stdio.h>
//#include <assert.h>
//int my_strlen(const char* str)
//{
//	assert(str);
//	int count = 0;
//	while (*str++)
//		count++;
//	return count;
//}
//int main()
//{
//	char arr[] = "123456789";
//	int ret = my_strlen(arr);
//	printf("%d \n", ret);
//	return 0;
//}

////2、编写函数，不允许创建临时变量，求字符串的长度（递归调用）
//#include <stdio.h>
//#include <assert.h>
//int My_strlen(const char* str)
//{
//	assert(str);
//	if (*str)
//		return 1 + My_strlen(str + 1);
//	else
//		return 0;	
//}
//int main()
//{
//	char arr[20] = "12345678";
//	int ret = My_strlen(arr);
//	printf("%d\n", ret);
//	return 0;
//}

//////3.递归调用，求n的阶乘
//#include <stdio.h>
//int Fac(int num)
//{
////  第一种
////	int sum = 1;
////	while (num--)
////	{
////		sum *= (num + 1);
////	}
////	return sum;
//	//第二种
//	int i = 0;
//	int sum = 1;
//	for (i = num; i >= 0; i--)
//	{
//		if (i == 0)
//			return sum;
//		else
//			sum *= i;
//	}
//	return sum;
//}
//int main()
//{
//	int input = 0;
//	int sum = 0;
//	printf("请输入一个整数:>");
//	scanf("%d", &input);
//	sum = Fac(input);
//	printf("%d\n", sum);
//	return 0;
//}


////4.递归调用，求第n个斐波那契数（不考虑溢出）
//#include <stdio.h>
//int Fib(int n)
//{
//	if (n == 1 || n == 2)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//}
//int main()
//{
//	int input = 0;
//	printf("请输入一个数:>");
//	scanf("%d", &input);
//	int ret = Fib(input);
//	printf("%d\n", ret);
//	return 0;
//}


////5.调用函数用循环来实现求第n个斐波那契数（不考虑溢出）
//#include <stdio.h>
//int Fib(int n)
//{
//	//第一种
//	/*int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;*/
//	//第二种
//	if (n <= 2)
//	{
//		return 0;
//	}
//	else
//	{
//		int i = 0;
//		int a = 1;
//		int b = 1;
//		int c = 1;
//		for (i = 0; i < n - 2; i++)
//		{
//			c = a + b;
//			a = b;
//			b = c;
//		}
//		return c;
//	}
//}
//int main()
//{
//	int input = 0;
//	int ret = 0;
//	printf("请输入一个整数:>");
//	scanf("%d",&input);
//	ret = Fib(input);
//	printf("%d\n", ret);
//}

////汉诺塔游戏(递归)
//#include <stdio.h>
//void Move_tower(int n,char A,char B,char C)
//{
//	if (n == 1)
//	{
//		printf("%d从%c移到%c\n",n, A, C);
//	}
//	else
//	{
//		Move_tower(n - 1, A, C, B);
//		printf("%d从%c移到%c\n", n, A, C);
//		Move_tower(n - 1, B, A, C);
//	}
//}
//int main()
//{
//	int input = 0;
//	printf("请输入汉诺塔的层数;>");
//	scanf("%d", &input);
//	Move_tower(input, 'A', 'B', 'C');
//	return 0;
//}


//青蛙跳台阶（递归）
//1、有n个台阶一次可以跳1阶，也可以跳2阶，问有多少种跳法(类似于斐波那契数)

//台阶数   跳法
//1        1
//2        2
//3        3
//4        5
//6        8
//#include <stdio.h>
//int leapfrog(int n)
//{
//	if (1 == n)
//		return 1;
//	else if (2 == n)
//		return 2;
//	else
//		return leapfrog(n - 1) + leapfrog(n - 2);
//}
//int main()
//{
//	int input = 0;
//	printf("请输入台阶数:>");
//	scanf("%d",&input);
//	int ret = leapfrog(input);
//	printf("%d\n", ret);
//	return 0;
//}

////循环解决青蛙跳台阶问题
//#include <stdio.h>
//int leapfrog(int n)
//{
//	int a = 1;
//	int b = 2;
//	int c = 0;
//	if (1 == n)
//		return a;
//	else if(2 == n)
//		return b;
//	else
//	{
//		while (n > 2)
//		{
//			c = a + b;
//			a = b;
//			b = c;
//			n--;
//		}
//		return c;
//	}
//}
//int main()
//{
//	int input = 0;
//	printf("请输入台阶数:>");
//	scanf("%d", &input);
//	int ret = leapfrog(input);
//	printf("%d\n", ret);
//	return 0;
//}

//1、有n个台阶一次可以跳1阶，也可以跳2阶....也可以跳n阶，问有多少种跳法(类似于斐波那契数)
//台阶数   跳法
//1        1
//2        2
//3        4
//4        8
//5        16
//采用递归方法
//#include <stdio.h>
//int leapfrog(int n)
//{
//	if (1 == n)
//		return 1;
//	else
//		return leapfrog(n - 1) * 2;
//}
//int main()
//{
//	int input = 0;
//	printf("请输入台阶数:>");
//	scanf("%d", &input);
//	int ret = leapfrog(input);
//	printf("%d\n", ret);
//	return 0;
//}

////采用非递归
//#include <stdio.h>
//#include <math.h>
//int leapfrog(int n)
//{
//	return pow(2, n - 1);
//}
//int main()
//{
//	int input = 0;
//	printf("请输入台阶数:>");
//	scanf("%d", &input);
//	int ret = leapfrog(input);
//	printf("%d\n", ret);
//	return 0;
//}


//////实现一个函数，打印乘法口诀表，口诀表的行数列数自己定 
//#include <stdio.h>
//void print(int n)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= n; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-3d", i, j, i*j);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int n = 0;
//	printf("请输入一个数:>");
//	scanf("%d", &n);
//	print(n);
//	return 0;
//}


//////使用函数实现两个数的交换
//#include <stdio.h>
//void swop(int* p1, int* p2)
//{
//	*p1 = *p1 + *p2;
//	*p2 = *p1 - *p2;
//	*p1 = *p1 - *p2;
//}
//int main()
//{
//	int a = 89;
//	int b = -90;
//	printf("a = %d b = %d\n", a, b);
//	swop(&a, &b);
//	printf("a = %d b = %d\n", a, b);
//	return 0;
//}

////实现一个函数判段year是不是闰年
//#include <stdio.h>
//#include <math.h>
//int is_leap_year(int n)
//{
//	if (n % 400 == 0)
//		return 1;
//	if (n % 4 == 0 && n % 100 != 0)
//		return 1;
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	printf("请输入你要判断的数:>");
//	scanf("%d", &n);
//	int ret = is_leap_year(n);
//	if (0 == ret)
//		printf("不是润年！\n");
//	else
//		printf("是闰年！\n");
//	return 0;
//}


////实现一个函数判断是不是素数
//#include <stdio.h>
//#include <math.h>
//int is_prime(int n)
//{
//	int i = 0;
//	for (i = 2; i <= sqrt(n); i++)
//	{
//		if (0 == n%i)
//			return 1;
//	}
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	printf("请输入你要判断的数:>");
//	scanf("%d", &n);
//	int ret = is_prime(n);
//	if (0 == ret)
//		printf("是素数！\n");
//	else
//		printf("不是素数！\n");
//	return 0;
//}