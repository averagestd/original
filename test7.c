#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	int a = 5 / 2;
//	printf("%d\n", a); //结果为2，得到的是商，不会有小数
//	float b = 5 / 2;
//	printf("%f\n", b);  //结果仍然为整型2，因为除号"/"的两边如果都是整型的话，只能输出结果为整型。
//	float c = 5.0 / 2;  //想要输出浮点数，只需在其中一个数上加上小数点即可。
//	printf("%f\n", c);  //输出2.5
//	int m = 5 % 2;  //"%"为取余运算
//	printf("%d\n", m);
//	return 0;
//}
//int main()
//{
//	int a = 2;
//	int b = a << 1;  //"<<"为移位操作符。表示32个比特位整体向左移一个比特位，新增补0，超出删除。
//	printf("%d\n", b);  //输出2的2次方为4
//	return 0;
//}
//int main()
//{
//	int a = 2;
//	a += 5;  //"+="为复合赋值操作符，意为 a=a+5
//	printf("%d\n",a);
//	a -= 6; //意为 a=a-6，其余复合赋值操作符同理
//	printf("%d\n", a);
//	return 0;
//}
int main()
{
	//C语言中，0表示假，非0就是真。非零可以是任意类型的数字。
	float a = 3.9;
	printf("%d\n", !a);
	int b = 0;
	printf("%d\n", !b);
	printf("%d\n", sizeof(int)); //sizeof是一个操作符，用于计算类型或变量的大小，计算变量时，括号可有可无，但一般都会写括号。
	printf("%d\n", sizeof a);
	int arr[10] = { 0 };  //定义数组里面的每个元素都为0,每个int类型大小4个字节，数组大小10*4=40
	printf("%d\n", sizeof(arr));
	int ne = sizeof(arr) / sizeof(arr[0]); //计算数组的元素个数。
	printf("%d\n", ne);
	char as = 'a';
	printf("%d\n", sizeof(as));

	return 0;
} 
