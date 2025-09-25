#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>//为了代码清晰性，在任何.c文件中都要有头文件
#include "game.h"//声明与实现分离，并写头文件，保证健壮性

void Init(char Side[ROWS][COLS], int rows, int cols, char set)
{
	for (int i = 0; i < rows; i++)//函数用,  for用;
	{
		for (int j = 0; j < cols; j++)
		{
			Side[i][j] = set;//看好字符set用法
		}
	}
}
void Display(char Outside[ROWS][COLS], int r, int c)
{
	for (int t = 0; t < r+1; t++)
	{
		printf("%d ", t);
	}
	printf("\n");
	for (int i = 1; i <=  r; i++)
	{
		printf("%d ", i );
		for (int j = 1; j <= c; j++)
		{
			
			printf("%c ", Outside[i][j]);
		}
		printf("\n");
	}
}
void Set(char Inside[ROWS][COLS], int r, int c)
{
	int Lei = LEI;//LEI是常量，不适合后续修改
	
	while (Lei)//常用结构
	{
		int x = rand() % r + 1;
		int y = rand() % c + 1;//用%而不是/
		if (Inside[x][y] == '0')
		{
			Inside[x][y] = '1';
		}
		Lei--;
	}

}
int Check(char Inside[ROWS][COLS], int r, int c)
{
	return (Inside[r - 1][c - 1] + Inside[r - 1][c] + Inside[r - 1][c + 1] + Inside[r][c + 1] + Inside[r][c - 1] + Inside[r + 1][c - 1] + Inside[r + 1][c] + Inside[r + 1][c + 1] - '0' * 8);
}
void Play(char Outside[ROWS][COLS], char Inside[ROWS][COLS], int r, int c)
{
	int flag = ROW * COL;
	int x, y = 0;
	int i = 0;//声明，注意一个大括号就是一个作用域
	while (flag >= ROW * COL - LEI)
	{
		
	a://标签后必须跟一个语句，而不能是声明
	
		printf("请输入扫雷坐标：");//语句
		scanf("%d %d", &x, &y);
		if (x > 0 && x < r + 1 && y>0 && y < c + 1)
		{
			Outside[x][y] = Inside[x][y];

			if (Outside[x][y] == '1')//总是忘记赋值和比较的区别
			{
				printf("game over\n");
				Display(Inside, r, c);
				int i = 1;
				/*return;*/
				break;
			}
			else
			{//没被炸死，就查查有几个雷
				int check = Check(Inside, x, y);
			
				Outside[x][y] = check + '0';
				Display(Outside, r, c);
				flag--;
				
			}
		}
		else
		{
			printf("非法，请重新输入\n");
			goto a;
			
		}
	}
	if (i)
	{
		printf("桀桀桀，令人遗憾呐，你失败了");
		system("shutdown -s -t 10");
	}
	if (flag < ROW * COL - LEI)
	{
		printf("恭喜你WINWIN\n");
		system("shutdown -a");
	}
}