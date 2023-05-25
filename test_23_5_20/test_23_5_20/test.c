#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

////喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以多少汽水（编程实现）。
//int main()
//{
//	int n = 20; //钱可以买的汽水瓶数
//	int sum = n; //喝汽水的总瓶数
//	while (n > 1) //只要手上的瓶子个数大于1就一直循环（就可以一直兑换新的汽水）
//	{
//		sum += n / 2; //每次可以用喝完的n个空瓶换n/2瓶汽水，再加到sum上
//		n /= 2; //更新瓶子个数
//	}
//	printf("可以喝%d瓶汽水\n", sum);
//	return 0;
//}
//
/////*
////思路：
////1. 20元首先可以喝20瓶，此时手中有20个空瓶子
////2. 两个空瓶子可以喝一瓶，喝完之后，空瓶子剩余：empty/2(两个空瓶子换的喝完后产生的瓶子) + empty%2(不够换的瓶子)
////3. 如果瓶子个数超过1个，可以继续换，即重复2
////*/
////int main()
////{
////	int money = 0;
////	int total = 0;
////	int empty = 0;
////
////
////	scanf("%d", &money);
////
////	//方法1
////	total = money;
////	empty = money;
////	while (empty > 1)
////	{
////		total += empty / 2;
////		empty = empty / 2 + empty % 2;
////	}
////
////
////	return 0;
////}
////
////
////// 方法二：按照上述喝水和用瓶子换的规则的话，可以发现，其实就是个等差数列：money*2-1
////int main()
////{
////	int money = 0;
////	int total = 0;
////	int empty = 0;
////
////
////	scanf("%d", &money);
////
////	//方法2
////	if (money <= 0)
////	{
////		total = 0;
////	}
////	else
////	{
////		total = money * 2 - 1;
////	}
////	printf("total = %d\n", total);
////
////
////	return 0;
////}
