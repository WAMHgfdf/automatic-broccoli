#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "game.h"
#include <stdlib.h>
#include <time.h>
void borad()
{
	printf("            ɨ����Ϸ         \n");
	printf("*****************************\n");
	printf("***********�Ƿ�ʼ**********\n");
	printf("***********1.��ʼ************\n");
	printf("***********0.����************\n");
	printf("*****************************\n");
}
void game()
{
	
	char Inside[ROLS][COLS];
	char Outside[ROLS][COLS];//�����Ƚ�����������ʼ��
	Init(Inside, ROLS, COLS,'0');//ͨ�����һ��������ʹ�ú��������������
	Init(Outside, ROLS, COLS,'*');//ʵ�ο��������֣��ββ�����
	Do(Inside, ROLS, COLS);
	/*Check(Inside, ROLS, COLS);*/
	Choose(Outside, Inside, ROLS, COLS);
}
int main()
{
	int choice = 0;
	srand((unsigned int)time(NULL));
	do {
		borad();//choice�ų�ȥ��whileʶ��borad�Ž�����ÿ�ζ������ѡ��
		scanf("%d", &choice);
		switch (choice)
		{
		case 1:
			game();
			break;
		case 0:
			printf("��Ϸ�ѽ���\n");
			break;
		default:
			printf("�Ƿ����룬������ѡ��\n");
			break;
		}
	} while (choice);//���ﻹ�и�;
		
	

	return 0;
}