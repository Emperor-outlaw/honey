#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#define Row 3
#define Col 2

void print_board(char board[Row][Col], int row, int col);   //打印棋盘
void init_board(char board[Row][Col], int row, int col);    //初始化棋盘
void player_move(char board[Row][Col], int row, int col);   //玩家走
void computer_move(char board[Row][Col], int row, int col); //电脑走
int is_win(char board[Row][Col], int row, int col);         //判断输赢
