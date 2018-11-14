#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
char* My_strstr(const char* dest, const char* src)
{
	char* p = dest;
	char* p1 = dest, *p2 = src;
	assert(dest != NULL);
	assert(src != NULL);
	while (*dest != '\0'&&*src != '\0')
	{
		if (*dest == *src)
		{
			p1 = dest;                                  
			p2 = src;
			p = dest;                                 //记录源串中找到第一个子串的指针
			while (*p1 != '\0'&&*p2 != '\0')
			{
				if (*p1 == *p2)
				{
					++p1;
					++p2;
				}
				else
				{
					break;
				}
			}
			if (*p2 == '\0')
			{
				return p;
			}
			else
			{
				++dest;
			}
		}
		else
		{
			++dest;
		}
	}
	if (*p2 != '\0')
	{
		return NULL;
	}
}
int main()
{
	char str1[] = "abbbccdef";
	char str2[] = "g";
	char* result = My_strstr(str1, str2);
	printf("%p\n", result);
	system("pause");
	return 0;
}