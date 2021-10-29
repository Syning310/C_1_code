#define _CAT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>
#include<assert.h>


char* my_strcat(char* dest, const char* source);
int main()
{
	char arr1[20] = "hello ";
	char arr2[] = "world";

	printf("%s\n", my_strcat(arr1, arr2));
	return 0;
}
char* my_strcat(char* dest, const char* source)
{
	assert(dest && source);
	char* ret = dest;
	while (*ret)
		ret++;
	while (*ret++ = *source++)
		;
	return dest;
}