#define ROW 5
#define COL 5
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

void print_board(char board[ROW][COL], int row, int col); //��ӡ����
void init_board(char board[ROW][COL], int row, int col); //��ʼ������
void player_move(char board[ROW][COL], int row, int col); //�����
void computer_move(char board[ROW][COL], int row, int col); //������
char is_win(char board[ROW][COL], int row, int col); //�ж���Ӯ


