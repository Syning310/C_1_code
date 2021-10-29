#define _CAT_SECURE_NO_WARNINGS



#include<stdio.h>
#include<string.h>



char* my_strncat(char* insert, const char* back, size_t num);
int main()
{

	char arr[20] = "hello ";
	char src[] = "world";

	my_strncat(arr, src, 5);

	return 0;
}

char* my_strncat(char* insert, const char* back, size_t num)
{
	char* ret = insert;
	while (*insert)
		++insert;
	while (num--)
	{
		if ((*insert++ = *back++) == '\0')
			return ret;
	}

	*insert = '\0';
	return ret;

}
