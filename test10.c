#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#define ADD(X,Y) ((X)+(Y))  //define定义宏，注意括号的使用,每个变量需看做一个整体
int main()
{
	int a = 1;
	//printf("%p\n", &a);
	//printf("%d\n", 4*ADD(2, 3));
	int* pa = &a; //"*"说明pa为指针变量，"int"说明pa指向的对象是int类型的
	*pa = 66;    //"*"号为解引用操作符，通过pa指针变量的地址，找到a 
	printf("%d\n", a);
	printf("%d\n", sizeof(char*));
	printf("%d\n", sizeof(short*));
	printf("%d\n", sizeof(double*));  //64位计算机，意为64个二进制位，指针大小就为8个字节
	return 0;
}