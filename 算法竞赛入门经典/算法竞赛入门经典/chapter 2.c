#define _CRT_SECURE_NO_WARNINGS 1

//3n + 1的问题
//猜想：对于任意大于1的自然数你，若n为奇数，则将n变为3n+1，否则变为n的一半。经过若干次这样的变换，一定会使n变为1。
//例如，3—>10—>5—>16—>8—>4—>2—>1
//样例输入：
//3
//样例输出：
//7

//#include <stdio.h>
//int main()
//{
//	long long n = 0;    //下面3*n+1会导致int溢出，所以设置为长整型
//	int count = 0;
//	scanf("%I64d", &n);
//	while (n > 1)
//	{
//		if (1 == n % 2)
//		{
//			n = 3 * n + 1;
//		}
//		else
//		{
//			n /= 2;
//		}
//		count++;
//	}
//	printf("count = %d\n", count);
//	return 0;
//}

//近似计算 
//计算 pi/4 = 1 - 1/3 + 1/5 - 1/7 + ...,直到最后一项小于10^6
//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	int flag = -1;
//	int i = 0;
//	double sum = 0;
//	for (i = 0;; i++)
//	{
//		double val = 1.0 / (i * 2 + 1);
//		flag *= -1;
//		sum += val * flag;
//		if (val < 1e-6)
//			break;
//	}
//	printf("%.6f\n", sum);
//	return 0;
//}

//阶乘之和
//输入n，计算S=1！+2！+3！+...+n!的末6位（不含前导0）。n<=10^6，n!表示前n个正整数之积。
//样例输入：
//10
//样例输出：
//37913
//#include <stdio.h>
//int main()
//{
//	int n = 0;
//	int tmp = 1;
//	int sum = 0;
//	scanf("%d", &n);
//	for (int i = 1; i <= n; i++)
//	{
//		//提示：要计算只包含加法、减法和乘法的整数表达式除以正整数n的余数，可以在每步计算之后对n取余，结果不变
//		tmp = (tmp * i) % 1000000;   //防止溢出每步取模
//		sum = (sum + tmp) % 1000000;
//	}
//	printf("sum = %d\n", sum);
//	return 0;
//}