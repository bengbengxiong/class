#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int Compare(int n, int m)
{
	int i = 31;
	int arr[32] = { 0 };
	for (; i >= 0; i--)
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
	int j = 31;
	int arr1[32] = { 0 };
	for (; j >= 0;j--)
	{
		int ret = 0;
		ret = m % 2;
		arr1[j] = ret;
		m /= 2;
	}
	for (j = 0; j < 32; j++)
	{
		printf("%d", arr1[j]);
	}
	printf("\n");
	int left = 0;
	int count = 0;
	for (; left < 32; left++)
	{
		if (arr[left] != arr1[left])
		{
			count++;
		}
	}
	printf("不同的位数:%d\n", count);
}
int main()
{
	int n;
	int m;
	printf("请输入两个数:");
	scanf("%d %d", &n,&m);
	printf("输出为:");
	printf("\n");
	Compare(n,m);
	system("pause");
	return 0;
}