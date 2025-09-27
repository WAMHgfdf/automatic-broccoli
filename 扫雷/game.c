
#define _CRT_SECURE_NO_WARNINGS
#include "game.h"
void Init(char Side[ROLS][COLS], int r, int c,char set)
{
	
	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			Side[i][j] = set;
			
		}
	}
}
void Do(char Inside[ROLS][COLS], int r, int c)
{
	for (int i = ROL; i >= 0; i--)
	{
		int x = rand() % ROL + 1;//注意rand语法
		int y = rand() % COL + 1;
		if (Inside[x][y] != 1)
		{
			Inside[x][y] = '1';
		}
		else
		{
			i++;
		}
	}
}
void Choose(char Outside[ROLS][COLS], char Inside[ROLS][COLS], int r, int c)
{
	
	int x = 0;
	int y = 0;
	Display(Outside, r, c);
	/*int flag = 71;*/
	int count = 0;
	int win_count = 0;//记录已经检索过的格子个数
	while (win_count<r*c-ROL-1)
	{
		printf("请选择扫雷坐标：");

		scanf("%d %d", &x, &y);
		if (x < ROL+1 && x>0 && y < COL+1 && y>0)
		{
			if (Inside[x][y] == '1')
			{
				printf("Failed,展示本次棋盘：\n");
				Display(Inside, ROLS, COLS);
				/*flag = -1;*/
			}
			else
			{
				//int t=LEISUAN(Inside, x, y);
				//Outside[x][y] = t + '0';       //很巧妙，利用'0'实现数字与字符的转换适应数组类型，而数组类型本身是为了打出字符，区分周围一圈以及显示的雷的数量
				//Check(Outside, r, c);
				/*Expand(Outside, Inside, x, y);*/

				win_count += GetMineCount(Outside, Inside, x, y);
				//flag--;
				//if (flag == 0)
				//{
				//	printf("win!win!win!\n"); //递归展开的话，flag需要修改
				//	
				//}
				Display(Outside, r, c);

			}

		}
		else
		{
			printf("非法输入，请重试\n");
		}

	}
	
}
void Display(char Side[ROLS][COLS], int r, int c)
{
	for (int i = 0; i <= ROL; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (int j = 1; j <= COL; j++)
	{

		printf("%d ", j);
		for (int i = 1; i <= COL; i++)
		{
			printf("%c ", Side[j][i]);
		}
		printf("\n");
	}
}
int GetMineCount(char Outside[ROLS][COLS], char Inside[ROLS][COLS], int x, int y)
{
	int count = 0;
	int win_count = 0;//win_count用于记录新打开的格子数，进了if，新格子，+1；没进if，旧格子or越界,很关键！控制流程！
	if (x > 0 && x <= ROL && y > 0 && y > 0 && y <= COL && Outside[x][y]=='*')//这是递归展开的条件
	{
		for (int i = x - 1; i <= x + 1; i++)
		{
			for (int j = y - 1; j <= y + 1; j++)
			{
				if (i == x && j == y)
				{
					continue;
				}
				else 
				{
					count += Inside[i][j] - '0';//已经给过类型的变量，不能再写一遍类型
				}
			}
		}
		Outside[x][y] = count + '0';
		win_count++;
		if (count == 0)//这是递归的限制
		{
			for (int i = x - 1; i <= x + 1; i++)
			{
				for (int j = y - 1; j <= y + 1; j++)
				{
					if (i == x && j == y)
					{
						continue;
					}
					else
					{
						win_count += GetMineCount(Outside, Inside, i, j);
					}
				}
			}
		}
	}
	return win_count;
}

//int LEISUAN(char Inside[ROLS][COLS], int x, int y)
//{
//	int t = Inside[x - 1][y - 1] + Inside[x][y - 1] + Inside[x + 1][y - 1] + Inside[x - 1][y] + Inside[x + 1][y] + Inside[x - 1][y + 1] + Inside[x][y + 1] + Inside[x + 1][y + 1] - 8 * '0';
//	return t;
//}
//
//void Expand(char Outside[ROLS][COLS], char Inside[ROLS][COLS], int x, int y)//声明与定义中变量一定写全，例如数组后的两个方括号
//{
//	int depth = 0;
//
//	if ((x < 1 || x>9 || y < 1 || y>9) || (Outside[x][y] != '*'))
//	{
//		return;
//	}
//	int t = LEISUAN(Inside, x, y);
//	if (t > 0)
//	{
//		Outside[x][y] = t + '0';
//	}
//	else
//	{
//		Outside[x][y] = '0';
//		for (int i = -1; i < 2; i++)
//		{
//			for (int j = -1; j < 2; j++)
//			{
//				if (i == 0 && j == 0)
//				{
//					continue;
//				}
//				else
//				{
//					depth++;
//					printf("%d\n", depth);
//					if (depth > 100)
//					{
//						printf("WARNINGS");
//					}
//					Outside[x][y] = '0';
//					Expand(Outside, Inside, x + i, y + j);
//
//
//				}
//			}
//		}
//	}
//	return;
//}