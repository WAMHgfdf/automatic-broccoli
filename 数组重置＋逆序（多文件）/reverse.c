#define _CRT_SECURE_NO_WARNINGS
void reverse(int arr[], int sz)
{
	for (int i = 0; /*i <= sz/2���������Ǵ��㿪ʼ�ļ�������*/i<sz/2 ; i++)
	{
		int t = arr[i];
		int k = sz - 1 - i;
		arr[i] = arr[k];
		arr[k] = t;
	}
}