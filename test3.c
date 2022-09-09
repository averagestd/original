#define  _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main()
//{
//	const int a = 10;
//	printf("%d\n",a);
//	return 0;
//
//}
//#include <stdio.h>
//#define max 1000
//int main()
//{
//	//max = 9000;//error
//	printf("%d\n", max);
//}

enum Sex
{
	MALE=3,
	FEMALE,
	SECRET
};
#include <stdio.h>
int main()
{
	printf("%d\n",MALE);
	printf("%d\n", FEMALE);
	printf("%d\n", SECRET);
}