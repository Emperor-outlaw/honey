#define _CRT_SECURE_NO_WARNINGS 1
////˳�����(�������±�Ϊ1��ʼ��������)
//#include <stdio.h>
//typedef struct Date
//{
//	int key;
//}Date;
//int sepsearch(Date arr[], int sz,int key)
//{
//	arr[0].key = key;
//	while (arr[sz].key != key)
//		sz--;
//	return sz;
//}
//int main()
//{
//	Date arr[21] = { 0 };
//	int n = 12;
//	int i = 0;
//	for (i = 1; i <= 20; i++)
//		arr[i].key = i;
//	int sz = 20;
//	printf("%d", sz);
//	int ret = sepsearch(arr, sz, n);
//	if (ret != 0)
//		printf("�ҵ��ˣ��±���:>%d\n", ret);
//	else
//		printf("�Ҳ���!\n");
//	return 0;
//}
 
////�۰���ң����ֲ��ң����������
//#include <stdio.h>
//int Binarysearch(int arr[], int n, int sz)
//{
//	int low = 0;
//	int hight = sz - 1;
//	while (low <= hight)
//	{
//		int mid = (low + hight) / 2;
//		if (n > arr[mid])
//			low = mid + 1;
//		else if (n < arr[mid])
//			hight = mid - 1;
//		else
//			return mid;
//	}
//	return -1;
//}
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int n = 3;
//	int ret = Binarysearch(arr, n, sz);
//	if (ret != -1)
//		printf("�ҵ��ˣ��±���;>%d\n", ret);
//	else
//		printf("�Ҳ�����\n");
//	return 0;
//}

////��������
//#include <stdio.h>
//typedef struct DateType
//{
//	int key;
//	int link;
//}DateType;
//int IndexSequelSearch(DateType arr1[], int arr2[], int sz, int key)
//{
//	int i = 0;
//	int j = 0;
//	while (i < sz-2 && key > arr1[i].key)
//		i++;
//	if (i == 4)
//		return -1;
//	else
//	{
//		j = arr1[i].link;
//		while (key != arr2[j] && j < arr1[i + 1].link)
//			j++;
//		if (key == arr2[j])
//			return j;
//		else
//			return -1;
//	}
//}
//int main()
//{
//	//����һ��������
//	DateType arr1[5] = { { 3, 0 }, { 50, 6 }, { 78, 12 }, { 365, 18 }, { 0, 19 } };
//	//����һ�����ұ�
//	int arr2[] = { -12, -1, 0, 1, 2, 3, 8, 9, 12, 35, 45, 50, 55, 58, 60, 62, 64, 78, 80, 89, 99, 101, 108, 365 };
//	int n = 580;
//	int ret = IndexSequelSearch(arr1, arr2, 5, n);
//	if (ret == -1)
//		printf("�Ҳ�����\n");
//	else
//		printf("�ҵ��ˣ��±���:>%d\n", ret);
//	return 0;
//}

////��ϣ���ҷ�������������̽�⴦���ͻ
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>
//#define Tablesize 20
//typedef enum Status
//{
//	fail,
//	success
//}Status;
//typedef struct HashTable
//{
//	int* date;
//	int count;//��ŵ�Ԫ�ظ���
//}HashTable;
//int Hash(key)//��ϣ����
//{
//	return key % 13;
//}
//void Init_Hash(HashTable* PH)
//{
//	PH->date = (int*)calloc(Tablesize, sizeof(int));
//}
//Status Create_Hash(HashTable* PH,int arr[],int sz)
//{
//	Init_Hash(PH);
//	Status s = fail;
//	int p = 0;
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		while (1)
//		{
//			p = Hash(arr[i]);
//begin:  	    	if (PH->date[p] == 0)
//			{
//				PH->date[p] = arr[i];
//				PH->count++;
//				break;
//			}
//			else
//			{
//				p = Hash(p + 1);//�����ͻ
//				goto begin;
//			}
//		}
//	}
//	if (PH->count == sz)
//		s = success;
//	return s;
//}
//Status Search_Hash(HashTable H, int key, int* p, int* c)
//{
//	Status s = fail;
//	*p = Hash(key);
//	while (H.date[*p])
//	{
//		if (H.date[*p] != key)
//		{
//			*p = Hash(*p + 1);//������һ��
//			(*c)++;
//		}
//		else
//		{
//			s = success;
//			(*c)++;
//			return s;
//		}
//	}
//	return s;
//}
//void Recreat_Hash(HashTable* PH)
//{
//	int* ptr = NULL;
//	ptr = realloc(PH->date, (Tablesize + Tablesize / 4)* sizeof(int));//ÿ������ԭ������1/4
//	if (ptr)
//		return;
//	else
//		PH->date = ptr;
//}
//Status Insert_Hash(HashTable* PH, int e)
//{
//	Status s = fail;
//	int p = 0;//��ϣ��ַ
//	int c = 0;//��ͻ�Ĵ���
//	if (Search_Hash(*PH, e, &p, &c))
//		return s;//�������ڹ�ϣ���в���Ҫ����
//	if (c < Tablesize / 2)
//	{
//begin:		p = Hash(e);
//		while (1)
//		{
//			if (PH->date[p])
//				p = Hash(p + 1);//�����ͻ
//			else
//			{
//				PH->date[p] = e;
//				PH->count++;
//				s = success;
//				return s;
//			}
//		}
//	}
//	else
//	{
//		Recreat_Hash(PH);//�ؽ���ϣ��(����Ҫ��ԭ�������ݽ��п�������Ϊrecallocֻ����ԭ���ռ���������˿ռ�)
//		printf("�ؽ���ϣ��ɹ���\n");
//		goto begin;
//	}
//}
//void Print(HashTable* PH)
//{
//	int i = 0; 
//	for (i = 0; i < Tablesize; i++)
//	{
//		printf("%d ", PH->date[i]);
//	}
//}
//int main()
//{
//	//�ؼ�������
//	int arr[] = { 19, 14, 23, 01, 68, 20, 84, 27, 55, 11, 10, 79 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int p = 0;//��ϣ��ַ
//	int c = 0;//��ͻ����
//	int key = 01;//Ҫ���ҵĹؼ���
//	int e = 15;//Ҫ�����Ԫ��
//	HashTable H ;//����һ����ϣ��
//	Create_Hash(&H, arr, sz);//������ϣ��
//	Insert_Hash(&H, e);
//	Search_Hash(H, key, &p, &c);
//	Print(&H);
//	free(H.date);
//	H.date = NULL;
//	return 0;
//}

