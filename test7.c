#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	int a = 5 / 2;
//	printf("%d\n", a); //���Ϊ2���õ������̣�������С��
//	float b = 5 / 2;
//	printf("%f\n", b);  //�����ȻΪ����2����Ϊ����"/"����������������͵Ļ���ֻ��������Ϊ���͡�
//	float c = 5.0 / 2;  //��Ҫ�����������ֻ��������һ�����ϼ���С���㼴�ɡ�
//	printf("%f\n", c);  //���2.5
//	int m = 5 % 2;  //"%"Ϊȡ������
//	printf("%d\n", m);
//	return 0;
//}
//int main()
//{
//	int a = 2;
//	int b = a << 1;  //"<<"Ϊ��λ����������ʾ32������λ����������һ������λ��������0������ɾ����
//	printf("%d\n", b);  //���2��2�η�Ϊ4
//	return 0;
//}
//int main()
//{
//	int a = 2;
//	a += 5;  //"+="Ϊ���ϸ�ֵ����������Ϊ a=a+5
//	printf("%d\n",a);
//	a -= 6; //��Ϊ a=a-6�����ิ�ϸ�ֵ������ͬ��
//	printf("%d\n", a);
//	return 0;
//}
int main()
{
	//C�����У�0��ʾ�٣���0�����档����������������͵����֡�
	float a = 3.9;
	printf("%d\n", !a);
	int b = 0;
	printf("%d\n", !b);
	printf("%d\n", sizeof(int)); //sizeof��һ�������������ڼ������ͻ�����Ĵ�С���������ʱ�����ſ��п��ޣ���һ�㶼��д���š�
	printf("%d\n", sizeof a);
	int arr[10] = { 0 };  //�������������ÿ��Ԫ�ض�Ϊ0,ÿ��int���ʹ�С4���ֽڣ������С10*4=40
	printf("%d\n", sizeof(arr));
	int ne = sizeof(arr) / sizeof(arr[0]); //���������Ԫ�ظ�����
	printf("%d\n", ne);
	char as = 'a';
	printf("%d\n", sizeof(as));

	return 0;
} 
