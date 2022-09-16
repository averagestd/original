#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//void test()
//{
//	int a = 1;
//	a++;
//	printf("%d ", a);  //a为局部变量，出函数之后便销毁，每次循环的a都是重新创建的a常量且重新赋值了1
//}
void test()
{
	static int a = 1;
	a++;
	printf("%d ", a);
}
//extern int glo;
//int main()
//{
//	printf("%d\n", glo);
//	typedef unsigned int ui ;  //关键字"typedef"意为重定义类型，一般用于类型名称过长，用自定关键字重新命名原类型。此处定义的ui=unsigned int
//	ui te = 100; //无符号版本和有符号版本的区别就是无符号类型能保存2倍于有符号类型的正整数数据，有符号类型的二进制首位是符号位。
//	printf("%d\n", te);
//	int t = 0;
//	while (t < 10) 
//	{
//		test();
//		t++;
//	}
//	return 0;
//
//
//}
int main()
{
	int num1 = 0;
	int num2 = 0;
	scanf("%d %d", &num1, &num2);
	//声明其它.c文件的函数，需写出各类型和函数名即可
	extern int Add(int, int);  
	printf("result:%d\n", Add(num1, num2));
}