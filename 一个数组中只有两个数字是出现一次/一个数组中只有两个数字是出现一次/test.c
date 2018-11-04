#include <stdio.h>
#include <stdlib.h>
void search(int arr[10], int size)
{
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (arr[i] == arr[j]&&i != j)
			{
				break;
			}
			else if (j == (size - 1))
			{
				printf("%d\n", arr[i]);
			}
		}
	}
}
int main()
{
	int arr[10] = { 1, 2, 2, 1, 5, 6, 12, 23, 23, 25 };
	int size = sizeof(arr) / sizeof(arr[0]);
	search(arr, size);
	system("pause");
	return 0;

}
