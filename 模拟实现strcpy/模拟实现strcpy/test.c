#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
int Mystrcpy(char* dest, const char* source)
{
	assert(dest != NULL);
	assert(source != NULL);
	char* tmp = dest;
	while (*source != '\0' )	
	{
		*dest = *source;
		++dest;
		++source;
	}
	*dest = '\0';         //¿½±´\0;
	return tmp;
}
int main()
{
	char  dest[1024] = { 0 };
	char source[] = "hello";
	Mystrcpy(dest, source);
	printf("%s\n", dest);
	system("pause");
	return 0;
}