#define  _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

void Alter()
{
	printf("***************************************\n");
	printf("***************************************\n");
	printf("************    1.start    ************\n");
	printf("************    0.leave    ************\n");
	printf("***************************************\n");
	printf("***************************************\n");
	printf("please input:>");
}

void Init_quar(char place[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			place[i][j] = ' ';
		}
	}
}

void Display_Board(char place[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			printf(" %c ", place[i][j]);
			if (j < col - 1)
			{
				printf("|");
			}
		}
		printf("\n");
		if (i < row - 1)
		{
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
				{
					printf("|");
				}
			}
			printf("\n");
		}
	}
}

void Player_Procd(char place[ROW][COL], int row, int col)
{
	int input1 = 0;
	int input2 = 0;
	while (1)
	{
		printf("player's round, put on:");
		scanf("%d %d", &input1, &input2);
		if (input1 > 0 && input1 <= 3 && input2 > 0 && input2 <= 3)
		{
			if (place[input1 - 1][input2 - 1] == ' ')
			{
				place[input1 - 1][input2 - 1] = '*';
				break;
			}
			else
			{
				printf("this blank has been occupied, input again\n");
			}
		}
		else
		{
			printf("error, input again\n");
		}
	}
}

void AI_Procd(char place[ROW][COL], int row, int col)
{
	printf("AI's round\n");
	while (1)
	{
		int x = rand() % ROW;
		int y = rand() % COL;
		int i = 0;
		//智能拦截实现
		for (i = 0; i < row; i++)
		{
			if (((place[i][0] == place[i][1] || place[i][1] == place[i][2]) && place[i][1] != ' '))
			{
				int c = 0;
				for (c = 0; c < col; c++)
				{
					if (place[i][c] == ' ')
					{
						place[i][c] = '#';
						goto end;
					}
				}
			}
			else if((place[i][0] == place[i][2]) && place[i][0] != ' ' && place[i][1] == ' ')
			{
				place[i][1] = '#';
				goto end;
			}
		}
		if (place[x][y] == ' ')
		{
			place[x][y] = '#';
			goto end;
		}

	}
	end:
		;
}

char Judg(char place[ROW][COL], int row, int col)
{
	int i = 0;
	char flag = '0';
	for (i = 0; i < row; i++)
	{
		if (place[i][0] == place[i][1] && place[i][1] == place[i][2] && place[i][0] != ' ')
		{
			return place[i][0];
		}
		int j = 0;
		for (j = 0; j < col; j++)
		{
			//横三行判断
			
			//竖三行判断
			if (place[0][j] == place[1][j] && place[1][j] == place[2][j] && place[0][j] != ' ')
			{
				return place[0][j];
			}
			//斜两行判断
			if (((place[0][0] == place[1][1] && place[1][1] == place[2][2]) || (place[0][2] == place[1][1] && place[1][1] == place[2][0])) && place[1][1] != ' ')
			{
				return place[1][1];
			}
			if (place[i][j] == ' ')
				flag = '1';
		}

	}
	return flag;

}





