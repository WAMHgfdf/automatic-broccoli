#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

#include <math.h>

int main()

{

	int i, j;

	int flag = 1;

	for (i = 101; i < 201; i += 2)

	{

		for (j = 2; j <= (int)sqrt(i); j += 2)

		{

			if (i % j == 0)

				flag = 0;

			break;

		}

		if (flag)

		{

			printf("%d ", i);

		}

	}

	return 0;

}
//flag作为标记量的使用