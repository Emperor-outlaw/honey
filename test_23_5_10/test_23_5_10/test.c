#include <stdio.h>

//����һ���������飬��ɶ�����Ĳ���
//ʵ�ֺ���init() ��ʼ������Ϊȫ0
//ʵ��print()  ��ӡ�����ÿ��Ԫ��
//ʵ��reverse()  �����������Ԫ�ص����á�
//Ҫ���Լ�������Ϻ����Ĳ���������ֵ��

////��ʼ������
//#include <stdlib.h>
//void InitArry(int* arr, int n)
//{
//	int i = 0;
//	for (i = 0; i < n; i++)
//		arr[i] = 0;
//}
////��ӡ����
//void PrintArry(int* arr, int n)
//{
//	int i = 0;
//	for (i = 0; i < n; i++)
//		printf("%d ", arr[i]);
//}
////��ת����
//void ReverseArry(int* arr, int n)
//{
//	int i = 0;
//	for (i = 0; i < n / 2; i++)
//	{
//		int tmp = arr[i];
//		arr[i] = arr[n - i - 1];
//		arr[n - i - 1] = tmp;
//	}
//}
//int main()
//{
//	int* arr = (int*)malloc(sizeof(int) * 10);
//	InitArry(arr, 10);
//	printf("�����ʼ����");
//	PrintArry(arr, 10);
//	for (int i = 0; i < 10; i++)
//	{
//		arr[i] = i + 1;
//	}
//	printf("\n��ת����ǰ��");
//	PrintArry(arr, 10);
//	ReverseArry(arr, 10);
//	printf("\n��ת�����");
//	PrintArry(arr, 10);
//	return 0;
//}


////ʵ��һ�������������ð������(��С����)
//void PrintArry(int* arr, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//void SwapElem(int* pa, int* pb)
//{
//	int tmp = *pa;
//	*pa = *pb;
//	*pb = tmp;
//}
//
//void BubbleSort(int* arr, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++) //�ܹ�����sz-1��ð��
//	{
//		int j = 0;
//		int flag = 0; //������־
//		for (j = 0; j < sz - 1 - i; j++) //һ��ð��
//		{
//			if (arr[j] > arr[j + 1])  //�������бȽ�
//			{
//				SwapElem(&arr[j], &arr[j + 1]); // ǰ�ߴ��ں��ߣ����н���
//				flag = 1;
//			}
//		}
//		if (flag == 0) //�Ѿ�����
//			break;
//	}
//}
//int main()
//{
//	int arr[10] = { -23,-23,23,3,1,6,0,0,53,4 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("����ǰ��");
//	PrintArry(arr, sz);
//	BubbleSort(arr, sz);
//	printf("\n�����");
//	PrintArry(arr, sz);
//	return 0;
//}



int main()
{
	double a = 3.14;
	int b = a;
	printf("%d", b);
	return 0;
}