#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int i = 0;
	int arr[10] = { 0 };
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);//scanf不可使用空格，会导致程序卡死，正常输入时可以用空格，会被忽略
	}
	double average = 0.0;//求平均值，使用精度较高的double
	for (i = 0; i < 10; i++)
	{
		average = average + (arr[i] - average) / (i + 1);//确保稳定性，使用增量平均法，观察新数值比旧的平均值多出了多少，再平均分配为新平均值
	}
	printf("%f", average);
	
	return 0;
}