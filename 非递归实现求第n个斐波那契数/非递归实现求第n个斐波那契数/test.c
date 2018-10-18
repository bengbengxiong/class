#include <stdio.h>
#include <stdlib.h>
int Fib(int n)
{
	if (n == 1 || n == 2)
	{
		return 1;
	}
	int num1 = 1;
	int num2 = 2;
	int result = 0;
	for (int i = 3; i <= n; ++i)
	{
		result = num1 + num2;
		num1 = num2;
		num2 = result;
	}
	return result;
}
int main()
{
	printf("%d\n", Fib(40));
	system("pause");
	return 0;
}