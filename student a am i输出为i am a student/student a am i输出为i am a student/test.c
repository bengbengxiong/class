#include <stdio.h>
#include <stdlib.h>
int Space(char* str)
{
	if (str != NULL)
	{
		int count = 0;
		while (*str)
		{
			str++;
			count++;
		}
		return count;
	}
}
void Reverse(char* left,char*right)
{

	while (left < right)
	{
		int tmp = *left;
		*left = *right;
		*right = tmp;
		right--;
		left++;
	}
}
void Reverse_content(char* str)
{
	int len = Space(str);
	Reverse(str, str + len - 1);
	while (*str)
	{
		char *left = str;
		char *right = NULL;
		while ((*str != ' ') && (*str != '\0'))
		{
			str++;
		}
		right = str - 1;
		Reverse(left, right);
		if (*str == ' ')
		{
			str++;
		}
	}
}
int main()
{
	char arr[] = "student a am i";
	Reverse_content(arr);
	printf("%s\n", arr);
	system("pause");
	return 0;
}

	