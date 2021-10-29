#define _CRT_SECURE_NO_WARNINGS



#include<stdio.h>
#include<assert.h>

char* myStrcpy(char* dest, const char* sour)
{
	assert(sour != NULL);  //断言
	assert(dest != NULL);
	char* ret = dest;
	while (*dest++ = *sour++)
	{
		;
	}
	return ret;
}
int main()  //模拟实现strcpy
{
	
	char destination[20] = "qqqqqqqqqqqqqqqq";
	char source[] = "hello China";
	char dest2[20] = "wwwwwwwwww";

	myStrcpy(dest2, myStrcpy(destination, source));
	printf("%s\n", destination);
	printf("%s\n", dest2);
	
	return 0;
}





//#include<stdio.h>  //初识递归
//
//
//void print(unsigned int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//int main()
//{
//	unsigned int num = 0;
//	scanf("%u", &num);
//	print(num);
//
//
//	return 0;
//}


//#include<stdio.h>
//#include<Windows.h>
//
//int main()
//{
//
//	char arr1[] = "Welcome to China!!!!!!!";
//	char arr2[] = "-----------------------";
//	int left = 0;
//	int right = strlen(arr2) - 1;
//	do
//	{	
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);
//		system("cls");
//		++left;
//		--right;
//
//
//	} while (left <= right);
//	printf("%s\n", arr2);
//
//	return 0;
//}



//#include<stdio.h>
//#include<string.h>
//int main()
//{
//
//	char password[20] = { 0 };
//
//	int i = 0;
//	for (i = 0; i < 3; ++i)
//	{
//		printf("请输入密码： ");
//		scanf("%s", password);
//		if (strcmp(password, "a123456") == 0)
//		{
//			printf("登陆成功\n");
//			break;
//		}
//		else
//		{
//			printf("密码错误，重新输入\n");
//		}
//	}
//	if (i == 3)
//	{
//		printf("三次输入皆错误\n");
//	}
//
//	return 0;
//}