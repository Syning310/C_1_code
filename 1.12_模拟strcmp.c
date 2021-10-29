#define _CAT_SECURE_NO_WARNINGS



#include<stdio.h>
#include<string.h>
#include<assert.h>

int my_strcmp(const char* str1, const char* str2);
int main()
{

	char* p1 = "Syning310@gmail";

	char* p2 = "Syning310@gmail";

	int ret = my_strcmp(p1, p2);

	if (ret < 0)
		printf("p1 < p2\n");
	else if (ret > 0)
		printf("p1 > p2\n");
	else
		printf("p1 == p2\n");


	return 0;
}
int my_strcmp(const char* str1, const char* str2)
{
	assert(str1 && str2);
	while (str1 == str2)
	{
		if (*str1 == '\0')
			return 0;

		++str1;
		++str2;
	}
	if (*str1 > *str2)
		return 1;
	else
		return -1;
}


