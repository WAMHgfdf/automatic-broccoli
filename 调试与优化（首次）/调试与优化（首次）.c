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
	//	ret = 1;//��һ���ǲ���ȥ�ģ����Ժ��֣�ret������ȱ��һ����ʼ��
	//	for (i = 1; i <= n; i++)
	//	{
	//		ret *= i;

	//	}
	//	sum += ret;      //���������д�ò��ã�ÿһ�ζ���1���¿�ʼ���鷳
	//}
	for (n = 1; n <= q; n++)
	{
		ret *= n;
		sum += ret;
	}
	printf("%d\n", sum);
}