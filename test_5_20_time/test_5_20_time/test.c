#define _CRT_SECURE_NO_WARNINGS 1
#define _CRT_SECURE_NO_WARNINGS 1
//��ȡ���Եĵ�ǰʱ��
//#include <stdio.h>
//#include <windows.h>
//#include <stdlib.h>
//#include <time.h>
//int main()
//{
//	while (1)
//	{
//		char tmpbuf[128] = { 0 };
//		time_t ltime;
//		int i = 10;
//		_strtime(tmpbuf);//��ȡ��ǰ����ϵͳ��ʱ��
//		printf("OS time:\t\t\t\t%s\n", tmpbuf);
//		_strdate(tmpbuf);//��ȡ��ǰ����ϵͳ������
//		printf("OS date:\t\t\t\t%s\n", tmpbuf);
//		time(&ltime);
//		printf("Time in seconds since UTC 1/1/70:\t%d\n", ltime);
//		printf("UNIX time and date:\t\t\t%s", ctime(&ltime));
//		Sleep(1000);
//		system("cls");
//	}
//	return 0;
//}

////��������Ϸ
//#include <stdio.h>
//#include <time.h>
//#include <stdlib.h>
//void menu()
//{
//	printf("************************************\n");
//	printf("****     1.paly      0.exit   ******\n");
//	printf("************************************\n");
//}
//void game()
//{
//	int num = 0;
//	int ret = rand() % 100 + 1;
//	printf("�����Ѿ�������һ��С��100�������������Խ��в�������Ϸ�ˣ�\n");
//	while (1)
//	{
//		printf("��������Ҫ�µ�����:>");
//		scanf("%d", &num);
//		if (num > ret)
//			printf("��´��ˣ�\n");
//		else if (num < ret)
//			printf("���С�ˣ�\n");
//		else
//		{
//			printf("��ϲ��¶��ˣ�\n");
//			break;
//		}
//	}
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("���������ѡ��:>\n");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("�˳�����\n");
//			break;
//		default:
//			printf("�������������ѡ��\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}

////������A��������ݺ�����B��������ݽ���������һ����
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int arr1[] = { 1, 3, 5, 7, 9 };
//	int arr2[] = { 0, 2, 4, 6, 8 };
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	printf("arr1�е�Ԫ���ǣ�");
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	printf("\narr2�е�Ԫ���ǣ�");
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//    for (i = 0; i < sz; i++)
//	{
//		int tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//	}
//	printf("\narr1�е�Ԫ���ǣ�");
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	printf("\narr2�е�Ԫ���ǣ�");
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//	return 0;
//}

////���1/1-1/2+1/3-1/4...-1/100 
//#include <stdio.h>
//int main()
//{
//	/*int i = 0;
//	double sum = 0.0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 2)
//			sum += 1.0 / i;
//		else
//			sum += (-1)*(1.0 / i);
//	}
//	printf("sum = %lf ", sum);*/
//	int i = 0;
//	double sum = 0.0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += flag * 1.0 / i;
//		flag = -flag;
//	}
//	printf("sum = %lf", sum);
//	return 0;
//}

//////��1~100֮�������9�ĸ��� 
//#include <stdio.h>
//int main()
//{
//	//�����������ֶ�������9�ĸ���
//	/*int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		int num = i;
//		while (num)
//		{
//			if (num % 10 == 9)
//			{
//				count++;
//				num /= 10;
//			}
//			else
//				num /= 10;
//		}
//	}
//	printf("count = %d\n", count);*/
//	//ֻ������С��100������9�ĸ���
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (9 == i % 10)
//			count++;
//		if (9 == i / 10)//�˴�������else����Ϊ��99����if�Ͳ������else,�Ӷ��㲻��ʮλ�ϵ�9
//			count++;
//	}
//	printf("count = %d\n", count);
//	return 0;
//}

////�����ĵ��ã���һ�����ǲ�������
//#include <stdio.h>
//#include <math.h>
//int is_prime(int num)
//{
//	int i = 0;
//	for (i = 2; i <= sqrt(num); i++)
//	{
//		if (num%i == 0)
//			return 0;
//	}
//	return 1;
//}
//int main()
//{
//	int num = 0;
//	printf("������һ����:>");
//	scanf("%d", &num);
//	int ret = is_prime(num);
//	if (ret)
//		printf("��������\n");
//	else
//		printf("����������\n");
//	return 0;
//}