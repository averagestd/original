#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//int main()
//{
//	printf("c:\test\test.c\n");  //此处"\t"为转义字符，是tab键的功能
//	printf("ab\ncd\n");
//	printf("%c\n",'\'');
//	printf("%c\n", 'a');
//	printf("%s\n", "\"");
//	printf("%s\n", "'");
//	printf("c:\\test\\test.c\n");
//	printf("\a\a\a");
//	return 0;
//
//}
int main()
{

	printf("%c\n", '\130');  //"\"号后面的三位数字为8进制数字，作用是将其转换为10进制数字对应的ASCII码。
	printf("%c\n", '\x30');  //"\x"后面两位数字为十六进制数字，作用是将其转换为10进制数字对应的ASCII码。
	printf("%d\n", strlen("c:\test\328\test.c\n"));  //"\32"是八进制首字母为零情况，八进制数字范围0-7，遇8进1。注：每个转义字符都只能算作一个字符的长度。
	
	return 0;
}