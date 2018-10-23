#include <stdio.h>
#include <stdlib.h>
#define M 9
#define N 9
void main()
{
	int a[M][N], i, j;
	for (i = 0; i < M; i++)
	{
		a[i][0] = 1;
		a[i][i] = 1;
	}
	for (i = 2; i < M; i++)
	{
		for (j = 1; j < i; j++)
		{
			a[i][j] = a[i - 1][j] + a[i - 1][j - 1];
		}
	}
	for (i = 0; i < M; i++)
	{
		for (j = 0; j < i + 1; j++)
		{
			printf("%8d", a[i][j]);
		}
		printf("\n");
	}
	system("pause");
}