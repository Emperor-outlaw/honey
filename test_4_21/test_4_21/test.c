#define _CRT_SECURE_NO_WARNINGS 1
//����ָ��
//#include  <stdio.h>
//int add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{   
//	//���庯��ָ��
////	int(*p)(int, int) = &add;
//	int(*p)(int, int) = add;
//	int ret = (*p)(3, 6); //�ú���ָ����ú���
////	int ret = (p)(3, 6); //����ָ�����ǰ��*����ȥ��
//	printf("%d", ret);
//	return 0;
//}
//(    * (   void(*)()  )0   )();
//����0��ַ���ĺ������������ã�
//�����õĺ������޲Σ�����������void
//void(  * signal(int, void(*)(int)) )(int);
//typedef void(*pf_t)(int);
//pf_t signal(int, pf_t);
//signal��һ������������
//signal������һ��������Int
//�ڶ��������Ǻ���ָ��
//��ָ��ָ��ĺ���������int������������void
//signal�����ķ���������һ������ָ��
//��ָ��ָ��ĺ���������int������������void
//����ָ������
//#include <stdio.h>
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int main()
//{
//	int(*pA)(int, int) = Add;
//	int(*pS)(int, int) = Sub;
//	int(*pfarr[4])(int, int) = { Add, Sub };//����ָ������
//	int(*pfarr[4])(int, int) = { *pA, *pS };//����ָ������
//	int i = 0;
//	for (i = 0; i < 2; i++)
//	{
//		printf("%d\n", pfarr[i](2,3));
//	}
//	return 0;
//}
//дһ���򵥼�����������ָ�룩
//#include <stdio.h>
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//void menu()
//{
//
//	printf("********************************\n");
//	printf("****     1.Add   2.Sub      ****\n");
//	printf("****     3.Mul   4.Div      ****\n");
//	printf("****          0.Exit        ****\n");
//	printf("********************************\n");
//}
//void calculate(int(*p)(int x,int y))
//{
//	int x = 0;
//	int y = 0;
//	printf("��������������\n");
//	scanf("%d%d", &x, &y);
//	printf("%d\n", (*p)(x, y));
//}
//void test()
//{
//	int input = 0;
//	do
//	{
//		menu();
//		printf("���������ѡ��:>\n");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			calculate(Add); //�����漸�������װΪ�˺���
//			//printf("��������������\n");
//			//scanf("%d%d", &x, &y);
//			//int(*p1)(int, int) = Add;
//			//printf("%d\n", (*p1)(x, y));
//			break;
//		case 2:
//			calculate(Sub);
//			//printf("��������������\n");
//			//scanf("%d%d", &x, &y);
//			//int(*p2)(int, int) = Sub;
//			//printf("%d\n", (*p2)(x, y));
//			break;
//		case 3:
//			calculate(Mul);
//			//printf("��������������\n");
//			//scanf("%d%d", &x, &y);
//			//int(*p3)(int, int) = Mul;
//			//printf("%d\n", (*p3)(x, y));
//			break;
//		case 4:
//			calculate(Div);
//			//printf("��������������\n");
//			//scanf("%d%d", &x, &y);
//			//int(*p4)(int, int) = Div;
//			//printf("%d\n", (*p4)(x, y));
//			break;
//		case 0:
//			printf("�˳��㷨!\n");
//			break;
//		default :
//			printf("����������������룡\n");
//			break;
//		}
//	} while (input);
//}
//int main()
//{
//	test();
//	return 0;
//}
//��дһ���򵥵ļ����������ú���ָ�����飩
//#include <stdio.h>
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}
//int Mul(int x, int y)
//{
//	return x * y;
//}
//int Div(int x, int y)
//{
//	return x / y;
//}
//void menu()
//{
//
//	printf("********************************\n");
//	printf("****     1.Add   2.Sub      ****\n");
//	printf("****     3.Mul   4.Div      ****\n");
//	printf("****          0.Exit        ****\n");
//	printf("********************************\n");
//}
//void test()
//{
//	int x = 0;
//	int y = 0;
//	int input = 0;
//	int(*pfArr[5])(int, int) = { 0, Add, Sub, Mul, Div };
//	do
//	{
//		menu();
//		printf("���������ѡ��:>\n");
//		scanf("%d", &input);
//		if (input >= 1 && input <= 0)
//		{
//			printf("������������:>\n");
//			scanf("%d %d", &x, &y);
//			printf("%d\n", pfArr[input](x, y));
//		}
//		else if (input == 0)
//		{
//			printf("�˳��㷨!\n");
//		}
//		else
//		{
//			printf("����������������룡\n");
//		}
//	} while (input);
//}
//int main()
//{
//	test();
//	return 0;
//} 
//ð�����򣨽�ֹʹ�ÿ⺯��qsort��
//#include <stdio.h>
//void bubble_sort(int arr[],int sz)
//{
//	int i = 0;
//	int j = 0;
//	int flag = 0;
//	for (i = 0; i < sz; i++)
//	{
//		for (j = 0; j < sz-1-i; j++)
//		{
//			if (arr[j]>arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//				flag = 1;
//			}
//		}
//		if (flag == 0)
//			printf("hh");
//			break;
//	}
//}
//void print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//int main()
//{
//	int arr[] = { 4, 5, 3, 7, 2, 9, 0, 8, 1, 6 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr,sz);
//	print(arr, sz);
//	return 0;
//}
//void qsort( void *base, size_t num, size_t width, int (__cdecl *compare )(const void *elem1, const void *elem2 ) );
//��дһ���򵥼�������ʹ�ÿ⺯��qsort��
//#include <stdio.h>
//#include <stdlib.h>
//int cmp_int(const void *e1, const void *e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
//void print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//int main()
//{
//	int arr[] = { 4, 5, 3, 7, 2, 9, 0, 8, 1, 6 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//    qsort(arr, sz, sizeof(arr[0]), cmp_int);
//	print(arr, sz);
//	return 0;
//}
//#include <stdio.h>//�Լ�ʵ�ֿ⺯��qsort
//#include <string.h>
//struct Stu
//{
//	char name[20];
//	int age;
//};
//int cmp_Stu_by_name(const void*e1, const void*e2)
//{
//	return strcmp(((struct Stu*)e1)->name, ((struct Stu*)e2)->name);
//}
//int cmp_Stu_by_age(const void*e1, const void*e2)
//{
//	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
//}
//int cmp_int(const void *e1, const void *e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
//void Swap(char* buf1, char* buf2, int width)
//{
//	int i = 0;
//	for (i = 0; i < width; i++)
//	{
//		int tmp = *(buf1 + i);
//		*(buf1 + i) = *(buf2 + i);
//		*(buf2 + i) = tmp;
//	}
//}
//void bubble_sort(void* arr, int sz, int width, int(*cmp)(const void* e1, const void* e2))
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < sz; i++)
//	{
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (cmp((char*)arr + width*j, (char*)arr + width*(j + 1)) > 0)
//			{
//				Swap((char*)arr + width*j, (char*)arr + width*(j + 1), width);
//			}
//		}
//	}
//}
//void print1(struct Stu arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%s  %d", arr[i].name, arr[i].age);
//		printf("\n");
//	}
//	printf("\n");
//}
//void print2(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}
//void test1()//���������򣨽ṹ�壩
//{
//	struct Stu arr[] = { { "zhangsan", 12 }, { "lisi", 45 }, {"wangwu",2} };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz, sizeof(arr[0]), cmp_Stu_by_name);
//	print1(arr, sz);
//}
//void test2()//���������򣨽ṹ�壩
//{
//	struct Stu arr[] = { { "zhangsan", 12 }, { "lisi", 45 }, { "wangwu", 2 } };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz, sizeof(arr[0]), cmp_Stu_by_age);
//	print1(arr, sz);
//}
//void test3()//����������
//{
//	int arr[] = { 4, 5, 3, 7, 2, 9, 0, 8, 1, 6 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz, sizeof(arr[0]), cmp_int);
//	print2(arr, sz);
//}
//int main()
//{
//	test1();
//    test2();
//	test3();
//	return 0;
//}