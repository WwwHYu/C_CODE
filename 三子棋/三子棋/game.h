#define ROW 3
#define COL 3

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//��������
void IntiBoard(char board[ROW][COL], int row, int col);

void DisplayBoard(char board[ROW][COL], int row, int col);

void playerMove(char board[ROW][COL], int row, int col);

void computerMove(char board[ROW][COL], int row, int col);

//�ж��Ƿ��ʤ
//��һ�ʤ '*'
//���Ի�ʤ '#'
//ƽ�� 'Q'
//���� 'C'
char IsWin(char board[ROW][COL], int row, int col);