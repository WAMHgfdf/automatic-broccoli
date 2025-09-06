#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
_Bool leap_year(int y)//_Bool判定复习
{
	if ((y % 4 == 0 && y % 400 != 0) || (y % 400 == 0))//注意括号
	{
		return true;
	}
	else
	{
		return false;
	}
}
int days_check(int y, int m)
{
	int days[] = {0,31,28,31,30,31,30,31,31,30,31,30,31 };
	//列出日期的数组，0是为了数组序号与月份一一对应
	int day = days[m];//将数组中某个数取出
	if (leap_year(y) && m == 2)
	{
		day++;
	}
	return day;
}
int main()
{

	int year, month = 0;
	scanf("%d %d", &year, &month);
	int day=days_check(year,month);
	printf("%d", day);
	return 0;
}