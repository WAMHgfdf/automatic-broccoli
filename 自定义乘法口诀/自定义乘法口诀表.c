#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>//写的内容要包含在函数中
void times_table(int i/*,int j*/)
{
	for (int a = 1; a < i+1; a++)//从1开始，而不是0
	{
		for (int b = 1; b < a+1; b++)
		{
			printf("%d * %d = %-4d   ", a, b, a * b);
		}
		printf("\n");
	}
}
//不对，如果输入行和列两个变量的话，没法写成三角的形式
//%-4d中，-表示左对齐，4表示最小字符宽度