#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int d, w, t = 0;
	scanf("%d %d", &d, &w);
	scanf("%d", &t);
	int m, n = 0;
	m = (t-((1-w)+d)) % 7+1;//不用方括号 //注意－8的负数影响
	n = t - d;
	printf("%d %d", m, n);
	
}