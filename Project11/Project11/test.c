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
		printf("û�ҵ�Ԥ��Ԫ��\n");
	}
	else
	{
		printf("�ҵ���!�±�Ϊ %d\n", i);
	}
	system("pause");
	return 0;
}