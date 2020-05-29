#define _CRT_SECURE_NO_WARNINGS 1
////��������
#define MAX 1000   //����Ĵ�С
#define COUNT 1000  //���뵽�����е�Ԫ�ظ���
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <Windows.h>
void smp_inssort(int arr[], int start, int end)
{
	for (int i = start + 1; i <= end; i++)
	{
		if (arr[i - 1] > arr[i])
		{
			int tmp = arr[i];
			int j = i - 1;
			while (arr[j] > tmp && j >= start)
			{
				arr[j + 1] = arr[j];
				j--;
			}
			arr[j + 1] = tmp;
		}
	}
}


void bin_inssort(int arr[],int start, int end)
{
	for (int i = start + 1; i <= end; i++)
	{
		if (arr[i - 1] > arr[i])
		{
			int tmp = arr[i];
			int left = start;
			int right = i - 1;
			while (left <= right)     //�۰�������õ����۰����
			{
				int mid = (left + right) / 2;
				if (arr[mid] > tmp)
					right = mid - 1;  //�Ƚϵ�ֵ���������
				else
					left = mid + 1;   //�Ƚϵ�ֵ�������ұߣ��Ƚϵ�ֵ����arr[mid]�͵���arr[mid]�����)
			}
			for (int j = i - 1; j >= left; j++)  //���� �Ƚ�ֵ���Ԫ��ȫ������ƶ����Ӻ���ǰ�ƣ������˴���һ����ʱ��������ǰ�����ƻᵼ��Ԫ�ظ��ǣ�
				arr[j + 1] = arr[j];
			arr[left] = tmp;
		}
	}
}




void shell_sort(int arr[], int start, int end)
{
	int ret = 0;
	int increment = end - start + 1;    //��ʼ������
	do
	{
		increment = increment / 3 + 1;    // ֱ��Increment����1
		for (int i = start + increment; i <= end; i += increment)  //�������Ѱ���������е�Ԫ�أ�ÿ������������
		{
			if (arr[i - increment] > arr[i])                 //����ֱ�Ӳ�������
			{
				int tmp = arr[i];
				int j = i - increment;
				while (arr[j] > tmp && j >= start)
				{
					arr[j + increment] = arr[j];
					j -= increment;
				}
				arr[j + increment] = tmp;
			}
		}
	} while (increment > 1);
}

void randomnum(int arr[], int count)
{
	int i = 0;
	for (i = 0; i < count; i++)     
	{
		arr[i] = rand() % COUNT;
	}
}

void print(int arr[], int sz)
{
	for (int i = 0; i < sz; i++)
	{
		if (0 == i % 20)
			printf("\n");
		printf("%-3d  ", arr[i]);
	}
}

int main()
{
	double num = 0;
	clock_t start_time, finish_time;
	srand((unsigned int)time(NULL));
	int arr[MAX] = { 0 };       //����һ������
	int sz = sizeof(arr) / sizeof(arr[0]);
	randomnum(arr, COUNT);    //�����ȡ100�����ŵ�������
	


	//ֱ�Ӳ�������
	start_time = clock();   //����ʼִ�е�ʱ��
	Sleep(2000);
	smp_inssort(arr, 0, sz - 1); 
	finish_time = clock();     //���������ʱ��
	num = (double)(finish_time - start_time);
	printf("�������õ�ʱ����: %lf ms", num);
	print(arr, sz);             //��ӡ����Ԫ��
	printf("\n");


	//�۰��������
	start_time = clock();   //����ʼִ�е�ʱ��
	Sleep(2000);
    bin_inssort(arr, 0, sz - 1);
	finish_time = clock();     //���������ʱ��
	num = (double)(finish_time - start_time);
	printf("�������õ�ʱ����: %lf ms", num);
	print(arr, sz);             //��ӡ����Ԫ��
	printf("\n");
	

	//ϣ������
	start_time = clock();   //����ʼִ�е�ʱ��
	Sleep(2000);
	shell_sort(arr, 0, sz - 1);
	finish_time = clock();     //���������ʱ��
	num = (double)(finish_time - start_time);
	printf("�������õ�ʱ����: %lf ms", num);
	print(arr, sz);             //��ӡ����Ԫ��


	return 0;
}







//ѡ������
//#include <stdio.h>
//void smp_selesort(int arr[], int n)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < n; i++)
//	{
//		int k = i;
//		for (j = 1 + i; j < n; j++)
//		{
//			if (arr[k] > arr[j])
//			{
//				k = j;
//			}
//		}
//		if (i != k)
//		{
//			int tmp = arr[k];
//			arr[k] = arr[i];
//			arr[i] = tmp;
//		}
//	}
//}
//int main()
//{
//	int i = 0;
//	int arr[] = { 8, 1, 4, 9, 6, 3, 5, 2, 7, 0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	smp_selesort(arr, sz);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//�鲢����

