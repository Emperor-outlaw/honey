#define _CRT_SECURE_NO_WARNINGS 1
//2020第十届蓝桥杯C/C++ B组省赛题目

//1、门牌制作（答案：624）
//小蓝要为一条街的住户制作门牌号。
//这条街一共有 2020 位住户，门牌号从 1 到 2020 编号。
//小蓝制作门牌的方法是先制作 0 到 9 这几个数字字符，最后根据需要将字
//符粘贴到门牌上，例如门牌 1017 需要依次粘贴字符 1、 0、 1、 7，即需要 1 个
//字符 0， 2 个字符 1， 1 个字符 7。
//请问要制作所有的 1 到 2020 号门牌，总共需要多少个字符 2

//#include <stdio.h>
////非递归求解
////int main()
////{
////	int i = 0;
////	int count = 0;
////	for (i = 1; i <= 2020; i++)
////	{
////		int j = i;
////		while (j)
////		{
////			if (2 == j % 10)
////				count++;
////			j /= 10;
////		}
////	}
////	printf("count = %d\n", count);
////	return 0;
////}
//
////递归求解
//int get_num(int i)
//{
//	if (0 == i)
//		return 0;
//	else if (2 == i % 10)
//		return 1 + get_num(i / 10);
//	else
//		return get_num(i / 10);
//}
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 2020; i++)
//	{
//		count += get_num(i);
//	}
//	printf("count = %d\n", count);
//	return 0;
//}

//2、既约分数（答案：2481215）
//如果一个分数的分子和分母的最大公约数是1，这个分数称为既约分数。
//例如，3 / 4, 5 / 2, 1 / 8, 7 / 1都是既约分数。
//请问，有多少个既约分数，分子和分母都是1 到2020 之间的整数（包括1和2020）

//#include <stdio.h>
//find_prime(int i, int j)
//{
//	int c = 0;
//	while (1)
//	{
//		if (0 == (c = i % j))
//			return j;
//		i = j;
//		j = c;
//	}
//}
//int main()
//{
//	int count = 0;
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= 2020; i++)
//	{
//		for (j = 1; j < i; j++)
//		{
//			if (1 == find_prime(i, j))
//				count++;
//		}
//	}
//	printf("count = %d\n", count * 2 + 1);
//	return 0;
//}

////3、蛇形填空（答案：761）
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int count = 1;
//	int arr[40][40] = { 0 };
//	for (i = 0; i < 40; i++)
//	{
//		int x = 0;
//		int y = 0;
//		//判断是奇数列还是偶数列
//		if (0 == i % 2)
//		{
//			//偶数列
//			for (x = i, y = 0; x >= 0 && y <= i; x--, y++)
//			{
//				arr[x][y] = count;
//				count++;
//			}
//		}
//		else
//		{
//			//奇数列
//			for (x = 0, y = i; x <= i && y >= 0; x++, y--)
//			{
//				arr[x][y] = count;
//				count++;
//			}
//		}
//	}
//	printf("[20][20] = %d\n", arr[19][19]);
//	return 0;
//}

//3、跑步锻炼(答案：8879)
//小蓝每天都锻炼身体。
//正常情况下，小蓝每天跑 1 千米。如果某天是周一或者月初（1 日），为了
//激励自己，小蓝要跑 2 千米。如果同时是周一或月初，小蓝也是跑 2 千米。
//小蓝跑步已经坚持了很长时间，从 2000 年 1 月 1 日周六（含）到 2020 年
//10 月 1 日周四（含）。请问这段时间小蓝总共跑步多少千米？

//#include <stdio.h>
//void calculate_kilometer(int *pday, int *pweek, int *pkilometer)
//{
//	if (8 == *pweek)
//		*pweek = 1;
//	if (1 == *pday || 1 == *pweek)
//		*pkilometer += 2;
//	else
//		*pkilometer += 1;
//	(*pweek)++;
//	(*pday)++;
//}
//void calculate_yearkilometer(int *pweek, int *pkilometer, int num)
//{
//	int month = 1;
//	int day = 1;
//	while (month <= num)
//	{
//		if (month == 2)
//		{
//			day = 1;
//			while (day <= 29)
//			{
//				calculate_kilometer(&day, pweek, pkilometer);
//			}
//		}
//		else if (month == 4 || month == 6 || month == 9 || month == 11)
//		{
//			day = 1;
//			while (day <= 30)
//			{
//				calculate_kilometer(&day, pweek, pkilometer);
//			}
//		}
//		else
//		{
//			day = 1;
//			while (day <= 31)
//			{
//				calculate_kilometer(&day, pweek, pkilometer);
//			}
//		}
//		month++;
//	}
//}
//int main()
//{
//	int year = 2000;
//	int week = 6;
//	int kilometer = 0;
//	while (year <= 2020)
//	{
//		if (year < 2020)
//		{
//			calculate_yearkilometer(&week, &kilometer, 12);
//		}
//		else
//		{
//			calculate_yearkilometer(&week, &kilometer, 9);
//		}
//		year++;
//	}
//	printf("week = %d\n", week);
//	printf("kilometer = %d\n", kilometer + 2);
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	double pass = 0;
//	double excellent = 0;
//	int arr[10] = { 0 };
//	int n = 0;
//	printf("请输入人数：>");
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//		if (arr[i] >= 60)
//			pass++;
//		if (arr[i] >= 85)
//			excellent++;
//	}
//	int pass_percentage = (int)((pass / n) * 100 + 0.5);
//	int excellent_percentage = (int)((excellent / n) * 100 + 0.5);
//	printf("pass_percentage = %d%%\n", pass_percentage);
//	printf("excellent_percentage = %d%%\n", excellent_percentage);
//	return 0;
//}


#include <stdio.h>
int reverse_conversion(int n)
{
	return (n % 10 * 10 + (n / 10) % 10);
}
void print(int a, int num1, int num2, int input, int *pflag)
{
	if ((a * 10000 + (num1 * 100 + num2)) > input)
	{
		printf("%ld\n", (a * 10000 + (num1 * 100 + num2)));
		*pflag = 1;
	}
}
int main()
{
	int flag = 0;
	long input = 0;
	printf("请输入一个八位的整数：>");
	scanf("%d", &input);
	while (1)
	{
		//取八位数的高四位
		int a = input / 10000;
		//取八位数的低四位
		int b = input % 10000;
		//将高八位数倒着输出
		//例如：1234 ——> 4321
		int num1 = reverse_conversion(a);
		int num2 = reverse_conversion(a / 100);
		if (num1 <= 12)
		{
			if ((num1 == 1 || num1 == 3 || num1 == 5 || num1 == 7 || num1 == 8 || num1 == 10 || num1 == 12) && num2 <= 31)
			{
				if (flag == 0)
				{
					print(a, num1, num2, input, &flag);
				}
				if (num1 == num2)
				{
					print(a, num1, num2, input, &flag);
					break;
				}
			}
			else if (num1 == 2 && num2 <= 29)
			{
				if ((a * 10000 + (num1 * 100 + num2)) > input)
				{
					if (flag == 0)
					{
						print(a, num1, num2, input, &flag);
					}
					if (num1 == num2)
					{
						print(a, num1, num2, input, &flag);
						break;
					}
				}
			}
			else if (num2 <= 30)
			{
				if ((a * 10000 + (num1 * 100 + num2)) > input)
				{
					if (flag == 0)
					{
						print(a, num1, num2, input, &flag);
					}
					if (num1 == num2)
					{
						print(a, num1, num2, input, &flag);
						break;
					}
				}
			}
		}
		input++;
	}
	return 0;
}



//优化
//#include <stdio.h>
//int search_char(char *parr, char c)
//{
//	while (*parr)
//	{
//		if (*parr == c)
//		{
//			return 1;
//		}
//		parr++;
//	}
//	return 0;
//}
//int find_difchar(char *p1, char *p2)
//{
//	char *p = p1;
//	int count = 0;
//	int i = 0;
//	char arr[20] = "0";
//	while (p <= p2)
//	{
//		if (0 == search_char(arr, *p))
//		{
//			arr[i++] = *p;
//			count++;
//		}
//		p++;
//	}
//	return count;
//}
//int main()
//{
//	int ret = 0;
//	char *p1 = "ababc";
//	char *p2 = p1;
//	//1、分配字符串
//	while (*p1)
//	{
//		p2 = p1;
//		while (*p2)
//		{
//			//2、查找不同的字符并记录
//			ret += find_difchar(p1, p2);
//			p2++;
//		}
//		p1++;
//	}	
//	printf("ret = %d\n", ret);
//	return 0;
//}