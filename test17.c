#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//
////��ϰ1
////�Ӵ�С���

////����1�����鷳���״�
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

////����2�������Ƚϣ��ҳ������Сֵ

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

////�Ľ���������ʽ  //δ��ɣ��漰֪ʶä������ѧ�����������ٻ�ͷ���

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

////��ϰ2
////��ӡ3�ı���(1 - 100)

//int main()
//{
//	int a = 1;
//	for (a = 1; a < 101; a++)  //ִ�в��ֿɻ�Ϊ+=3,��ʡȥ�жϲ���
//	{
//		if (a % 3 == 0)
//			printf("%d ", a);
//		else
//			continue;
//	}
//	return 0;
//}

//��ϰ3
//�����Լ��

int main()
{
	int m, n;
	int	maxf=0;
	int i = 0;
	int fct = 0;
	scanf("%d %d", &m, &n);
	//maxf = m > n ? n : m;  //���ؽ�С�������ڷ�����
	for (i = 1; i <= m && i <= n; i++)  //Ҳ���÷����������ݽ�С�������Ӵ�С�ݼ�����һ�����㹫Լ���������Լ����
	{
		if ((m % i == 0) && (n % i == 0))
		{
			maxf = i;
		}
	}
	printf("���Լ����\n%d", maxf);
	return 0;
}