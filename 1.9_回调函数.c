#define _CRT_SECURE_NO_WARNINGS



//回调函数
#include<stdio.h>
#include<Windows.h>
int Add(int x, int y);
int Sub(int x, int y);
int Mul(int x, int y);
int Div(int x, int y);
void menu();
int calc(int (*p)(int, int));
int main()
{
	int input = 0;
	do
	{
		int restul = 0;
		menu();
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			restul = calc(Add);
			printf("%d\n", restul);
			break;
		case 2:
			restul = calc(Sub);
			printf("%d\n", restul);
			break;
		case 3:
			restul = calc(Mul);
			printf("%d\n", restul);
			break;
		case 4:
			restul = calc(Div);
			printf("%d\n", restul);
			break;
		case 0:
			printf("Exit\n");
			system("pause");
		default:
			printf("输入有误，重新输入\n");
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
	printf("*** 1、Add    2、Sub ***\n");
	printf("*** 3、Mul    4、Div ***\n");
	printf("******* 0、Exit ********\n");
	printf("************************\n");
}
int calc(int (*pfun)(int, int))
{
	int x, y;
	printf("请输入两个整数->");
	scanf("%d %d", &x, &y);

	return pfun(x, y);
}