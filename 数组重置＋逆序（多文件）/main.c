#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
extern void init(int arr[], int sz);
extern void print(int arr[], int sz);
extern void reverse(int arr[], int sz);
int main()
{
	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	/*void*/ init(arr, sz);
	/*void */print(arr, sz);//调用函数不用标类型
	for (int i = 0; i < sz; i++)
	{
		scanf("%d", &arr[i]);
	}
	/*void*/ reverse(arr,sz);
	for (int t = 0; t < sz; t++)
	{
		printf("%d", arr[t]);
	}

	return 0;
}