#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int x; int y;
	printf("������������:");
	scanf("%d %d", &x, &y);
	while (x != y)
	{
		if (x > y)
			x = x - y;
		else
			y = y - x;

	}
	printf("���Լ��:%d\n", y);


	system("pause");
	return 0;

}