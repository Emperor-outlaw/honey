#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

void menu()
{
	printf("*****************************\n");
	printf("******     1. play      *****\n");
	printf("******     0. exit      *****\n");
	printf("*****************************\n");
}

void game()
{
	char ret = 1;
	//定义棋盘
	char board[ROW][COL] = { 0 };
	//初始化棋盘
	init_board(board, ROW, COL);
	while (1)
	{
		//电脑走
		computer_move(board, ROW, COL);
		//打印棋盘
		board_print(board, ROW, COL);
		//判断输赢
		//'X'----电脑赢
		//'0'----玩家赢
		//' '----继续
		//'P'----平局
		ret = is_win(board, ROW, COL);
		if (' ' != ret)
			break;
		//玩家走
		play_move(board, ROW, COL);
		board_print(board, ROW, COL);
		ret = is_win(board, ROW, COL);
		if (' ' != ret)
			break;
	}
	if ('X' == ret)
		printf("电脑赢！\n");
	else if ('0' == ret)
		printf("玩家赢！\n");
	else if ('P' == ret)
		printf("平局！\n");
}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请输入你的选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏!\n");
			break;
		default:
			printf("输入错误,重新输入!\n");
			break;
		}
	} while (input);
	return 0;
}