#define  _CRT_SECURE_NO_WARNINGS 1  /*
nbplus
*/
#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = a && b; //ֻ�б���ͬʱΪ���������1������������0
//	printf("%d\n", c);
//	return 0;
//}
//int main()
//{
//	int a = 6;
//	int b = 1;
//	int max = 0;
//	max = a < b ? b : a; //ע����������������ص��ǽ�������Ը�������ֵ��
//	printf("%d\n", max);
//	int c = (b = a * 6, a = b + 8, max = a - 14); //�����������μ��㣬�������ű��ʽ�Ľ��Ϊ���һ�����ʽ�Ľ����
//	
//	printf("%d\n", c);
//	return 0;
//}
int main()
{
	int a = 0;
	printf("%d\n", ~a); //ԭ����������֪ʶ
	int b = 6;
	int fl = (int)3.14;  //ǿ������ת��
	int c = ++b;  //ǰ��"++"����++����ʹ�á�����"++"����ʹ�ã���++�� 
	printf("%d\n", b);//11
	printf("%d\n", fl);
	printf("%d\n", c);//11
	return 0;
}