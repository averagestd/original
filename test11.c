#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//struct Stu
//{
//	char name[20];
//	int age;
//	double score;
//};
//int main()
//{
//	struct Stu s = { "张三",18,99.9 };//结构体的创建和初始化
//	printf("1: %s %d %lf\n",s.name,s.age,s.score);//结构体变量.成员变量
//	struct Stu* ps = &s;  //创建结构体的指针变量ps
//	printf("2: %s %d %lf\n",(*ps).name,(*ps).age,(*ps).score);
//	printf("3: %s %d %lf\n", ps->name, ps->age, ps->score);//结构体指针->成员变量名
//	//int a = 10;
//	//int arr[a] = { 0 };  //数组的元素个数必须是常量值
//	return 0;
//}


////练习
//int max(int x,int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int m = 0;
//	scanf("%d %d", &num1, &num2);  //注意符号&(取地址)的使用
//	m=max(num1, num2); 
//	printf("maximum:%d\n", m);
//	return 0;
//}


//int sum(int x)
//{
//	int c = 0;
//	static int b = 3;  //static 关键字修饰的变量在循环中不会被重置
//	c += 1;  //"+="：c=c+1
//	b += 2;
//	return(x + b + c);
//}
//int main()
//{
//	int i = 0;
//	int a = 2;
//	for (i = 0; i < 5; i++)
//		printf("%d\n",sum(a));
//}

 
int main()
{
	int a = 0;
	printf("please input a figure:");
	scanf("%d", &a);
	if (a % 5 == 0) //注意等于是"=="，赋值是"="
		printf("YES");
	else
		printf("NO");
	return 0;
}