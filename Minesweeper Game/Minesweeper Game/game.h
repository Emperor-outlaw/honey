#ifndef __GAME_H__
#define __GAME_H__

#define ROW 9
#define COL 9
#define ROWS ROW+2
#define COLS COL+2
#define MINE_COUNT 5

#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>


void init_board(char board[ROWS][COLS], int rows, int cols, char set);
void display_board(char board[ROWS][COLS], int row, int col);
void set_mine(char board[ROWS][COLS], int row, int col, int count);
void find_mine(char Mine[ROWS][COLS], char Show[ROWS][COLS], int row, int col);
int get_minecount(char board[ROWS][COLS], int x, int y);
void spread_around(char Mine[ROWS][COLS], char Show[ROWS][COLS], int x, int y, int *pcount);


#endif  //__GAME_H__