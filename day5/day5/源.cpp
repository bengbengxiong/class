#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <string>
#include <vector>
//#include <algorithm>
using namespace std;
//struct a
//{
//	double f;
//	char i;
//	int c;
//};
//struct b
//{
//	char o;
//	double l;
//	int y;
//};
//#pragma pack(3)  
//struct Test1
//{
//	char c;
//	short sh;
//	int a;
//	float f;
//	int *p;
//	char *s;
//	double d;
//};
//struct Test2
//{
//	char c;
//	double d;
//	int a;
//	short sh;
//	float f;
//	int *p;
//	char *s;
//};


bool ishuiwen(string &s)
{
	size_t begin = 0;
	size_t end = s.size() - 1;
	while (begin < end)
	{
		if (s[begin] != s[end])
		{
			return false;
		}
		++begin;
		--end;
	}
	return true;
}

//class A
//{
//public:
//	A()
//	{
//		_count++;
//		cout <<"count="<< _count;
//	}
//	~A()
//	{
//		_num++;
//		cout << "num="<<_num;
//	}
//private:
//	int _count=0;
//	int _num=0;
//};
int main()
{
	/*int i = 1;
	do
	{
		printf("%2d\n", i++);
	} while (i--);*/
	/*cout << sizeof( Test1) << endl;
	cout << sizeof(Test2) << endl;*/
	//cout << sizeof(b) << endl;

	/*char p1[15] = "abcd", *p2 = "ABCD", str[50] = "xyz";
	strcpy(str + 2, strcat(p1 + 2, p2 + 1));*/

	/*printf("%s", str);*/

	/*int a;
	float b, c;
	scanf("%2d%3f%4f", &a, &b, &c);
	printf("\na=%d,b=%d,c=%f", a, b, c);*/
	/*A* p = new A[5];
	delete p;*/

	
		string a, b;
		getline(cin, a);
		getline(cin, b);
		int count = 0;
		for (int i = 0; i < a.length(); i++){
			string s = a;
			s.insert(i, b);
			if (ishuiwen(s)){
				count++;
			}
		}
		cout << count << endl;
		
	system("pause");
	return 0;
}