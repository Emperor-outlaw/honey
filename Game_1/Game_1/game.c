#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include "game.h"
void Initboard(char board[ROWS][COLS], int rows, int cols, char set)
{
	//	int i=0;
	//	int j=0;
	//	for(i=0;i<rows;i++)
	//	{
	//		for(j=0;j<cols;j++)
	//		{
	//			board[i][j]==set;
	//		}
	//	}
	memset(board, set, rows*cols*sizeof(board[0][0]));
}
void Display(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i <= col; i++)
	{
		printf("---");
	}
	printf("\n");
	for (i = 0; i <= row; i++)
	{
		if (0 == i)
		{
			printf(" %d |", 0);
		}
		else
		{
			printf(" %d ", i);
		}
	}
	printf("\n");
	for (i = 0; i <= col; i++)
	{
		printf("---");
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf(" %d |", i);
		for (j = 1; j <= col; j++)
		{
			printf(" %c ", board[i][j]);
		}
		printf("\n");
	}
}
void Setmine(char mine[ROWS][COLS], int row, int col)
{
	int num = count;
	while (num)
	{
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		if (mine[x][y] == '0')
		{
			mine[x][y] = '1';
			num--;
		}
	}
}
int Calculate(char mine[ROWS][COLS], int x, int y)
{
	return mine[x - 1][y] + mine[x - 1][y - 1] + mine[x][y - 1] + mine[x + 1][y - 1] + mine[x + 1][y] + mine[x + 1][y + 1] + mine[x][y + 1] + mine[x - 1][y + 1] - 8 * '0';
}
int Iswin(char show[ROWS][COLS], int row, int col)//判断输赢(第一种) 
{
	int i = 0;
	int j = 0;
	int num = 0;
	for (i = 1; i <= row; i++)
	{
		for (j = 1; j <= col; j++)
		{
			if (show[i][j] == '*')
			{
				num++;
			}
			if (num>count)
			{
				break;
			}
		}
	}
	if (count == num)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
void Exploitaround(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col, int x, int y)
{//展开雷区一片 
	int i = -1;//-1 0 1
	int j = -1;//-1 0 1 
	if ('0' + Calculate(mine, x, y) == '0')
	{
		//    	show[x][y] = ' ';
		//    	if(x-1>=1&&y>=1&&show[x-1][y]=='*')
		//    	{
		//    		Exploitaround(mine,show,row,col,x-1,y);
		//		}
		//		if(x-1>=1&&y-1>=1&&show[x-1][y-1]=='*')
		//    	{
		//    		Exploitaround(mine,show,row,col,x-1,y-1);
		//		}
		//		if(x>=1&&y-1>=1&&show[x][y-1]=='*')
		//    	{
		//    		Exploitaround(mine,show,row,col,x,y-1);
		//		}
		//		if(x+1<=row&&y-1>=1&&show[x+1][y-1]=='*')
		//    	{
		//    		Exploitaround(mine,show,row,col,x+1,y-1);
		//		}
		//		if(x+1<=row&&y>=1&&show[x+1][y]=='*')
		//    	{
		//    		Exploitaround(mine,show,row,col,x+1,y);
		//		}
		//		if(x+1<=row&&y+1<=col&&show[x+1][y+1]=='*')
		//    	{
		//    		Exploitaround(mine,show,row,col,x+1,y+1);
		//		}
		//		if(x>=1&&y+1<=col&&show[x][y+1]=='*')
		//    	{
		//    		Exploitaround(mine,show,row,col,x,y+1);
		//		}
		//		if(x-1>=1&&y+1<=col&&show[x-1][y+1]=='*')
		//    	{
		//    		Exploitaround(mine,show,row,col,x-1,y+1);
		//		}  
		show[x][y] = ' ';
		for (i = -1; i <= 1; i++)
		{
			for (j = -1; j <= 1; j++)
			{
				//                if(i==0&&j==0)
				//                {
				//                	continue;
				//                }
				//                else
				//                {
				//                	if(x+i>=1&&x+i<=row&&y+j>=1&&y+j<=col&&show[x+i][y+j]=='*')
				//                	{
				//                		Exploitaround(mine,show,row,col,x+i,y+j);
				//					}
				//				}	
				if (i != 0 || j != 0)
				{
					if (x + i >= 1 && x + i <= row&&y + j >= 1 && y + j <= col&&show[x + i][y + j] == '*')
					{
						Exploitaround(mine, show, row, col, x + i, y + j);
					}
				}
			}
		}
	}
	else
	{
		show[x][y] = '0' + Calculate(mine, x, y);
	}
}
void Findmine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int m = 0;//走的步数 
	while (1)
	{
		printf("请输入你要排除的坐标:>\n");
		scanf("%d%d", &x, &y);
		m++;
		if (x >= 1 && x <= row&&y >= 1 && y <= col)
		{
			if (mine[x][y] == '1')
			{
				printf("恭喜你，你被炸死了！\n");
				printf("你总共走了%d步!\n", m);
				printf("(1代表的是雷，0代表的是没有雷)\n");
				Display(mine, ROW, COL);
				break;
			}
			else
			{
				Exploitaround(mine, show, row, col, x, y);
				Display(show, ROW, COL);
			}
		}
		else
		{
			printf("输入坐标错误，请重新输入！\n");
		}
		if (Iswin(show, ROW, COL) == 1)//判断输赢，调用函数（第1种） 
		{
			printf("恭喜你，你赢了！\n");
			printf("你总共走了%d步!\n", m);
			printf("(1代表的是雷，0代表的是没有雷)\n");
			Display(mine, ROW, COL);
			break;
		}
	}
}
void game()
{
	srand((unsigned int)time(NULL));
	char mine[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };
	//初始化棋盘 
	Initboard(mine, ROWS, COLS, '0');
	Initboard(show, ROWS, COLS, '*');
	//布雷
	Setmine(mine, ROW, COL);
	//打印棋盘
	Display(mine, ROW, COL);
	Display(show, ROW, COL);
	//扫雷
	Findmine(mine, show, ROW, COL);
}