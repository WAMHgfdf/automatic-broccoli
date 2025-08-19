#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <windows.h>
int main()
{
	char arr1[] = "I love Kiana.";
	char arr2[] = "#############";
	int r = strlen(arr1)-1;
		for (int i = 0; i <= r; i++)
		{
			arr2[i] = arr1[i];
			arr2[r] = arr1[r];
			r--;
			printf("%s\n", arr2);
			Sleep(1000);
			system("cls");
		}
		printf("%s\n", arr2);
	return 0;
}
//1.学习字符的替换，了解数组的打印
//2.牢记数组编号从零开始，减一莫忘
//3.Sleep记得大写,system头文件可以是stdlib也可以是windows