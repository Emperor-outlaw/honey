#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;
//ѡ��������С����
void select_sort(int* xx, int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		int min = i;
		for (int j = i + 1; j < n - 1; j++)
		{
			if (xx[j] < xx[min])
				min = j;
		}
		if (min != i)
		{
			//��λ���ķ�������������
			xx[i] = xx[i] ^ xx[min];
			xx[min] = xx[i] ^ xx[min];
			xx[i] = xx[i] ^ xx[min];
		}
	}
}

//��������(1)
void insert_sort1(int* xx, int n)
{
	//�ӵڶ���Ԫ��xx[i]��ʼ��Ϊ�������Ԫ�أ������ҵ����ʵ�λ�ò��뵽����������
	for (int i = 1; i < n; i++)
	{
		////��0��i˳����ң����±�λ0��Ԫ�ص�i��Ԫ�أ��˴�Ϊ�������У���Ϊxx[i]�ҵ����ʲ���λ��
		for (int j = 0; j < i; j++)
		{
			if (xx[j] > xx[i])
			{
				int tmp = xx[i];
				int k = 0;
				for (k = i; k > j; k--)
				{
					xx[k] = xx[k - 1];
				}
				xx[k] = tmp;
			}
		}
	}
}

////��������(2)
//void insert_sort2(int* xx, int n)
//{
//	for (int i = 1; i < n; i++)
//	{
//		//�������
//		int j = i - 1;
//		int tmp = xx[i];
//		while (tmp < xx[j])
//		{
//			xx[j + 1] = xx[j];
//			j--;
//		}
//		xx[j + 1] = tmp;
//	}
//}

//ð������
void bubble_sort(int* xx, int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		int flag = 1;
		for (int j = 0; j < n - 2 - i; j++)
		{
			if (xx[j] > xx[j + 1])
			{
				int tmp = xx[j];
				xx[j] = xx[j + 1];
				xx[j + 1] = tmp;
				flag = 0;
			}
		}
		if (flag)
		{
			break;
		}
	}
}

//��ʾ����
void dis_play(int* xx, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << xx[i] << " ";
	}
	cout << endl;
}

int main()
{
	int xx[10] = { -34, 54, 4, 32, 6, 4, 0, 5, 2, 99 };

	////ѡ������
	//select_sort(xx, 10);
	//dis_play(xx, 10);

	//��������
	////insert_sort1(xx, 10);
	//insert_sort2(xx, 10);
	//dis_play(xx, 10);

	//ð������
	bubble_sort(xx, 10);
	dis_play(xx, 10);
	return 0;
}