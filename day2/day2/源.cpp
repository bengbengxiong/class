#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <vector>
#include <string>
#include <algorithm>
#include <typeinfo>
using namespace std;
//struct A
//{
//	unsigned a : 19;
//	unsigned b : 11;
//	unsigned c : 4;
//	unsigned d : 29;
//	/char index = 2;
//};
int main()
{/*
	int a[] = { 1, 2, 3, 4 };
	int *b = a;
	*b += 2;
	*(b + 2) = 2;
	b++;
	printf("%d,%d\n", *b, *(b + 2));*/
	/*int ret = sizeof(struct A);
	cout << ret << endl;*/

	int n;
	cin >> n;
	vector<int> v;
	v.resize(n);
	for (int i = 0; i < n; ++i)
		cin >> v[i];
	int ret = 1;
	for (int i = 1; i<n - 1; i++)
	{
		//ÕÒ³ö²¨·å²¨¹È
		if ((v[i - 1] <= v[i] && v[i] > v[i + 1])
			|| (v[i - 1] < v[i] && v[i] >= v[i + 1]))
		{
			while (1)
			{
				if (v[i] = v[i + 1])
				{
					i++;
				}
				else if(v[i + 1] < v[i])
				{
					ret++;
					break;
				}
			}
		}
		if ((v[i - 1] >= v[i] && v[i] < v[i + 1])
			|| (v[i - 1] > v[i] && v[i] <= v[i + 1]))
		{
			while (1)
			{
				if (v[i] = v[i + 1])
				{
					i++;
				}
				else if (v[i + 1] > v[i])
				{
					ret++;
					break;
				}
			}
		}
			
	}
	cout << ret<< endl;



	/*string s;
	getline(cin, s);
	reverse(s.begin(), s.end());
	auto start = s.begin();
	while (start != s.end())
	{
		auto end = start;
		while (end != s.end() && *end != ' ')
		{
			end++;
		}
		reverse(start, end);
		if (end != s.end())
		{
			start = end + 1;
		}
		else
			start = end;
	}
	cout << s << endl;*/
	


	system("pause");
	return 0;
}