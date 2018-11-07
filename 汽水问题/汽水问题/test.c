#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define Retail 2
#define Empty  4
int Soda(int money)
{
	int i = 0;                    
	int j = 0;                   
	if (money > 0)
	{
		i = money / Retail;	
	}
	while (i)
	{
		j = j + i;
		i = i / Empty;
	}
	return j;	
}
int main()
{
	int money;
	printf("你的现金:");
	scanf("%d", &money);
	int result = Soda(money);
	printf("能喝到的汽水数:%d\n", result);
	system("pause");
	return 0;
}
