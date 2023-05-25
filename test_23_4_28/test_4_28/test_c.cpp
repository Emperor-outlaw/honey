#define _CRT_SECURE_NO_WARNINGS
//递归和非递归分别实现求第n个斐波那契数
#include <stdio.h>
////递归实现
//long long fibonacci_one(int num)
//{
//	if (num == 1 || num == 2)
//		return 1;
//	else
//		return fibonacci_one(num - 1) + fibonacci_one(num - 2);
//}
//
////非递归
//long long fibonacci_two(int num)
//{
//	long long a = 1;
//	long long b = 1;
//	long long c = 1;
//	int i = 0;
//	for (i = 0; i < num - 2; i++)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//	}
//	return c;
//}
//
//int main()
//{
//	//递归
//	int num = 0;
//	long long ret = 0;
//	printf("请输入一个正整数:>");
//	scanf("%d", &num);
//	//递归
//	ret = fibonacci_one(num);
//	printf("递归结果ret = %lld\n", ret);
//
//	//非递归
//	ret = fibonacci_two(num);
//	printf("非递归结果ret = %lld\n", ret);
//	return 0;
//}



////编写一个函数实现n的k次方，使用递归实现
//long double my_pow(double n, unsigned int k)
//{
//	if (k == 1)
//		return n;
//	else
//		return n * my_pow(n, k - 1);
//}
//
//int main()
//{
//	double n = 0;
//	unsigned int k = 0;
//	scanf("%lf %u", &n, &k);
//	long double ret = my_pow(n, k);
//	printf("ret = %lf\n", ret);
//	return 0;
//}


//写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和
//例如，调用DigitSum(1729)，则应该返回1 + 7 + 2 + 9，它的和是19
//输入：1729，输出：19
//unsigned int DigitSum(unsigned int n)
//{
//	unsigned int sum = 0;
//	while (n)
//	{
//		sum += n % 10;
//		n /= 10;
//	}
//	return sum;
//}
//int main()
//{
//	unsigned int n = 0;
//	scanf("%u", &n);
//	unsigned int ret = DigitSum(n);
//	printf("ret = %u\n", ret);
//	return 0;
//}


//编写一个函数 reverse_string(char* string)（递归实现）
//实现：将参数字符串中的字符反向排列，不是逆序打印。
//要求：不能使用C函数库中的字符串操作函数。
//void reverse_string(char* str)
//{
//	int len = 0; //记录字符串的长度
//	char* p = str; //用指针P去求字符串的长度，如果直接用str,后面交换时用到的str就不是指向第一个字符
//	while (*p++) //求字符串的长度
//	{
//		len++;
//	}
//	int left = 0; //操作指针，指向字符串的左边
//	int right = len - 1; //操作指针，指向字符串的右边
//	while (left < right) 
//	{
//		char tmp = str[left];
//		str[left] = str[right];
//		str[right] = tmp;
//		left++;
//		right--;
//	}
//}
//
//int main()
//{
//	char str[] = "hello bit!";
//	printf("逆转前:%s\n", str);
//	reverse_string(str);
//	printf("逆转后:%s\n", str);
//	return 0;
//}

//递归和非递归分别实现strlen
////递归
//int my_strlen_one(char* str)
//{
//	if (*str == '\0')
//		return 0;
//	else
//		return my_strlen_one(str + 1) + 1;
//}
//
////非递归
//int my_strlen_two(char* str)
//{
//	int len = 0;
//	while (len++, *str++);
//	return len - 1;
//}
//int main()
//{
//	char str[] = "hello bit!";
//	int len = my_strlen_one(str);
//	printf("递归求字符串的长度：len = %d\n", len);
//	len = my_strlen_two(str);
//	printf("非递归求字符串的长度：len = %d\n", len);
//	return 0;
//}

////递归和非递归分别实现求n的阶乘（不考虑溢出的问题）
////递归
//int factorial_one(int n)
//{
//	if (n == 1 || n == 0)
//		return 1;
//	else
//		return n * factorial_one(n - 1);
//}
////非递归
//int factorial_two(int n)
//{
//	int i = 1;
//	int tmp = 1;
//	for (i = 1; i <= n; i++)
//	{
//		tmp *= i;
//	}
//	return tmp;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = factorial_one(n);
//	printf("递归求n的阶乘：ret = %d\n", ret);
//	ret = factorial_two(n);
//	printf("非递归求n的阶乘：ret = %d\n", ret);
//	return 0;
//}


//递归方式实现打印一个整数的每一位
void print_every(int n)
{
	if (n > 0)
	{
		print_every(n / 10);
		printf("%d ", n % 10);
	}
}

int main()
{
	int n = 0;
	scanf("%d", &n);
	print_every(n);
	return 0;
}