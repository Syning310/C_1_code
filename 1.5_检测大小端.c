#define _CRT_SECURE_NO_WARNINGS



#include<stdio.h>
//�鿴CPU��С��
int check_CPU()
{
	int a = 1;
	char* p = (char*)&a;
	return *p;  //����1����С�ˣ�����0˵���Ǵ��
}

int main()
{

	int ret = check_CPU();
	if (ret)
		printf("��ǰCPUΪ��С��\n");
	else
		printf("��ǰCPUΪ�����\n");


	//int a = 1;

	//char* p = (char*)&a;

	//if (*p == 1)
	//	printf("��ǰCPUΪ��С��\n");
	//else
	//	printf("��ǰCPUΪ�����\n");

	return 0;
}


