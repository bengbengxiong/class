#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ROW 9
#define COL 9
#define Mine_count 10
char mine_map[ROW + 2][COL + 2];
char show_map[ROW + 2][COL + 2];
//��ӡ�˵�
//��������ͼ,�û�������show_map
//����mine_map
//��ʼ������ͼ
//�û���������
//�жϵ�ǰ�������,�Ƿ�������ǽ�����Ϸ
//�������,�ж���Χ�м�����
int  Menue()                                      //��ӡ�˵�
{
	printf("=======================\n");
	printf("=======1.��ʼ��Ϸ======\n");
	printf("=======2.�˳���Ϸ======\n");
	printf("=======================\n");
	printf("���������ѡ��:");
	int choice = 0;
	scanf("%d", &choice);
	return choice;
}
void Init(char show_map[ROW + 2][COL + 2],                    
	char mine_map[ROW + 2][COL + 2])               //��ʼ������ͼ
{
	memset(mine_map, '0', (ROW + 2)*(COL + 2));
	memset(show_map, '*', (ROW + 2)*(COL + 2));
	srand(time(0));
	int mine_count = Mine_count;
	while (mine_count>0)
	{
		int row = rand() % 9 + 1;
		int col = rand() % 9 + 1;
		if (mine_map[row][col] == '0')
		{
			mine_map[row][col] = '1';
			--mine_count;
		}
	}
}
void Printmap(char map[ROW+2][COL+2])                //��ӡ��ͼ
{
	printf("   ");
	for (int col = 1; col <= COL; ++col)
	{
		printf("%2d", col);
	}
	printf("\n");
	printf("    ");
	for (int col = 1; col <= COL; ++col)
	{
		printf("--");
	}
	printf("\n");
	for (int row = 1; row <= ROW; ++row)
	{
		printf("%2d| ", row);
		for (int col = 1; col <= COL; ++col)
		{
			printf("%c ", map[row][col]);
		}
		printf("\n");
	}

}
void Updateshowmap(char show_map[ROW + 2][COL + 2],
	char mine_map[ROW + 2][COL + 2], int row, int col)//�Ե�ͼ����
{
	int mine_count = 0;
	mine_count = (mine_map[row - 1][col + 1] - '0'
		+ mine_map[row - 1][col] - '0'
		+ mine_map[row - 1][col + 1] - '0'
		+ mine_map[row][col + 1] - '0'
		+ mine_map[row][col - 1] - '0'
		+ mine_map[row + 1][col + 1] - '0'
		+ mine_map[row + 1][col] - '0'
		+ mine_map[row + 1][col - 1] - '0');
	show_map[row][col] = '0'+ mine_count;
}
void Game()
{
	int not_mine_count = 0;
	Init(show_map,mine_map);
	Printmap(show_map);
	while (1)
	{
		int row = 0;
		int col = 0;
		printf("��������Ҫ����������(row,col):");
		scanf("%d,%d", &row, &col);
		if (row <= 0 || row>ROW || col <= 0 || col>COL)
		{
			printf("��������,����������һ������!\n");
			continue;
		}
		if (mine_map[row][col] == '1')
		{
			printf("��Ϸ����!\n");
			Printmap(mine_map);           
			break;
		}
		++not_mine_count;
		if (not_mine_count == ROW*COL - Mine_count)
		{
			printf("��ϲ��ʤ����!");
			Printmap(mine_map);
			break;
		}
		Updateshowmap(show_map,mine_map,row,col);
		Printmap(show_map);
	}
}
int main()
{
	int choice = Menue();
	if (choice == 1)
	{
		Game();
	}
	else if (choice == 2)
	{
		printf("�˳���Ϸ!\n");
	}
	else
	{
		printf("��������!\n");
	}
	system("pause");
	return 0;
}