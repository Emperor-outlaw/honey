#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include "game.h" 
void menu()
{
	printf("*****************\n");
	printf("**** 1、Play ****\n");
	printf("**** 0、Exit ****\n");
	printf("*****************\n");
}
void test()
{
	int input = 0;
	do
	{
		menu();
		printf("请选择你要玩的游戏:>\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("输入错误，请重新输入！\n");
			break;
		}
	} while (input);
}
int main()
{
	test();
	return 0;
}
