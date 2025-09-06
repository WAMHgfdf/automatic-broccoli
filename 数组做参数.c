#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void set_arr(int arr [], int sz)
{
	for (int i = 0; i < sz; i++)
	{
		arr[i] = -1;
	}
}
void print(int arr[], int sz)//注意函数名后不需要；
{
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}
int main()
{
	int arr[10] = { 0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	print(arr, sz);
	set_arr(arr, sz);
	print(arr, sz);
	return 0;
}