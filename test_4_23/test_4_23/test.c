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