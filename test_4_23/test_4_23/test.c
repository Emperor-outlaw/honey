#define _CRT_SECURE_NO_WARNINGS 1
//��д��������������ķ���ֵ��value�Ķ�����λģʽ�����ҷ�ת�������ֵ
//unsigned int reverse_bit(unsigned int value)
//��32λ������25������ת���ֵ��2550136832
//#include <stdio.h>
//#include <math.h>
////unsigned int reverse_bit(unsigned int num)
////{
////	int i = 0;
////	unsigned int sum = 0;
////	for (i = 0; i < 32; i++)
////	{
//////		sum += ((num >> i) & 1)*pow(2, 31 - i);//ʹ���˿⺯��pow
////		sum += ((num >> i) & 1) * (1 << (31 - i));//��λ����
////	}
////	return sum;
////}
//unsigned int reverse_bit(unsigned int num)
//{
//	int i = 0;
//	unsigned int ret = 0;
//	for (i = 0; i < 32; i++)
//	{
//		ret <<= 1;
//		ret |= ((num >> i) & 1);
//	}
//	return ret;
//}
//int main()
//{
//	unsigned int num = 25;
//	unsigned int ret = reverse_bit(num);
//	printf("%u\n", ret);
//	return 0;
//}
//��ʹ�ã�a+b��/2  ���ַ�����������֮�͵�һ��
//#include <stdio.h>
//int main()
//{
//	int a = 15;
//	int b = 20;
////	int average = a + (b - a) / 2;
////	int average = (a >> 1) + (b >> 1);//��λ���� = ԭ���������Զ� ����λ���� = ԭ���������Զ������������
////	int average = a + ((b - a) >> 1);
//	//�����ϼ����ǣ����������Ķ�����λ��Ӧ�������Զ�ӦȨ��Ȼ������ٳ��Զ�
//	int average = (a&b) + ((a^b) >> 1);//(a&b)������������ͬ�Ķ�����λ�Ĵ�С��һ�룬��a^b��>>1������ǲ�ͬ������λ�Ĵ�С��һ��
//	printf("%d\n", average);
//	return 0;
//}
//���ʵ�֣�һ��������ֻ��һ�����ֳ�����һ�Σ������������ֶ��ǳɶԳ��ֵģ����ҳ�������֣�ʹ��λ���㣩
//#include <stdio.h>
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 1, 2, 3, 4 };//0��λ����κ�������������������ͬ������λ������0
//	//int sz = sizeof(arr) / sizeof(arr[0]);
//	//int i = 0;
//	//int ret = 0;
//	//for (i = 0; i < sz ; i++)
//	//{
//	//	ret ^=arr[i];
//	//}
//	//printf("%d\n", ret);
//
//	return 0;
//}
//��һ���ַ����������Ϊ:"student a am i"
//�뽫��������ݸ�Ϊ"i am a student"
//Ҫ�󣺲���ʹ�ÿ⺯����ֻ�ܿ������޸��ռ䣨�ռ�������ַ����ĳ����޹أ�
//student a am i����>i ma a tneduts����>i am a student
//#include <stdio.h>
//#include <assert.h>
//int My_strlen(const char* str)
//{
//	int count = 0;
//	assert(str != NULL);
//	while (*str++)
//	{
//		count++;
//	}
//	return count;
//}
//void reverse_str(char* left, char* right)
//{
//	assert(left != NULL && right != NULL);
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//void reverse_string(char arr[], int sz)
//{
//	char* start = NULL;
//	char* end = arr;
//	//1�����ַ�����ת
//	int len = My_strlen(arr);
//	reverse_str(arr, arr + len - 1);
//	//2����ÿ�����ʷ�ת
//	while (*end)
//	{
//		start = end;
//		while ((*end) != ' ' && (*end) != '\0')
//		{
//			end++;
//		}
//		reverse_str(start, end - 1);
//		if ((*end) != '\0')
//			end++;
//	}
//}
//int main()
//{
//	char arr[] = "student a am i";
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	reverse_string(arr, sz);
//	printf("%s\n", arr);
//	return 0;
//}

