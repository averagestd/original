#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	int age = 19;
//	if (age <= 16)
//		printf("少年\n");
//	else if (age > 16 && age < 18)  //注意同时有多个条件要用"&&"
//		printf("青年\n");
//	else if (age >= 18 && age < 60)
//		printf("成年\n");
//	else
//		printf("老年\n");
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	while (i < 100)
//	{
//		i++;
//		if (i % 2 == 1)
//			printf("%d\t", i);
//	}
//	return 0;
//}


int main()
{
	int day = 0;
	scanf("%d", &day);
	switch (day)
	{
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
		printf("工作日\n");  //数字是入口，break是出口，只有执行到break时，switch语句才会结束
		break;
	case 6:
	case 7:
		printf("休息日\n");
		break;
	default:
		printf("输入错误");
		break;
	}
	return 0;
}