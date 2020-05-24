#define _CRT_SECURE_NO_WARNINGS 1
#include "Backgammon.h"
void menu()
{
	printf("********************************\n");
	printf("***          1.play           **\n");
	printf("***          0.exit           **\n");
	printf("********************************\n");
}
game()
{
	int ret = 0;
	//创建棋盘
	char board[Row][Col] = { 0 };
	//初始化棋盘
	init_board(board, Row, Col);
	//打印棋盘
	print_board(board, Row, Col);
	while (1)
	{
		//玩家走
		player_move(board, Row, Col);
		print_board(board, Row, Col);
		//判断输赢
		ret = is_win(board, Row, Col);
		if (ret == '*')
		{
			printf("恭喜你，你赢了！\n");
			break;
		}
		else if (ret == 'p')
		{
			printf("平局！\n");
			break;
		}
		//电脑走
		computer_move(board, Row, Col);
		print_board(board, Row, Col);
		//判断输赢
		ret = is_win(board, Row, Col);
		if (ret == '#')
		{
			printf("电脑赢了！\n");
			break;
		}
		else if (ret == 'p')
		{
			printf("平局！\n");
			break;
		}
	}
}
int main()
{
	int input = 0;
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
			printf("输入错误，请重新输入!\n");
			break;
		}
	} while (input);
	return 0;
}