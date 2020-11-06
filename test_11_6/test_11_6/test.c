#define _CRT_SECURE_NO_WARNINGS 1
//猜数字游戏
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
void menu()
{
	printf("********************************\n");
	printf("*******       1.play       *****\n");
	printf("*******       0.exit       *****\n");
	printf("********************************\n");
}
void play_game()
{
	//1.产生随机数
	int ret = rand() % 101;
	//2.猜数字
	int num = 0;
	while (1)
	{
		printf("请输入你要猜的数字:>");
		scanf("%d", &num);
		if (ret > num)
			printf("你猜小了!\n");
		else if (ret < num)
			printf("你猜大了!\n");
		else
		{
			printf("恭喜你 你猜对了 祝你好运！\n");
			break;
		}
	}
	printf("\n");
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请输入你的选择:>\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			play_game();
			break;
		case 0:
			printf("退出游戏！\n");
			break;
		default:
			printf("输入错误，请重新输入！\n");
			break;
		}
	} while (input);
	return 0;
}