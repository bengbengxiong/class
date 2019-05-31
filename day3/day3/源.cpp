//#include <iostream>
//#include <stdlib.h>
//#include <string>
//#include <vector>
//using namespace std;
////int fun()
////{
////	int i, j, k = 0;
////	for (i = 0, j = -1; j = 0; i++, j++)
////	{
////		k++;
////	}
////	return k;
////}
//int main()
//{
//	/*cout << (fun()) << endl;*/
//	/*vector<int>a;
//	a.push_back(100);
//	a.push_back(300);
//	a.push_back(300);
//	a.push_back(300);
//	a.push_back(300);
//	a.push_back(500);
//	vector<int>::iterator itor;
//	for (itor = a.begin(); itor != a.end();itor++)
//	{
//		if (*itor == 300)
//		{
//			itor = a.erase(itor);
//		}
//	}
//	for (itor = a.begin(); itor != a.end(); itor++)
//	{
//		cout << *itor << " ";
//	}*/
//	string s;
//	getline(cin, s);
//	int max_count = 0;
//	int index = 0;
//	int start = 0;
//	for (int i = 0; i < (int)s.length();i++)
//	{
//		if (s[i] >= '0'&&s[i] <= '9')
//		{
//			int temp_count = 0;
//			index = i;
//			while (s[i] >= '0'&&s[i] <= '9')
//			{
//				temp_count++;
//				i++;
//			}
//			if (temp_count > max_count)
//			{
//				max_count = temp_count;
//				start=index;
//			}
//		}
//		cout << s.substr(index, max_count) << endl;
//	
//
//	system("pause");
//	return 0;
//}

#include <iostream>
#include <string>

using namespace std;
int main()
{
	string s;
	getline(cin, s);
	int max_count = 0;
	int index = 0;
	int start = 0;
	for (int i = 0; i < (int)s.length(); i++)
	{
		if (s[i] >= '0'&&s[i] <= '9')
		{
			int temp_count = 0;
			index = i;
			while (s[i] >= '0'&&s[i] <= '9')
			{
				temp_count++;
				i++;
			}
			if (temp_count > max_count)
			{
				max_count = temp_count;
				start = index;
			}
		}
		cout << s.substr(index, max_count) << endl;
		return 0;
	}