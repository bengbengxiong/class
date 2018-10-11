#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n;
	int i;
	int j;
	int k;
	for (n = 100; n < 1000; n += 1)
	{
		i = n / 100;
		j = n % 100 / 10;
		k = n % 10;
		if (n == i*i*i + j*j*j + k*k*k)
		{
			printf("%d ", n);
		}
	}
		printf("\n");
		system("pause");
}

