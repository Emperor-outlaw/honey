#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#define Row 3
#define Col 2

void print_board(char board[Row][Col], int row, int col);   //��ӡ����
void init_board(char board[Row][Col], int row, int col);    //��ʼ������
void player_move(char board[Row][Col], int row, int col);   //�����
void computer_move(char board[Row][Col], int row, int col); //������
int is_win(char board[Row][Col], int row, int col);         //�ж���Ӯ
