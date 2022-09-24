#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)  //getchar()用于获取键盘输入值的一个字符并返回，注意只获取了一个字符，因为此处是while循环，所以全部打出来了，如果读取错误或end of file返回EOF
//		putchar(ch);  //与printf作用类似
//	return 0;
//}


int main()
{
	char password[20] = { 0 };
	printf("please input your password:");
	scanf("%s", password);  //scanf()用回车触发“取用输入数据流”，但会留下一个'\n'在缓冲区。
	int di = 0;
	//getchar()  //清理缓冲区（缓冲区只有一个字符情况下）
	while((di=getchar())!='\n')  //getchar() 的返回值赋值给di，用di与\n作判断。    //转义字符算作一个字符，且用''单引号引用
	{
		;   //空命令，不进行操作，此循环用于清理缓冲区中的多个字符，getchar()每次只能取走一个字符
	}
	printf("verify your password(Y/N):");
	int ch = getchar();  //getchar()返回ASCII码值
	if (ch == 'Y')
		printf("确认成功\n");
	else
		printf("确认失败\n");
	int jud = 0;



	while ((jud = getchar()) != EOF)
	{
		if (jud < '0' || jud>'9')  //字符比大小比的是ASCII码值
			continue;
		putchar(jud);  //括号中为整型变量，putchar作用与printf类似
	}
	return 0;
}


////while循环结构
//int main()
//{
//	int i = 0;  //初始化
//	while (i <= 10)  //判断部分
//	{
//		printf("%d ", i);
//		i++; //调整部分
//	}
//		
//	return 0;
//}

//int main()
//{
//	int m = getchar();//getchar() 每次调用都只能获取一个字符并返回！！
//	putchar(m);
//	return 0;
//}