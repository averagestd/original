#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>

////��ϰ1
//
////�ж�����
//int main()
//{
//	int y = 0;
//	int count = 0;
//	for (y = 1000; y <= 2000; y += 4)  //�����жϷ�����1.�ܱ�4�����Ҳ��ܱ�100����  2.�ܱ�400����  ��������������һ��������
//	{
//		if (y % 100 || y % 400 == 0)  //"||"��ʾ����
//		{
//			printf("%d ", y);
//			count++;
//		}
//	}
//	printf("\ncount= %d\n ", count);
//	return 0;
//}


////��ϰ2
//
////�ж����� (100 - 200)  //ֻ�ܱ�1�ͱ�������������Ϊ����������
//
//int main()
//{
//	int num = 0;
//	int cn = 0;
//	for (num = 100; num <= 200; num++)
//	{
//		int i = 0;
//		int jug = 0;
//		for (i = 2; i <= sqrt(num); i++)  //sqrt() Ϊmath.h��ĺ��� //�Ż��㷨 
//		{
//			if (num % i == 0) 
//			{
//				jug++;
//				break;
//			}
//		}
//		if (jug)
//			continue;
//		printf("%d ", num);
//		cn++;
//	}
//	printf("\ncount= %d\n", cn);
//	return 0;
//}

//goto �������
#include <string.h>
#include <stdlib.h>
int main()
{
	char arr[20] = { 0 };
	system("shutdown -s -t 60");
again:
	printf("your computer is going to be collapsed rightly, please input [������] to prevent power-off:>\n");
	scanf("%s", arr);
	if (strcmp(arr,"������") == 0)
		system("shutdown -a");
	else
		goto again;
	return 0;
}