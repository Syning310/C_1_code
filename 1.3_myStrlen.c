#define _CRT_SECURE_NO_WARNINGS


#include<stdio.h>
#include<assert.h>

int myStrlen(const char* measure)  //模拟strlen
{
	assert(measure != NULL);
	int count = 0;
	while (*measure++ != '\0')
	{
		++count;
	}
	return count;
}

size_t vcStrlen(const char* str)  //vc中参考的strlen
{
	const char* eos = str;

	while (*eos++);

	return (eos - str - 1);
}
int main()
{

	char arr[] = "syning@gmail.com";
	char arr2[] = "this is my strlen";

	printf("%d\n", myStrlen(arr));

	printf("%d\n", vcStrlen(arr2));


	return 0;
}
