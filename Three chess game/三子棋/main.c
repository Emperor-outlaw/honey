#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"

void my_menu(void) //��ӡ�˵���
{
	printf("*******************************\n");
	printf("*******    1.play game   ******\n");
	printf("*******    0.exit        ******\n");
	printf("*******************************\n");
}

void game(void) //������Ϸ���߼�
{
	char board[ROW][COL]; //��������
	init_board(board, ROW, COL); //��ʼ������
	print_board(board, ROW, COL); //��ӡ����
	while (1) //��ʼ����,�趨�������
	{
		player_move(board, ROW, COL); //����ߣ������������Ӽ�Ϊ�ַ�'*'
		print_board(board, ROW, COL);
		char ret = is_win(board, ROW, COL); //is_win()����'*'�������Ӯ������'#'���������Ӯ������'c',�������������û��Ӯ��������'d',����ƽ��
		if (ret == '*')
		{
			printf("���Ӯ��\n");
			break;
		}
		else if (ret == 'd')
		{
			printf("ƽ�֣�\n");
			break;
		}
		
		computer_move(board, ROW, COL); //�����ߣ�������������Ӽ�Ϊ�ַ�'#'
		print_board(board, ROW, COL);
		ret = is_win(board, ROW, COL); //�ж���Ӯ
		if (ret == '#')
		{
			printf("����Ӯ��\n");
			break;
		}
		else if (ret == 'd')
		{
			printf("ƽ�֣�\n");
		    break;
		}
	}
}


int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	//��ӡ�˵���
	do
	{
		my_menu();
		printf("���������ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳�����\n");
			break;
		default:
			printf("����������������룡\n");
			break;
		}
	} while (input);
	return 0;
}