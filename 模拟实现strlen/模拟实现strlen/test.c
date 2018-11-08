#include <stdio.h>
#include <stdlib.h>
//int Mystrlen(const char* str )
//{
//	if (str == NULL)
//	{
//		return -1;
//	}
//	if (*str == '\0')
//	{
//		return 0;
//	}
//	int size = 0;
//	while (*str != '\0')
//	{
//		++size;
//		++str;
//	}
//	return size;
//}
int Mystrlen(const char* str)
{
	if (str == NULL)
	{
		return -1;
	}
	if (*str == '\0')
	{
		return 0;
	}
		return 1 + Mystrlen(str+1) ;
	
}	
int main()
{
	char source[] = "hello";
	int size=Mystrlen(source);
	printf("%d\n", size);
	system("pause");
	return 0;
}