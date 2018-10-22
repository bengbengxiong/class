#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define ROW 3
#define COL 3
char Chessboard[ROW][COL];
//打印一个菜单
//定义一个棋盘
//初始化棋盘
//打印棋盘
//玩家落子
//检查玩家是否赢了
//电脑落子
//检查电脑是否赢了
//输出结果
int Menu()                                             //打印菜单
{
	printf("=============================\n");
	printf("=========1.开始游戏==========\n");
	printf("=========2.退出游戏==========\n");
	printf("=============================\n");
	printf("请输入你的选择: ");
	int choice = 0;
	scanf("%d", &choice);
	return choice;
}
void Init()                                               //初始化棋盘
{
	for (int row = 0; row < ROW; ++row)
	{
		for (int col = 0; col < COL; ++col)
		{
			Chessboard[row][col] = ' ';
		}
	}
}
void Print()                                              //打印棋盘
{
	for(int row = 0; row < ROW; ++row)
	{
		printf("|  %c |  %c |  %c |\n", Chessboard[row][0], 
			    Chessboard[row][1],Chessboard[row][2]);
		if (row != ROW - 1)                              //避免最后一行输出边界
		{
             printf("|——|——|——|\n");
	    }
	}
		
}
void Player()                                             //玩家落子
{
	while (1)
	{
         printf("请玩家落子(x,y):");
		 int row = -1;
		 int col = -1;
	     scanf("%d,%d", &row, &col);
		 if (row<0 || row>ROW || col<0 || col>COL)        //判断输出坐标的合法性
		 {
			 printf("非法坐标,请重新输入坐标!\n");
			 continue;
		 }
		 if (Chessboard[row][col] != ' ')                //判断坐标是否被占用
		 {
			 printf("当前位置已被占用,请重新输入!\n");
			 continue;
		 }
			 Chessboard[row][col] = 'x';                 //落子
		 break;
	}	
}
void Computer()                                          //电脑落子
{
	printf("请电脑落子!\n");
	int row = 0;
	int col = 0;
	while (1)
	{
		row = rand() % ROW;                              //产生一个随机坐标[0,3)
		col = rand() % COL;
		if (Chessboard[row][col] == ' ')
		{
			Chessboard[row][col] = 'o';
			break;
		}
     }
}
int Isfull()                                            //判断棋盘是否下满
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
char Checkwinner()                                      //检查赢家
{
	for (int row=0; row < ROW; ++row)                   //判断横向赢
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
	int choice = Menu();         //选择游戏开始
	if (choice == 1)
	{
	 Init();            //初始化棋盘
	while (1)
	{ 
		Print();                 //打印棋盘
        Player();              //玩家落子,检查游戏是否结束
		winner = Checkwinner();
		if (winner != ' ')
		{
			break;
		}
		Computer();           //电脑落子,检查游戏是否结束
		winner = Checkwinner();
		if (winner != ' ')
		{
			break;
		}
		
	}
	if (winner == 'x')
	{
		printf("玩家获胜!\n");
	}
	else if (winner == 'o')
	{
		printf("电脑获胜!\n");
	}
	else if (winner == 'q')
	{
		printf("和棋!\n");
	}
	}
	else if (choice == 2)
	{
		printf("游戏退出!\n");
	}
	system("pause");
	return 0;	
}

