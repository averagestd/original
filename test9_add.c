#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
static int glo = 666;  //static����ȫ�ֱ����󣬴�ȫ�ֱ���ֻ�����Լ�����Դ�ļ�(.c)�ڲ����ã�����Դ�ļ��޷����á�
int Add(int x, int y)  //static���κ���������Ч��������ȫ�ֱ���һ�¡�
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