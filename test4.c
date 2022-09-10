#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
int main()
{
	char arr[] = "hello";
	char arr1[] = { 'h','e','l','l','o','\0'};
	int len = strlen(arr);
	printf("%s\n", arr);
	printf("%s\n", arr1);
	printf("%d\n", len);
	printf("%d\n", strlen(arr1));
	return 0;
}