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
//1.ѧϰ�ַ����滻���˽�����Ĵ�ӡ
//2.�μ������Ŵ��㿪ʼ����һĪ��
//3.Sleep�ǵô�д,systemͷ�ļ�������stdlibҲ������windows