#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
static int glo = 666;  //static修饰全局变量后，此全局变量只能在自己所在源文件(.c)内部可用，其它源文件无法调用。
int Add(int x, int y)  //static修饰函数后，作用效果与修饰全局变量一致。
{
	if (x > y)
	{
		return( x % y);
	}
	else
	{
		return( x && y);
	}
	
}