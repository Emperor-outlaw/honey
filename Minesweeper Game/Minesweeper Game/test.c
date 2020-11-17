#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
void menu()
{
	printf("********************************\n");
	printf("******      1. play     ********\n");
	printf("******      0. exit     ********\n");
	printf("********************************\n");
}
void game()
{
	//��������
	char Mine[ROWS][COLS] = { 0 };
	char Show[ROWS][COLS] = { 0 };
	//��ʼ������
	init_board(Mine, ROWS, COLS, '0');
	init_board(Show, ROWS, COLS, '*');
	//����
	set_mine(Mine, ROW, COL, MINE_COUNT);
	//���ɨ��
	display_board(Mine, ROW, COL);
	display_board(Show, ROW, COL);
	find_mine(Mine, Show, ROW, COL);
}
int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("���������ѡ��:>\n");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ��\n");
			break;
		default:
			printf("ѡ�����������ѡ��!\n");
			break;
		}
	} while (input);
	return 0;
}