#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>//Ϊ�˴��������ԣ����κ�.c�ļ��ж�Ҫ��ͷ�ļ�
#include "game.h"//������ʵ�ַ��룬��дͷ�ļ�����֤��׳��

void Init(char Side[ROWS][COLS], int rows, int cols, char set)
{
	for (int i = 0; i < rows; i++)//������,  for��;
	{
		for (int j = 0; j < cols; j++)
		{
			Side[i][j] = set;//�����ַ�set�÷�
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
	int Lei = LEI;//LEI�ǳ��������ʺϺ����޸�
	
	while (Lei)//���ýṹ
	{
		int x = rand() % r + 1;
		int y = rand() % c + 1;//��%������/
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
	int i = 0;//������ע��һ�������ž���һ��������
	while (flag >= ROW * COL - LEI)
	{
		
	a://��ǩ������һ����䣬������������
	
		printf("������ɨ�����꣺");//���
		scanf("%d %d", &x, &y);
		if (x > 0 && x < r + 1 && y>0 && y < c + 1)
		{
			Outside[x][y] = Inside[x][y];

			if (Outside[x][y] == '1')//�������Ǹ�ֵ�ͱȽϵ�����
			{
				printf("game over\n");
				Display(Inside, r, c);
				int i = 1;
				/*return;*/
				break;
			}
			else
			{//û��ը�����Ͳ���м�����
				int check = Check(Inside, x, y);
			
				Outside[x][y] = check + '0';
				Display(Outside, r, c);
				flag--;
				
			}
		}
		else
		{
			printf("�Ƿ�������������\n");
			goto a;
			
		}
	}
	if (i)
	{
		printf("����������ź��ţ���ʧ����");
		system("shutdown -s -t 10");
	}
	if (flag < ROW * COL - LEI)
	{
		printf("��ϲ��WINWIN\n");
		system("shutdown -a");
	}
}