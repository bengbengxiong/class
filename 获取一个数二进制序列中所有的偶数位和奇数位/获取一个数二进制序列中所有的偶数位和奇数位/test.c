#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int print(int n)
{
	int i = 7;
	int arr[8] = { 0 };
	for (; i >= 0; i--)
	{
		int ret = 0;
		ret = n % 2;
		arr[i] = ret;
		n /= 2;
	}
	printf("�������������λ����:");
	for (i = 0; i < 8; i += 2)
	{
		printf("%d", arr[i]);
	}
	printf("\n");
	printf("���������ż��λ����:");
	for (i = 1; i < 8; i += 2)
	{
		printf("%d", arr[i]);
	}
	printf("\n");
}
int main()
{
	int n;
	printf("������һ������:");
	scanf("%d", &n);
	print(n);
	system("pause");
	return 0;
}