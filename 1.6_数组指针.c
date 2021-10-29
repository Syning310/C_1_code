#define _CRT_SECURE_NO_WARNINGS

//二维数组的数组名，是二维数组首元素的地址，也就是第一行的元素

#include<stdio.h>

void print1(int arr[3][5], int row, int col);
void print2(int(*p)[5], int row, int col);
int main()
{


	int arr[3][5] = {
		{1,2,3,4,5},
		{6,7,1,2,3},
		{4,5,6,7,8}
	};

	print1(arr, 3, 5);
	print2(arr, 3, 5);



	/*int arr[5] = { 1,2,3,4,5 };
	int (*pArr)[5] = &arr;
	int i = 0;
	for (i = 0; i < 5; ++i)
	{
		printf("%d ", *((*pArr) + i));
	}*/
	
	return 0;
}

void print1(int arr[3][5], int row, int col)
{
	int i, j;
	for (i = 0; i < row; ++i)
	{
		for (j = 0; j < col; ++j)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}

void print2(int (*p)[5], int row, int col)
{
	int i, j;
	for (i = 0; i < row; ++i)
	{
		for (j = 0; j < col; ++j)
		{
			printf("%d ", *(*(p + i)+j));
		}
		printf("\n");
	}
}












//int main()
//{

	//int one[5] = { 0, 1, 2, 3, 4 };
	//int two[5] = { 5,6,7,8,9 };
	//int three[5] = { 10, 11,12,13,14 };

	//int* pArr[3] = { one, two, three };
	//
	//int i = 0;
	//for (i = 0; i < 3; ++i)
	//{
	//	int j = 0;
	//	for (j = 0; j < 5; ++j)
	//	{
	//		//printf("%d  ", *(pArr[i] + j));
	//		printf("%d  ", pArr[i][j]);  
	//	}
	//	printf("\n");
	//}

	 

	//char* ps = "hellow world";
	//printf("%s\n", ps);


//	return 0;
//}

