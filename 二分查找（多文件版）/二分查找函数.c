#define _CRT_SECURE_NO_WARNINGS
int efcz(int arr[], int left, int right, int key)
{
	//int flag = 0;
	//while (flag == 0 && left<right)
   //小心低级错误，== 
	while (left<=right)
	{
		int mid = (left + right) / 2;//使用mid更有意义
		if (key<arr[left] || key>arr[right])
		{
			return -1;
		}
		else
		{
			if (key < arr[mid])
			{
				right = mid-1;//必须加减一，否则当left与right相邻时，mid==left,死循环，而正常的二分查找，可以借助加减1，及时跳出循环
			}             //同理，flag标志冗余
			else if (key > arr[mid])
			{
				left = mid+1;
			}
			else
			{
				return mid;
				//flag = 1;
			}
		}
	}
	/*if (left == right)
	{
		return -1;   //if判定在这里没必要，因为上面若成功找到，下面这个return不会执行
	}*/
	return -1;
}