#define _CRT_SECURE_NO_WARNINGS 1
//��ȡ������ÿһλ
//#include <stdio.h>
//void put(int n)
//{
//	if (n < 10)
//		printf("%d ", n);
//	else
//		put(n / 10);
//	    printf("%d ", n % 10);
//}
//int main()
//{
//	int n = 1234;
//	put(n);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int n = 12345;
//
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	char ch = 'a'+1;
//	printf("%d", ch);
//	return 0;
//
// //   unsigned int  n = -1;
//	//printf("%u ", n);
//	//return 0;
//}
//4294967295
//дһ���������ز�����������1�ĸ�����15  00001111  4��1
//#include <stdio.h>//��һ�ֽⷨ
//int count_one_bits( int n)//�޷����ظ����еĶ�����1�ĸ���
//int count_one_bits(unsigned int n)//<�����Ľ���
//{
//	int count = 0;
//	while (n)
//	{
//		if (n % 2 == 1)
//			count++;
//		n = n / 2;
//	}
//	return count;
//}
//int main()
//{
//    int n = -1;
//	int ret = count_one_bits(n);
//	printf("ret=%d\n", ret);
//	return 0;
//}
//#include <stdio.h>//�ڶ��ֽⷨ
//int count_one_bits(int n)
//{
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((n >> i) & 1) == 1)
//			count++;
//	}
//	return count;
//}
//int main()
//{
//	int n = -1;
//	int ret = count_one_bits(n);
//	printf("ret=%d\n", ret);
//	return 0;
//}
//�����ֽⷨ(�ռ��ⷨ)
//#include <stdio.h>
//int count_one_bits(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		n = n&(n - 1);//ÿִ��һ�Σ��������Ӽ�
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int n = 15;
//	//n=n&(n-1)ÿִ��һ�ζ�������һ��1,ֱ��n����0
//	//1111   n
//	//1110   n-1
//	//1110   n
//	//1101   n-1
//	//1100   n
//	int ret = count_one_bits(n);
//	printf("ret=%d\n", ret);
//	return 0;
//}
//��ȡһ�������������������Ե�ż��������λ���ֱ�������������С�
//#include <stdio.h>
//int main()
//{
//	int n = 10;
//	int i = 0;
//	int j = 0;
//	printf("ż��λΪ��");
//	for (i = 31; i >= 1; i -= 2)//��ȡ����ż��λ
//	{
//		printf("%d ", (n >> i) & 1);
//	}
//	printf("\n");
//	printf("����λΪ��");
//	for (i = 30; i >= 0; i -= 2)//��ȡ��������λ
//	{
//		printf("%d ", (n >> i) & 1);
//	}
//	printf("\n");
//	return 0;
//}
//����Int��32λ������m��n�Ķ����Ʊ���У��ж��ٸ�λ��bit����ͬ
//���ӣ�1999  2299   ��7��
//#include <stdio.h>
//int count_one_bits(unsigned int n)
//{
//	int count = 0;
//	while (n)
//	{
//		n = n&(n - 1);
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int n = 15;
//	int m = 13;
//	int tmp = n^m;//�������� ��λ�����Խ���ͬ�Ķ�����λת��λ1��Ȼ�������1�ĸ�����Ϊԭ����������ͬ�Ķ�����λ��
//	printf("ret=%d\n",count_one_bits(tmp));
//	return 0;
//}
