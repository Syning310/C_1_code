#define _CAT_SECURE_NO_WARNINGS



#include<stdio.h>
#include<string.h>
#include<assert.h>

//Ä£Äâmemcpy
void* myMemcpy(void* dest, void* source, size_t num);
int main()
{
	int arr1[10] = { 0,1,2,3,4,5,6,7,8,9 };
	int arr2[10] = { 0 };

	myMemcpy(arr2, arr1, 20);


	return 0;
}
void* myMemcpy(void* dest, void* source, size_t num)
{
	assert(dest && source);
	void* ret = dest;
	while (num--)
	{
		*(char*)dest = *(char*)source;
		dest = (char*)dest + 1;
		source = (char*)source + 1;
	}
		
	return ret;
}

