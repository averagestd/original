#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int get_max(int x,int y)
//{
//	return(x > y ? x : y); //expres1 ? expres2 : expres3  //��Ŀ�����������ʽ1��������ʽ2���㲢���ر��ʽ2 �Ľ������������Ľ��Ϊ���ʽ2 �Ľ�������ʽ1 ��������ִ�б��ʽ3��Ч��ͬ�ϡ�
//}


//exch()�ڱ����õ�ʱ��ʵ�δ�ֵ���βΣ���ʵ�β���ʵ�ε�һ����ʱ�������ı��βΣ����ܸı�ʵ�Ρ�

//void exch(int x,int y)  //����ֵΪvoid��Ϊ���ؿգ�ִֻ�У�������ֵ
//{
//	int m = 0;
//	m = x;
//	x = y;
//	y = m;  //��д��������returnֻ�ܷ���һ��ֵ��xy��ab����ȫ��ͬ������ռ䣬exch�����ڲ���main�����ڲ���û��ֱ�ӵ���ϵ��Ҫ����ab��Ҫ��ָ��������
//}

void exch(int* x, int* y)
{
	int m = *x;
	*x = *y;
	*y = m;
}

int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	//printf("max=%d\n", get_max(a, b));
	printf("����ǰ��a = %d b = %d\n", a, b);
	exch(&a, &b); //����ַ
	//exch(a, b); //�˴�ֻ�Ǵ�ֵ������exch������Ὺ���¿ռ䣬���û�к�������ֵ��ab�����ᱻӰ�졣
	printf("������a = %d b = %d\n", a, b);
	return 0;
}