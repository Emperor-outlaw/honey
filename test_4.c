#define _CRT_SECURE_NO_WARNINGS 1
//��дһ������reverse_string(char*string)(�ݹ�ʵ��)
//ʵ�֣��������ַ������ַ���������
//Ҫ�󣺲���ʹ�ÿ⺯��
//#include <stdio.h>//1�����淽��
//#include <assert.h>
//int My_strlen(const char* p)
//{
//	int count = 0;
//	assert(p);
//	while (*p++)
//	{
//		count++;
//	}
//	return count;
//}
//void reverse_string(char* str)
//{
//	int len = My_strlen(str);
//	char* left = str;
//	char* right = str+len-1;
//	assert(str);    //assert(p!=NULL)
//    while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	char arr[]= "abcdef";
//	printf("%s\n", arr);
//	reverse_string(arr);
//	printf("%s\n", arr);
//	return 0;
//}
//#include <stdio.h>//2���ݹ�ķ���
//int My_strlen(char* arr)
//{
//	int count = 0;
//	while (*arr++)
//	{
//		count++;
//	}
//	return count;
//}
//void reverse_string(char* str)
//{
//	char* left = str;
//	char* right = str + My_strlen(str)-1;
//	char tmp = *left;
//	*left = *right;
//	*right = '\0';
//	if (My_strlen(str) >= 2)
//		reverse_string(str+1);
//	*right = tmp;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	reverse_string(arr);
//	printf("%s\n", arr);
//	return 0;
//}
//�����ͺ����δ洢����ͬ����֤����8.22��
//#include <stdio.h>
//int main()
//{
//	int n = 9;
//	float* p = (float*)&n;
//	printf("n��ֵ��%d\n", n);
//	printf("*p��ֵ��%f\n", *p);
//	*p = 9.0;
//	printf("n��ֵ��%d\n", n);
//	printf("*p��ֵ��%f\n", *p);
//	return 0;
//����ָ��
//#include <stdio.h>
//int main()
//{
//	int arr[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int(*p)[10] = &arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%p ", p+i);
//	}
//	printf("\n");
//	for (i = 0; i < 10; i++)
//	{
//		printf("%p ", *p + i);
//	}
//	printf("\n");
//	for (i = 0; i < 10; i++)
//	{
//		printf("%p ",arr+i);
//	}
//	return 0;
//}
//����ָ��ʹ��
//#include <stdio.h>
//void print(int (*p)[5],int x,int y)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < x; i++)
//	{
//		for (j = 0; j < y; j++)
//		{
//			printf("%d ", *(*(p + i) + j));
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int arr[3][5] = {1,2,3,4,5,2,3,4,5,6,3,4,5,6,7};
//	print(arr, 3, 5);
//	return 0;
//}