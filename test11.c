#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//struct Stu
//{
//	char name[20];
//	int age;
//	double score;
//};
//int main()
//{
//	struct Stu s = { "����",18,99.9 };//�ṹ��Ĵ����ͳ�ʼ��
//	printf("1: %s %d %lf\n",s.name,s.age,s.score);//�ṹ�����.��Ա����
//	struct Stu* ps = &s;  //�����ṹ���ָ�����ps
//	printf("2: %s %d %lf\n",(*ps).name,(*ps).age,(*ps).score);
//	printf("3: %s %d %lf\n", ps->name, ps->age, ps->score);//�ṹ��ָ��->��Ա������
//	//int a = 10;
//	//int arr[a] = { 0 };  //�����Ԫ�ظ��������ǳ���ֵ
//	return 0;
//}


////��ϰ
//int max(int x,int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int m = 0;
//	scanf("%d %d", &num1, &num2);  //ע�����&(ȡ��ַ)��ʹ��
//	m=max(num1, num2); 
//	printf("maximum:%d\n", m);
//	return 0;
//}


//int sum(int x)
//{
//	int c = 0;
//	static int b = 3;  //static �ؼ������εı�����ѭ���в��ᱻ����
//	c += 1;  //"+="��c=c+1
//	b += 2;
//	return(x + b + c);
//}
//int main()
//{
//	int i = 0;
//	int a = 2;
//	for (i = 0; i < 5; i++)
//		printf("%d\n",sum(a));
//}

 
int main()
{
	int a = 0;
	printf("please input a figure:");
	scanf("%d", &a);
	if (a % 5 == 0) //ע�������"=="����ֵ��"="
		printf("YES");
	else
		printf("NO");
	return 0;
}