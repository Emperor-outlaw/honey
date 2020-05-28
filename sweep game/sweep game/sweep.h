#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

#define ROW 9
#define COL 9
#define NUM 2

#define ROWS (ROW + 2)
#define COLS (COL + 2)



void init_board(char board[ROWS][COLS], int rows, int cols, char set);
void print_board(char board[ROWS][COLS], int rows, int cols);
void set_mine(char board[ROWS][COLS], int row, int col, int num);
void fine_mine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int  col);
