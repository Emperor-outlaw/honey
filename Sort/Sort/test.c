#define _CRT_SECURE_NO_WARNINGS 1
////��һ�֣���������(1.(��)ֱ�Ӳ������� 2.�۰��������  3.ϣ������)
//#define MAX 100   //����Ĵ�С
//#define COUNT 100  //���뵽�����е�Ԫ�ظ���
//#include <stdio.h>
//#include <time.h>
//#include <stdlib.h>
//#include <Windows.h>
//void smp_inssort(int arr[], int start, int end)
//{
//	for (int i = start + 1; i <= end; i++)
//	{
//		if (arr[i - 1] > arr[i])
//		{
//			int tmp = arr[i];
//			int j = i - 1;
//			while (arr[j] > tmp && j >= start)
//			{
//				arr[j + 1] = arr[j];
//				j--;
//			}
//			arr[j + 1] = tmp;
//		}
//	}
//}
//
//
//void bin_inssort(int arr[],int start, int end)
//{
//	for (int i = start + 1; i <= end; i++)
//	{
//		if (arr[i - 1] > arr[i])
//		{
//			int tmp = arr[i];
//			int left = start;
//			int right = i - 1;
//			while (left <= right)     //�۰�������õ����۰����
//			{
//				int mid = (left + right) / 2;
//				if (arr[mid] > tmp)
//					right = mid - 1;  //�Ƚϵ�ֵ���������
//				else
//					left = mid + 1;   //�Ƚϵ�ֵ�������ұߣ��Ƚϵ�ֵ����arr[mid]�͵���arr[mid]�����)
//			}
//			for (int j = i - 1; j >= left; j++)  //���� �Ƚ�ֵ���Ԫ��ȫ������ƶ����Ӻ���ǰ�ƣ������˴���һ����ʱ��������ǰ�����ƻᵼ��Ԫ�ظ��ǣ�
//				arr[j + 1] = arr[j];
//			arr[left] = tmp;
//		}
//	}
//}
//
//
//
//
//void shell_sort(int arr[], int start, int end)
//{
//	int ret = 0;
//	int increment = end - start + 1;    //��ʼ������
//	do
//	{
//		increment = increment / 3 + 1;    // ֱ��Increment����1
//		for (int i = start + increment; i <= end; i += increment)  //�������Ѱ���������е�Ԫ�أ�ÿ������������
//		{
//			if (arr[i - increment] > arr[i])                 //����ֱ�Ӳ�������
//			{
//				int tmp = arr[i];
//				int j = i - increment;
//				while (arr[j] > tmp && j >= start)
//				{
//					arr[j + increment] = arr[j];
//					j -= increment;
//				}
//				arr[j + increment] = tmp;
//			}
//		}
//	} while (increment > 1);
//}
//
//void randomnum(int arr[], int count)
//{
//	int i = 0;
//	for (i = 0; i < count; i++)     
//	{
//		arr[i] = rand() % COUNT;
//	}
//}
//
//void print(int arr[], int sz)
//{
//	for (int i = 0; i < sz; i++)
//	{
//		if (0 == i % 20)
//			printf("\n");
//		printf("%-3d  ", arr[i]);
//	}
//}
//
//int main()
//{
//	double num = 0;
//	clock_t start_time, finish_time;
//	srand((unsigned int)time(NULL));
//	int arr[MAX] = { 0 };       //����һ������
//	randomnum(arr, COUNT);    //�����ȡCOUNT�����ŵ�������
//	
//
//
//	//1.(��)ֱ�Ӳ�������
//	start_time = clock();   //����ʼִ�е�ʱ��
//	Sleep(2000);
//	smp_inssort(arr, 0, MAX - 1); 
//	finish_time = clock();     //���������ʱ��
//	num = (double)(finish_time - start_time);
//	printf("�������õ�ʱ����: %lf ms", num);
//	print(arr, MAX);             //��ӡ����Ԫ��
//	printf("\n");
//
//
//	//2.�۰��������
//	start_time = clock();   //����ʼִ�е�ʱ��
//	Sleep(2000);
//    bin_inssort(arr, 0, MAX - 1);
//	finish_time = clock();     //���������ʱ��
//	num = (double)(finish_time - start_time);
//	printf("�������õ�ʱ����: %lf ms", num);
//	print(arr, MAX);             //��ӡ����Ԫ��
//	printf("\n");
//	
//
//	//3.ϣ������
//	start_time = clock();   //����ʼִ�е�ʱ��
//	Sleep(2000);
//	shell_sort(arr, 0, MAX - 1);
//	finish_time = clock();     //���������ʱ��
//	num = (double)(finish_time - start_time);
//	printf("�������õ�ʱ����: %lf ms", num);
//	print(arr, MAX);             //��ӡ����Ԫ��
//
//
//	return 0;
//}




////�ڶ��֣�ѡ������(1.��ѡ������  2.�鲢����)
//#include <stdio.h>
//#include <stdlib.h>
//#include <time.h>
//#include <Windows.h>
//#define COUNT 100  //���������е�Ԫ��
//#define MAX  100   //����Ĵ�С
//void smp_selesort(int arr[], int n)
//{
//	//��һ��
//	int i = 0;
//	int j = 0;
//	int tmp = 0;
//	for (i = 0; i < n - 1; i++)
//	{
//		int k = i;
//		for (j = i + 1; j < n; j++)
//		{
//			if (arr[j] < arr[k])   //ÿ�η��ֺ���Ԫ�رȵ�ǰԪ��СֻҪ��Ԫ���±긳���������ⷽ�����еĶ��Ԫ�ؽ�����
//				k = j;
//		}
//		if (k != i)                //�ж��Ƿ������±�ĸ�ֵ
//		{
//			tmp = arr[i];
//			arr[i] = arr[k];
//			arr[k] = tmp;
//		}
//	}
//	//�ڶ���
//	//int i = 0;
//	//int j = 0;
//	//for (i = 0; i < n - 1; i++)
//	//{
//	//	for (j = i + 1; j < n; j++)
//	//	{
//	//		if (arr[j] < arr[i])     //ÿ�η��ֺ���Ԫ�رȵ�ǰԪ��С��Ҫ����һ��
//	//		{
//	//			int tmp = arr[i];
//	//			arr[i] = arr[j];
//	//			arr[j] = tmp;
//	//		}
//	//	}
//	//}
//}
//
//
//void randomnum(int arr[], int count)
//{
//	int i = 0;
//	for (i = 0; i < count; i++)     
//	{
//		arr[i] = rand() % COUNT;
//	}
//}
//
//void print(int arr[], int sz)
//{
//	for (int i = 0; i < sz; i++)
//	{
//		if (0 == i % 20)
//			printf("\n");
//		printf("%-3d  ", arr[i]);
//	}
//}
//
//
//void merge(int arr[], int parr[], int start,int mid, int end)       
//{
//	int Lpos = start;
//	int Rpos = mid + 1;
//	int tmpLpos = start;
//	while (Lpos <= mid  && Rpos <= end)
//	{
//		if (arr[Lpos] > arr[Rpos])
//			parr[tmpLpos++] = arr[Rpos++];  //�ڶ���������е�Ԫ��С�ڵ�һ��������е�Ԫ��
//		else
//			parr[tmpLpos++] = arr[Lpos++];  //��һ��������е�Ԫ��С�ڵڶ���������е�Ԫ�أ���������������е�Ԫ�����
//	}
//	if (Lpos <= mid)    //��һ�������û��ȫ��ת�Ƶ�Parr[]������
//	{
//		while (Lpos <= mid)   //����һ���������ʣ���Ԫ��ȫ��ת�Ƶ�parr[]��
//			parr[tmpLpos++] = arr[Lpos++];
//	}
//	else              //�ڶ��������û��ȫ��ת�Ƶ�parr[]������
//	{
//		while (Rpos <= end)    //���ڶ����������ʣ���Ԫ��ȫ��ת�Ƶ�parr[]��
//			parr[tmpLpos++] = arr[Rpos++];
//	}
//	while (Rpos-- > start, tmpLpos--) //��parr[]�е�Ԫ��ת�ص�ԭ���ǵ��������
//	{
//		arr[Rpos] = parr[tmpLpos];
//	}
//}
//
//
//void merge_sort(int arr[],int parr[], int start, int end)
//{
//	if (start < end)
//	{
//		int mid = (start + end) / 2;
//		merge_sort(arr, parr, start, mid);     //�����������εݹ�����
//		merge_sort(arr, parr, mid + 1, end);   //�����Ұ�����εݹ�����
//		merge(arr, parr, start, mid, end);     //���źõ���������ϲ�
//	}
//
//}
//
//
//int main()
//{
//	double num = 0;
//	clock_t start_time, finish_time;
//	srand((unsigned int)time(NULL));
//	int arr[MAX] = { 0 };       //����һ������
//	randomnum(arr, COUNT);    //�����ȡCOUNT�����ŵ�������
//
//	//1.��ѡ������
//	printf("��ѡ������\n");
//	start_time = clock(); 
//	Sleep(3000);
//	smp_selesort(arr, MAX);
//	finish_time = clock();
//	num = (double)(finish_time - start_time);
//	system("color 05");
//	printf("�������õ�ʱ����: %lf ms", num);
//	print(arr, MAX);             //��ӡ����Ԫ��
//	printf("\n");
//
//
//	//2.�鲢����
//	int *parr = calloc(MAX, sizeof(int));   //����һ����arr[]һ��������飬�������ϲ�������������ʱ�����ϲ��������Ԫ����ʱ�������.
//	if (parr != NULL)
//		;     //����ɹ�
//	else
//	{
//		printf("��������ʧ��!\n");
//		return 0;
//	}
//	printf("�鲢����\n");
//	start_time = clock();
//	Sleep(3000);
//	merge_sort(arr, parr, 0,  MAX - 1);
//	finish_time = clock();
//	free(parr);           //������Ŀռ��ͷŵ�
//	parr = NULL;  
//	num = (double)(finish_time - start_time);
//	system("color 05");
//	printf("�������õ�ʱ����: %lf ms", num);
//	print(arr, MAX);      //��ӡ����Ԫ��
//	printf("\n");
//
//	return 0;
//}

////�����֣���������(1.ð������ 2.��������)
//#include <stdio.h>
//#include <time.h>
//#include <Windows.h>
//#define MAX 100
//#define COUNT MAX
//
//void randomnum(int arr[], int count)
//{
//	int i = 0;
//	for (i = 0; i < count; i++)     
//	{
//		arr[i] = rand() % COUNT;
//	}
//}
//
//void print(int arr[], int sz)
//{
//for (int i = 0; i < sz; i++)
//{
//	if (0 == i % 20)
//		printf("\n");
//	printf("%-3d  ", arr[i]);
//}
//}
//
//
//void bubble_sort(int arr[], int n)
//{
//	//int flag = 1;
//	//int i = 0;
//	//int m = n;
//	//while (n-- > 1 && flag ==1 )
//	//{
//	//	for (i = 0; i < n; i++)
//	//	{
//	//		flag = 0;
//	//		if (arr[i] > arr[i + 1])
//	//		{
//	//			flag = 1;
//	//			int tmp = arr[i];
//	//			arr[i] = arr[i + 1];
//	//			arr[i + 1] = tmp;
//	//		}
//	//	}
//	//}
//
//
//	//��ð������ĸĽ�
//	int k = 0;  //���ڼ�¼ÿ��forѭ��������ν�����Ԫ���±�
//	while (n-- > 1)
//	{
//		k = 1;
//		for (int i = 0; i < n; i++)
//		{
//			if (arr[i] > arr[i + 1])
//			{
//				int tmp = arr[i];
//				arr[i] = arr[i + 1];
//				arr[i + 1] = tmp;
//				k = i + 1;
//			}
//		}
//		n = k;
//	}
//}
//
//
//
//void qk_sort(int arr[], int low, int high)
//{
//	//��Ŧ��ÿ�������еĵ�һ��Ԫ��
//	/*int left = low;
//	int right = high;
//	int tmp = arr[left];
//	if (left >= right)
//		return;
//	while (left < right)
//	{
//		while (arr[right] >= tmp && left < right)
//			right--;
//		if (left < right)
//		{
//			arr[left] = arr[right];
//			left++;
//		}
//		while (arr[left] <= tmp && left < right)
//			left++;
//		if (left < right)
//		{
//			arr[right] = arr[left];
//			right--;
//		}
//	}
//	arr[left] = tmp;
//	qk_sort(arr, low, left - 1);
//	qk_sort(arr, left + 1, high);*/
//
//
//	//������ĸĽ���ȥ����Ԫ������Ŧ��Ƶ��������
//	int left = low;
//	int right = high;
//	int tmp = arr[left];
//	if (left >= right)
//		return;
//	while (left < right)
//	{
//		while (arr[right] >= tmp && left < right)
//			right--;
//		while (arr[left] <= tmp && left < right)
//			left++;
//		if (left < right)
//		{
//			int ret = arr[right];
//			arr[right] = arr[left];
//			arr[left] = ret;
//		}
//	}
//	//��Ŧ��λ
//	arr[low] = arr[left];
//	arr[left] = tmp;
//
//	qk_sort(arr, low, left - 1);
//	qk_sort(arr, left + 1, high);
//
//
//	////�������㷨�ĸĽ���ȥ����Ԫ������Ŧ��Ƶ������������Ŧ��������ȡ�з���
//	////����ȡ�з�
//	//int left = low;
//	//int right = high;
//	//int mid = (left + right) / 2;
//	//int tmp = 0;
//	//if (high - low == 1)
//	//{
//	//	if (arr[high] < arr[low])
//	//	{
//	//		tmp = arr[high];
//	//		arr[high] = arr[low];
//	//		arr[low] = tmp;
//	//	}
//	//	return;
//	//}
//	//else if (high == low)
//	//	return;
//	////�������������ҡ���������Ԫ���У��м��Ԫ�ط������ұ�
//	//if ((arr[left] - arr[mid]) > 0 && (arr[right] - arr[mid]) > 0)
//	//{
//	//	if (arr[left] < arr[right])
//	//	{
//	//		tmp = arr[left];
//	//		arr[left] = arr[right];
//	//		arr[right] = tmp;
//	//	}
//	//}
//	//else if ((arr[left] - arr[mid]) < 0 && (arr[right] - arr[mid]) < 0)
//	//{
//	//	if (arr[left] > arr[right])
//	//	{
//	//		tmp = arr[left];
//	//		arr[left] = arr[right];
//	//		arr[right] = tmp;
//	//	}
//	//}
//	//else
//	//{
//	//	tmp = arr[mid];
//	//	arr[mid] = arr[right];
//	//	arr[right] = tmp;
//	//}
//	//while (left < right)
//	//{
//	//	while (arr[left] <= tmp && left < right)
//	//	{
//	//		left++;
//	//  	}
//	//	while (arr[right] >= tmp && left < right)
//	//	{
//	//		right--;
//	//	}
//	//	if (left < right)
//	//	{
//	//		int ret = arr[left];
//	//		arr[left] = arr[right];
//	//		arr[right] = ret;
//	//	}
//	//}
//	////��Ŧ��λ
//	//arr[high] = arr[right];
//	//arr[right] = tmp;
//
//	//qk_sort(arr, low, right - 1);   //�ݹ�����������Ŧ���������
//	//qk_sort(arr, right + 1, high);  //�ݹ�����������Ŧ���ұ�����
//
//}
//
//
//
//int main()
//{
//	double num = 0;
//	clock_t start_time, finish_time;
//	srand((unsigned int)time(NULL));
//	int arr[MAX] = { 0 };       //����һ������
//	randomnum(arr, COUNT);    //�����ȡCOUNT�����ŵ�������
//
//
//
//	////1.��ѡ������
//	//system("color 05");
//	//printf("ð��������Ϊ��\n");
//	//start_time = clock();
//	//Sleep(2000);
//	//bubble_sort(arr, MAX);
//	//finish_time = clock();
//	//num = (double)(finish_time - start_time);
//	//printf("�������õ�ʱ����: %lf ms", num);
//	//print(arr, MAX);             //��ӡ����Ԫ��
//	//printf("\n");
//
//
//
//	//��������
//	system("color 05");
//	printf("����������Ϊ��\n");
//	start_time = clock();
//	Sleep(2000);
//	qk_sort(arr, 0, MAX - 1);
//	finish_time = clock();
//	num = (double)(finish_time - start_time);
//	system("color 0E");
//	printf("�������õ�ʱ����: %lf ms", num);
//	print(arr, MAX);             //��ӡ����Ԫ��
//	printf("\n");
//
//	return 0;
//}


#include <stdio.h>
void HeapAdjust(int r[], int i, int j);
void HeapSort(int r[], int n);
int main()
{
	int r[] = { 53, 34, 76, 23, 55, 28, 63, 88, 34, 66 };
	HeapSort(r, 10);
	int i;
	for (i = 0; i<10; i++)
	{
		printf("%d ", r[i]);
	}
	return 0;
}

void HeapAdjust(int r[], int i, int j) //������
{
	int child = 2 * i;
	int temp = r[i];    //temp��ʱ��Ÿ����
	while (child <= j) //�ش�������µ���
	{
		if (child<j && r[child + 1]>r[child]) child++;
		if (temp >= r[child]) break;
		r[child / 2] = r[child];
		child = 2 * child;
	}
	r[child / 2] = temp;
}

void HeapSort(int r[], int n)   //����
{
	int i;
	for (i = (n - 1) / 2; i >= 0; --i)
	{
		HeapAdjust(r, i, n - 1);  //��ʼ����
	}
	for (i = n - 1; i>0; --i)
	{
		//����ǰ�Ѷ�Ԫ���뵱ǰ��βԪ�ػ���
		int temp = r[0];
		r[0] = r[i];
		r[i] = temp;
		HeapAdjust(r, 0, i - 1); //��ʣ�µ�Ԫ�����µ����ɶ�
	}
}




