#define _CRT_SECURE_NO_WARNINGS 1


//3n + 1的问题
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


#include <stdio.h>
#include <math.h>
int main()
{
	int flag = -1;
	int i = 0;
	double sum = 0;
	for (i = 0;; i++)
	{
		double val = 1.0 / (i * 2 + 1);
		flag *= -1;
		sum += val * flag;
		if (val < 1e-6)
			break;
	}
	printf("%.6f\n", sum);
	return 0;
}


//#include <stdio.h>
//int main()
//{
//	double sum = 0;
//	for (int i = 0;; i++)
//	{
//		double term = 1.0 / (i * 2 + 1);
//		if (i % 2 == 0)
//			sum += term;
//		else
//			sum -= term;
//		if (term < 1e-6)
//			break;
//	}
//	printf("%.6f\n", sum);
//	return 0;
//}