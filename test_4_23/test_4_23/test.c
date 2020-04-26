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
//不使用（a+b）/2  这种方法计算两数之和的一半
//#include <stdio.h>
//int main()
//{
//	int a = 15;
//	int b = 20;
////	int average = a + (b - a) / 2;
////	int average = (a >> 1) + (b >> 1);//按位右移 = 原来的数除以二 ；按位左移 = 原来的数乘以二（扩大二倍）
////	int average = a + ((b - a) >> 1);
//	//本质上计算是：将两个数的二进制位对应的数乘以对应权数然后相加再除以二
//	int average = (a&b) + ((a^b) >> 1);//(a&b)计算两个数相同的二进制位的大小的一半，（a^b）>>1计算的是不同二进制位的大小的一半
//	printf("%d\n", average);
//	return 0;
//}
//编程实现：一组数据中只有一个数字出现了一次，其他所有数字都是成对出现的，请找出这个数字（使用位运算）
//#include <stdio.h>
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 1, 2, 3, 4 };//0按位异或任何数都是他本身，两个相同的数按位异或等于0
//	//int sz = sizeof(arr) / sizeof(arr[0]);
//	//int i = 0;
//	//int ret = 0;
//	//for (i = 0; i < sz ; i++)
//	//{
//	//	ret ^=arr[i];
//	//}
//	//printf("%d\n", ret);
//
//	return 0;
//}
//有一个字符数组的内容为:"student a am i"
//请将数组的内容改为"i am a student"
//要求：不能使用库函数，只能开辟有限个空间（空间个数和字符串的长度无关）
//student a am i——>i ma a tneduts——>i am a student
//#include <stdio.h>
//#include <assert.h>
//int My_strlen(const char* str)
//{
//	int count = 0;
//	assert(str != NULL);
//	while (*str++)
//	{
//		count++;
//	}
//	return count;
//}
//void reverse_str(char* left, char* right)
//{
//	assert(left != NULL && right != NULL);
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//void reverse_string(char arr[], int sz)
//{
//	char* start = NULL;
//	char* end = arr;
//	//1、将字符串翻转
//	int len = My_strlen(arr);
//	reverse_str(arr, arr + len - 1);
//	//2、将每个单词翻转
//	while (*end)
//	{
//		start = end;
//		while ((*end) != ' ' && (*end) != '\0')
//		{
//			end++;
//		}
//		reverse_str(start, end - 1);
//		if ((*end) != '\0')
//			end++;
//	}
//}
//int main()
//{
//	char arr[] = "student a am i";
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	reverse_string(arr, sz);
//	printf("%s\n", arr);
//	return 0;
//}

