#define _CRT_SECURE_NO_WARNINGS 1

#include "game.h"


void init_board(char board[ROW][COL], int row, int col) //��ʼ������
{
	//��ʼ��Ϊ�ո�
	////����һ ֱ�Ӹ�ÿһ������Ԫ�ظ�ֵ
	//int i = 0, j = 0;
	//for (i = 0; i < row; i++)
	//{
	//	for (j = 0; j < col; j++)
	//	{
	//		board[i][j] = ' ';
	//	}
	//}

	//������ ʹ�ÿ⺯��
	memset(board, ' ', row * col * sizeof(board[0][0]));
}


void print_board(char board[ROW][COL], int row, int col) //��ӡ����
{
	int i = 0;
	for (i = 0; i < row; i++)//��ӡÿһ��
	{
		int j = 0;
		for (j = 0; j < col; j++)//��ӡÿһС��
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1) //�������һ�в���ӡ�ַ�'|'
				printf("|");
		}
		printf("\n");
		if (i < row - 1) //�������һ�в���ӡ"---|---|---"
		{
			for (j = 0; j < col; j++)//��ӡÿһС��
			{
				printf("---");
				if (j < col - 1)
					printf("|");
			}
			printf("\n");
		}
	}
}


void player_move(char board[ROW][COL], int row, int col) //�����
{
	int x = 0, y = 0; //����x,y
	printf("�����:>\n");
	while (1)
	{
		printf("��������:>");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col) //�ж������Ƿ�Ϸ�
		{
			if (board[x-1][y-1] != ' ') //�ж������Ƿ�ռ��
			{
				printf("�����ѱ�ռ�ã����������룡\n");
			}
			else
			{
				board[x-1][y-1] = '*';
				break;
			}
		}
		else
		{
			printf("��������Ƿ������������룡\n");
		}
	}
}

void computer_move(char board[ROW][COL], int row, int col) //������
{
	int x = 0, y = 0;
	printf("������:>\n");
	while (1)
	{
		int x = rand() % row; //�������������
		int y = rand() % col; //�������������
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
	}
}


char is_win(char board[ROW][COL], int row, int col) //�ж���Ӯ
{
	//���ĳһ�л���ĳһ�л��������Խ��ߵ�Ԫ��ȫ��Ϊ'*'�������Ӯ�����ء�*������Ϊ'#'�������Ӯ������'#'
	//����������������㲢������������ƽ�֣�����'d',�����̲���������ֻ�δ����������'c'
	int i = 0, j = 0;
	for (i = 0; i < row; i++) //ѭ������ÿһ�У�����Ƿ���Ӯ��
	{
		if (board[i][0] != ' ')
		{
			char tmp = board[i][0];
			for (j = 1; j < col && board[i][j] == tmp; j++);
			if (j == col)
				return board[i][0];
		}
	}

	for (i = 0; i < col; i++) //ѭ������ÿһ�У�����Ƿ���Ӯ��
	{
		if (board[0][i] != ' ')
		{
			char tmp = board[0][i];
			for (j = 1; j < row && board[j][i] == tmp; j++);
			if (j == row)
				return board[0][i];
		}
	}

	char tmp = board[0][0];
	for (i = 1, j = 1; i < row && j < col && board[i][j] == tmp; i++, j++); //�ж����Խ���
	if (i == row && j == col)
		return board[0][0];

	tmp = board[0][col];
	for (i = 0, j = col; i < row && j > -1 && board[i][j] == tmp; i++, j--); //�жϸ��Խ���
	if (i == row && j == -1)
		return board[0][col];

	//����ߵ������˵����û��Ӯ�ң���������һ���ж���ƽ�ֻ��Ǽ���
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
				return 'c';
		}
	}
	return 'd';
}