#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main()
{	
	int a;
	int Sn;
	printf("������һ����:");
	scanf("%d", &a);
	if (0<a<10)
	{
		Sn = a + (a * 11) + (a * 111) + (a * 1111) + (a * 11111);
		printf("%d=%d+%d+%d+%d+%d", Sn,a,a*11,a*111,a*1111,a*11111);
	}
	else
	{
		printf("��������!");
	}
	system("pause");
	return 0;
}