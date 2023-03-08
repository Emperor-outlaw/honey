#define ROW 5
#define COL 5
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

void print_board(char board[ROW][COL], int row, int col); //打印棋盘
void init_board(char board[ROW][COL], int row, int col); //初始化棋盘
void player_move(char board[ROW][COL], int row, int col); //玩家走
void computer_move(char board[ROW][COL], int row, int col); //电脑走
char is_win(char board[ROW][COL], int row, int col); //判断输赢


