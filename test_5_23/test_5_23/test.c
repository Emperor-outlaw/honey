#define _CRT_SECURE_NO_WARNINGS 1
//1����д����, ���ַ����ĳ���
//#include <stdio.h>
//#include <assert.h>
//int my_strlen(const char* str)
//{
//	assert(str);
//	int count = 0;
//	while (*str++)
//		count++;
//	return count;
//}
//int main()
//{
//	char arr[] = "123456789";
//	int ret = my_strlen(arr);
//	printf("%d \n", ret);
//	return 0;
//}

////2����д����������������ʱ���������ַ����ĳ��ȣ��ݹ���ã�
//#include <stdio.h>
//#include <assert.h>
//int My_strlen(const char* str)
//{
//	assert(str);
//	if (*str)
//		return 1 + My_strlen(str + 1);
//	else
//		return 0;	
//}
//int main()
//{
//	char arr[20] = "12345678";
//	int ret = My_strlen(arr);
//	printf("%d\n", ret);
//	return 0;
//}

//////3.�ݹ���ã���n�Ľ׳�
//#include <stdio.h>
//int Fac(int num)
//{
////  ��һ��
////	int sum = 1;
////	while (num--)
////	{
////		sum *= (num + 1);
////	}
////	return sum;
//	//�ڶ���
//	int i = 0;
//	int sum = 1;
//	for (i = num; i >= 0; i--)
//	{
//		if (i == 0)
//			return sum;
//		else
//			sum *= i;
//	}
//	return sum;
//}
//int main()
//{
//	int input = 0;
//	int sum = 0;
//	printf("������һ������:>");
//	scanf("%d", &input);
//	sum = Fac(input);
//	printf("%d\n", sum);
//	return 0;
//}


////4.�ݹ���ã����n��쳲��������������������
//#include <stdio.h>
//int Fib(int n)
//{
//	if (n == 1 || n == 2)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);
//}
//int main()
//{
//	int input = 0;
//	printf("������һ����:>");
//	scanf("%d", &input);
//	int ret = Fib(input);
//	printf("%d\n", ret);
//	return 0;
//}


////5.���ú�����ѭ����ʵ�����n��쳲��������������������
//#include <stdio.h>
//int Fib(int n)
//{
//	//��һ��
//	/*int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;*/
//	//�ڶ���
//	if (n <= 2)
//	{
//		return 0;
//	}
//	else
//	{
//		int i = 0;
//		int a = 1;
//		int b = 1;
//		int c = 1;
//		for (i = 0; i < n - 2; i++)
//		{
//			c = a + b;
//			a = b;
//			b = c;
//		}
//		return c;
//	}
//}
//int main()
//{
//	int input = 0;
//	int ret = 0;
//	printf("������һ������:>");
//	scanf("%d",&input);
//	ret = Fib(input);
//	printf("%d\n", ret);
//}

////��ŵ����Ϸ(�ݹ�)
//#include <stdio.h>
//void Move_tower(int n,char A,char B,char C)
//{
//	if (n == 1)
//	{
//		printf("%d��%c�Ƶ�%c\n",n, A, C);
//	}
//	else
//	{
//		Move_tower(n - 1, A, C, B);
//		printf("%d��%c�Ƶ�%c\n", n, A, C);
//		Move_tower(n - 1, B, A, C);
//	}
//}
//int main()
//{
//	int input = 0;
//	printf("�����뺺ŵ���Ĳ���;>");
//	scanf("%d", &input);
//	Move_tower(input, 'A', 'B', 'C');
//	return 0;
//}


//������̨�ף��ݹ飩
//1����n��̨��һ�ο�����1�ף�Ҳ������2�ף����ж���������(������쳲�������)

//̨����   ����
//1        1
//2        2
//3        3
//4        5
//6        8
//#include <stdio.h>
//int leapfrog(int n)
//{
//	if (1 == n)
//		return 1;
//	else if (2 == n)
//		return 2;
//	else
//		return leapfrog(n - 1) + leapfrog(n - 2);
//}
//int main()
//{
//	int input = 0;
//	printf("������̨����:>");
//	scanf("%d",&input);
//	int ret = leapfrog(input);
//	printf("%d\n", ret);
//	return 0;
//}

////ѭ�����������̨������
//#include <stdio.h>
//int leapfrog(int n)
//{
//	int a = 1;
//	int b = 2;
//	int c = 0;
//	if (1 == n)
//		return a;
//	else if(2 == n)
//		return b;
//	else
//	{
//		while (n > 2)
//		{
//			c = a + b;
//			a = b;
//			b = c;
//			n--;
//		}
//		return c;
//	}
//}
//int main()
//{
//	int input = 0;
//	printf("������̨����:>");
//	scanf("%d", &input);
//	int ret = leapfrog(input);
//	printf("%d\n", ret);
//	return 0;
//}

//1����n��̨��һ�ο�����1�ף�Ҳ������2��....Ҳ������n�ף����ж���������(������쳲�������)
//̨����   ����
//1        1
//2        2
//3        4
//4        8
//5        16
//���õݹ鷽��
//#include <stdio.h>
//int leapfrog(int n)
//{
//	if (1 == n)
//		return 1;
//	else
//		return leapfrog(n - 1) * 2;
//}
//int main()
//{
//	int input = 0;
//	printf("������̨����:>");
//	scanf("%d", &input);
//	int ret = leapfrog(input);
//	printf("%d\n", ret);
//	return 0;
//}

////���÷ǵݹ�
//#include <stdio.h>
//#include <math.h>
//int leapfrog(int n)
//{
//	return pow(2, n - 1);
//}
//int main()
//{
//	int input = 0;
//	printf("������̨����:>");
//	scanf("%d", &input);
//	int ret = leapfrog(input);
//	printf("%d\n", ret);
//	return 0;
//}


//////ʵ��һ����������ӡ�˷��ھ����ھ�������������Լ��� 
//#include <stdio.h>
//void print(int n)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= n; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-3d", i, j, i*j);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int n = 0;
//	printf("������һ����:>");
//	scanf("%d", &n);
//	print(n);
//	return 0;
//}


//////ʹ�ú���ʵ���������Ľ���
//#include <stdio.h>
//void swop(int* p1, int* p2)
//{
//	*p1 = *p1 + *p2;
//	*p2 = *p1 - *p2;
//	*p1 = *p1 - *p2;
//}
//int main()
//{
//	int a = 89;
//	int b = -90;
//	printf("a = %d b = %d\n", a, b);
//	swop(&a, &b);
//	printf("a = %d b = %d\n", a, b);
//	return 0;
//}

////ʵ��һ�������ж�year�ǲ�������
//#include <stdio.h>
//#include <math.h>
//int is_leap_year(int n)
//{
//	if (n % 400 == 0)
//		return 1;
//	if (n % 4 == 0 && n % 100 != 0)
//		return 1;
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	printf("��������Ҫ�жϵ���:>");
//	scanf("%d", &n);
//	int ret = is_leap_year(n);
//	if (0 == ret)
//		printf("�������꣡\n");
//	else
//		printf("�����꣡\n");
//	return 0;
//}


////ʵ��һ�������ж��ǲ�������
//#include <stdio.h>
//#include <math.h>
//int is_prime(int n)
//{
//	int i = 0;
//	for (i = 2; i <= sqrt(n); i++)
//	{
//		if (0 == n%i)
//			return 1;
//	}
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	printf("��������Ҫ�жϵ���:>");
//	scanf("%d", &n);
//	int ret = is_prime(n);
//	if (0 == ret)
//		printf("��������\n");
//	else
//		printf("����������\n");
//	return 0;
//}