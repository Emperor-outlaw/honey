#define _CRT_SECURE_NO_WARNINGS 1
#include "Backgammon.h"
void menu()
{
	printf("********************************\n");
	printf("***          1.play           **\n");
	printf("***          0.exit           **\n");
	printf("********************************\n");
}
game()
{
	int ret = 0;
	//��������
	char board[Row][Col] = { 0 };
	//��ʼ������
	init_board(board, Row, Col);
	//��ӡ����
	print_board(board, Row, Col);
	while (1)
	{
		//�����
		player_move(board, Row, Col);
		print_board(board, Row, Col);
		//�ж���Ӯ
		ret = is_win(board, Row, Col);
		if (ret == '*')
		{
			printf("��ϲ�㣬��Ӯ�ˣ�\n");
			break;
		}
		else if (ret == 'p')
		{
			printf("ƽ�֣�\n");
			break;
		}
		//������
		computer_move(board, Row, Col);
		print_board(board, Row, Col);
		//�ж���Ӯ
		ret = is_win(board, Row, Col);
		if (ret == '#')
		{
			printf("����Ӯ�ˣ�\n");
			break;
		}
		else if (ret == 'p')
		{
			printf("ƽ�֣�\n");
			break;
		}
	}
}
int main()
{
	int input = 0;
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
			printf("�����������������!\n");
			break;
		}
	} while (input);
	return 0;
}