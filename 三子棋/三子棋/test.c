#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include "game.h"

void memu()
{
	printf("************************************\n");
	printf("**** 1.��ʼ��Ϸ     0.�˳���Ϸ *****\n");
	printf("************************************\n");
}
//��Ϸ���㷨ʵ��
void game()
{
	char ret = 0;
	char board[ROW][COL] = { 0 };//�����������������Ϣ
	IntiBoard(board, ROW, COL);//��ʼ������
	DisplayBoard(board,ROW,COL);//��ӡ����
	//����
	while (1)
	{
		//�������
		playerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//�ж�����Ƿ��ʤ
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		//��������
		computerMove(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		//�жϵ����Ƿ��ʤ
		ret = IsWin(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
	}
	if (ret == '*')
		printf("��һ�ʤ\n");
	else if (ret == '#')
		printf("���Ի�ʤ\n");
	else
		printf("ƽ��\n");
}

void test()
{
	int input = 0;
	do
	{
		srand((unsigned int)time(NULL));
		memu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch(input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����������ѡ��\n");
			break;

		}
	} while (input);
}

int main()
{
	test();
	return 0;
}