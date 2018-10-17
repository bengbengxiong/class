#include <stdio.h>
#include <stdlib.h>
int Strlen(char* str)
{
	int count = 0;
	while (*str != '\0')
	{
		++count;
		++str;
	}
	return count;
}
int main()
{
	printf("%d\n", Strlen("hello"));
	system("pause");
	return 0;
}
