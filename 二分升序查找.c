#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9 };
	int a = 0;
	int b = sizeof(arr) / sizeof(arr[0])-1;
	int s = 0;
	int flag =0;
	scanf("%d", &s);
	while (a <= b)
	{
		int i = a + (b-a) / 2;
		
		if (arr[i] > s)
		{
			b = i;
			b--;
		}
		else if (arr[i] < s)
		{
			a = i;
			a++;
		}
		else
		{
			printf("���ҵ������Ϊ%d", i);
			flag = 1;
			break;
		}
	}
	if (flag ==0)
		printf("δ�ҵ�");
		return 0;
	
}
//ע��b--��a++�����û�������ı仯�ᵼ����ѭ��
//�ٴ�ǿ����ֵ=���ж�==������