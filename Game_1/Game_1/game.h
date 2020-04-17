#include <string.h>
#include <time.h>
#include <stdlib.h>
#define ROW 9
#define COL 9
#define ROWS (ROW+2)
#define COLS (COL+2)
#define count 10
void Initboard(char board[ROWS][COLS], int rows, int cols, char set);
void Display(char board[ROWS][COLS], int row, int col);
void Setmine(char mine[ROWS][COLS], int row, int col);
int Calculate(char mine[ROWS][COLS], int x, int y);
int Iswin(char show[ROWS][COLS], int row, int col);//≈–∂œ ‰”Æ(µ⁄“ª÷÷) 
void Exploitaround(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col, int x, int y);
void Findmine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);
void game();

