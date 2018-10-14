#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int x; int y;
	printf("请输入两个数:");
	scanf("%d %d", &x, &y);
	while (x != y)
	{
		if (x > y)
			x = x - y;
		else
			y = y - x;

	}
	printf("最大公约数:%d\n", y);


	system("pause");
	return 0;

}