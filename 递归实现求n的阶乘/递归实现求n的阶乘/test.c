#include <stdio.h>
#include <stdlib.h>
int Factorial(int n)
{
	if (n == 1)
	{
		return 1;
	}
	return n*Factorial(n - 1);
}
int main()
{
	printf("%d\n", Factorial(4));
	system("pause");
	return 0;

}