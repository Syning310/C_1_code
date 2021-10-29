#define _CAT_SECURE_NO_WARNINGS


#include<stdio.h>
#include<string.h>

//Ä£Äâmemmove
void* my_memmove(void* dest, const void* source, size_t num);
int main()
{

	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };

	my_memmove(arr +2, arr, 20);


	return 0;
}
void* my_memmove(void* dest, const void* source, size_t num)
{
	void* ret = dest;
	if (dest < source)
	{
		while (num--)
		{
			*(char*)dest = *(char*)source;
			dest = (char*)dest + 1;
			source = (char*)source + 1;
		}
	}
	else
	{
		while (num--)
			*((char*)dest + num) = *((char*)source + num);
	}
	return ret;
}