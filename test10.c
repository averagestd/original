#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#define ADD(X,Y) ((X)+(Y))  //define����꣬ע�����ŵ�ʹ��,ÿ�������迴��һ������
int main()
{
	int a = 1;
	//printf("%p\n", &a);
	//printf("%d\n", 4*ADD(2, 3));
	int* pa = &a; //"*"˵��paΪָ�������"int"˵��paָ��Ķ�����int���͵�
	*pa = 66;    //"*"��Ϊ�����ò�������ͨ��paָ������ĵ�ַ���ҵ�a 
	printf("%d\n", a);
	printf("%d\n", sizeof(char*));
	printf("%d\n", sizeof(short*));
	printf("%d\n", sizeof(double*));  //64λ���������Ϊ64��������λ��ָ���С��Ϊ8���ֽ�
	return 0;
}