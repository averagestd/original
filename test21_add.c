#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int Add(int x,int y)
{
	return x + y;
}

void prin(unsigned int a)  //函数递归，自己调用自己
{

	if (a>9)
		prin(a/10);
	printf("%d ", a % 10);
	return;
}
