#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
extern int add(int i);
int main()
{
	for (int i = 100; i < 201; i++)
	{
		/*int back = add(i);*/
		if (add(i))
		{
			printf("%d ", i);
		}

	}

	return 0;
}