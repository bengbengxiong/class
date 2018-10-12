
#define  _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>
int main()
{
	int x;
	int y;
	printf("请输入两个数字:");
	scanf("%d %d", &x, &y);
	x = x^y;
	y = y^x;
	x = x^y;
	printf("x=%d y=%d\n", x, y);
	system("pause");
	return 0;
}
