#define _CRT_SECURE_NO_WARNINGS
void reverse(int arr[], int sz)
{
	for (int i = 0; /*i <= sz/2，错在忘记从零开始的计算区别*/i<sz/2 ; i++)
	{
		int t = arr[i];
		int k = sz - 1 - i;
		arr[i] = arr[k];
		arr[k] = t;
	}
}