#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)  //getchar()���ڻ�ȡ��������ֵ��һ���ַ������أ�ע��ֻ��ȡ��һ���ַ�����Ϊ�˴���whileѭ��������ȫ��������ˣ������ȡ�����end of file����EOF
//		putchar(ch);  //��printf��������
//	return 0;
//}


int main()
{
	char password[20] = { 0 };
	printf("please input your password:");
	scanf("%s", password);  //scanf()�ûس�������ȡ������������������������һ��'\n'�ڻ�������
	int di = 0;
	//getchar()  //����������������ֻ��һ���ַ�����£�
	while((di=getchar())!='\n')  //getchar() �ķ���ֵ��ֵ��di����di��\n���жϡ�    //ת���ַ�����һ���ַ�������''����������
	{
		;   //����������в�������ѭ���������������еĶ���ַ���getchar()ÿ��ֻ��ȡ��һ���ַ�
	}
	printf("verify your password(Y/N):");
	int ch = getchar();  //getchar()����ASCII��ֵ
	if (ch == 'Y')
		printf("ȷ�ϳɹ�\n");
	else
		printf("ȷ��ʧ��\n");
	int jud = 0;



	while ((jud = getchar()) != EOF)
	{
		if (jud < '0' || jud>'9')  //�ַ��ȴ�С�ȵ���ASCII��ֵ
			continue;
		putchar(jud);  //������Ϊ���ͱ�����putchar������printf����
	}
	return 0;
}


////whileѭ���ṹ
//int main()
//{
//	int i = 0;  //��ʼ��
//	while (i <= 10)  //�жϲ���
//	{
//		printf("%d ", i);
//		i++; //��������
//	}
//		
//	return 0;
//}

//int main()
//{
//	int m = getchar();//getchar() ÿ�ε��ö�ֻ�ܻ�ȡһ���ַ������أ���
//	putchar(m);
//	return 0;
//}