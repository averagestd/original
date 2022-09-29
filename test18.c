#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>

////练习1
//
////判断闰年
//int main()
//{
//	int y = 0;
//	int count = 0;
//	for (y = 1000; y <= 2000; y += 4)  //闰年判断方法：1.能被4整除且不能被100整除  2.能被400整除  两个条件满足其一既是闰年
//	{
//		if (y % 100 || y % 400 == 0)  //"||"表示或者
//		{
//			printf("%d ", y);
//			count++;
//		}
//	}
//	printf("\ncount= %d\n ", count);
//	return 0;
//}


////练习2
//
////判断素数 (100 - 200)  //只能被1和本身整除的数称为素数或质数
//
//int main()
//{
//	int num = 0;
//	int cn = 0;
//	for (num = 100; num <= 200; num++)
//	{
//		int i = 0;
//		int jug = 0;
//		for (i = 2; i <= sqrt(num); i++)  //sqrt() 为math.h库的函数 //优化算法 
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

//goto 语句运用
#include <string.h>
#include <stdlib.h>
int main()
{
	char arr[20] = { 0 };
	system("shutdown -s -t 60");
again:
	printf("your computer is going to be collapsed rightly, please input [我是猪] to prevent power-off:>\n");
	scanf("%s", arr);
	if (strcmp(arr,"我是猪") == 0)
		system("shutdown -a");
	else
		goto again;
	return 0;
}