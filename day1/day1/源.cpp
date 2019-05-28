#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
#include <iostream>
using namespace std;

int main()
{
	int num = 0;
	while (1)
	{
		cin >> num;
		int j = 3 * num;
		int sum = 0;
		int* a = new int[j];
		for (int i = 0; i < j; i++)
		{
			cin >> a[i];
		}
		for (int i = 0; i < j-1; i++)
		{
			for (int n = 0; n < j - 1 - i; n++)
			{
				if (a[n]>a[n + 1])
				{
					int tmp = a[n];
					a[n] = a[n + 1];
					a[n + 1] = tmp;
				}
			}
		}
		for (int i = 0; i < j; i++)
		{
			cout << a[i];
		}
		for (int i = num; i <= 3 * num - 2; i += 2)
		{
			sum += a[i];
		}
		cout << sum << endl;
		delete [j - 1]a;
	}
	return 0;
}