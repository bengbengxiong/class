#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define ROW 3
#define COL 3
char Chessboard[ROW][COL];
//��ӡһ���˵�
//����һ������
//��ʼ������
//��ӡ����
//�������
//�������Ƿ�Ӯ��
//��������
//�������Ƿ�Ӯ��
//������
int Menu()                                             //��ӡ�˵�
{
	printf("=============================\n");
	printf("=========1.��ʼ��Ϸ==========\n");
	printf("=========2.�˳���Ϸ==========\n");
	printf("=============================\n");
	printf("���������ѡ��: ");
	int choice = 0;
	scanf("%d", &choice);
	return choice;
}
void Init()                                               //��ʼ������
{
	for (int row = 0; row < ROW; ++row)
	{
		for (int col = 0; col < COL; ++col)
		{
			Chessboard[row][col] = ' ';
		}
	}
}
void Print()                                              //��ӡ����
{
	for(int row = 0; row < ROW; ++row)
	{
		printf("|  %c |  %c |  %c |\n", Chessboard[row][0], 
			    Chessboard[row][1],Chessboard[row][2]);
		if (row != ROW - 1)                              //�������һ������߽�
		{
             printf("|����|����|����|\n");
	    }
	}
		
}
void Player()                                             //�������
{
	while (1)
	{
         printf("���������(x,y):");
		 int row = -1;
		 int col = -1;
	     scanf("%d,%d", &row, &col);
		 if (row<0 || row>ROW || col<0 || col>COL)        //�ж��������ĺϷ���
		 {
			 printf("�Ƿ�����,��������������!\n");
			 continue;
		 }
		 if (Chessboard[row][col] != ' ')                //�ж������Ƿ�ռ��
		 {
			 printf("��ǰλ���ѱ�ռ��,����������!\n");
			 continue;
		 }
			 Chessboard[row][col] = 'x';                 //����
		 break;
	}	
}
void Computer()                                          //��������
{
	printf("���������!\n");
	int row = 0;
	int col = 0;
	while (1)
	{
		row = rand() % ROW;                              //����һ���������[0,3)
		col = rand() % COL;
		if (Chessboard[row][col] == ' ')
		{
			Chessboard[row][col] = 'o';
			break;
		}
     }
}
int Isfull()                                            //�ж������Ƿ�����
{
	for (int row=0; row < ROW; ++row)
	{
		for (int col=0; col < COL; ++col)
		{
			if (Chessboard[row][col] == ' ')
			{
				return 0;
			}
		}
	}
	return 1;

}
char Checkwinner()                                      //���Ӯ��
{
	for (int row=0; row < ROW; ++row)                   //�жϺ���Ӯ
	{
		if (Chessboard[row][0] == Chessboard[row][1]
			&& Chessboard[row][0] == Chessboard[row][2]
			&& Chessboard[row][0] != ' ')
		{
			return Chessboard[row][0];
		}	
	}
	for (int col=0; col < ROW; ++col)
	{
		if (Chessboard[0][col] == Chessboard[1][col]
			&& Chessboard[0][col] == Chessboard[2][col]
			&& Chessboard[0][col] != ' ')
		{
			return Chessboard[0][col];
		}
	}
	if (Chessboard[0][0] == Chessboard[1][1]
		&& Chessboard[0][0] == Chessboard[2][2]
		&& Chessboard[0][0] != ' ')
	{
		return Chessboard[0][0];
	}
	if (Chessboard[0][2] == Chessboard[1][1]
		&& Chessboard[0][2] == Chessboard[2][0]
		&& Chessboard[0][2] != ' ')
	{
		return Chessboard[0][2];
	}
	if (Isfull())
	{
		return 'q';
	}
	return ' ';
}
int main()
{
	char winner = ' ';
	int choice = Menu();         //ѡ����Ϸ��ʼ
	if (choice == 1)
	{
	 Init();            //��ʼ������
	while (1)
	{ 
		Print();                 //��ӡ����
        Player();              //�������,�����Ϸ�Ƿ����
		winner = Checkwinner();
		if (winner != ' ')
		{
			break;
		}
		Computer();           //��������,�����Ϸ�Ƿ����
		winner = Checkwinner();
		if (winner != ' ')
		{
			break;
		}
		
	}
	if (winner == 'x')
	{
		printf("��һ�ʤ!\n");
	}
	else if (winner == 'o')
	{
		printf("���Ի�ʤ!\n");
	}
	else if (winner == 'q')
	{
		printf("����!\n");
	}
	}
	else if (choice == 2)
	{
		printf("��Ϸ�˳�!\n");
	}
	system("pause");
	return 0;	
}

