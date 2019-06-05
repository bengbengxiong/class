#include  "sloution.h"
//char fun(char x, char y)
//{
//	if (x < y)
//		return x;
//	return y;
//}


class Solution {
public:
	int StrToInt(string str) {
		if (str.empty())
		{
			return 0;
		}
		int p = 1;
		if (str[0] = '-')
		{
			p = -1;
			str[0] = '0';
		}
		else if (str[0] ='+')
		{
			p = 1;
			str[0] = '0';
		}
		int sum = 0;
		for (int i = 0; i < str.size(); ++i)
		{
			if (str[i] < '0'|| str[i]>'9' )
			{
				sum = 0;
				break;
			}
			sum = sum * 10 + str[i] - '0';
		}
		cout << sum*p << endl;
		return sum*p;
	}

		if (str.empty())
			return 0;
		int symbol = 1;
		if (str[0] == '-') //处理负号
		{
			symbol = -1;
			str[0] = '0'; //这里是字符'0',不是0
		}
		else if (str[0] == '+') //处理正号
		{
			symbol = 1;
			str[0] = '0';
		}
		int sum = 0;
		for (int i = 0; i<str.size(); ++i)
		{
			if (str[i] < '0' || str[i] > '9')
			{
				sum = 0;
				break;
			}
			sum = sum * 10 + str[i] - '0';
		}
		cout << symbol * sum << endl;
		return symbol * sum;
	}
};
int main()
{
	/*int m = 0123, n = 123;
	printf("%x %o\n", m, n);*/


	/*int a = '1', b = '1', c = '2';
	cout << fun(a, b) << endl;
	cout << fun(b, c) << endl;
	cout << fun(fun(a, b), fun(b, c));*/



	/*int w, h,count;
	cin >> w >> h;
	vector<vector<int>> a;
	a.resize(w);
	for (auto& e : a )
	{
		e.resize(h, 1);
	}
	for (int i = 0; i < w; i++)
	{
		for (int j = 0; j < h; j++)
		{
			if (a[i][j] == 1)
			{
				count++;
			}
			if ((i + 2) < w)
			{
				a[i + 2][j] = 0;
			}
			if ((j + 2) < h)
			{
				a[i][j + 2] = 0;
			}	
		}
	}*/
	/*cout << count << endl;*/
	Solution sl;
	string s;
	getline(cin, s);
	sl.StrToInt(s);
	system("pause");
	return 0;
}