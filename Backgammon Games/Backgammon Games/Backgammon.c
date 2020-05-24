#define _CRT_SECURE_NO_WARNINGS 1
#include "Backgammon.h"

void init_board(char board[Row][Col], int row, int col)
{
	/*int i = row;
	int j = col;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}*/
	memset(board, ' ', sizeof(board[0][0])*row*col);
}


void print_board(char board[Row][Col], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row;  i++)
	{
		for (j = 0; j < col; j++)
		{
			if (j < col - 1)
				printf(" %c |", board[i][j]);
			else
				printf(" %c \n", board[i][j]);
		}
		if (i < row - 1)
		{
			for (j = 0; j < col; j++)
			{
				if (j < col - 1)
					printf("---|");
				else
					printf("---\n");
			}
		}
	}
}


int is_win(char board[Row][Col], int row, int col)
{
	int i = 0;
	int j = 0;
	//判断两个对角线
	int a = 0;
	int b = 0;
	int n1 = 0;
	int n2 = col;
	while (i < row)
	{
		if (board[i][j] == '*')
			a++;
	    if (board[n1][n2-1] == '#')
			b++;
		i++;
		j++;
		n1++;
		n2--;
	}
	if (a == row)
		return 1;//人赢了
	else if (b == col)
		return 0;//电脑赢了

	//判断行
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == '*')
				;
			
		}


	}

	//判断列
	i = 0;
	for (j = 0; j < col; j++)
	{
		if (board[i][j] == '*' && board[i+1][j] == '*' && board[i+2][j] == '*')
			return '*';   //人赢
		else if (board[i][j] == '#' && board[i+1][j] == '#' && board[i+2][j] == '#')
			return '#';   //机器赢
	}

	//判断是否平局
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
				break;
		}
	}
	return '1';
}



void player_move(char board[Row][Col], int row, int col, char *count)
{
	int flag = 1;
	int i = 0;
	int j = 0;
	printf("玩家走!\n");
	do
	{
		printf("请输入坐标:>");
		scanf("%d %d", &i, &j);
		if (board[i - 1][j - 1] == ' ')
		{
			board[i - 1][j - 1] = '*';
			(*count)++;
			flag = 0;
			break;
		}
		else
			printf("此坐标已被占用,请重新选择!\n");
	} while (flag);
}


void computer_move(char board[Row][Col], int row, int col, char *count)
{
	srand((unsigned int)time(NULL));
	int flag = 1;
	int i = 0;
	int j = 0;
	printf("电脑走:>\n");
	do
	{
		int a = rand() % 3;
		int b = rand() % 3;
		if (board[a][b] == ' ')
		{
			board[a][b] = '#';
			(*count)++;
			flag = 0;
		}
	} while (flag);
}
