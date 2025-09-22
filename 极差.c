#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int n = 0;
	scanf("%d", &n);
	int arr[10000] = { 0 };
	for (int i = 0; i < n; i++)
	{


		scanf("%d", &arr[i]);
	}
	//for (int i = 0; i < n; i++)
	//{
	//	for (int j = i+1; j < n; j++)
	//	{
	//		/*if (arr[j] > arr[j + 1])
	//		{
	//			int t = arr[j];     //错误版本，冒泡算法不是这样写的；
	//			arr[j] = arr[j + 1];
	//			arr[j + 1] = t;
	//		}
	//		else
	//		{
	//			break;  
	//		}*/
	//		if(arr[i] > arr[j])
	//		{
	//			int t = arr[i];     
	//			arr[i] = arr[j];
	//			arr[j] = t;
	//		}//正确的冒泡算法，i j分离


	//	}

	//}
	int max = arr[0];
	int	min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (min > arr[i])
		{
			/*int t = min;
			min = arr[i];
			arr[i] = t;*/   //这是交换次序的算法，而不是比较大小的
			min = arr[i];
		}
		if (max < arr[i])
		{
			
			max = arr[i];
			
		}
	}
	printf("%d", max-min);

	return 0;
}
