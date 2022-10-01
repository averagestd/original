#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>

//函数：判断一个数是否为素数
int judg_fig(int x)
{
	int i = 0;
	for (i = 2; i <= sqrt(x); i++)
	{
		if (x % i == 0)
		{
			return 0;
		}
	}
	if (i > sqrt(x))
		return x;
}


//函数：判断某一年是否为闰年
int judg_yr(int y)
{
	if ((y % 4 == 0) && (y % 100 != 0))
		return y;
	if (y % 400 == 0)
		return y;
	return 0;
}


//函数：整型有序数组的二分查找
int fnd_nm(int num, int arr[],int sz1)
{
	int left = 0;
	int right = sz1 - 1;  //别忘了减1，因为数组是从下标0开始
	int mid = 0;
	while(left<=right)
	{
		mid = (left + right) / 2;
		if (num < arr[mid])
		{
			right = mid - 1;
		}
		else if(num>arr[mid])
		{
			left = mid + 1;
		}
		else
		{
			return mid;
		}
	}
	if (left > right)
		return -1;
}


//函数：num值加1
void plus(int* x)
{
	++*x; //前置加加，先加加，再执行
}


int main()
{
	//int m = 6;
	//printf("%d ", judg_fig(m));

	//int m = 1508;
	//printf("%d是闰年", judg_yr(m));

	int m = 18;
	int team[] = {0,1,3,5,6,8,10,11,15,16,18};
	int sz = sizeof(team) / sizeof(team[0]);  //数组的计算当前不能放到其他函数中，因为传过去的是指针 ！！！
	int ret = fnd_nm(m, team, sz);
	if (ret == -1)
		printf("找不到");
	else
		printf("%d 的下标是：%d\n", m, ret);

	//int m = 0;
	//while (m < 10)
	//{
	//	plus(&m);
	//	printf("%d ",m);
	//}
	return 0;
}