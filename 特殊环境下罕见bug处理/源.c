#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()//次bug在x86 debug下出现
{
	int i = 0;
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	for (i = 0; i <= 12; i++)
	{
		arr[i] = 0;
		printf("hehe");
	}
	return 0;
}