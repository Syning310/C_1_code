#define _CRT_SECURE_NO_WARNINGS




#include<stdio.h>
#include<string.h>

//��һ�仰�ĵ��ʽ��е��ã���㲻����(����100���ַ�); �磺I like Quanzhou.  ת��Ϊ��Quanzhou. like I

void reverst(char* left, char* right);
int main()
{
	char arr[100];
	//scanf����ֻ���ȡ�ո�ͻ��з�֮ǰ���ַ�
	gets(arr);

	int len = strlen(arr);

	//1����ת�����ַ���
	reverst(arr, arr + len - 1);  

	//2����ת����
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