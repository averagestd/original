#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	int input = 0;
//	printf("join union>:\n");
//	printf("then will you cling on to learn English?:1(yes),0(no)\n");
//	scanf("%d", &input);
//	if (input == 1)      //"{}"ֻ��һ�д���ʱ���Բ�д�����ţ�����ʱһ��Ҫд�����š�
//	{
//		printf("promised prospect\n");
//	}	
//	else
//	{
//		printf("come under the bitter taste of living\n");
//	}
//	return 0;
//}
//int main()
//{
//	int line = 0;
//	while (line < 30000)
//	{
//		printf("code accumulation:%d\n", line);
//		line++;
//	}
//		
//	if (line == 30000)
//		printf("peak of life\n");
//	return 0;
//}
int Add(int x,int y)   //���庯��
{
	int z = x + y;
	return z;
}
int main()
{
	int num1 = 0;
	char ch[5] = { 'a','b','c' };  //����ȫ��ʼ����ʣ���Ĭ��Ϊ0
	int i = 0;
	while (i < 5)
	{
		printf("%c\n", ch[i]);
		i++;
	}
	int num2 = 0;
	scanf("%d %d", &num1, &num2);
	//int sum = num1 + num2;  //�����ֱ�Ӽ�
	int sum = Add(num1, num2);    //ʹ�ú���
	printf("%d\n", sum);
	return 0;
}