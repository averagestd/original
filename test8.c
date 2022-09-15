#define  _CRT_SECURE_NO_WARNINGS 1  /*
nbplus
*/
#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = a && b; //只有变量同时为真的情况输出1，其他情况输出0
//	printf("%d\n", c);
//	return 0;
//}
//int main()
//{
//	int a = 6;
//	int b = 1;
//	int max = 0;
//	max = a < b ? b : a; //注意此条件操作符返回的是结果，可以给变量赋值。
//	printf("%d\n", max);
//	int c = (b = a * 6, a = b + 8, max = a - 14); //从左向右依次计算，整个逗号表达式的结果为最后一个表达式的结果。
//	
//	printf("%d\n", c);
//	return 0;
//}
int main()
{
	int a = 0;
	printf("%d\n", ~a); //原，反，补码知识
	int b = 6;
	int fl = (int)3.14;  //强制类型转换
	int c = ++b;  //前置"++"，先++，后使用。后置"++"，先使用，再++。 
	printf("%d\n", b);//11
	printf("%d\n", fl);
	printf("%d\n", c);//11
	return 0;
}