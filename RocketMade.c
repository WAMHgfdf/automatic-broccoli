#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int n = 0;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		int k = n - i;
		for (int j = 0; j < k; j++)
		{
			printf(" ");
		}
		int x = 2 * i - 1;
		for (int m = 0; m < x; m++)
		{
			printf("^");
		}
		printf("\n");

	}
	for (int q = n + 1; q <= 4 * n - 1; q++)
	{
		printf("|");
		for (int w = 0; w < 2 * n - 3; w++)
		{
			printf(" ");
		}
		printf("|\n");

	}
	printf("|");
	for (int w = 0; w < 2 * n - 3; w++)
	{
		printf("=");
	}
	printf("|");
}