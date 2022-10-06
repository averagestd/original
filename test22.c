#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//今天练习函数的递归与迭代

//练习：写一个函数，不创建临时变量，实现strlen()功能

int my_strlen(char* pa)
{
	if (*pa != '\0')  //转义字符'\0'为字符串结束标志，属于一个元素，但不能计算进字符串长度
	{
		pa++;
		return 1 + my_strlen(pa);  //因为my_strlen()的返回值为int，所以其可以被操作。    //return返回其表达式的值后当前函数立即结束。
	}
	return 0;
}


int main()
{
	//char arr[] = "ritual";
	//printf("the length of the string is: %d\n", my_strlen(arr));
	
	int a = 0;
	scanf("%d", &a);
	int fact(int);
	printf("第%d个斐波那契数为: %d\n", a, Feb_pro(a));
	printf("%d的阶乘为: %d\n", a, fact(a));
	return 0;
}

//练习：函数 - 求n的阶乘

int fact(int n)
{
	if (n > 0)
	{
		return n* fact(n - 1);
	}
	return 1;
}

//练习：函数 - 求第n个斐波那契数   

int Feb(int n)  //此类递归方法引入了大量重复计算，需改进，可用迭代法
{
	if (n>2)
		return  Feb(n - 1) + Feb(n - 2);
	else
		return 1;
}

//改进：迭代法

int Feb_pro(int n)
{
	if (n > 2)
	{
		int a = 1;
		int b = 1;
		int c = 0;
		int i = 0;
		while(n>2)
		{ 
		 	c = a + b;
			a = b,b = c;
			n--;
		}
		return c;
	}
	else
		return 1;
}