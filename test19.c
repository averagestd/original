#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int get_max(int x,int y)
//{
//	return(x > y ? x : y); //expres1 ? expres2 : expres3  //三目操作符，表达式1成立则表达式2计算并返回表达式2 的结果，且这个语句的结果为表达式2 的结果。表达式1 不成立则执行表达式3，效果同上。
//}


//exch()在被调用的时候，实参传值给形参，其实形参是实参的一份临时拷贝，改变形参，不能改变实参。

//void exch(int x,int y)  //返回值为void意为返回空，只执行，不返回值
//{
//	int m = 0;
//	m = x;
//	x = y;
//	y = m;  //此写法错误，且return只能返回一个值。xy与ab是完全不同的两块空间，exch函数内部与main函数内部并没有直接的联系，要操作ab需要用指针来操作
//}

void exch(int* x, int* y)
{
	int m = *x;
	*x = *y;
	*y = m;
}

int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	//printf("max=%d\n", get_max(a, b));
	printf("交换前：a = %d b = %d\n", a, b);
	exch(&a, &b); //传地址
	//exch(a, b); //此处只是传值，传到exch函数后会开辟新空间，如果没有函数返回值，ab本身不会被影响。
	printf("交换后：a = %d b = %d\n", a, b);
	return 0;
}