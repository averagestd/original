#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int Add(int x,int y)
{
	return x + y;
}

void prin(unsigned int a)  //�����ݹ飬�Լ������Լ�
{

	if (a>9)
		prin(a/10);
	printf("%d ", a % 10);
	return;
}