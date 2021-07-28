#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	const int a = 10;
//	const int* p = &a;//const放在指针变量*的左边时，修饰的是*p，也就是说不能通过p改变*p的值
//	int* const p = &a;//const放在指针变量*的右边是，修饰的是P,P不能被改变了
//	printf("%d", a);
//	return 0;
//}

//void my_strcpy(char* dest, char* src)
//{
//	while (*src!='\0')
//	{
//		*dest = *src;
//		src++;
//		dest++;
//	}
//	*dest = *src;
//}

//void my_strcpy(char* dest, char* src)//优化
//{
//	while (*dest++ = *src++)
//	{
//		;
//	}
//}
//#include <assert.h>
//char* my_strcpy(char* dest, const char* src)//优化
//{
//	char* ret = dest;
//	assert(src != NULL);//断言
//	assert(dest != NULL);
// //将src指向的内容拷贝到dest中，包含'\0'字符
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}

//int main()
//{
//	char arr1[] = "###########";
//	char arr2[] = "bit";
//	printf("%s", my_strcpy(arr1, arr2););
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= a; i++)
//	{
//		ret = i * ret;
//	}
//	printf("%d", ret);
//	return 0;
//}