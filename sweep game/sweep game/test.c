#define _CRT_SECURE_NO_WARNINGS 1
#include "sweep.h"
void menu()
{
	printf("***********************************\n");
	printf("***           1.paly            ***\n");
	printf("***           0.exit            ***\n");
	printf("***********************************\n");
}


void game()
{
	srand((unsigned int)time(NULL));
	//创建棋盘
	char mine[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };
	//初始化棋盘
	init_board(mine, ROWS, COLS, '0');//雷盘 初始化为‘0’
	init_board(show, ROWS, COLS, '*');//数据盘 初始化为 ‘*'
	//打印棋盘
	print_board(mine, ROW, COL);
	/*print_board(show, ROW, COL);*/
	//布置雷
	set_mine(mine, ROW, COL, NUM);
	print_board(mine, ROW, COL);
	//排雷
	print_board(show, ROW, COL);
	fine_mine(mine, show, ROW, COL);	
}

int main()
{
	clock_t start, finish;
	double num = 0;
	int input = 0;
	do
	{
		menu();
		printf("请输入你的选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			start = clock();
			game();
			finish = clock();
			num = (double)(finish - start);
			printf("你所用时间time = %lf s\n", num / CLK_TCK);
			break;
		case 0:
			printf("退出游戏！\n");
			break;
		default:
			printf("输入错误，请重新选择!\n");
			break;
		}
	} while (input);
	return 0;
}