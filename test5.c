#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
//int main()
//{
//	printf("c:\test\test.c\n");  //�˴�"\t"Ϊת���ַ�����tab���Ĺ���
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

	printf("%c\n", '\130');  //"\"�ź������λ����Ϊ8�������֣������ǽ���ת��Ϊ10�������ֶ�Ӧ��ASCII�롣
	printf("%c\n", '\x30');  //"\x"������λ����Ϊʮ���������֣������ǽ���ת��Ϊ10�������ֶ�Ӧ��ASCII�롣
	printf("%d\n", strlen("c:\test\328\test.c\n"));  //"\32"�ǰ˽�������ĸΪ��������˽������ַ�Χ0-7����8��1��ע��ÿ��ת���ַ���ֻ������һ���ַ��ĳ��ȡ�
	
	return 0;
}