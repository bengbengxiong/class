#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
void Binary(int n)
{
	int i = 0;
	int arr[32] = { 0 };
	for (; i < 32; i++)
	{
		int ret = 0;
		ret = n % 2;
		arr[i] = ret;
		n /= 2;
	}
	for (i = 0; i < 32; i++)
	{
		printf("%d", arr[i]);
	}
	printf("\n");
}
int main()
{
	int n;
	printf("请输入一个随机整数:");
	scanf("%d", &n);
	Binary(n);
	system("pause");
	return 0;
}

