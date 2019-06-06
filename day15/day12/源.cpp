#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdlib.h>
#include <vector>
#include <algorithm>
using namespace std;
//static int a = 1;
//	void fun1(void)
//	{ 
//		a = 2; 
//	}
//	void fun2(void)
//	{ 
//		int a = 3; 
//	}
//	void fun3(void)
//	{ 
//		static int a = 4; 
//	}


//int FindSubString(char* pch)
//{
//	int count = 0;
//	char * p1 = pch;
//	while (*p1 != '\0')
//	{
//		if (*p1 == p1[1] - 1)
//		{
//			p1++;
//			count++;
//		}
//		else {
//			break;
//		}
//	}
//	int count2 = count;
//	while (*p1 != '\0')
//	{
//		if (*p1 == p1[1] + 1)
//		{
//			p1++;
//			count2--;
//		}
//		else {
//			break;
//		}
//	}
//	if (count2 == 0)
//		return(count);
//	return(0);
//}
//void ModifyString(char* pText)
//{
//	char * p1 = pText;
//	char * p2 = p1;
//	while (*p1 != '\0')
//	{
//		int count = FindSubString(p1);
//		if (count > 0)
//		{
//			*p2++ = *p1;
//			sprintf(p2, "%i", count);
//			while (*p2 != '\0')
//			{
//				p2++;
//			}
//			p1 += count + count + 1;
//		}
//		else {
//			*p2++ = *p1++;
//		}
//	}
//}



class Gloves {
public:
	int findMinimum(int n, vector<int> left, vector<int> right) {
		// write code here
		int sum = 0;
		int sumL = 0, sumR = 0;
		int left_min = INT_MAX;
		int right_min = INT_MAX;
		for (int i = 0; i<n; i++)
		{
			if (left[i] * right[i] == 0)
			{
				sum = left[i] + right[i];
			}
			else
			{
				sumL += left[i];
				sumR += right[i];
				left_min = min(left_min, left[i]);
				right_min = min(right_min, right[i]);
			}
		}
		return sum + min(sumL - left_min + 1, sumR - right_min + 1) + 1;
	}
};
int main()
{
	/*printf("%d", a);
	fun1();
	printf("%d", a);
	fun2();
	printf("%d", a);
	fun3();
	printf("%d\n", a);*/



	/*char text[32] = "XYBCDCBABABA";
	ModifyString(text);
	printf(text);*/

	/*int n;
	while (cin >> n)
	{
		int count = 0;
		while (n)
		{
			if ((n & 1) == 1)
			{
				count++;
			}
			n >>= 1;
		}
		cout << count << endl;
	}
	return */0;
	system("pause");
	return 0;
}