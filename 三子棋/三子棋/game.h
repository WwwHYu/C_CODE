#define ROW 3
#define COL 3

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//函数声明
void IntiBoard(char board[ROW][COL], int row, int col);

void DisplayBoard(char board[ROW][COL], int row, int col);

void playerMove(char board[ROW][COL], int row, int col);

void computerMove(char board[ROW][COL], int row, int col);

//判断是否获胜
//玩家获胜 '*'
//电脑获胜 '#'
//平局 'Q'
//继续 'C'
char IsWin(char board[ROW][COL], int row, int col);