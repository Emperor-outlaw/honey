#define _CRT_SECURE_NO_WARNINGS 1
//int val = 20;//��ջ�ռ��Ͽ����ĸ��ֽ� 
//char arr[10] = {0};//��ջ�ռ��Ͽ���10���ֽڵ�������
//��̬�ڴ����
//��̬�ڴ溯��
//malloc
//free
//calloc
//realloc
//��Щ�������ٵ��ڴ�ռ��ڶ���
//malloc��free
//void * malloc(size_t size);
//����������ڴ�����һ���������õĿռ䣬������ָ�����ռ��ָ��
//������ٳɹ����򷵻�һ��ָ�򿪱ٺÿռ��ָ�롣
//�������ʧ�ܣ��򷵻�һ��NULLָ�룬���malloc�ķ���ֵһ��Ҫ����顣 
//����ֵ�������� void* ������malloc��������֪�����ٿռ�����ͣ�������ʹ�õ�ʱ��ʹ�����Լ���������
//������� size Ϊ0��malloc����Ϊ�Ǳ�׼��δ����ģ�ȡ���ڱ�����
//void free(void* ptr);
//free���������ͷŶ�̬���ٵ��ڴ档 
//������� ptr ָ��Ŀռ䲻�Ƕ�̬���ٵģ���free��������Ϊ��δ����ġ� 
//������� ptr ��NULLָ�룬����ʲô�¶�������

//#include <stdlib.h>
//#include <stdio.h>
//#include <string.h>
//#include <errno.h>
//int main()
//{
//	int* p = NULL;
//	//p = (int*)malloc(10 * sizeof(int));
//	p = (int*)malloc(10 * sizeof(INT_MAX));//INT_MAX�ǿ������ε����ռ�
//	if (p == NULL)
//	{
//		printf("%s \n", strerror(errno));
//	}
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p+i) = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}

////calloc����
////void* calloc(size_t num, size_t size);--�����Լ��ѿ��ٵĿռ��ʼ��Ϊ0������ʹ�û�����malloc��ͬ�����β�ͬ����
//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	int* p = NULL;
//	p = (int*)calloc(10, sizeof(int));
//	if (p == NULL)
//	{
//		return 0;
//	}
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}

////���ԶԿռ�Ĵ�С��������
////realloc--����ֵΪ����֮����ڴ���ʼλ�ã���ַ���ܻ�䣨Ҫ��֮ǰ���ٵĿռ�����Ƿ���Լ������ӿռ��������¿��ٵĿռ䣻���㹻���򷵻صĵ�ַ����䣻�������䣩��
////void* realloc(void* ptr, size_t size);size--���ֽڴ�С�������ǵ���֮����´�С��
////ptr ��Ҫ�������ڴ��ַ 
////size ����֮���´�С 
////����ֵΪ����֮����ڴ���ʼλ�á� 
////�����������ԭ�ڴ�ռ��С�Ļ����ϣ����Ὣԭ���ڴ��е������ƶ����µĿռ䡣
//
//#include <stdio.h>
//#include <stdlib.h>
//int main()
//{
//	int* p = NULL;
//	p = (int*)malloc(10);//--10���ֽ�
//	//p = realloc(p, 20);//20���ֽ�
//	p = realloc(p, 5*sizeof(int));
//	if (p == NULL)
//	{
//		return 0;
//	}
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		*(p + i) = i;
//	}
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	free(p);
//	p = NULL;
//	return 0;
//}

//�����Ķ�̬�ڴ����
////1.�Կ�ָ��Ľ�Ӧ�ò���
//#include <stdio.h>
//#include <stdlib.h>
////void test()
//{
//	int* p = (int*)malloc(sizeof(int));
//	*p = 20;//���p��ֵ��NULL���ͻ�������
//	free(p);
//	p = NULL;
//}
//2.�Զ�̬�ռ��Խ�����
//void test()
//{
//	int i = 0; 
//	int* p = (int*)malloc(10 * sizeof(int));
//	if (p == NULL)
//	{
//		return;
//	}
//	for (i = 0; i <=10; i++)
//	{
//		*(p + i) = i;//��i��10��ʱ��Խ�����
//	}
//	free(p);
//	p = NULL;
//}
////3.ʹ��free�ͷ�һ�鶯̬�����ڴ��һ����
//void test() 
//{
//	int a = 10; 
//	int *p = &a; 
//	free(p);
//	p = NULL;
//} 
////4.��ͬһ�鶯̬�ڴ����ͷ�
//void test()
//{
//	int *p = (int*)malloc(100);
//	free(p);
//  p = NULL;
//	free(p);//�ظ��ͷ�
//}
//int main()
//{
//	test();
//	return 0;
//}
////5.�ڴ�й©����̬�ڴ������ͷţ�
//int main()
//{
//	while (1)
//	{
//		malloc(1000);
//	}
//	return 0;
//}

//�����������н��
//1.
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//void Getmemory(char* p)//�˴���pֻ��str��һ����ʱ������ֻ�ǰ�str������p��
//{
//	p = (char*)malloc(100);//��̬�ڴ濪����һ���ռ䣬�ѿ��ٿռ����ʼ��ַ��ֵ����P;����������ý�����p�����ٷ��ظ����ڴ棨malloc���ٵĿռ仹�ڣ���û���ͷ��������������ϵͳ���ͷţ���
//}//�˺�����û�з���ֵ
//void test(void)
//{
//	char * str = NULL;
//	Getmemory(str);//����������ý�����str��Ȼ��NULL
//	strcpy(str, "hello world");//����������NULL��Ӧ�ò�������������
//	printf(str);
//	printf("%s\n", str);//����printf������
//}
//int main()
//{
//  test();
//	return 0;
//}
//���������ĸ���(��һ��)
//void Getmemory(char** p)//��str�ĵ�ַ����str���в���
//{
//	if ((char*)malloc(100) == NULL)
//	{
//		printf("exit\n");
//		return;
//	}
//	*p = (char*)malloc(100);
//}
//void test()
//{
//	char* str = NULL;
//	Getmemory(&str);
//	strcpy(str, "hello world");
//	printf(str);
//	free(str);
//	str = NULL;
//}
//int main()
//{
//	test();
//	return 0;
//}
//���ڶ��֣�
//char* Getmemory(char* p)//�з���ֵ��������ֵ��ֵ��str
//{
//	return p = (char*)malloc(100);
//}
//void test()
//{
//	char* str = NULL;
//	str = Getmemory(str);
//	if (NULL == str)
//	{
//		return;
//	}
//	strcpy(str, "hello world");
//	printf(str);
//	free(str);
//	str = NULL;
//}
//int main()
//{
//	test();
//	return 0;
//}

//2.
//#include <stdio.h>
//char* Getmemory(void)
//{
//	char p[] = "hello world";
//	return p;
//}//�����������p�����ǿ�ռ�ᱻ���٣��Ѳ��ǡ�hello world��
//void test(void)
//{
//	char* str = NULL;
//	str = Getmemory();//�����˾ֲ�����������ʱ�����ĵ�ַ�����˺���������֮��p����ַ����ֵ������str��strָ����ǿ�ռ仹�����ڴ棬�Ѿ����ǡ�hello world����
//	printf(str);
//}
//int main()
//{
//	test();
//	return 0;
//}
//#include <stdio.h>
//char* Getmemory(void)
//{
//	char* p = "hello world";
//	return p;
//}//Pָ������ַ������������Ǳ���
//void test(void)
//{
//	char* str = NULL;
//	str = Getmemory();
//	printf(str);
//}
//int main()
//{
//	test();
//	return 0;
//}

//3.
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//void GetMemory(char **p, int num) 
//{
//	*p = (char *)malloc(num);//�ó���ʹ�����û���ͷſռ䣨�ڴ�й©��
//}
//void test(void)
//{
//	char *str = NULL;
//	GetMemory(&str, 100);
//	strcpy(str, "hello");
//	printf(str);
//	////free(str);
//	////str = NULL;
//}
//int main()
//{
//	test();
//	return 0;
//}
//4.
//#include <stdio.h>
//#include <string.h>
//void test(void) 
//{
//	char *str = (char *)malloc(100);  
//	strcpy(str, "hello");
//	free(str);
//	if (str != NULL)  
//	{
//		strcpy(str, "world");//�Ƿ����ʣ�free�Ѿ����ռ仹�����ڴ棩   
//		printf(str); 
//	}
//	//�޸�
//	char *str = (char *)malloc(100);
//	strcpy(str, "hello");
//	free(str);
//	str = NULL;//��str��NULL
//	if (str != NULL)//Ȼ���жϲ��ǿվͿ��Կ���
//	{
//		strcpy(str, "world");   
//		printf(str);
//	}
//}
//int main()
//{
//	test();
//	return 0;
//}
//�������飨flexible array�������ṹ�е����һ��Ԫ��������δ֪��С�����飬��ͽ������������Ա
//�ص㣺
//�ṹ�е����������Աǰ���������һ��������Ա�� 
//sizeof ���ص����ֽṹ��С����������������ڴ档 
//�������������Ա�Ľṹ��malloc ()���������ڴ�Ķ�̬���䣬���ҷ�����ڴ�Ӧ�ô��ڽṹ�Ĵ�С������Ӧ ���������Ԥ�ڴ�С
//#include <stdio.h>
//��ͬ�ı��������ܱ�ʾ��ͬ
//����һ�֣�
//typedef struct st_type
//{
//	int i;
//	int a[];//���������Ա
//}S;
////���ڶ��֣�
////typedef struct st_type
////{
////	int i;
////	int a[0];//���������Ա
////}S;
//int main()
//{
//////	printf("%d", sizeof(S));//4
////	//���������ʹ��(һ���mallocʹ��)
////	int i = 0;
////	S* p = (S*)malloc(sizeof(S) + 10 * sizeof(int));//�������������Աa���൱�ڻ����100������Ԫ�ص������ռ�
////	p->i = 100;
////	for (i = 0; i < 10; i++)
////	{
////		p->a[i] = i;
////	}
////	free(p);
//	return 0;
//}

//���������ʹ��
//#include <stdio.h>
//#include <stdlib.h>
//typedef struct S
//{
//	int i;
//	int * a;
//}S;
//int main()
//{
//	int i = 0;
//	S* p = malloc(sizeof(S));
//	p->i = 100;
//	p->a = (int*)malloc(10 * sizeof(int));
//	for (i = 0; i < 10; i++)
//	{
//		p->a[i] = i;
//	}
//	free(p->a);
//	p->a = NULL;
//	free(p);
//	p = NULL;
//	return 0;
//}
//�������ִ���ʹ�ÿ������ͬ���Ĺ���
//����1�ĺô���1.�����ͷţ�һ�η��䣬һ���ͷţ�
//2.�����ڷ����ٶȣ��������ڴ���������߷����ٶȣ�Ҳ�����ڼ����ڴ���Ƭ��



