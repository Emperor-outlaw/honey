#define _CRT_SECURE_NO_WARNINGS 1
//��������ʹ����ȫ��λ��ż��ǰ��
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		while ( left<right && arr[left] % 2 != 0)//��ż��
//		{
//			left++;
//		}
//		while ( left<right && arr[right] % 2 != 1)//������
//		{
//			right--;
//		}		
//		if (left < right)
//		{
//			int tmp = arr[left];
//			arr[left] = arr[right];
//			arr[right] = tmp;
//		}
//		left++;
//		right--;
//	}
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
////���Ͼ���
////��һ����ά���飬����������ǵ����ģ�ÿ�д��ϵ����ǵ����ģ��������������в���һ���������Ƿ����
////ʱ�临�Ӷ�С��O(n)
////����
////1 2 3
////2 3 4
////3 4 5
//#include <stdio.h>
//void locate_num(int arr[3][3], int* row, int* col, int k)
//{
//	int x = 0;
//	int y = *col - 1;
//	while (x < *row && y < *col)
//	{
//		if (k > arr[x][y])//�������Ͻǵ�Ԫ�أ��𽥱ƽ����½ǣ�Ҳ�ɸ������½ǵ�Ԫ���ж��𽥱ƽ����Ͻǣ�
//		{
//			x++;
//		}
//		else if (k < arr[x][y])
//		{
//			y--;
//		}
//		else
//		{
//			*row = x;
//			*col = y;
//			return;
//		}
//	}
//	*row = -1;
//	*col = -1;
//	return;
//}
//int main()
//{
//	int arr[3][3] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
//	int row = 3;
//	int col = 3;
//	locate_num(arr, &row, &col, 7);
//	if (row == -1 && col == -1)
//	{
//		printf("�Ҳ���!\n");
//	}
//	else
//	{
//		printf("�ҵ��ˣ��±�ֱ�Ϊ��%d %d\n", row, col);
//	}
//	return 0;
//}