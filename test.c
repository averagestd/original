//#include <stdio.h>      //#�ű�ʾԤ������䣬�ڱ���֮ǰ����

//int main()
//{
//	int age = 20;
//	double weight = 75.3;
//	age = age + 1;
//	weight = weight - 10;
//	printf("%d\n", age);
//	printf("%fl\n", weight);
//	return 0;
//}
#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>       //standard input & output ��д

int main()
{
	extern int lev;
	printf("%d\n", lev);
	int a = 0;
	int b = 0;
	int sum = 0;
	scanf("%d %d", &a, &b);
	sum = a + b;
	printf("sum=%d", sum);
	return 0;
}
int lev = 666;