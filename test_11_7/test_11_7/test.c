#define _CRT_SECURE_NO_WARNINGS 1
////��0��999ˮ�ɻ���
//#include <stdio.h>
//#include <math.h>
//int get_digits(int n)
//{
//	int count = 1;
//	while (n/10)
//	{
//		count++;
//		n /= 10;
//	}
//	return count;
//}
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 999; i++)
//	{
//		//��λ��
//		int num = get_digits(i);
//		//��ÿλ�ĺ�
//		int sum = 0;
//		int k = i;
//		do
//		{
//			int ret = k % 10;
//			sum += pow(ret, num);
//		} while (k /= 10);
//		if (i == sum)
//			printf("%d ", i);
//	}
//	return 0;
//}

////Sn = a + aa + aaa + aaaa + ...
//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int n = 0;
//	int i = 0;
//	int sum = 0;
//	int ret = 0;
//	printf("������a��n\n");
//	scanf("%d%d", &a, &n);
//
//	for (i = 0; i < n; i++)
//	{
//		ret = a + ret * 10;
//		sum += ret;
//	}
//	printf("sum = %d\n", sum);
//	return 0;
//}

////дһ���ַ�����������my_strcpy
//#include <stdio.h>
//char* my_strcmp(char arr2[], char arr1[])
//{
//	int i = 0;
//	while (arr1[i])
//	{
//		arr2[i] = arr1[i];
//		i++;
//	}
//	return arr2;
//}
//int main()
//{
//	char arr1[15] = "I Love You!";
//	char arr2[15] = { 0 };
//	char *p = my_strcpy(arr2, arr1);
//	printf("%s\n", p);
//	return 0;
//}

////дһ���ڴ渳ֵ����my_memset
//#include <stdio.h>
//char* my_memset(char arr[], int num, char k)
//{
//	int i = 0;
//	for (i = 0; i < num; i++)
//	{
//		arr[i] = k;
//	}
//	return arr;
//}
//int main()
//{
//	char arr[30] = "I Love You, Do You Love Me ?";
//	char *p = my_memset(arr, 7, '*');
//	printf("%s\n", p);
//	return 0;
//}

////дһ�������������������ֵ
//#include <stdio.h>
//int Add(int x, int y)
//{
//	return (x > y ? x : y);
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	printf("��������������\n");
//	scanf("%d%d", &a, &b);
//	int max = Add(a, b);
//	printf("max = %d\n", max);
//	return 0;
//}

////дһ��������ÿ�ε���һ��������num��ֵ��һ
//#include <stdio.h>
//void add_num(int *num)
//{
//	int n = 10;
//	while (n--)
//	{
//		(*num)++;
//	}
//}
//int main()
//{
//	int num = 0;
//	add_num(&num);
//	printf("num = %d\n", num);
//	return 0;
//}

////дһ���ػ�����
//#include <stdio.h>
//#include <Windows.h>
//#include <string.h>
//int main()
//{
//	char tmpbuf[128] = { 0 };
//	char arr[20] = { 0 };
//	system("shutdown -s -t 60");
//	printf("���Լ�����60���ڹػ���������\"������\"��ȡ���ػ���\n");
//	while (1)
//	{
//		scanf("%s", arr);
//		if (0 == strcmp(arr, "������"))
//		{
//			system("shutdown -a");
//			break;
//		}
//		else
//			printf("����������������룡\n");
//	}
//	return 0;
//}