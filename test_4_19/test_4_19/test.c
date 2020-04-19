#define _CRT_SECURE_NO_WARNINGS 1
//获取整数的每一位
//#include <stdio.h>
//void put(int n)
//{
//	if (n < 10)
//		printf("%d ", n);
//	else
//		put(n / 10);
//	    printf("%d ", n % 10);
//}
//int main()
//{
//	int n = 1234;
//	put(n);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int n = 12345;
//
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	char ch = 'a'+1;
//	printf("%d", ch);
//	return 0;
//
// //   unsigned int  n = -1;
//	//printf("%u ", n);
//	//return 0;
//}
//4294967295
//写一个函数返回参数二进制中1的个数；15  00001111  4个1
//#include <stdio.h>//第一种解法
//int count_one_bits( int n)//无法返回负数中的二进制1的个数
//int count_one_bits(unsigned int n)//<——改进后
//{
//	int count = 0;
//	while (n)
//	{
//		if (n % 2 == 1)
//			count++;
//		n = n / 2;
//	}
//	return count;
//}
//int main()
//{
//    int n = -1;
//	int ret = count_one_bits(n);
//	printf("ret=%d\n", ret);
//	return 0;
//}
//#include <stdio.h>//第二种解法
//int count_one_bits(int n)
//{
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((n >> i) & 1) == 1)
//			count++;
//	}
//	return count;
//}
//int main()
//{
//	int n = -1;
//	int ret = count_one_bits(n);
//	printf("ret=%d\n", ret);
//	return 0;
//}
//第三种解法(终级解法)
//#include <stdio.h>
//int count_one_bits(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		n = n&(n - 1);//每执行一次，计数器加加
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int n = 15;
//	//n=n&(n-1)每执行一次二进制少一个1,直到n等于0
//	//1111   n
//	//1110   n-1
//	//1110   n
//	//1101   n-1
//	//1100   n
//	int ret = count_one_bits(n);
//	printf("ret=%d\n", ret);
//	return 0;
//}
//获取一个数二进制序列中所以的偶数和奇数位，分别输出二进制序列。
//#include <stdio.h>
//int main()
//{
//	int n = 10;
//	int i = 0;
//	int j = 0;
//	printf("偶数位为：");
//	for (i = 31; i >= 1; i -= 2)//获取的是偶数位
//	{
//		printf("%d ", (n >> i) & 1);
//	}
//	printf("\n");
//	printf("奇数位为：");
//	for (i = 30; i >= 0; i -= 2)//获取的是奇数位
//	{
//		printf("%d ", (n >> i) & 1);
//	}
//	printf("\n");
//	return 0;
//}
//两个Int（32位）整数m和n的二进制表达中，有多少个位（bit）不同
//例子：1999  2299   有7个
//#include <stdio.h>
//int count_one_bits(unsigned int n)
//{
//	int count = 0;
//	while (n)
//	{
//		n = n&(n - 1);
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int n = 15;
//	int m = 13;
//	int tmp = n^m;//将两个数 按位异或可以将不同的二进制位转换位1，然后再求出1的个数即为原来两个数不同的二进制位数
//	printf("ret=%d\n",count_one_bits(tmp));
//	return 0;
//}
