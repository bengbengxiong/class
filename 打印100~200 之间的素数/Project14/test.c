#include <stdio.h>
#include <stdlib.h>
int Isprime(int x)

{
	int num = 2;
	while (num < x)
	{
		if (x%num == 0)
		{
			return 0;
		}
		num = num + 1;
	}

	return 1;
}
int main()
{
	int i;
	for (i = 100; i < 200; i++)
	if (Isprime(i) == 1)
	{
		printf("%d ", i);
	}
	system("pause");
	return 0;

}