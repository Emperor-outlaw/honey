#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

////дһ��������ӡ�˷��ھ����������Լ�����
//void print_multables(int n)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= n; i++) //��ӡn��
//	{
//		for (j = 1; j <= i; j++) //��ӡ��i��
//		{
//			printf("%d * %d = %-3d", i, j, i * j);
//		}
//		printf("\n"); //����
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	print_multables(n);
//	return 0;
//}


////ʵ��һ�������������������������ݡ�
//void swap(int* pa, int* pb)
//{
//	int tmp = *pa;
//	*pa = *pb;
//	*pb = tmp;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	printf("����ǰ:a = %d, b = %d\n", a, b);
//	swap(&a, &b);
//	printf("������:a = %d, b = %d\n", a, b);
//	return 0;
//}



////ʵ�ֺ����ж�year�ǲ������ꡣ
//int is_leapyear(int year) //�����귵��1�����򷵻�0
//{
//	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	int year = 0;
//	scanf("%d", &year);
//	if (is_leapyear(year))
//		printf("������\n");
//	else
//		printf("��������\n");
//	return 0;
//}




//ʵ��һ���������ж�һ�����ǲ���������
//��������ʵ�ֵĺ�����ӡ100��200֮���������
#include <math.h>
int is_prime(int n) //����������1�����򷵻�0
{
	int i = 0;
	for (i = 2; i <= sqrt(n); i++)
	{
		if (0 == n % i)
			return 0;
	}
	return 1;
}
int main()
{
	int i = 0;
	int count = 0;
	for (i = 100; i <= 200; i++)
	{
		if (is_prime(i))
		{
			printf("%d ", i);
			count++;
		}
	}
	printf("\ncount = %d\n", count);
}