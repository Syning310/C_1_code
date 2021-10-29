#define _CRT_SECURE_NO_WARNINGS



#include<stdio.h>




int main()
{

	int line = 0;
	scanf("%d", &line);

	//ио
	for (int i = 0; i < line; ++i)
	{
		for (int j = 0; j < line - 1 - i; ++j)
		{
			printf(" ");
		}
		for (int k = 0; k < 2 * i + 1; ++k)
		{
			printf("*");
		}
		printf("\n");
	}
	//об
	for (int i = 0; i < line - 1; ++i)
	{
		for (int j = 0; j <= i; ++j)
		{
			printf(" ");
		}
		for (int k = 0; k < 2 * (line - 1 - i) - 1; ++k)
		{
			printf("*");
		}
		printf("\n");
	}



	return 0;
}