#define _CRT_SECURE_NO_WARNINGS 1
////��������,�������������ֵ
//#include <stdio.h>
//int is_max(int a, int b)
//{
//	return a > b ? a : b;
//}
//int main()
//{
//	int a = 12;
//	int b = 34;
//	int ret = is_max(a, b);
//	printf("ret = %d", ret);
//	return 0;
//}
////�������ã������������н���
//#include <stdio.h>
//void Swap(int* p1, int *p2)
//{
//	*p1 = *p1 + *p2;
//	*p2 = *p1 - *p2;
//	*p1 = *p1 - *p2;
//}
//int main()
//{
//	int a = 90;
//	int b = 45;
//	printf("a = %d b = %d\n", a, b);
//	Swap(&a, &b);
//	printf("a = %d b = %d\n", a, b);
//	return 0;
//}
////���ú���,�ö��ַ� ʵ��һ��������������Ĳ��� 
//#include <stdio.h>
//int binary_search(int arr[], int sz,int num)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (num > arr[mid])
//			left = mid + 1;
//		else if (num < arr[right])
//			right = mid - 1;
//		else
//			return mid;
//	}
//	return -1;
//}
//int main()
//{
//	int arr[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int n = 3;
//	int ret = binary_search(arr, sz, n);
//	if (-1 == ret)
//		printf("û���ҵ���\n");
//	else
//		printf("�ҵ��ˣ�Ԫ�ص��±���%d\n", ret);
//	return 0;
//}
////дһ������,ÿ����һ���������,�ͽ�sumֵ��һ
//#include <stdio.h>
//void Add_one(int* p)
//{
//	return (*p)++;
//}
//int main()
//{
//	int sum = 0;
//	int n = 10;
//	while (n--)
//	{
//		Add_one(&sum);
//	}
//	printf("%d\n", sum);
//	return 0;
//}

////��ӡ
////      * 
////     *** 
////    ***** 
////   ******* 
////  ********* 
//// *********** 
////*************
//// ***********
////  *********
////   ******* 
////    ***** 
////     *** 
////      * 
//#include <stdio.h>
//int main()
//{
//	int line = 0;
//	printf("����������;>");
//	scanf("%d", &line);
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < line; i++)
//	{
//		for (j = 0; j < line - i - 1; j++)
//		{
//			printf(" ");//�ȴ�ӡ�ո�
//		}
//		for (j = 0; j < i * 2 + 1; j++)
//		{
//			printf("*");//�ٴ�ӡ�Ǻ�
//		}
//		printf("\n");
//	}
//	for (i = 0; i < line - 1; i++)
//	{
//		for (j = 0; j < i + 1; j++)
//		{
//			printf(" ");//�ȴ�ӡ�ո�
//		}
//		for (j = 0; j < (line - i - 1) * 2 - 1; j++)
//		{
//			printf("*");//�ٴ�ӡ�Ǻ�
//		}
//		printf("\n");
//	}
//	return 0;
//}

////��дһ�������������������ˮ�ɻ����������ͨʽ��
//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	int i = 0;
//	for (i = 1; i < 100000; i++)
//	{
//		int count = 0;
//		int temp = i;
//		while (temp)
//		{
//			temp /= 10;
//			count++;
//		}
//		temp = i;
//		double sum = 0;
//		while (temp)
//		{
//			sum += pow(temp % 10, count);
//			temp /= 10;
//		}
//		if (sum == i)
//			printf("%d ", i);
//	}
//	return 0;
//}

////Sn = a + aa + aaa + aaaa + aaaaa  ��n�������ĺͣ�����a������
////���磺2+22+222+2222+22222 ���� 5��2�ĺ� 
//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	//��һ��
//	//int num = 0;
//	//int sum = 0;
//	//int i = 0;
//	//int n = 0;
//	//printf("��������Ҫ���ĸ����ֵļ����:>");
//	//scanf("%d %d", &num, &n);
//	//for (i = 1; i <= n; i++)
//	//{
//	//	int temp = 0;
//	//	int tmp = i;
//	//	while (tmp--)
//	//	{
//	//		temp += num*pow(10, tmp);//����ÿ�����ÿ����һ�����
//	//	}
//	//	sum += temp;//��ÿ���������
//	//}
//	//printf("%d\n", sum);
//
//	//�ڶ���
//	int num = 0;
//	int n = 0;
//	int sum = 0;
//	printf("��������Ҫ���ĸ����ֵļ����:>");
//	scanf("%d %d", &num, &n);
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < n; i++)
//	{
//		j = j * 10 + num;
//		sum += j;
//	}
//	printf("%d \n", sum);	
//	return 0;
//}

////��дһ�����򣬿���һֱ���ռ����ַ���
////���������Сд�ַ��������д�ַ�����������Ǵ�д�ַ������Сд�ַ� 
////����������ַ��Ͳ���� 
//#include <stdio.h>
//#include <ctype.h>
//#include <stdlib.h>
//int main()
//{
//	//�Լ�д�ж�����
//	/*char ch = 0;
//	do
//	{
//	    ch = getchar();
//		if (ch >= 'a' && ch =< 'z')
//			putchar(ch - 32);
//		else if (ch >= 'A' && ch =< 'Z')
//			putchar(ch + 32);
//		else if (ch >= '0' && ch =< '9')
//			;        //continue
//		else
//			putchar(ch);
//	} while (ch != EOF);*/
//
//	//���ÿ⺯�����ж�����
//	char ch = 0;
//	while (ch != EOF)
//	{
//		ch = getchar();
//		if (islower(ch))
//			putchar(toupper(ch));
//		else if (isupper(ch))
//			putchar(tolower(ch));
//		else if (isdigit(ch))
//			;
//		else
//			putchar(ch);
//	}
//	return 0;
//}


////�����ĵݹ���ã���1234ѭ���ӡ����Ļ��1 2 3 4
//#include <stdio.h>
//void print(int n)
//{
//	if (n > 0)
//	{
//		print(n / 10);
//		printf("%d ", n % 10);
//	}
//}
//int main()
//{
//	int n = 1234;
//	print(n);
//	return 0;
//}