#include <stdio.h>
#include <stdlib.h>
int DigitSum(int n)
{
	int a = 0;
	if (n<9)
	{
		return n;
	} 
	
	if (n>9)
	{
		a = n % 10;
		n /= 10;
	}
	return a + DigitSum(n);
}
int main()
{
	 printf("%d\n",DigitSum(1423));
	system("pause");
	return 0;
}
