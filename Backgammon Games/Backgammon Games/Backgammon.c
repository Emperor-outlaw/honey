#define _CRT_SECURE_NO_WARNINGS 1
#include "Backgammon.h"

void init_board(char board[Row][Col], int row, int col)
{
	/*int i = row;
	int j = col;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}*/
	memset(board, ' ', sizeof(board[0][0])*row*col);
}


void print_board(char board[Row][Col], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row;  i++)
	{
		for (j = 0; j < col; j++)
		{
			if (j < col - 1)
				printf(" %c |", board[i][j]);
			else
				printf(" %c \n", board[i][j]);
		}
		if (i < row - 1)
		{
			for (j = 0; j < col; j++)
			{
				if (j < col - 1)
					printf("---|");
				else
					printf("---\n");
			}
		}
	}
}


int is_win(char board[Row][Col], int row, int col)
{
	int i = 0;
	int j = 0;
	//�ж������Խ���
	int a = 0;
	int b = 0;
	int n1 = 0;
	int n2 = col;
	while (i < row)
	{
		if (board[i][j] == '*')
			a++;
	    if (board[n1][n2-1] == '#')
			b++;
		i++;
		j++;
		n1++;
		n2--;
	}
	if (a == row)
		return 1;//��Ӯ��
	else if (b == col)
		return 0;//����Ӯ��

	//�ж���
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == '*')
				;
			
		}


	}

	//�ж���
	i = 0;
	for (j = 0; j < col; j++)
	{
		if (board[i][j] == '*' && board[i+1][j] == '*' && board[i+2][j] == '*')
			return '*';   //��Ӯ
		else if (board[i][j] == '#' && board[i+1][j] == '#' && board[i+2][j] == '#')
			return '#';   //����Ӯ
	}

	//�ж��Ƿ�ƽ��
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
				break;
		}
	}
	return '1';
}



void player_move(char board[Row][Col], int row, int col, char *count)
{
	int flag = 1;
	int i = 0;
	int j = 0;
	printf("�����!\n");
	do
	{
		printf("����������:>");
		scanf("%d %d", &i, &j);
		if (board[i - 1][j - 1] == ' ')
		{
			board[i - 1][j - 1] = '*';
			(*count)++;
			flag = 0;
			break;
		}
		else
			printf("�������ѱ�ռ��,������ѡ��!\n");
	} while (flag);
}


void computer_move(char board[Row][Col], int row, int col, char *count)
{
	srand((unsigned int)time(NULL));
	int flag = 1;
	int i = 0;
	int j = 0;
	printf("������:>\n");
	do
	{
		int a = rand() % 3;
		int b = rand() % 3;
		if (board[a][b] == ' ')
		{
			board[a][b] = '#';
			(*count)++;
			flag = 0;
		}
	} while (flag);
}
