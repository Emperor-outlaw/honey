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

#include <stdio.h>

void calculate_kilometer(int *pday, int *pweek, int *pkilometer)
{
	if (8 == *pweek)
		*pweek = 1;
	if (1 == *pday || 1 == *pweek)
		*pkilometer += 2;
	else
		*pkilometer += 1;
}
int main()
{
	int month = 1;
	int week = 6;
	int day = 0;
	int kilometer = 0;
	while (month <= 9)
	{
		if (month == 2)
		{
			day = 1;
			while (day <= 29)
			{
				calculate_kilometer(&day, &week, &kilometer);
				day++;
				week++;
			}
		}
		else if (month == 4 || month == 6 || month == 9)
		{
			day = 1;
			while (day <= 30)
			{
				calculate_kilometer(&day, &week, &kilometer);
				day++;
				week++;
			}
		}
		else
		{ 
			day = 1;
			while (day <= 31)
			{
				calculate_kilometer(&day, &week, &kilometer);
				day++;
				week++;
			}
		}
		month++;
	}
	printf("week = %d\n", week);
	printf("kilometer = %d\n", kilometer + 2);
	return 0;
}
