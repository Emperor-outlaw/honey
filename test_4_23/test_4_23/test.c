#define _CRT_SECURE_NO_WARNINGS 1
//编写函数：这个函数的返回值是value的二进制位模式从左到右翻转过来后的值
//unsigned int reverse_bit(unsigned int value)
//如32位机器上25——翻转后的值是2550136832
//#include <stdio.h>
//#include <math.h>
////unsigned int reverse_bit(unsigned int num)
////{
////	int i = 0;
////	unsigned int sum = 0;
////	for (i = 0; i < 32; i++)
////	{
//////		sum += ((num >> i) & 1)*pow(2, 31 - i);//使用了库函数pow
////		sum += ((num >> i) & 1) * (1 << (31 - i));//按位操作
////	}
////	return sum;
////}
//unsigned int reverse_bit(unsigned int num)
//{
//	int i = 0;
//	unsigned int ret = 0;
//	for (i = 0; i < 32; i++)
//	{
//		ret <<= 1;
//		ret |= ((num >> i) & 1);
//	}
//	return ret;
//}
//int main()
//{
//	unsigned int num = 25;
//	unsigned int ret = reverse_bit(num);
//	printf("%u\n", ret);
//	return 0;
//}