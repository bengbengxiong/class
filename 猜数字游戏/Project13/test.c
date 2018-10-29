#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int Menu()
{
	printf("========================\n");
	printf("         1.开始游戏     \n");
	printf("         2.退出游戏     \n");
	printf("========================\n");
	printf("请输入你的选择: ");
    int choice = 0;
	scanf("%d", &choice);
	return choice;
}
void Game()
{
	int result = rand() % 100 + 1;
	while (1)
	{
		printf("请输入一个数字: ");
		int num = 0;
		scanf("%d", &num);
		if (num <result )
		{
			printf("低了!\n");
		}
		else if (num>result)
		{
			printf("高了!\n");
		}
		else
		{
			printf("恭喜你,答对了!");
			break;
		}
	}
	
}
int main()
{
	while (1)
	{
		int choice = Menu();
		if (choice ==1)
		{
			Game();
		}
		else if (choice==2)
		{   
			printf("游戏退出!");
			break;
		}
		else
		{
			printf("你的输入有误!\n");
		}
	}
}