#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9 };
	int a = 0;
	int b = sizeof(arr) / sizeof(arr[0])-1;
	int s = 0;
	int flag =0;
	scanf("%d", &s);
	while (a <= b)
	{
		int i = a + (b-a) / 2;
		
		if (arr[i] > s)
		{
			b = i;
			b--;
		}
		else if (arr[i] < s)
		{
			a = i;
			a++;
		}
		else
		{
			printf("已找到，序号为%d", i);
			flag = 1;
			break;
		}
	}
	if (flag ==0)
		printf("未找到");
		return 0;
	
}
//注意b--和a++，如果没有这样的变化会导致死循环
//再次强调赋值=与判断==的区别