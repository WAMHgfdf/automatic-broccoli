#define _CRT_SECURE_NO_WARNINGS
int efcz(int arr[], int left, int right, int key)
{
	//int flag = 0;
	//while (flag == 0 && left<right)
   //С�ĵͼ�����== 
	while (left<=right)
	{
		int mid = (left + right) / 2;//ʹ��mid��������
		if (key<arr[left] || key>arr[right])
		{
			return -1;
		}
		else
		{
			if (key < arr[mid])
			{
				right = mid-1;//����Ӽ�һ������left��right����ʱ��mid==left,��ѭ�����������Ķ��ֲ��ң����Խ����Ӽ�1����ʱ����ѭ��
			}             //ͬ��flag��־����
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
		return -1;   //if�ж�������û��Ҫ����Ϊ�������ɹ��ҵ����������return����ִ��
	}*/
	return -1;
}