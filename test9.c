#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//void test()
//{
//	int a = 1;
//	a++;
//	printf("%d ", a);  //aΪ�ֲ�������������֮������٣�ÿ��ѭ����a�������´�����a���������¸�ֵ��1
//}
void test()
{
	static int a = 1;
	a++;
	printf("%d ", a);
}
//extern int glo;
//int main()
//{
//	printf("%d\n", glo);
//	typedef unsigned int ui ;  //�ؼ���"typedef"��Ϊ�ض������ͣ�һ�������������ƹ��������Զ��ؼ�����������ԭ���͡��˴������ui=unsigned int
//	ui te = 100; //�޷��Ű汾���з��Ű汾����������޷��������ܱ���2�����з������͵����������ݣ��з������͵Ķ�������λ�Ƿ���λ��
//	printf("%d\n", te);
//	int t = 0;
//	while (t < 10) 
//	{
//		test();
//		t++;
//	}
//	return 0;
//
//
//}
int main()
{
	int num1 = 0;
	int num2 = 0;
	scanf("%d %d", &num1, &num2);
	//��������.c�ļ��ĺ�������д�������ͺͺ���������
	extern int Add(int, int);  
	printf("result:%d\n", Add(num1, num2));
}