#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n;
	int m;
	printf("��������������:");
	scanf("%d %d", &n, &m);
	int ret = (n + m) >> 1;
	printf("%d\n", ret);
	system("pause");
	return 0;
}