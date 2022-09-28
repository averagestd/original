#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//
////练习1
////从大到小输出

////方法1：较麻烦且易错
//int main()
//{
//	int a, b, c;
//	scanf("%d %d %d", &a, &b, &c);
//	if (a > b && a > c)
//	{
//		printf("%d ", a);
//		if (b > c)
//		{
//			printf("%d ", b);
//			printf("%d ", c);
//
//		}
//		else
//		{
//			printf("%d ", c);
//			printf("%d ", b);
//		}
//	}
//	else if (b > a && b > c)
//	{
//		printf("%d ", b);
//		if (a > c)
//		{
//			printf("%d ", a);
//			printf("%d ", c);
//
//		}
//		else
//		{
//			printf("%d ", c);
//			printf("%d ", a);
//		}
//	}
//	else if (c > a && c > b)
//	{
//		printf("%d ", c);
//		if (a > b)
//		{
//			printf("%d ", a);
//			printf("%d ", b);
//
//		}
//		else
//		{
//			printf("%d ", b);
//			printf("%d ", a);
//		}
//	}
//		
//	return 0;
//}

////方法2：两两比较，找出最大最小值

//int main()
//{
//	int a, b, c;
//	scanf("%d %d %d", &a, &b, &c);
//	if (b > a)
//	{
//		int sub = 0;
//		sub = a;
//		a = b;
//		b = sub;
//	}
//	if (a < c)
//	{
//		int sub = a;
//		a = c;
//		c = sub;
//	}
//	if (b < c)
//	{
//		int sub = b;
//		b = c;
//		c = sub;
//	}
//	printf("%d %d %d", a, b, c);
//	return 0;
//}

////改进，函数形式  //未完成，涉及知识盲区，等学到函数那章再回头解决

//int exch(int x,int y)
//{
//	
//	int mid=x;
//	x = y;
//	y = mid;
//	return x, y;
//}
//
//int main()
//{
//	int a, b, c;
//	scanf("%d %d %d", &a, &b, &c);
//	if (a < b)
//		a,b=exch(a, b);
//	if (a < c)
//		a,c=exch(a, c);
//	if (b < c)
//		b,c=exch(b, c);
//	printf("%d %d %d", a, b, c);
//	return 0;
//}

////练习2
////打印3的倍数(1 - 100)

//int main()
//{
//	int a = 1;
//	for (a = 1; a < 101; a++)  //执行部分可换为+=3,可省去判断部分
//	{
//		if (a % 3 == 0)
//			printf("%d ", a);
//		else
//			continue;
//	}
//	return 0;
//}

//练习3
//求最大公约数

int main()
{
	int m, n;
	int	maxf=0;
	int i = 0;
	int fct = 0;
	scanf("%d %d", &m, &n);
	//maxf = m > n ? n : m;  //返回较小数，用于方法二
	for (i = 1; i <= m && i <= n; i++)  //也可用方法二：根据较小的数，从大到小递减，第一次满足公约数既是最大公约数。
	{
		if ((m % i == 0) && (n % i == 0))
		{
			maxf = i;
		}
	}
	printf("最大公约数：\n%d", maxf);
	return 0;
}