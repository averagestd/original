#define  _CRT_SECURE_NO_WARNINGS 1
#include "add.h"
#include <stdio.h>

//练习：接收一个整型值，按顺序打印它的每一位。
int main()
{
	//int a = 30;
	//int b = 20;
	//printf("%d\n", Add(a, b));

	int num = 0;
	scanf("%u", &num);  //"%u"为无符号类型
	prin(num);
	return 0;
}
