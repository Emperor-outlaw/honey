#define _CRT_SECURE_NO_WARNINGS 1
////猜数字游戏
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
//	//1.产生随机数
//	int ret = rand() % 101;
//	//2.猜数字
//	int num = 0;
//	while (1)
//	{
//		printf("请输入你要猜的数字:>");
//		scanf("%d", &num);
//		if (ret > num)
//			printf("你猜小了!\n");
//		else if (ret < num)
//			printf("你猜大了!\n");
//		else
//		{
//			printf("恭喜你 你猜对了 祝你好运！\n");
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
//		printf("请输入你的选择:>\n");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			play_game();
//			break;
//		case 0:
//			printf("退出游戏！\n");
//			break;
//		default:
//			printf("输入错误，请重新输入！\n");
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
////打印上面的图案
//#include <stdio.h>
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int line = 0;
//	scanf("%d", &line);
//	//打印上半部分
//	for (i = 0; i < line; i++)
//	{
//		//打印一行
//		//1.打印空格
//		for (j = 0; j < line - 1 - i; j++)
//		{
//			printf(" ");
//		}
//		//2.打印*
//		for (j = 0; j < 2 * (i + 1) - 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	//打印下半部分
//	for (i = 0; i < line - 1 ; i++)
//	{
//		//打印一行
//		//1.打印空格
//		for (j = 0; j < i + 1; j++)
//		{
//			printf(" ");
//		}
//		//2.打印*
//		for (j = 0; j < 2 * (line - 1 - i) - 1; j++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}
