
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
void menu()//��װ����
{
	printf("***********************\n");
	printf("***********************\n");
	printf("********1.��ʼ��Ϸ*****\n");
	printf("********0.������Ϸ*****\n");
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
		printf("����%d�λ���,", count);
		printf("������֣�");
		scanf("%d", &guess);
		if (guess > r)
		{
			printf("�´���\n");
		}
		else if (guess < r)
		{
			printf("��С��\n");
		}
		else
		{
			printf("�¶��ˣ���ϲ\n");
			break;
		}
		count--;
	}
	if (count == 0)
	{
		printf("��λ��������꣬��Ϸʧ��\n");
		printf("��ȷ��������%d", r);
	}
}

int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));//ֻ����һ��
	do {
		menu();

		printf("�����룺");
		scanf("%d", &input);

		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����\n");
			break;
		}
	} while (input);

	return 0;
}


//��Ϊ���ӵ�ѭ���߼�