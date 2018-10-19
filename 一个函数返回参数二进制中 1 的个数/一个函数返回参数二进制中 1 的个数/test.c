#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int count_one_bits(unsigned int n)
{
	int count = 0;
	while (n)
	{
		if (n % 2 == 1)
		{
			count++;
		}
		n = n / 2;
	}
	return count;
}
int main()
{
	int n;
	printf("请输入一个数字:");
	scanf("%d", &n);
	printf("整数二进制中 1 的个数: %d\n", count_one_bits(n));
	system("pause");
	return 0;
}