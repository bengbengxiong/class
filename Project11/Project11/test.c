#include <stdio.h>
#include <stdlib.h>
int main()
{
	int arr[] = { 1, 2, 3, 4, 5};
	int to_find = 4;
	int i = 0;
	for (; i < sizeof(arr) / sizeof(arr[0]); ++i)
	{
		if (to_find == arr[i])
		{
			break;
		}
	}
	if (i == 5)
	{
		printf("没找到预期元素\n");
	}
	else
	{
		printf("找到了!下标为 %d\n", i);
	}
	system("pause");
	return 0;
}