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
//1.�Կ�ָ��Ľ�Ӧ�ò���