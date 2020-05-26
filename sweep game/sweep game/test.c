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

}
int main()
{
	int input = 0;
	do
	{
		menu();
		printf("请输入你的选择:>");
		scnaf("%d", &input);
		switch (input)
		{
		case 1:
			game();
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