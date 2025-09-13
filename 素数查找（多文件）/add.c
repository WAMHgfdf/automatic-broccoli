#define _CRT_SECURE_NO_WARNINGS
#include <math.h>//素数判断必不可少的头文件	
int add(int i)
{
	
	int sqr = (int)sqrt((double)i);//sqrt接受double类型，i先变为double再变为int
	for (int j = 2; j <= sqr; j++)
	{
		int flag = 1;
		if (i % j == 0)//能被整除就不是素数
		{
			flag = 0;
			return flag;
		}
		else
		{
			return flag;	
		}
	}
	
}