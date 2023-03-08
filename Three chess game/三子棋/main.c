#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

void my_menu(void) //打印菜单栏
{
	printf("*******************************\n");
	printf("*******    1.play game   ******\n");
	printf("*******    0.exit        ******\n");
	printf("*******************************\n");
}

void game(void) //整个游戏的逻辑
{
	char board[ROW][COL]; //创建棋盘
	init_board(board, ROW, COL); //初始化棋盘
	print_board(board, ROW, COL); //打印棋盘
	while (1) //开始下棋,设定玩家先走
	{
		player_move(board, ROW, COL); //玩家走，玩家下棋的棋子记为字符'*'
		print_board(board, ROW, COL);
		char ret = is_win(board, ROW, COL); //is_win()返回'*'代表玩家赢；返回'#'，代表电脑赢；返回'c',代表继续（都还没有赢）；返回'd',代表平局
		if (ret == '*')
		{
			printf("玩家赢！\n");
			break;
		}
		else if (ret == 'd')
		{
			printf("平局！\n");
			break;
		}
		
		computer_move(board, ROW, COL); //电脑走，电脑下棋的棋子记为字符'#'
		print_board(board, ROW, COL);
		ret = is_win(board, ROW, COL); //判断输赢
		if (ret == '#')
		{
			printf("电脑赢！\n");
			break;
		}
		else if (ret == 'd')
		{
			printf("平局！\n");
		    break;
		}
	}
}


int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	//打印菜单栏
	do
	{
		my_menu();
		printf("请输入你的选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出程序\n");
			break;
		default:
			printf("输入错误，请重新输入！\n");
			break;
		}
	} while (input);
	return 0;
}