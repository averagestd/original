#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//������ϰ�����ĵݹ������

//��ϰ��дһ����������������ʱ������ʵ��strlen()����

int my_strlen(char* pa)
{
	if (*pa != '\0')  //ת���ַ�'\0'Ϊ�ַ���������־������һ��Ԫ�أ������ܼ�����ַ�������
	{
		pa++;
		return 1 + my_strlen(pa);  //��Ϊmy_strlen()�ķ���ֵΪint����������Ա�������    //return��������ʽ��ֵ��ǰ��������������
	}
	return 0;
}


int main()
{
	//char arr[] = "ritual";
	//printf("the length of the string is: %d\n", my_strlen(arr));
	
	int a = 0;
	scanf("%d", &a);
	int fact(int);
	printf("��%d��쳲�������Ϊ: %d\n", a, Feb_pro(a));
	printf("%d�Ľ׳�Ϊ: %d\n", a, fact(a));
	return 0;
}

//��ϰ������ - ��n�Ľ׳�

int fact(int n)
{
	if (n > 0)
	{
		return n* fact(n - 1);
	}
	return 1;
}

//��ϰ������ - ���n��쳲�������   

int Feb(int n)  //����ݹ鷽�������˴����ظ����㣬��Ľ������õ�����
{
	if (n>2)
		return  Feb(n - 1) + Feb(n - 2);
	else
		return 1;
}

//�Ľ���������

int Feb_pro(int n)
{
	if (n > 2)
	{
		int a = 1;
		int b = 1;
		int c = 0;
		int i = 0;
		while(n>2)
		{ 
		 	c = a + b;
			a = b,b = c;
			n--;
		}
		return c;
	}
	else
		return 1;
}