#define _CAT_SECURE_NO_WARNINGS



#include<stdio.h>
#include<string.h>

char* my_strncpy(char *dest, const char* source, size_t num);

int main()
{
	char arr[20] = "relogf";
	char* p = "abcdefgh";


	my_strncpy(arr, p, 5);


	return 0;
}

char* my_strncpy(char* dest, const char* source, size_t num)
{
	char* ret = dest;
	while (num && (*dest++ = *source++))
		--num;

	if (num)
	{
		while (num--)
			*dest = '\0';
	}

	return ret;
}

