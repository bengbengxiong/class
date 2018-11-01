#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int Left_hand(char arr[], int n)
{
	int len = strlen(arr)-1;
	char* str = arr;
	for (int i = 0; i < n; ++i)
	{
		char tmp = str[0];
		for (int j = 0; j < len; ++j)
		{
			str[j] = str[j + 1];
		}
		str[len] = tmp;
	}
	return 0;
}
int main()
{
	int n = 0;
	char arr[] = "ABCDE";
	printf("请输入你想要左旋的个数:");
	scanf("%d", &n);
	Left_hand(arr, n);
	printf("%s\n",arr );
	system("pause");
	return 0;
}