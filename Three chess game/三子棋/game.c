#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"


void init_board(char board[ROW][COL], int row, int col) //初始化棋盘
{
	//初始化为空格
	////方法一 直接给每一个数组元素赋值
	//int i = 0, j = 0;
	//for (i = 0; i < row; i++)
	//{
	//	for (j = 0; j < col; j++)
	//	{
	//		board[i][j] = ' ';
	//	}
	//}

	//方法二 使用库函数
	memset(board, ' ', row * col * sizeof(board[0][0]));
}


void print_board(char board[ROW][COL], int row, int col) //打印棋盘
{
	int i = 0;
	for (i = 0; i < row; i++)//打印每一行
	{
		int j = 0;
		for (j = 0; j < col; j++)//打印每一小列
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1) //控制最后一列不打印字符'|'
				printf("|");
		}
		printf("\n");
		if (i < row - 1) //控制最后一行不打印"---|---|---"
		{
			for (j = 0; j < col; j++)//打印每一小列
			{
				printf("---");
				if (j < col - 1)
					printf("|");
			}
			printf("\n");
		}
	}
}


void player_move(char board[ROW][COL], int row, int col) //玩家走
{
	int x = 0, y = 0; //坐标x,y
	printf("玩家走:>\n");
	while (1)
	{
		printf("输入坐标:>");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col) //判断坐标是否合法
		{
			if (board[x-1][y-1] != ' ') //判断坐标是否被占用
			{
				printf("坐标已被占用，请重新输入！\n");
			}
			else
			{
				board[x-1][y-1] = '*';
				break;
			}
		}
		else
		{
			printf("输入坐标非法，请重新输入！\n");
		}
	}
}

void computer_move(char board[ROW][COL], int row, int col) //电脑走
{
	int x = 0, y = 0;
	printf("电脑走:>\n");
	while (1)
	{
		int x = rand() % row; //随机产生横坐标
		int y = rand() % col; //随机产生纵坐标
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
	}
}


char is_win(char board[ROW][COL], int row, int col) //判断输赢
{
	//如果某一行或者某一列或者两个对角线的元素全部为'*'，则玩家赢，返回‘*’，若为'#'，则电脑赢，返回'#'
	//如果以上条件不满足并且棋盘满，则平局，返回'd',若棋盘不满，则本棋局还未结束，返回'c'
	int i = 0, j = 0;
	for (i = 0; i < row; i++) //循环遍历每一行，检查是否有赢家
	{
		if (board[i][0] != ' ')
		{
			char tmp = board[i][0];
			for (j = 1; j < col && board[i][j] == tmp; j++);
			if (j == col)
				return board[i][0];
		}
	}

	for (i = 0; i < col; i++) //循环遍历每一列，检查是否有赢家
	{
		if (board[0][i] != ' ')
		{
			char tmp = board[0][i];
			for (j = 1; j < row && board[j][i] == tmp; j++);
			if (j == row)
				return board[0][i];
		}
	}

	char tmp = board[0][0];
	for (i = 1, j = 1; i < row && j < col && board[i][j] == tmp; i++, j++); //判断主对角线
	if (i == row && j == col)
		return board[0][0];

	tmp = board[0][col];
	for (i = 0, j = col; i < row && j > -1 && board[i][j] == tmp; i++, j--); //判断副对角线
	if (i == row && j == -1)
		return board[0][col];

	//如果走到了这里，说明还没有赢家，接下来进一步判断是平局还是继续
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
				return 'c';
		}
	}
	return 'd';
}