#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	int i = 0;
	for (; i < 3; ++i)
	{  
		char passworld[1024] = { 0 };
		printf("ÇëÊäÈëÃÜÂë:");
		scanf("%s", passworld);
		if (strcmp(passworld, "123456") == 0)
		{
			printf("µÇÂ¼³É¹¦!\n");
			break;
		}
	}
	if (i==3)
	{
		printf("Èý´ÎµÇÂ½¶¼Ê§°Ü!½ûÖ¹µÇÂ¼!\n");
	}
	else
	{
	}	 
	system("pause");
	return 0;
}




