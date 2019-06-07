#include <iostream>
#include <stdlib.h>
#include <string>
#include <stack>
using namespace std;
//class A
//{
//public:
//	A(int aa, int bb)
//	{
//		int a = aa--;
//		int b = a*bb;
//		cout << a << b;
//	}
//
//};

//class A
//{
//	friend long fun(A s)
//	{
//		if (s.x < 3)
//		{
//			return 1;
//		}
//		return s.x + fun(A(s.x - 1));
//	}
//public:
//	A(long a)
//	{
//		x = a--;
//	}
//private:
//	long x;
//};


//class Parenthesis {
//public:
//	bool chkParenthesis(string A, int n) {
//		getline(cin, A);
//		cin >> n;
//		int left = 0;
//		int right = n - 1;
//		if (n % 2 != 0)
//		{
//			cout << 1;
//			return false;
//		}
//		int count = 0;
//		while (left<right)
//		{
//			if ((A[left] == '('&&A[right] == ')') || (A[left] == ')'&&A[right] == '('))
//			{
//				count++;
//			}
//			left++;
//			right--;
//		}
//		if (count == (n / 2))
//		{
//			cout << 2;
//			return true;
//		}
//		else
//		{
//			cout << 3;
//			return false;
//		}
//	}
//};

class Parenthesis {
public:
	bool chkParenthesis(string A, int n) {
		// write code here
		stack<char> sc;
		for (auto e : A)
		{
			switch (e)
			{
			case '(':
				sc.push(e);
				break;
			case')':
			{
					   if (sc.empty() || sc.top() != '(')
					   {
						   return false;
					   }
					   else
					   {
						   sc.pop();
					   }
			}
				break;
			default:
				return false;
			}
		}
		return true;
	}
};
int main()
{
	//A x(4, 5);
	/*int sum = 0;
	for (int i = 0; i < 5; i++)
	{
		sum += fun(A(i));
	}
	cout << sum;*/


	/*int N;
	cin >> N;
	int k, i = 0, j = 1;
	while (1)
	{
		k = i + j;
		i = j;
		j = k;
		if (k>N)
		{
			return (k - N) < (N - i) ? (k - N) : (N - i);
			break;
		}
	}*/
	string A;
	int n=0;
	Parenthesis s;
	s.chkParenthesis(A,n);

	system("pause");
	return 0;
}