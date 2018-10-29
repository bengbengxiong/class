#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int Factorial(int n, int k)
{
	if (k == 0)
	{
		return 1;
	}
	return n*Factorial(n, k - 1);
}
int main()
{
	int n;
	int k;
	printf("«Î ‰»În∫Õk:");
	scanf("%d %d", &n, &k);
	printf("%d\n", Factorial(n, k));
	system("pause");
	return 0;
}