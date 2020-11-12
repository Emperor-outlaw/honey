#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

int board_full(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (' ' == board[i][j])
				return 1;
		}
	}
	return 0;
}

void board_print(char board[ROW][COL], int row, int col)
{
	int i = 0;
	//��ӡ��
	for (i = 0; i < row; i++)
	{
		//��ӡ��
		int j = 0;
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)
				printf("|");
		}
		printf("\n");
		if (i < row - 1)
		{
			for (j = 0; j < col; j++)
			{

				printf("---");
				if (j < col - 1)
					printf("|");
			}
		}
		printf("\n");
	}
}

void init_board(char board[ROW][COL], int row, int col)
{
	memset(board, ' ', row*col);
}

void computer_move(char board[ROW][COL], int row, int col)
{
	printf("������:>\n");
	while (1)
	{
		int x = rand() % row;
		int y = rand() % col;
		if (' ' == board[x][y])
		{
			board[x][y] = 'X';
			break;
		}
	}
}

void play_move(char board[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	printf("�����:>\n");
	while (1)
	{
		scanf("%d%d", &x, &y);
		//�ж������Ƿ�Ϸ�
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if ('X' == board[x - 1][y - 1] || '0' == board[x - 1][y - 1])
				printf("�������ѱ�ռ��,�������룡\n");
			else
			{
				board[x - 1][y - 1] = '0';
				break;
			}
		}
		else
			printf("��������Ƿ�!\n");
	}
}


char is_win(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	//�ж���
	for (i = 0; i < row; i++)
	{
		for (j = 1; j < col; j++)
		{
			if (board[i][0] != board[i][j])
				break;
		}
		if (col == j)
			return board[i][0];
	}

	//�ж���
	for (j = 0; j < col; j++)
	{
		for (i = 1; i < row; i++)
		{
			if (board[0][j] != board[i][j])
				break;
		}
		if (row == i)
			return board[0][j];
	}

	//�ж����Ϻ����¶Խ���
	for (i = 1; i < row; i++)
	{
		if (board[0][0] != board[i][i])
			break;
	}
	if (row == i)
		return board[0][0];
	//�ж����Ϻ����¶Խ���
	i = 1;
	j = col - 2;
	while (i < row && j >= 0)
	{
		if (board[0][col - 1] != board[i][j])
			break;
		i++;
		j++;
	}
	if (row == i)
		return board[0][col - 1];
	//�ж������Ƿ�����
	int ret = board_full(board, row, col);
	if (1 == ret)
		return ' ';
	else
		return 'P';
	
}






