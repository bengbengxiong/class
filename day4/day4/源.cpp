#include <iostream>
#include <stdlib.h>
#include <string>
#include <algorithm>
using namespace std;
//int main()
//{
//	int i, j, k, p;
//	cin >> i >> j >> k >> p;
//	int A = (i + k) / 2;
//	int C = (p - j) / 2;
//	int B1 = (k - i) / 2;
//	int B2 = (j + p) / 2;
//	if (B1 != B2)
//	{
//		cout << "No" << endl;
//	}
//	else
//	{
//		cout << A << " " << B1 << " " << C << endl;
//	}
//	system("pause");
//	return 0;
//	
//}
int main()
{
	char c[32] = { 0 };
	int a, b;
	cin >> a >> b;
	int i = 0;
	int count = 0;
	int flag = false;
	if (a<0)
	{
		a = 0 - a;
		flag = true;
	}
	while (a)
	{
		if ((a%b) > 9)
		{
			c[i] = (a%b) - 10 + 'A';
			i++;
			count++;
		}
		else
		{
			c[i] = (a%b)+48;
			i++;
			count++;
		}
		a /= b;
	}
	if (flag)
	{
		for (int i = count; i >=0; i--)
		{
			c[count] = c[count - 1];
		}
		c[0] = '-';
	}
	for (int i = count-1; i >=0; i--)
	{
		cout << c[i] ;
	}
	system("pause");
	return 0;
}