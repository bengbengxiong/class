#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main()
{   
	char character;
	printf("ÇëÊäÈëÒ»¸ö×Ö·û:\n");
	scanf("%c", &character);
	if (64 < character && character < 91)
	{
		printf("%c\n", character + 32);
	}
	else if (96 < character && character < 123)
	{
		printf("%c\n", character - 32);
	}
	system("pause");
	return 0;
}
