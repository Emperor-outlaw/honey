#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

int get_minecount(char board[ROWS][COLS], int x, int y)
{
	return (board[x - 1][y] +
		board[x - 1][y - 1] +
		board[x][y - 1] +
		board[x + 1][y - 1] +
		board[x + 1][y] +
		board[x + 1][y + 1] +
		board[x][y + 1] +
		board[x - 1][y + 1] - 8 * '0');
}


void init_board(char board[ROWS][COLS], int rows, int cols, char set)
{
	memset(&board[0][0], set, rows*cols);
}

void display_board(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	for (j = 0; j <= col; j++)
	{
		printf("%d ", j);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);
		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
}

void set_mine(char board[ROWS][COLS], int row, int col, int count)
{
	while (count)
	{
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		if ('0' == board[x][y])
		{
			board[x][y] = '1';
			count--;
		}
	}
}

void spread_around(char Mine[ROWS][COLS], char Show[ROWS][COLS], int x, int y, int *pcount)
{
	int i = 0;
	int j = 0;
	char ret = get_minecount(Mine, x, y) + '0';
	if ('0' == ret)
	{
		Show[x][y] = ' ';
		(*pcount)--;
		for (i = x - 1; i <= x + 1; i++)
		{
			if (i >= 1 && i <= ROW)
			{
				for (j = y - 1; j <= y + 1; j++)
				{
					if (j >= 1 && j <= COL)
					{
						if ((i != x || j != y) && Show[i][j] == '*')
						{
							spread_around(Mine, Show, i, j, pcount);
						}
					}
				}
			}
		}
	}
	else
	{
		Show[x][y] = ret;
		(*pcount)--;
	}
}

void find_mine(char Mine[ROWS][COLS], char Show[ROWS][COLS], int row, int col)
{
	int count = ROW * COL - MINE_COUNT;
	int x = 0;
	int y = 0;
	while (1)
	{
		printf("请输入坐标:>\n");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if ('*' == Show[x][y])
			{
				spread_around(Mine, Show, x, y, &count);
				display_board(Show, ROW, COL);
			}
			else if ('1' == Mine[x][y])
			{
				printf("GAME OVER!\n");
				break;
			}
			else
				printf("此坐标已被排查,请重新输入!\n");
		}
		else
		{
			printf("坐标非法，请重新输入!\n");
		}
		//if_win(Show, ROW, COL);
		if (0 == count)
		{
			printf("恭喜你，排雷成功！\n");
			printf("雷盘为:>\n");
			display_board(Mine, ROW, COL);
			break;
		}
	}
}

