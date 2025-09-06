#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
extern int efcz(int arr[], int left, int right, int key);
int main()
{
	int arr[10] = {0, 1,2,3,4,5,6,7,8,9 };
	int key,left = 0;
	
	int right = 9;
	scanf("%d", &key);
	int back = efcz(arr, left, right, key);//arr[10]是数组中的一个数，arr才是数组名，注意
	printf("%d", back);
	return 0;
}