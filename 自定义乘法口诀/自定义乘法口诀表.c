#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>//д������Ҫ�����ں�����
void times_table(int i/*,int j*/)
{
	for (int a = 1; a < i+1; a++)//��1��ʼ��������0
	{
		for (int b = 1; b < a+1; b++)
		{
			printf("%d * %d = %-4d   ", a, b, a * b);
		}
		printf("\n");
	}
}
//���ԣ���������к������������Ļ���û��д�����ǵ���ʽ
//%-4d�У�-��ʾ����룬4��ʾ��С�ַ����