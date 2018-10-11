#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char str[] = "*************";
	int i=0;
	for (i = 12; i >0; i -= 2)
	{

	printf("%s\n", &str[i]);
	}
	for (i = 0; i < 13; i += 2)
	{
	printf("%s\n", (str+i));
	}
	system("pause");
	return 0;
}
