#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
int Mystrcat(char * dest, const char * source)
{
	assert(dest != NULL);
	assert(source != NULL);
	while (*dest != '\0')
	{
		++dest;
	}
	char* tmp = dest;
	while (*dest == '\0')
	{
		*dest = *source;
		++dest;
		++source;
	}
	*dest = '\0';
	return dest;
}
int main()
{
	char dest[1024] = "hello ";
	char source[] = "world!";
	Mystrcat(dest, source);
	printf("%s\n", dest);
	system("pause");
	return 0;
}