#define _CRT_SECURE_NO_WARNINGS





#include<stdio.h>
#include<Windows.h>
int Add(int x, int y);
int Sub(int x, int y);
int Mul(int x, int y);
int Div(int x, int y);
void menu();
int main()
{

	int input = 0;

	do
	{
		int (*pfun[5])(int, int) = { NULL, Add, Sub, Mul, Div };
		int x = 0;
		int y = 0;
		int restul = 0;
		menu();
		printf("��ѡ�����-> ");
		scanf("%d", &input);
		if (input >= 1 && input <= 4)
		{
			printf("��������������-> ");
			scanf("%d %d", &x, &y);
			restul = pfun[input](x, y);
			printf("restul = %d\n", restul);
		}
		else if (input == 0)
		{
			printf("Exit\n");
			break;
		}
		else
		{
			printf("ѡ�����\n");
			system("pause");
			system("cls");
		}

	} while (input);



	return 0;
}
int Add(int x, int y)
{
	return x + y;
}
int Sub(int x, int y)
{	
	return x - y;
}
int Mul(int x, int y)
{
	return x * y;
}
int Div(int x, int y)
{
	return x / y;
}
void menu()
{
	printf("************************\n");
	printf("*** 1��Add    2��Sub ***\n");
	printf("*** 3��Mul    4��Div ***\n");
	printf("******* 0��Exit ********\n");
	printf("************************\n");
}




//����ָ������
//#include<stdio.h>
//
//int Add(int x, int y);
//int Sub(int x, int y);
//int main()
//{
//	int (*pfun[2])(int, int) = { Add,Sub };
//	
//
//	return 0;
//}
//int Add(int x, int y)
//{
//	return x + y;
//}
//int Sub(int x, int y)
//{
//	return x - y;
//}

