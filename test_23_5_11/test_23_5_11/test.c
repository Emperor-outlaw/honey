#include <stdio.h>


////����������������������ʱ������
//void SwapElemOne(int* pa, int* pb) //ͨ�����ķ�ʽ
//{
//	*pa = *pa ^ *pb;
//	*pb = *pa ^ *pb;
//	*pa = *pa ^ *pb;
//}
//
//void SwapELemTwo(int* pa, int* pb) //ͨ���Ӽ���
//{
//	*pa = *pa + *pb;
//	*pb = *pa - *pb;
//	*pa = *pa - *pb;
//}
//
//int main()
//{
//	int a = -10;
//	int b = 20;
//	printf("����ǰ��a = %d, b = %d\n", a, b);
//	//SwapElemOne(&a, &b);
//	SwapELemTwo(&a, &b);
//	printf("������a = %d, b = %d\n", a, b);
//	return 0;
//}


////ͳ�ƶ�������1�ĸ���
////����һ(����n��ÿһλ��1����)
//int CountBitOne(int n)
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
//
////��������ÿ������1���ٽ����n���룩(�ͷ���һ�����ƣ�ֻ����һ������λ1,һ������λn)
//int CountBitTwo(int n)
//{
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((1 << i) & n) == (1 << i)) //ע�������д�����Ͳ�����1��
//		{
//			count++;
//		}
//	}
//	return count;
//}
////��������ͨ��ȡģ�ͳ���(�Ը�����ʱ�򲻹��ã�����ȡģ��Ӱ��)
//int CountBitThree(int n)
//{
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if ((n % 2) == 1)
//		{
//			count++;
//			n /= 2;
//		}
//	}
//	return count;
//}
////�����ģ�n = n & (n - 1)��
//int CountBitFour(int n)
//{
//	int i = 0;
//	int count = 0;
//	while (n)
//	{
//		n &= n - 1;
//		count++;
//	}
//	return count;
//}
//
//int main()
//{
//	int n = 127;
//	int ret1 = CountBitOne(n);
//	int ret2 = CountBitTwo(n);
//	int ret3 = CountBitThree(n);
//	int ret4 = CountBitFour(n);
//	printf("����һ��count = %d\n", ret1);
//	printf("��������count = %d\n", ret2);
//	printf("��������count = %d\n", ret3);
//	printf("�����ģ�count = %d\n", ret4);
//	return 0;
//}


//��ӡ���������Ƶ�����λ��ż��λ��
//int main()
//{
//	//˼·���ֱ���������ÿһλ���ŵ������У���������ӡ
//	int n = 10;
//	int arr1[16] = { 0 };
//	int arr2[16] = { 0 };
//	int i = 0, k = 0, j = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (i % 2 == 0) //����λ
//		{
//			arr1[k++] = (n >> i) & 1;
//		}
//		else
//		{
//			arr2[j++] = (n >> i) & 1;
//		}
//	}
//	printf("����λ��");
//	for (i = k - 1; i >= 0; i--)
//	{
//		printf("%d ", arr1[i]);
//	}
//	printf("\nż��λ��");
//	for (i = j - 1; i >= 0; i--)
//	{
//		printf("%d ", arr2[i]);
//	}
//	return 0;
//}


//���������������в�ͬλ�ĸ���
//����һ���ֱ�����ÿһλ���бȽ�
int GetDifBitCountOne(int a, int b)
{
	int i = 0;
	int count = 0;
	for (i = 0; i < 32; i++)
	{
		if (((a >> i) & 1) != ((b >> i) & 1))
			count++;
	}
	return count;
}

//���������Ƚ������������ͳ�������������λ1�ĸ���
int GetDifBitCountTwo(int a, int b)
{
	int c = a ^ b;
	int count = 0;
	while (c)
	{
		c &= c - 1;
		count++;
	}
	return count;
}

int main()
{
	int a = 1999;
	int b = 2299;
	int ret = GetDifBitCountOne(a, b);
	printf("����һ: ret = %d\n", ret);
	ret = GetDifBitCountTwo(a, b);
	printf("������: ret = %d\n", ret);
	return 0;
}