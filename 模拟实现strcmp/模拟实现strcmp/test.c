#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
int Mystrcmp(const char * str1, const char * str2)
{
	assert(str1 != NULL);
	assert(str2 != NULL);
	while (*str1 != '\0'&&*str2 != '\0')
	{
		if (*str1 < *str2)
		{
			return -1;
		}
		if (*str1 > *str2)
		{
			return 1;
		}
		else
		{
			++str1;
			++str2;
		}
	}
	if (*str1 < *str2)
	{
		return -1;
	}
	else if (*str1 > *str2)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int main()
{
	char str1[] = "abcdef";
	char str2[] = "abcdefg";
	int result=Mystrcmp(str1, str2);
	printf("%d\n", result);
	system("pause");
	return 0;
}