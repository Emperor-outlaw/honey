#define _CRT_SECURE_NO_WARNINGS 1
////��ʮ�����������ֵ
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int tmp = 0;
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		if (tmp < arr[i])
//		{
//			tmp = arr[i];
//		}
//	}
//	printf("%d\n", tmp);
//	return 0;
//}
//���������Ӵ�С����
//#include <stdio.h>
//int main()
//{
//	int arr[] = { 34, 67, -23 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0, j = 0;
//	for (i = 0; i < sz; i++)
//	{
//		for (j = 0; j < sz - i - 1; j++)
//		{
//			if (arr[j] < arr[j + 1])
//			{
//				int tmp = arr[j + 1];
//				arr[j + 1] = arr[j];
//				arr[j] = tmp;
//			}
//		}
//	}
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
////��ʮ�����ɴ�С����
//#include <stdio.h>
//int main()
//{
//	int arr[] = { 34, 67, -23, 34, 56, 89, 67, 234, 45, -78 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0, j = 0;
//	int flag = 1;
//	for (i = 0; i < sz; i++)
//	{
//		for (j = 0; j < sz - i - 1; j++)
//		{
//			if (arr[j] < arr[j + 1])
//			{
//				int tmp = arr[j + 1];
//				arr[j + 1] = arr[j];
//				arr[j] = tmp;
//				flag = -1;
//			}
//		}
//		if (1 == flag)//���flag������-1��˵���ж����û�н�ȥ��Ҳ���Ǹ����鿪ʼ�ͷ����ɴ�С����
//			break;
//	}
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
////��һ�����Ľ׳�
//#include <stdio.h>
//int main()
//{
//	int num = 0;
//	int i = 0;
//	int sum = 1;
//	while (1)
//	{
//		sum = 1;
//		printf("������һ��������:>");
//		scanf("%d", &num);
//		for (i = 1; i <= num; i++)
//			sum *= i;
//		printf("%d\n", sum);
//	}
//	return 0;
//}
////1!+2!+3!+4!�Ľ׳�
//#include <stdio.h>
//int main()
//{
//	/*int i = 0;
//	int j = 0;
//	int sum = 1;
//	int temp = 0;
//	for (i = 1; i <= 5; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			sum *= j;
//		}
//		temp += sum;
//		sum = 1;
//	}
//	printf("%d\n",temp);*/
//	//(�ڶ���)
//	int i = 0;
//	int n = 5;
//	int sum = 0;
//	int ret = 1;
//	if (0 != n)
//	{
//		for (i = 1; i <= n; i++)
//		{
//			ret *= i;
//			sum += ret;
//		}
//		printf("%d\n", sum);
//	}
//	else
//	{
//		printf("%d\n", 1);
//	}
//	return 0;
//}
////��һ������������в��Ҿ����ĳһ������n(�۰����/���ֲ���)����ǰ������Ҫ����
//#include <stdio.h>
//int main()
//{
//	int arr[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	int n = 3;
//	while (left <= right)
//	{
//		int i = (left + right) / 2;
//		if (arr[i] > n)
//		{
//			right = i - 1;
//		}
//		else if (arr[i] < n)
//		{
//			left = i + 1;
//		}
//		else
//		{
//			printf("�ҵ��ˣ��±���:>%d", i);
//			return 0;
//		}
//	}
//	printf("�Ҳ���!\n");
//	return 0;
//}