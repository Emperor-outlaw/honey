#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
void menu()
{
	printf("********************************\n");
	printf("******      1. play     ********\n");
	printf("******      0. exit     ********\n");
	printf("********************************\n");
}
void game()
{
	//创建棋盘
	char Mine[ROWS][COLS] = { 0 };
	char Show[ROWS][COLS] = { 0 };
	//初始化棋盘
	init_board(Mine, ROWS, COLS, '0');
	init_board(Show, ROWS, COLS, '*');
	//布雷
	set_mine(Mine, ROW, COL, MINE_COUNT);
	//玩家扫雷
	display_board(Mine, ROW, COL);
	display_board(Show, ROW, COL);
	find_mine(Mine, Show, ROW, COL);
}
int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("请输入你的选择:>\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏！\n");
			break;
		default:
			printf("选择错误，请重新选择!\n");
			break;
		}
	} while (input);
	return 0;
}