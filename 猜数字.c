
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
void menu()//封装函数
{
	printf("***********************\n");
	printf("***********************\n");
	printf("********1.开始游戏*****\n");
	printf("********0.结束游戏*****\n");
	printf("***********************\n");
	printf("***********************\n");
}

void game()
{

	int r = rand() % 100 + 1;
	int guess = 0;
	system("cls");

	int count = 5;
	while (count)
	{
		printf("你有%d次机会,", count);
		printf("请猜数字：");
		scanf("%d", &guess);
		if (guess > r)
		{
			printf("猜大了\n");
		}
		else if (guess < r)
		{
			printf("猜小了\n");
		}
		else
		{
			printf("猜对了，恭喜\n");
			break;
		}
		count--;
	}
	if (count == 0)
	{
		printf("五次机会已用完，游戏失败\n");
		printf("正确的数字是%d", r);
	}
}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));//只设置一次
	do {
		menu();

		printf("请输入：");
		scanf("%d", &input);

		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误\n");
			break;
		}
	} while (input);

	return 0;
}


//较为复杂的循环逻辑