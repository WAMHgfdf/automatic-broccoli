#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
extern /*int*/void times_table(int i/*,int j*/);//没有返回值，应使用void而不是int
int main()                                  //形参一定记得标明类型int
{
	int i = 0;
	scanf("%d", &i);
	times_table(i);

	return 0;
}