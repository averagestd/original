#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	////variation one
//	//// 判断部分省略 - 判断部分恒为真
//	//int i = 0;
//	//for (i = 1; ;i++)
//	//{
//	//	printf("%d ", i);
//	//}
//
//	//variation two
//	//可以有多个元素。此处无需区分前后置++
//	int x, y;
//	for (x = 0, y = 0; x < 2 && y < 5; ++x, y++)
//	{
//		printf("666\n");
//	}
//	return 0;
//}


////易错题
////请问循环多少次
//int main()
//{
//	int i, k;
//	for (i = 0, k = 0; k = 0; i++, k++) //此处的判断部分是一个等号，是赋值表达式，判断部分把0赋值给k，此表达式的结果就是0，0为假，所以一次也没有循环。
//	{
//		k++;
//	}
//	return 0;
//}


// do...while() 循环  //先执行，再判断
//int main()
//{
//	int a = 1;
//	int i = 1;
//	do
//	{
//		printf("%d ", a);
//		a++;
//	} while (a<=10); //注意此处的while 在右括号旁边。
//
//
//	// //第二种写法
//	//do
//	//	printf("%d ",i++);
//	//while (i <= 10);
//	return 0;
//}


////练习：计算n的阶乘
//int main()
//{
//	int or;
//	int i = 1;
//	int re = 1;
//	scanf("%d", &or );
//	while (i<=or)
//	{
//		re *= i;
//		i++;
//	}
//	printf("%d 的阶乘为:%d\n",or,re);
//	return 0;
//}


//////练习：计算1!+2!+3!+......+10!
//int main()
//{
//	int or1;
//	int i1 = 1, i2 = 1, sum = 0;
//	int re = 1;
//	scanf("%d", &or1 );
//	while (i1 <= or1)
//	{
//		re = 1;
//		for (i2=1;i2 <= i1;i2++)
//		{
//			re *= i2;
//		}
//		sum += re;
//		i1++;
//	}
//	printf("%d的各个阶乘的累加值:\n%d", or1, sum);
//	return 0;
//}


//
////上题改进代码
//int main()
//{
//	int i = 0;
//	int n = 1;
//	int sum = 0;
//	for (i = 1;n <= 3; n++)
//	{
//		i *= n;
//		sum += i;
//	}
//	printf("%d", sum);
//	return 0;
//}


////练习：在一个有序数组中查找具体的某个数字x
//使用二分查找法
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 10; //要查找的数字（找到其对应的下标）
	int sz = sizeof(arr) / sizeof(arr[0]); //确定元素个数
	int right = sz - 1;
	int left = 0;
	while (left<=right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else
		{
			printf("查找的元素的下标: %d\n", mid);
			break;
		}
	}
	if (left > right)
		printf("元素不存在！\n");
}
