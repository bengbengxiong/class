#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int Menu()
{
	printf("========================\n");
	printf("         1.��ʼ��Ϸ     \n");
	printf("         2.�˳���Ϸ     \n");
	printf("========================\n");
	printf("���������ѡ��: ");
    int choice = 0;
	scanf("%d", &choice);
	return choice;
}
void Game()
{
	int result = rand() % 100 + 1;
	while (1)
	{
		printf("������һ������: ");
		int num = 0;
		scanf("%d", &num);
		if (num <result )
		{
			printf("����!\n");
		}
		else if (num>result)
		{
			printf("����!\n");
		}
		else
		{
			printf("��ϲ��,�����!");
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
			printf("��Ϸ�˳�!");
			break;
		}
		else
		{
			printf("�����������!\n");
		}
	}
}