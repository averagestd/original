#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	int age = 19;
//	if (age <= 16)
//		printf("����\n");
//	else if (age > 16 && age < 18)  //ע��ͬʱ�ж������Ҫ��"&&"
//		printf("����\n");
//	else if (age >= 18 && age < 60)
//		printf("����\n");
//	else
//		printf("����\n");
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
		printf("������\n");  //��������ڣ�break�ǳ��ڣ�ֻ��ִ�е�breakʱ��switch���Ż����
		break;
	case 6:
	case 7:
		printf("��Ϣ��\n");
		break;
	default:
		printf("�������");
		break;
	}
	return 0;
}