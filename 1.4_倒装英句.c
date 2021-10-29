#define _CRT_SECURE_NO_WARNINGS




#include<stdio.h>
#include<string.h>

//将一句话的单词进行倒置，标点不倒置(上限100个字符); 如：I like Quanzhou.  转换为：Quanzhou. like I

void reverst(char* left, char* right);
int main()
{
	char arr[100];
	//scanf函数只会读取空格和换行符之前的字符
	gets(arr);

	int len = strlen(arr);

	//1、翻转整串字符串
	reverst(arr, arr + len - 1);  

	//2、翻转单词
	char* begin = arr;
	while (*begin)
	{
		char* end = begin;
		while (*end != ' ' && *end != '\0')
		{
			++end;
		}
		reverst(begin, end - 1);
		if (*end == ' ')
			begin = end + 1;
		else if(*end == '\0')
			begin = end;
	}

	printf("%c\n", *begin);
	printf("%s\n", arr);


	return 0;
}


void reverst(char* left, char* right)
{
	char temp = "";

	while (left < right)
	{
		temp = *left;
		*left = *right;
		*right = temp;
		--right;
		++left;
	}

}