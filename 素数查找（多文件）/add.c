#define _CRT_SECURE_NO_WARNINGS
#include <math.h>//�����жϱز����ٵ�ͷ�ļ�	
int add(int i)
{
	
	int sqr = (int)sqrt((double)i);//sqrt����double���ͣ�i�ȱ�Ϊdouble�ٱ�Ϊint
	for (int j = 2; j <= sqr; j++)
	{
		int flag = 1;
		if (i % j == 0)//�ܱ������Ͳ�������
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