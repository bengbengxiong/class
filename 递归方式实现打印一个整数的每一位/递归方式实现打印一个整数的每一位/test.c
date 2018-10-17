#include <stdio.h>
#include <stdlib.h>
void print(int n)
{
	if (n>9)
	{
		print(n / 10);
	}
	printf("%d\n", n % 10);
}

int main()
{
	print(1234);
	system("pause");
	return 0;
}
