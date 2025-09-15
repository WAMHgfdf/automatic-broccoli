#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void print(int arr[], int sz)
{
		for (int i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}	
		printf("\n");//换行保证清晰
}