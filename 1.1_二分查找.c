#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


static count = 0;
int search_key(int a[], int len, int k)
{
	--len;  //最后一个元素的下标
	int left = 0;
	int right = len;

	int medium = 0;
	while (left <= right)
	{
		++count;
		medium = (left + right) / 2;
		if (a[medium] < k)
		{
			left = medium + 1;
		}
		else if (a[medium] > k)
		{
			right = medium - 1;
		}
		else
		{
			return medium;
		}
	}

	return -1;
}

int main()
{
	int arr[50000] = { 0 };
	int i = 0;
	for (i = 0; i < 50000; ++i)
	{
		arr[i] = i + 1;
	}
	int arr_Len = sizeof(arr) / sizeof(arr[0]);  //传递数组的长度
	
	int key = 2000;  //需要寻找的值
	//找到元素就返回数组下标，若无找到就返回-1
	int ret = search_key(arr, arr_Len, key);
	if (ret == -1)
	{
		printf("没有找到该元素\n");
	}
	else
	{
		printf("查询到元素%d，下标为%d\n",arr[ret], ret);
	}
	printf("一共查找了%d次\n", count);

	return 0;
}





//int main()
//{
//	int arr[50000] = { 0 };
//	int i = 0;
//	for (i = 0; i < 50000; ++i)
//	{
//		arr[i] = i + 1;
//	}
//
//	int count = 0;  //统计查找次数
//	int see = 1;  //查找的数字
//
//	int left = 0;
//	int right = (sizeof(arr) / sizeof(arr[0])) - 1;
//	int medium = 0;
//	while (left <= right)
//	{
//		++count;
//		medium = (left + right) / 2;
//		if (arr[medium] == see)
//		{
//			printf("找到了%d\n", see);
//			printf("一共查找了%d\n", count);
//			break;
//		}
//		else if (arr[medium] < see)
//		{
//			left = medium + 1;
//		}
//		else if (arr[medium] > see)
//		{
//			right = medium - 1;
//		}
//	}	
//	
//	if (left > right) {
//		printf("没有找到该数字\n");
//	}
//	return 0;
//}