#define _CAT_SECURE_NO_WARNINGS


#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//ģ��qsortʵ��һ��ð�������ͨ���㷨
void Swap(char* s1, char* s2, int byte);
void mySort(void* base,
			int len,
			int byte,
			int (*pfun)(const void*, const void*))
{
	int i = 0;
	for (i = 0; i < len - 1; ++i)
	{
		int j = 0;
		for (j = 0; j < len - 1 - i; ++j)
		{
			if (pfun((char*)base + j * byte, (char*)base + (j + 1) * byte) > 0)
			{
				Swap((char*)base + j * byte, (char*)base + (j + 1) * byte, byte);
			}
		}
	}

}

struct person
{
	char name[20];
	int age;
	int height;
};

int cmp_int(const void* v1, const void* v2);
int cmp_age(const void* v1, const void* v2);
int cmp_height(const void* v1, const void* v2);

void test01()
{
	struct person s[5] = { {"Syning", 28, 189}, {"Ali", 19, 180}, {"Qer", 32, 175}, {"Lsha", 23, 183},{"Cyao", 28, 175} };
	int len = sizeof(s) / sizeof(s[0]);
	//������������
	//mySort(s, len, sizeof(s[0]), cmp_age);

	//������߽���
	mySort(s, len, sizeof(s[0]), cmp_height);

	int i = 0;
	for (i = 0; i < len; ++i)
	{
		printf("������%s    ���䣺%d    ��ߣ�%d\n", s[i].name, s[i].age, s[i].height);
	}

	//int arr[10] = { 2, 3, 4, 1, 5, 10, 6, 9, 8, 7 };
	//int len = sizeof(arr) / sizeof(arr[0]);
	//mySort(arr, len, sizeof(arr[0]), cmp_int);
}

int main()
{
	test01();

	return 0;
}

int cmp_age(const void* v1, const void* v2)
{
	return ((struct person*)v1)->age - ((struct person*)v2)->age;
}
int cmp_int(const void* v1, const void* v2)
{
	return *(int*)v1 - *(int*)v2;
}
int cmp_height(const void* v1, const void* v2)
{
	return ((struct person*)v2)->height - ((struct person*)v1)->height ;
}
void Swap(char* s1, char* s2, int byte)
{
	int i = 0;
	for (i = 0; i < byte; ++i)
	{
		char temp = *s1;
		*s1 = *s2;
		*s2 = temp;
		++s1;
		++s2;
	}

}



////�⺯�� qsort
////void qsort(void* base, size_t num, size_t size, int (* compar)(const void*, const void*);
////base   �����������е�һ������ĵ�ַ
////num    ����������Ԫ�صĸ���
////size   ������������һ��Ԫ�صĴ�С
////compar �����Ƚϴ����������е�2��Ԫ��
//
//int cmp_int(const void* a, const void* b)
//{
//	if (*(int*)a < *(int*)b) 
//		return -1;
//	if (*(int*)a == *(int*)b)
//		return 0;
//	if (*(int*)a > *(int*)b)
//		return 1;
//}
//void test_int()
//{
//	int arr[] = { 5,6,7,4, 9, 3,2,8,1,0 };
//	int len = sizeof(arr) / sizeof(arr[0]);
//
//	qsort(arr, len, sizeof(arr[0]), cmp_int);
//
//	int i = 0;
//	for (i = 0; i < len; ++i)
//	{
//		printf("%d ", arr[i]);
//	}printf("\n");
//}
//
//struct person
//{
//	char name[20];
//	int age;
//};
//int cmp_person_age(const void* a, const void* b)
//{
//	if (((struct person*)a)->age < ((struct person*)b)->age)
//		return -1;
//	if (((struct person*)a)->age == ((struct person*)b)->age)
//		return 0;
//	if (((struct person*)a)->age > ((struct person*)b)->age)
//		return 1;
//}
//int cmp_person_name(const void* a, const void* b)
//{
//	return strcmp(((struct person*)b)->name, ((struct person*)a)->name);
//}
//
//void test_struct()
//{
//	struct person perArr[4] = { {"Sji", 200} ,{"Ali",19},{"Syning", 21}, {"Qer", 28}};
//	int len = sizeof(perArr) / sizeof(perArr[0]);
//
//	//��������������
//	qsort(perArr, len, sizeof(perArr[0]), cmp_person_age);
//	//������������
//	//qsort(perArr, len, sizeof(perArr[0]), cmp_person_name);
//
//	int i = 0;
//	for (i = 0; i < len; ++i)
//	{
//		printf("name: %s  age: %d\n", perArr[i].name, perArr[i].age);
//	}
//}
//
//int main()
//{
//	//test_int();
//	test_struct();
//
//	return 0;
//}