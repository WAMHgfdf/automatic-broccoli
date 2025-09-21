#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main()
{
	int i = 0;
	scanf("%d", &i);
	/*char str[] = "Our trail paves the rail starward!";
	int t = strlen(str);*/
	

	switch (i)
	{
		case 1:
		{
			printf("#include <stdio.h>");
		}
		case 2:
		{
			printf("int main()");
		}
		case 3:
		{
			printf("{");
		}
		case 4:
		{//Our trail paves the rail starward!
		 //***********************************
			printf("    printf(\"Our trail paves the rail starward!\");");
			//不太常见，但可以实现printf嵌套打出
		}
		case 5:
		{
			printf("    return 0;");
		}
		case 6:
		{
			printf("}");
		}
	}
	return 0;
}