#define _CAT_SECURE_NO_WARNINGS



#include<stdio.h>
#include<string.h>


char* my_strstr(const char* str1, const char* str2);
int main()
{

	char arr[20] = "syning310";
	char* seek = "syning";

	char* ret = my_strstr(arr, seek);
	if (ret == NULL)
		printf("Î´ÕÒµ½\n");
	else
		printf("ÕÒµ½×Ö·û´®£º%s\n", ret);

	return 0;
}
char* my_strstr(const char* str1, const char* str2)
{
	if (*str2 == '/0')
		return (char*)str1;

	const char* s1 = NULL;
	const char* s2 = NULL;
	const char* back = str1;

	while (*back)
	{
		s1 = back;
		s2 = str2;

		while (*s1 && *s2 && (*s1 == *s2))
		{
			++s1;
			++s2;
		}
		if (*s2 == '\0')
			return (char*)back;
		++back;	
	}
	return NULL;
}


