#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int Is_Revolve(char arr[], char arr1[])
{
	char *ret = 0;
	int len1 = strlen(arr);
	int len2 = strlen(arr1);
	if (len1 != len2)
	{
		return 0;
	}	
	strncat(arr, arr, len1);  
	ret = strstr(arr, arr1);   
}
int main()
{
	char arr[] = "ABCDE";
	char arr1[] = "DEABC";
	int ret = Is_Revolve(arr, arr1);
	if (ret == 0)
	{
		printf("0\n");
	}
	else
	{
		printf("1\n");
	}	
	system("pause");
	return 0;
}

