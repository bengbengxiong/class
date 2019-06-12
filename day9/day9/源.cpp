#include <iostream>
#include <stdlib.h>
#include <string>
#include <vector>
using namespace std;
//class cla
//{
//	static int n;
//public:
//	cla()
//	{
//		n++;
//	}
//	~cla()
//	{
//		n--;
//	}
//	static int get_n()
//	{
//		return n;
//	}
//};
//int cla::n = 0;

int main()
{
	/*cla*p = new cla;
	delete p;
	cout << "n=" << cla::get_n() << endl;*/


	/*int n = 0;
	cin >> n;
	vector <string> v;
	v.resize(n);
	for (auto& str : v)
	{
		cin >> str;
	}
	bool length = true, lexsym = true;
	for (size_t i = 0; i < v.size()-1; i++)
	{
		if (v[i].size() >= v[i + 1].size())
		{
			length = false;
			break;
		}
	}
	for (size_t i = 0; i < v.size() - 1; i++)
	{
		if (v[i] >= v[i + 1])
		{
			lexsym = false;
			break;
		}
	}
	if (length == true && lexsym == true)
	{
		cout << "both" << endl;
	}
	if (length == true && lexsym != true)
	{
		cout << "lengths" << endl;
	}
	if (length != true && lexsym == true)
	{
		cout << "lexicographically" << endl;
	}
	if (length != true && lexsym != true)
	{
		cout << "none" << endl;
	}*/

	/*int m = 0, n = 0;
	cin >> m >> n;
	if (m%n == 0 || n%m == 0)
	{
		if (m >= n)
		{
			cout << m << endl;
		}
		else
		{
			cout << n << endl;
		}
	}
	if (m < n && (n%m != 0))
	{
		int count = 0;
		for (int i = 1; i <= n; i++)
		{
			count = m*i;
			if (count%n == 0)
			{
				cout << count << endl;
				break;
			}
		}
	}
	if (m > n && (m%n != 0))
	{
		int count = 0;
		for (int i = 1; i <= m; i++)
		{
			count = n*i;
			if (count%n == 0)
			{
				cout << count << endl;
				break;
			}
		}
	}*/
	int a, b;
	cin >> a >> b;
	cout << a%b << endl;
	system("pause");
	return 0;
}