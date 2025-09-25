#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <time.h>//.h文件中应实现自包含，保证功能全打包
//写函数声明，而非本体
#define ROW 9
#define COL 9
#define ROWS ROW+2
#define COLS COL+2
#define LEI 10
void Init(char Side[ROWS][COLS], int rows, int cols, char set);
void Display(char Outside[ROWS][COLS], int r, int c);
void Set(char Inside[ROWS][COLS], int r, int c);
void Play(char Outside[ROWS][COLS], char Inside[ROWS][COLS], int r, int c);