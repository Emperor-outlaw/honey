#define _CRT_SECURE_NO_WARNINGS 1
#ifndef _GAME_H_
#define _GAME_H_

#define ROW 3
#define COL 3
#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

void board_print(char board[ROW][COL], int row, int col);
void init_board(char board[ROW][COL], int row, int col);
void computer_move(char board[ROW][COL], int row, int col);
void play_move(char board[ROW][COL], int row, int col);
char is_win(char board[ROW][COL], int row, int col);










#endif


