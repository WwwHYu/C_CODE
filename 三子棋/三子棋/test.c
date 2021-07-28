#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include "game.h"

void memu()
{
	printf("************************************\n");
	printf("**** 1.开始游戏     0.退出游戏 *****\n");
	printf("************************************\n");
}
//游戏的算法实现
void game()
{
	char ret = 0;
	char board[ROW][COL] = { 0 };//数组用来存放棋盘信息
	IntiBoard(board, ROW, COL);//初始化棋盘
	DisplayBoard(board,ROW,COL);//打印棋盘
	//下棋
	while (1)
	{
		//玩家下棋
		playerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//判断玩家是否获胜
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		//电脑下棋
		computerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//判断电脑是否获胜
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '*')
		printf("玩家获胜\n");
	else if (ret == '#')
		printf("电脑获胜\n");
	else
		printf("平局\n");
}

void test()
{
	int input = 0;
	do
	{
		srand((unsigned int)time(NULL));
		memu();
		printf("请选择:>");
		scanf("%d", &input);
		switch(input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误请重新选择\n");
			break;

		}
	} while (input);
}

int main()
{
	test();
	return 0;
}