#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
extern /*int*/void times_table(int i/*,int j*/);//û�з���ֵ��Ӧʹ��void������int
int main()                                  //�β�һ���ǵñ�������int
{
	int i = 0;
	scanf("%d", &i);
	times_table(i);

	return 0;
}