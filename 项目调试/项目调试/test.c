#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//int main()
//{
//	const int a = 10;
//	const int* p = &a;//const����ָ�����*�����ʱ�����ε���*p��Ҳ����˵����ͨ��p�ı�*p��ֵ
//	int* const p = &a;//const����ָ�����*���ұ��ǣ����ε���P,P���ܱ��ı���
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

//void my_strcpy(char* dest, char* src)//�Ż�
//{
//	while (*dest++ = *src++)
//	{
//		;
//	}
//}
//#include <assert.h>
//char* my_strcpy(char* dest, const char* src)//�Ż�
//{
//	char* ret = dest;
//	assert(src != NULL);//����
//	assert(dest != NULL);
// //��srcָ������ݿ�����dest�У�����'\0'�ַ�
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