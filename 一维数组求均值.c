#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int i = 0;
	int arr[10] = { 0 };
	for (i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);//scanf����ʹ�ÿո񣬻ᵼ�³���������������ʱ�����ÿո񣬻ᱻ����
	}
	double average = 0.0;//��ƽ��ֵ��ʹ�þ��Ƚϸߵ�double
	for (i = 0; i < 10; i++)
	{
		average = average + (arr[i] - average) / (i + 1);//ȷ���ȶ��ԣ�ʹ������ƽ�������۲�����ֵ�Ⱦɵ�ƽ��ֵ����˶��٣���ƽ������Ϊ��ƽ��ֵ
	}
	printf("%f", average);
	
	return 0;
}