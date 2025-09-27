#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "game.h"
#include <stdlib.h>
#include <time.h>
void borad()
{
	printf("            扫雷游戏         \n");
	printf("*****************************\n");
	printf("***********是否开始**********\n");
	printf("***********1.开始************\n");
	printf("***********0.结束************\n");
	printf("*****************************\n");
}
void game()
{
	
	char Inside[ROLS][COLS];
	char Outside[ROLS][COLS];//可以先建立，但不初始化
	Init(Inside, ROLS, COLS,'0');//通过多加一个参数，使得函数输入有灵活性
	Init(Outside, ROLS, COLS,'*');//实参可以用数字，形参不可以
	Do(Inside, ROLS, COLS);
	/*Check(Inside, ROLS, COLS);*/
	Choose(Outside, Inside, ROLS, COLS);
}
int main()
{
	int choice = 0;
	srand((unsigned int)time(NULL));
	do {
		borad();//choice放出去，while识别；borad放进来，每次都有面板选择
		scanf("%d", &choice);
		switch (choice)
		{
		case 1:
			game();
			break;
		case 0:
			printf("游戏已结束\n");
			break;
		default:
			printf("非法输入，请重新选择\n");
			break;
		}
	} while (choice);//这里还有个;
		
	

	return 0;
}