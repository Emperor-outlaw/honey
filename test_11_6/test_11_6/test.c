#define _CRT_SECURE_NO_WARNINGS 1
////��������Ϸ
//#include <stdio.h>
//#include <time.h>
//#include <stdlib.h>
//void menu()
//{
//	printf("********************************\n");
//	printf("*******       1.play       *****\n");
//	printf("*******       0.exit       *****\n");
//	printf("********************************\n");
//}
//void play_game()
//{
//	//1.���������
//	int ret = rand() % 101;
//	//2.������
//	int num = 0;
//	while (1)
//	{
//		printf("��������Ҫ�µ�����:>");
//		scanf("%d", &num);
//		if (ret > num)
//			printf("���С��!\n");
//		else if (ret < num)
//			printf("��´���!\n");
//		else
//		{
//			printf("��ϲ�� ��¶��� ף����ˣ�\n");
//			break;
//		}
//	}
//	printf("\n");
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
//			play_game();
//			break;
//		case 0:
//			printf("�˳���Ϸ��\n");
//			break;
//		default:
//			printf("����������������룡\n");
//			break;
//		}
//	} while (input);
//	return 0;
//}

////      *
////     ***
////    *****
////   *******
////  *********
//// ***********
////*************
//// ***********
////  *********
////   *******
////    *****
////     ***
////      *
////��ӡ�����ͼ��
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int line = 0;
//	scanf("%d", &line);
//	//��ӡ�ϰ벿��
//	for (i = 0; i < line; i++)
//	{
//		//��ӡһ��
//		//1.��ӡ�ո�
//		for (j = 0; j < line - 1 - i; j++)
//		{
//			printf(" ");
//		}
//		//2.��ӡ*
//		for (j = 0; j < 2 * (i + 1) - 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	//��ӡ�°벿��
//	for (i = 0; i < line - 1 ; i++)
//	{
//		//��ӡһ��
//		//1.��ӡ�ո�
//		for (j = 0; j < i + 1; j++)
//		{
//			printf(" ");
//		}
//		//2.��ӡ*
//		for (j = 0; j < 2 * (line - 1 - i) - 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}
