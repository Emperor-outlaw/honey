#include <stdio.h>


////交换两个变量（不创建临时变量）
//void SwapElemOne(int* pa, int* pb) //通过异或的方式
//{
//	*pa = *pa ^ *pb;
//	*pb = *pa ^ *pb;
//	*pa = *pa ^ *pb;
//}
//
//void SwapELemTwo(int* pa, int* pb) //通过加减法
//{
//	*pa = *pa + *pb;
//	*pb = *pa - *pb;
//	*pa = *pa - *pb;
//}
//
//int main()
//{
//	int a = -10;
//	int b = 20;
//	printf("交换前：a = %d, b = %d\n", a, b);
//	//SwapElemOne(&a, &b);
//	SwapELemTwo(&a, &b);
//	printf("交换后：a = %d, b = %d\n", a, b);
//	return 0;
//}


////统计二进制中1的个数
////方法一(右移n的每一位和1相与)
//int CountBitOne(int n)
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
//
////方法二（每次左移1，再将其和n相与）(和方法一很相似，只不过一个是移位1,一个是移位n)
//int CountBitTwo(int n)
//{
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((1 << i) & n) == (1 << i)) //注意这里的写法，就不能是1了
//		{
//			count++;
//		}
//	}
//	return count;
//}
////方法三（通过取模和除）(对负数有时候不管用，由于取模的影响)
//int CountBitThree(int n)
//{
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if ((n % 2) == 1)
//		{
//			count++;
//			n /= 2;
//		}
//	}
//	return count;
//}
////方法四（n = n & (n - 1)）
//int CountBitFour(int n)
//{
//	int i = 0;
//	int count = 0;
//	while (n)
//	{
//		n &= n - 1;
//		count++;
//	}
//	return count;
//}
//
//int main()
//{
//	int n = 127;
//	int ret1 = CountBitOne(n);
//	int ret2 = CountBitTwo(n);
//	int ret3 = CountBitThree(n);
//	int ret4 = CountBitFour(n);
//	printf("方法一：count = %d\n", ret1);
//	printf("方法二：count = %d\n", ret2);
//	printf("方法三：count = %d\n", ret3);
//	printf("方法四：count = %d\n", ret4);
//	return 0;
//}


//打印整数二进制的奇数位和偶数位、
//int main()
//{
//	//思路：分别拿下他的每一位，放到数组中，最后逆序打印
//	int n = 10;
//	int arr1[16] = { 0 };
//	int arr2[16] = { 0 };
//	int i = 0, k = 0, j = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (i % 2 == 0) //奇数位
//		{
//			arr1[k++] = (n >> i) & 1;
//		}
//		else
//		{
//			arr2[j++] = (n >> i) & 1;
//		}
//	}
//	printf("奇数位：");
//	for (i = k - 1; i >= 0; i--)
//	{
//		printf("%d ", arr1[i]);
//	}
//	printf("\n偶数位：");
//	for (i = j - 1; i >= 0; i--)
//	{
//		printf("%d ", arr2[i]);
//	}
//	return 0;
//}


//求两个数二进制中不同位的个数
//方法一：分别拿下每一位进行比较
int GetDifBitCountOne(int a, int b)
{
	int i = 0;
	int count = 0;
	for (i = 0; i < 32; i++)
	{
		if (((a >> i) & 1) != ((b >> i) & 1))
			count++;
	}
	return count;
}

//方法二：先将两个数异或，再统计异或结果二进制位1的个数
int GetDifBitCountTwo(int a, int b)
{
	int c = a ^ b;
	int count = 0;
	while (c)
	{
		c &= c - 1;
		count++;
	}
	return count;
}

int main()
{
	int a = 1999;
	int b = 2299;
	int ret = GetDifBitCountOne(a, b);
	printf("方法一: ret = %d\n", ret);
	ret = GetDifBitCountTwo(a, b);
	printf("方法二: ret = %d\n", ret);
	return 0;
}