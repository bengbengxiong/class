#include <iostream>
#include <stdlib.h>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
//void swap(int *a,int *b)
//{
//	*a = *a + *b;
//	*b = *a - *b;
//	*a = *a - *b;
//}
//printf("%d %d\n", ++i, ++i);


//class A
//{
//public:
//	void FunA()
//	{
//		printf("funA called\n");
//	}
//	virtual void FunB()
//	{
//		printf("funB called\n");
//	}
//};
//class B:public A
//{
//public:
//	void FunA()
//	{
//		A::FunA();
//		printf("funAB called\n");
//	}
//	virtual void FunB()
//	{
//		printf("funBB called\n");
//	}
//};


//struct Test
//{
//	Test(int){}
//	Test(){}
//	void fun(){}
//};


int IsPerfect(int n)
{
	int sum = 0;
	for (int i = 1; i<n; i++)
	{
		if (n%i == 0)
		{
			sum += i;
		}
	}
	return sum;
}
int main()
{
	/*int A = 10, B = 20;
	int *a = &A;
	int *b = &B;
	printf("%d %d\n", *a, *b);
	swap(*a, *b);
	printf("%d %d\n", *a, *b);*/

	/*int i = 3;
	printf("%d %d\n", ++i,++i);*/

	/*char str[] = "Geneius";
	print(str);*/

	/*B b;
	A *pa;
	pa = &b;
	A *pa2 = new A;
	pa->FunA();
	pa->FunB();
	pa2->FunA();
	pa2->FunB();
	delete pa2;*/

	/*const int a = 10;
	int *p = (int *)(&a);
	*p = 20;
	cout << a << " " << *p << endl;*/


	/*Test a(1);
	a.fun();
	Test b();
	b.fun();*/
	int n;
	while (cin >> n)
	{
		int num = 0;
		if (n <= 0)
		{
			return -1;
		}
		if (n >50000)
		{
			return -1;
		}
		for (int i = 1; i < n;i++)
		if (IsPerfect(i) == i)
		{
			num++;
		}
		cout << num << endl;
	}
	/*string s;
	getline(cin, s);
	int size = s.length();
	for (int i = 0; i < size; i++)
	{
		if (s[i] = '-')
		{
			if (i)
		}
	}*/

	system("pause");
	return 0;
}