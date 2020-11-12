#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

void menu()
{
	printf("*****************************\n");
	printf("******     1. play      *****\n");
	printf("******     0. exit      *****\n");
	printf("*****************************\n");
}

void game()
{
	char ret = 1;
	//��������
	char board[ROW][COL] = { 0 };
	//��ʼ������
	init_board(board, ROW, COL);
	while (1)
	{
		//������
		computer_move(board, ROW, COL);
		//��ӡ����
		board_print(board, ROW, COL);
		//�ж���Ӯ
		//'X'----����Ӯ
		//'0'----���Ӯ
		//' '----����
		//'P'----ƽ��
		ret = is_win(board, ROW, COL);
		if (' ' != ret)
			break;
		//�����
		play_move(board, ROW, COL);
		board_print(board, ROW, COL);
		ret = is_win(board, ROW, COL);
		if (' ' != ret)
			break;
	}
	if ('X' == ret)
		printf("����Ӯ��\n");
	else if ('0' == ret)
		printf("���Ӯ��\n");
	else if ('P' == ret)
		printf("ƽ�֣�\n");
}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("���������ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ!\n");
			break;
		default:
			printf("�������,��������!\n");
			break;
		}
	} while (input);
	return 0;
}