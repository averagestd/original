#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>  //包含strlen(), strcmp()等函数
#include <stdlib.h>  //standard library 标准库
#include <time.h>

////练习：密码判别
//int main()
//{
//	char arr_origin[] = "1314djj!";
//	char arr[20] = {0};//注意限制数组变量的大小，不然会报错
//	int i = 0;
//	do
//	{
//		//if (arr == arr_origin) //err -  两个字符串的比较，不能使用==，应该使用strcmp()函数，两个字符串相同则返回0。strcmp为string compare 的缩写。
//		printf("请输入密码：\n");
//		scanf("%s", arr);//数组名不需要取地址，因为其本身就是地址
//		if (strcmp(arr, arr_origin) == 0)
//		{
//			printf("登录成功！");
//			break;
//		}
//		else
//			printf("密码错误！\n");
//			i++;
//	} while (i<3);
//	if (i == 3)
//		printf("three times password input were false, program ceased. ");
//	return 0;
//}


//练习
//写一个猜数字游戏

void menu()
{
	printf("******************************************\n");//注：打印之后并不会自动换行，注意加上"\n"
	printf("******************************************\n");
	printf("**************  1.开始游戏  **************\n");
	printf("**************  0.离开游戏  **************\n");
	printf("******************************************\n");
	printf("******************************************\n");

}


void game()
{
	int random = rand() % 100 + 1; // %100的余数是0 - 99，+1之后的范围就是1 - 100
	int fig = 0;

	while (1)
	{
		printf("guess:\n");
		scanf("%d", &fig);
		if (fig == random)
		{
			printf("congratulations\n");
			break;
		}
		else if (fig < random)
		{
			printf("sorry, less than this\n");
		}
		else
		{
			printf("sorry, greater than this\n");
		}
	}
	//} while (alter == 'Y');//err -  // "=="暂时只能用于数字的判断
}



int main()
{
	srand((unsigned int)time(NULL)); //种子的生成要在循环之外，放循环之内会导致rand()返回的结果不够随机。
	int a = 0;
	do
	{
		menu();
		printf("请选择:>\n");
		scanf("%d", &a);
		switch (a)
		{
		case 1:
			game();
			break;
		case 0:
			printf("游戏已退出\n");
			break;
		default:
			printf("输入错误，请重新输入\n");
			break;
		}
	} while (a);
	return 0;
}
