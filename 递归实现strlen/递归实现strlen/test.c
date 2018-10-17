#include <stdio.h>
#include <stdlib.h>
int strlen(char* str)
{
	if (*str == '\0')
	{
		return 0;
	}
	return strlen(str+1)+1;
}
int main()
{
	printf("%d\n", strlen("hehe"));
	system("pause");
	return 0;

}