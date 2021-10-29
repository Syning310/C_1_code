#define _CRT_SECURE_NO_WARNINGS



#include<stdio.h>
//查看CPU大小端
int check_CPU()
{
	int a = 1;
	char* p = (char*)&a;
	return *p;  //返回1就是小端，返回0说明是大端
}

int main()
{

	int ret = check_CPU();
	if (ret)
		printf("当前CPU为：小端\n");
	else
		printf("当前CPU为：大端\n");


	//int a = 1;

	//char* p = (char*)&a;

	//if (*p == 1)
	//	printf("当前CPU为：小端\n");
	//else
	//	printf("当前CPU为：大端\n");

	return 0;
}


