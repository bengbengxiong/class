#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int x, y, z;
	int t = 0;
	printf("请输入三个数,并用空格隔开:");
	scanf("%d %d %d", &x, &y, &z);
	if (x < y)
	{
		t = x;
		x = y;
		y = t;
	}
	if (x < z)
	{
		t = z;
		z = x;
		x = t;
	}

	if (y < z)
	{
		t = y;
		y = z;
		z = t;
	}

	printf("%d %d %d\n", x, y, z);
	system("pause");
	return 0;
}