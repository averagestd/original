#define  _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
void menu()
{
	printf("***************************************\n");
	printf("***************************************\n");
	printf("************    1.begin    ************\n");
	printf("************    0.leave    ************\n");
	printf("***************************************\n");
	printf("***************************************\n");

}



void Distri_Board(int boar[ROW][COL], int row, int col, int rowor, int color)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			boar[i][j] = 0;
		}

		//随机个数，随机分配

		//for (j = 0; j < col; j++)
		//{
		//	int ranm = rand();
		//	if (ranm % 7 == 0||ranm % 3 == 0)
		//	{
		//		boar[i][j] = ranm % 2;
		//	}
		//	else
		//	{
		//		boar[i][j] = 0;
		//	}
		//	if (j == 0 || j == col - 1)
		//	{
		//		boar[i][j] = 0;
		//	}
		//}
		//if (i == 0 || i == row - 1)
		//{
		//	for (j = 0; j < col; j++)
		//	{
		//		boar[i][j] = 0;
		//	}
		//}
	}
	int count = EasyP;
	while (count > 0)
	{
		int x = rand() % rowor + 1;
		int y = rand() % color + 1;
		if (boar[x][y] == 0)
		{
			boar[x][y] = 1;
			count--;
		}
	}

	////测试雷分布
	//for (i = 0; i < row; i++)
	//{
	//	int j = 0;
	//	for (j = 0; j < col; j++)
	//	{
	//		printf("%d ", boar[i][j]);
	//	}
	//	printf("\n");
	//}
}

void Init_Board(char boar[ROW_OR][COL_OR], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			boar[i][j] = '*';
		}
	}
}
	


void Display_Board(char boar[ROW_OR][COL_OR], int row, int col)
{
	printf("----------- 扫雷游戏 -----------\n");
	printf("0  1  2  3  4  5  6  7  8  9\n\n");
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		printf("%d  ", i + 1);
		for (j = 0; j < col; j++)
		{
			printf("%c  ", boar[i][j]);
		}
		printf("\n\n");
	}
	printf("----------- 扫雷游戏 -----------\n");
}

//此函数功能不够单一，如要更改比较困难，往后需注意此问题

int Player_Discov(int boar[ROW][COL], char obser_boar[ROW_OR][COL_OR], int row, int col, int i, int j)
{

	if ((obser_boar[i - 1][j - 1] == '*') && (i > 0 && i < 10 && j>0 && j < 10))
	{
		if (boar[i][j])
		{
			obser_boar[i - 1][j - 1] = '!';
			printf("你被炸死了！\n");
			return 0;
		}
		if (boar[i][j] == 0)
		{
			int sum = 0;
			int m = 0;
			for (m = i - 1; m < i + 2; m++)
			{
				int n = 0;
				for (n = j - 1; n < j + 2; n++)
				{
					sum += boar[m][n];
				}
			}
			obser_boar[i - 1][j - 1] = (char)(sum + '0');
			if (sum == 0)
			{
				int t = 0;
				for (t = i - 1; t < i + 2; t++)
				{
					int s = 0;
					for (s = j - 1; s < j + 2; s++)
					{
						Player_Discov(boar, obser_boar, ROW, COL, t, s);
					}
				}
			}
			
			return 1;
		}
	}
	else
	{
		return 1;
	}

}

int Judge_win(int boar[ROW][COL], char obser_boar[ROW_OR][COL_OR], int row, int col)
{
	int i = 0;
	int count1 = 0;
	int count2 = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			if (boar[i+1][j+1] == 1)
			{
				count1++;
			}
			if (obser_boar[i][j] == '*')
			{
				count2++;
			}
		}
	}
	if (count1 == count2)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}



