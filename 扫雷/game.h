#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define ROL 9
#define COL 9
#define ROLS ROL+2
#define COLS COL+2 //��������Ҫ�Ļ����ĸ��������
void Init(char Side[ROLS][COLS], int r, int c,char set);
void Do(char inside[ROLS][COLS], int r, int c);
void Display(char Side[ROLS][COLS], int r, int c);//ע����滻��r c��λ��дΪROLS��COLS�ᱻ�滻Ϊ11��11������������������
void Choose(char Outside[ROLS][COLS], char Inside[ROLS][COLS], int r, int c);
//int LEISUAN(char Inside[ROLS][COLS], int x, int y);
//void Expand(char Outside, char Inside, int x, int y);
int GetMineCount(char Outside[ROLS][COLS], char Inside[ROLS][COLS], int x, int y);