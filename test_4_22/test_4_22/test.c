#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#include <string.h>
////int main()
////{
	//ָ����������
	/*�����������壺
	1. sizeof(������)���������������ʾ�������飬���������������Ĵ�С��
	2. &���������������������ʾ�������飬ȡ��������������ĵ�ַ��
	3. ����֮�����е�����������ʾ��Ԫ�صĵ�ַ��*/
	//һά���� 
	//int a[] = {1,2,3,4}; 
	//printf("%d\n",sizeof(a));//16������������Ĵ�С����λ�ֽڣ�
	//printf("%d\n",sizeof(a+0));//4������һ��Ԫ�صĵ�ַ�Ĵ�С
	//printf("%d\n",sizeof(*a)); //4������һ��Ԫ�صĴ�С
	//printf("%d\n",sizeof(a+1));//4�����ڶ���Ԫ�ص�ַ�Ĵ�С
	//printf("%d\n",sizeof(a[1]));//4�����ڶ���Ԫ�صĴ�С
	//printf("%d\n",sizeof(&a));//4������������ĵ�ַ�Ĵ�С
	//printf("%d\n",sizeof(*&a));//16������������Ԫ�صĴ�С
	//printf("%d\n",sizeof(&a+1));//4����������������ĵ�ַ��Ԫ��4����ĵ�ַ����Ҳ�ǵ�ַ��
	//printf("%d\n",sizeof(&a[0])); //4������Ԫ�صĵ�ַ
	//printf("%d\n",sizeof(&a[0]+1));//4�����ڶ���Ԫ�صĵ�ַ

	//�ַ����� 
	//char arr[] = {'a','b','c','d','e','f'}; 
	//printf("%d\n", sizeof(arr)); //6������������ĵ�ַ��С
	//printf("%d\n", sizeof(arr+0)); //4������Ԫ�صĵ�ַ��С
	//printf("%d\n", sizeof(*arr)); //1������Ԫ�صĴ�С
	//printf("%d\n", sizeof(arr[1])); //1������Ԫ�صĴ�С
	//printf("%d\n", sizeof(&arr)); //4������������ĵ�ַ��С
	//printf("%d\n", sizeof(&arr+1)); //4����������������ĵ�ַ��Ԫ��f����ĵ�ַ
	//printf("%d\n", sizeof(&arr[0]+1)); //4�����ڶ���Ԫ�صĵ�ַ

	//	char arr[] = {'a','b','c','d','e','f'}; 
	//	printf("%d\n", strlen(arr)); //x����strlen ��'\0',f���治��\0�����������ֵ
	//	printf("%d\n", strlen(arr + 0));//x
	////	printf("%d\n", strlen(*arr)); //����ʽ����strlen(const char*)������ָ��
	////	printf("%d\n", strlen(arr[1])); //����ʽ
	//	printf("%d\n", strlen(&arr)); //x
	//	printf("%d\n", strlen(&arr + 1)); //y=(x+6)
	//	printf("%d\n", strlen(&arr[0] + 1));//z=x-1/z=y+5


	//char arr[] = "abcdef"; 
	//printf("%d\n", sizeof(arr)); //7������������Ĵ�С
	//printf("%d\n", sizeof(arr + 0));//4 ������Ԫ�صĵ�ַ��С
	//printf("%d\n", sizeof(*arr)); //1������Ԫ�صĴ�С
	//printf("%d\n", sizeof(arr[1])); //1������Ԫ�صĴ�С
	//printf("%d\n", sizeof(&arr)); //4������������ĵ�ַ��С
	//printf("%d\n", sizeof(&arr + 1));//4 �����������������ĵ�ַ��f����\0����ĵ�ַ
	//printf("%d\n", sizeof(&arr[0] + 1));//4�����ڶ���Ԫ�صĵ�ַ

	//char arr[] = "abcdef";
	//printf("%d\n", strlen(arr));//6�����ӵ�һ��Ԫ��a��ʼ������������\0��ֹͣ
	//printf("%d\n", strlen(arr + 0));//6�����ӵ�һ��Ԫ�ؿ�ʼ
	////printf("%d\n", strlen(*arr)); //err����strlen(const char*)������ָ��
	////printf("%d\n", strlen(arr[1]));//err
	//printf("%d\n", strlen(&arr)); //6�����ӵ�һ��Ԫ�ؿ�ʼ
	//printf("%d\n", strlen(&arr + 1));//x ���������������飬��f�����\0�ĺ��濪ʼ��������\0��ֹͣ
	//printf("%d\n", strlen(&arr[0] + 1));//5�����ӵڶ���Ԫ�ؿ�ʼ��
	//
	//	char *p = "abcdef"; 
	//printf("%d\n", sizeof(p)); //4����ָ��p�Ĵ�С��aԪ�صĵ�ַ��С��
	//printf("%d\n", sizeof(p + 1));//4 �����ڶ���Ԫ�ص�ַ�Ĵ�С
	//printf("%d\n", sizeof(*p)); //1������һ��Ԫ�صĴ�С
	//printf("%d\n", sizeof(p[0])); //1������һ��Ԫ�صĴ�С
	//printf("%d\n", sizeof(&p));//4����ָ��p�ĵ�ַ�Ĵ�С
	//printf("%d\n", sizeof(&p + 1));//4����ָ��P��ַ����һ����ַ
	//printf("%d\n", sizeof(&p[0] + 1));//4�����ڶ���Ԫ�صĵ�ַ
	//
	//
	//printf("%d\n", strlen(p)); //6�����ӵ�һ��Ԫ�ؿ�ʼ������������\0��ֹͣ
	//printf("%d\n", strlen(p + 1));//5 �����ӵڶ���Ԫ�ؿ�ʼ������������\0��ֹͣ
	////printf("%d\n", strlen(*p)); //err����strlen(const chat*)������ָ��
	////printf("%d\n", strlen(p[0]));//err
	//printf("%d\n", strlen(&p)); //x�����޷�ȷ����ַ��Ӧ����һ���ռ��Ƿ���\0
	//printf("%d\n", strlen(&p + 1));//y 
	//printf("%d\n", strlen(&p[0] + 1));//5�����ӵڶ���Ԫ�ؿ�ʼ������������\0��ֹͣ
	//
	//��ά���� 
	//int a[3][4] = {0};
	//printf("%d\n",sizeof(a));//48������������Ĵ�С
	//printf("%d\n",sizeof(a[0][0]));//4 ������һ��Ԫ�صĴ�С
	//printf("%d\n",sizeof(a[0])); //16������һ��Ԫ�صĴ�С
	//printf("%d\n",sizeof(a[0]+1));//4������һ�еڶ���Ԫ�ص�ַ�Ĵ�С
	//printf("%d\n",sizeof(*(a[0]+1)));//4������һ�еڶ���Ԫ�صĴ�С
	//printf("%d\n",sizeof(a+1)); //4�����ڶ��е�ַ�Ĵ�С
	//printf("%d\n",sizeof(*(a+1)));//16�����ڶ���Ԫ�صĴ�С
	//printf("%d\n",sizeof(&a[0]+1));//4�����ڶ���Ԫ�ص�ַ�Ĵ�С
	//printf("%d\n",sizeof(*(&a[0]+1))); //16�����ڶ���Ԫ�صĴ�С
	//printf("%d\n",sizeof(*a));//16����*a=a[0]������һ��Ԫ�صĴ�С
	//printf("%d\n",sizeof(a[3]));//16����a[3]��ȻԽ�磬����sizeof���������㣬ֻ����a[3]���Ϳռ�Ĵ�С��a[3]������a[0],a[1]����
//	return 0;
//}
#include <stdio.h>
int main()
{
	//int a[5] = { 1, 2, 3, 4, 5 };   
	//int *ptr = (int *)(&a + 1);//(&a+1)����ȡ��������ĵ�ַȻ���һ��ָ��ָ�����5�����Ԫ�أ���ʱָ�������������ָ�����ͣ�
	//printf("%d,%d", *(a + 1), *(ptr - 1));//2,5

	//struct Test //�ṹ��Ĵ�С��20���ֽ�
	//{ 
	//	int Num;  
	//	char *pcName; 
	//	short sDate;
	//	char cha[2];  
	//	short sBa[4];
	//}*p; 
	////����p ��ֵΪ0x100000
	//p = (struct Test*)0x100000;
	//printf("%p\n", p + 0x1); //100014����p�ǽṹ�����͵�ָ�룬��һ�ӵ���pָ�����͵Ĵ�С20���ֽڣ�ת����16������14
	//printf("%p\n", (unsigned long)p + 0x1);//100001
	//printf("%p\n", (unsigned int*)p + 0x1);//100004
//
	//int a[4] = { 1, 2, 3, 4 };     
	//int *ptr1 = (int *)(&a + 1);   
	//int *ptr2 = (int *)((int)a + 1);//����ָ��ƫ����һ�ֽ�    
	//printf("%x,%x", ptr1[-1], *ptr2);//4��2000000
//
//
	//int a[3][2] = { (0, 1), (2, 3), (4, 5) };//����ע�ⶺ�ű��ʽ���������ڵĽ����{1��3��5}�� 
	//int *p;   
	//p = a[0];//a[0]���Կ���arr��������a[0]û����sizeof�У�������������Ԫ�صĵ�ַ
	//printf("%d", p[0]);//1
//
	//int a[5][5];    
	//int(*p)[4];   
	//p = a;    
	//printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);//FFFFFFFC,-4����FFFFFFFC��-4��16����
//
	//int aa[2][5] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 }; 
	//int *ptr1 = (int *)(&aa + 1);   
	//int *ptr2 = (int *)(*(aa + 1));//����*��aa+1��=aa[1]
	//printf("%d,%d", *(ptr1 - 1), *(ptr2 - 1));//10��5
//
	//char *a[] = { "work", "at", "alibaba" }; 
	//char**pa = a; //����ע��&a������ָ������
	//pa++; 
	//printf("%s\n", *pa);//at
//
    //* ��������˼��������
	//��Ϊ �˷� �������������� ++��������
	//��Ϊ ָ��ȡֵ �����������ͬ ++��������һ��
	//char *c[] = { "ENTER", "NEW", "POINT", "FIRST" };  
	//char**cp[] = { c + 3, c + 2, c + 1, c }; 
	//char***cpp = cp; 
	//printf("%s\n", **++cpp); //POINT
	//printf("%s\n", *--*++cpp + 3); //ER
	//printf("%s\n", *cpp[-2] + 3); // ST
	//printf("%s\n", cpp[-1][-1] + 1);//EW
//return 0;
//}