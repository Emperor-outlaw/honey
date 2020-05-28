#define _CRT_SECURE_NO_WARNINGS 1
#include "sweep.h"


void init_board(char board[ROWS][COLS], int rows, int cols, char set)
{
	/*int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}*/
	memset(board, set, cols*rows*sizeof(board[0][0]));
}

void print_board(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i <= col; i++)
	{
		printf("---");
	}
	printf("--\n");
	for (i = 0; i <= col; i++)
	{
		if (0 == i)
			printf("| %d |", i);
		else
			printf("  %d", i);
	}
	printf("\n");
	for (i = 0; i <= col; i++)
	{
		printf("---");
	}
	printf("--\n");
	for (i = 1; i <= row; i++)
	{
		printf("| %d | ", i);
		for (j = 1; j <= col; j++)
		{
			printf(" %c ", board[i][j]);

		}
		printf("\n");
	}
}


void set_mine(char board[ROWS][COLS], int row, int col, int num)
{
	int x = 0;
	int y = 0;
	while (num && num <= row*col)
	{
		x = rand() % row;
		y = rand() % col;
		if (board[x + 1][y + 1] == '0')
		{
			board[x + 1][y + 1] = '1';
			num--;
		}
	}
	
}

int count_mine(char mine[ROWS][COLS], int x, int y)
{
	/*int ret = 0;
	if (mine[x - 1][y] == '1')
		ret++;
	if (mine[x - 1][y - 1] == '1')
		ret++;
	if (mine[x][y - 1] == '1')
		ret++;
	if (mine[x + 1][y - 1] == '1')
		ret++;
	if (mine[x + 1][y] == '1')
		ret++;
	if (mine[x + 1][y + 1] == '1')
		ret++;
	if (mine[x][y + 1] == '1')
		ret++;
	if (mine[x - 1][y + 1] == '1')
		ret++;*/
	int ret = mine[x - 1][y] + 
		mine[x - 1][y - 1] + 
		mine[x][y - 1] + 
		mine[x + 1][y - 1] + 
		mine[x + 1][y] + 
		mine[x + 1][y + 1] + 
		mine[x][y + 1] + 
		mine[x - 1][y + 1] - 8 * '0';
	return ret;
}


void spread_mine(char mine[ROWS][COLS],char show[ROWS][COLS],int x, int y, int row, int col)
{
	//int ret = count_mine(mine, x, y);
	//if (ret == 0)
	//{
	//	show[x][y] = ' ';
	//	if (show[x - 1][y] == '*' && x - 1 >= 1)
	//		spread_mine(mine, show, x - 1, y, row, col);
	//	if (show[x - 1][y - 1] == '*' && x - 1 >= 1 && y - 1 >= 1)
	//		spread_mine(mine, show, x - 1, y - 1, row, col);
	//	if (show[x][y - 1] == '*' && y - 1 >= 1)
	//		spread_mine(mine, show, x, y - 1, row, col);
	//	if (show[x + 1][y - 1] == '*' && x + 1 <= row && y - 1 <= 1)
	//		spread_mine(mine, show, x + 1, y - 1, row, col);
	//	if (show[x + 1][y] == '*' && x + 1 <= row)
	//		spread_mine(mine, show, x + 1, y, row, col);
	//	if (show[x + 1][y + 1] == '*' && x + 1 <= row && y + 1 <= col)
	//		spread_mine(mine, show, x + 1, y + 1, row, col);
	//	if (show[x][y + 1] == '*' && y + 1 <= col)
	//		spread_mine(mine, show, x, y + 1, row, col);
	//	if (show[x - 1][y + 1] == '*' && x - 1 >= 1 && y + 1 <= col)
	//		spread_mine(mine, show, x - 1, y + 1, row, col);
	//}
	//else
	//{
	//	show[x][y] = ret + '0';
	//}
	int i = 0;
	int j = 0;
	int ret = count_mine(mine, x, y);
	if (ret == 0)
	{
		show[x][y] = ' ';
		for (i = -1; i <= 1; i++)
		{
			for (j = -1; j <= 1; j++)
			{
				if (i != 0 || j != 0)
				{
					if (show[x + i][y + j] == '*' && x + i >= 1 && x + i <= row && y + j >= 1 && y + j <= col)
					{
						spread_mine(mine, show, x + i, y + j, row, col);
					}
				}
			}
		}
	}
	else
	{
		show[x][y] = ret + '0';
	}		
}

int is_win(char show[ROWS][COLS], int row, int col)
{
	int count = 0;
	int i = 0;
	int j = 0;
	for (i = 1; i <= row; i++)
	{
		for (j = 1; j <= col; j++)
		{
			if (show[i][j] == '*')
				count++;
		}
	}
	if (count == NUM)
		return 0;
	else
		return 1;
}

void fine_mine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int  col)
{
	int x = 0;
	int y = 0;
	int ret = 0;
	do
	{
		printf("请输入你要排查雷的坐标:>");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)  //判断坐标合法性
		{
			if (mine[x][y] == '0')
			{
				spread_mine(mine, show, x, y, row, col);
				print_board(mine, row, col);
				print_board(show, row, col);
			}
			else
			{
				printf("你被炸死了！\n");
				print_board(mine, row, col);
			}
		}
		else
		{
			printf("输入坐标非法，请重新输入!\n");
		}
		ret = is_win(show, row, col);//返回值为0表示赢了 ；返回值1表示继续
		if (ret)
			;
		else
			printf("恭喜你，你赢了！\n");
	} while (ret);
}
