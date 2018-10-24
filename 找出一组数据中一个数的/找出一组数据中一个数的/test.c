#include <stdio.h>
#include <stdlib.h>
void once(int arr[9],int size)
{
	int ret;
	for (int i = 0; i < size; ++i)
	{
		ret = 0 ^ arr[i];
	}
	printf("%d\n", ret);
}
int main()
{
	int arr[9] = { 1, 1, 2, 2, 3, 3, 4, 4, 8 };
	int size = sizeof(arr) / sizeof(arr[0]);
	once(arr, size);
	system("pause");
	return 0;

}