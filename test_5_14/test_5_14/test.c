#define _CRT_SECURE_NO_WARNINGS 1
//����˷��ھ���
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%-2d* %-2d=%-2d ", i, j, i*j);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//�ж�100~200֮�������
//#include <stdio.h>
//#include <math.h>
//int main()
//{
	/*int i = 0;
	int count = 0;
	int num = 100;
	while (num<=200)
	{
		for (i = 2; i < num; i++)
		{
			if ((num%i) == 0)
				break;
		}
		if (i == num)
		{
			printf("%d ", num);
			count++;
		}
		num++;
	}
	printf("\ncount = %d", count);*/

//	int i = 0;
//	int count = 0;
//	int num = 0;
//	for (num = 1; num <= 200; num++)
//	{
//		for (i = 2; i <= sqrt(num); i++)//�������γ���С�����Ŀ�������
//		{
//			if (num % i == 0)
//				break;
//		}
//		if (i > sqrt(num))
//		{
//			printf("%d ", num);
//			count++;
//		}
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}
//�ж��Ƿ�Ϊ����1000-2000
//1.�ܱ�4���������ܱ�100����
//2.�ܱ�400����
//#include <stdio.h>
//int main()
//{
//	int num = 0;
//	int count = 0;
//	for (num = 1000; num <= 2000; num++)
//	{
//		/*if (!(num % 4 ) && num % 100)
//		{
//		printf("%d ", num);
//		count++;
//		}
//		else if (!(num % 400))
//		{
//		printf("%d ", num);
//		count++;
//		}*/
//		//�������жϵĺϲ�
//		if (!(num % 4) && num % 100 || !(num % 400))
//		{
//			printf("%d ", num);
//			count++;
//		}
//	}
//	printf("\ncount = %d\n", count);
//	return 0;
//}
//�ж�һ�����Ƿ�Ϊ����
//#include <stdio.h>
//int main()
//{
//	int input = 0;
//	printf("������һ����:>");
//	scanf("%d", &input);
//	if (input % 2)
//		printf("��������\n");
//	else
//		printf("����������\n");
//	return 0;
//}
////���1-100֮�������
//#include <stdio.h>
//int main()
//{
//	int num = 0;
//	//��һ��
//	/*for (num = 1; num <= 100; num++)
//	{
//		if (num % 2)
//			printf("%d ", num);
//	}*/
//	//�ڶ���
//	for (num = 1; num <= 100; num += 2)
//	{
//		printf("%d ", num);
//	}
//	return 0;
//}
//�����������Сд��ĸ���Ϊ��д��ĸ
//#include <stdio.h>
//int main()
//{
//	char ch = 0;
//	while ((ch = getchar())!= EOF)
//	{
//		if (ch >= 'a' && ch <= 'z')
//			putchar(ch - 32);
//		else
//			putchar(ch);
//	}
//	return 0;
//}
//����һ������������������
//#include <stdio.h>
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int tmp = 0;
//	printf("a = %d b = %d\n", a, b);
//	tmp = a;
//	a = b;
//	b = tmp;
//	printf("a = %d b = %d\n", a, b);
//	return 0;
//}
//����������������������
//#include <stdio.h>
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("a = %d b = %d\n", a, b);
//	//��һ�֣��Ӽ���ת����
//	/*a = a + b;
//	b = a - b;
//	a = a - b;*/
//	//�ڶ��֣���λ���㣩
//	a = a ^ b;
//	b = a ^ b;
//	a = a ^ b;
//	printf("a = %d b = %d\n", a, b);
//	return 0;
//}
////�����Լ��
//#include <stdio.h>
//int main()
//{
//	int a = 8;
//	int b = 23;
//	int temp = 0;
//	scanf("%d %d", &a, &b);
//	while (temp = a % b)
//	{
//		a = b;
//		b = temp;
//	}
//	printf("���Լ����:%d\n",b);
//	return 0;
//}
////����С������
//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int temp = a % b;
//	int c = a*b;
//	if (!temp)
//	{
//		printf("��С��������:%d\n", a);
//		return 0;
//	}
//	while (temp)
//	{
//		a = b;
//		b = temp;
//		temp = a % b;
//	}
//	a = c / b;
//	printf("��С��������:%d\n", a);
//	return 0;
//}