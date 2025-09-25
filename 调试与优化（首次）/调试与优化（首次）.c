#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int i = 0;
	int q = 0;
	scanf("%d", &q);
	int n = 0;
	int ret = 1;
	int sum = 0;
	//for (n = 1; n <= q; n++)
	//{
	//	ret = 1;//这一行是补上去的，调试后发现，ret在这里缺少一个初始化
	//	for (i = 1; i <= n; i++)
	//	{
	//		ret *= i;

	//	}
	//	sum += ret;      //但这个代码写得不好，每一次都从1重新开始，麻烦
	//}
	for (n = 1; n <= q; n++)
	{
		ret *= n;
		sum += ret;
	}
	printf("%d\n", sum);
}