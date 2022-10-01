#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>

//�������ж�һ�����Ƿ�Ϊ����
int judg_fig(int x)
{
	int i = 0;
	for (i = 2; i <= sqrt(x); i++)
	{
		if (x % i == 0)
		{
			return 0;
		}
	}
	if (i > sqrt(x))
		return x;
}


//�������ж�ĳһ���Ƿ�Ϊ����
int judg_yr(int y)
{
	if ((y % 4 == 0) && (y % 100 != 0))
		return y;
	if (y % 400 == 0)
		return y;
	return 0;
}


//������������������Ķ��ֲ���
int fnd_nm(int num, int arr[],int sz1)
{
	int left = 0;
	int right = sz1 - 1;  //�����˼�1����Ϊ�����Ǵ��±�0��ʼ
	int mid = 0;
	while(left<=right)
	{
		mid = (left + right) / 2;
		if (num < arr[mid])
		{
			right = mid - 1;
		}
		else if(num>arr[mid])
		{
			left = mid + 1;
		}
		else
		{
			return mid;
		}
	}
	if (left > right)
		return -1;
}


//������numֵ��1
void plus(int* x)
{
	++*x; //ǰ�üӼӣ��ȼӼӣ���ִ��
}


int main()
{
	//int m = 6;
	//printf("%d ", judg_fig(m));

	//int m = 1508;
	//printf("%d������", judg_yr(m));

	int m = 18;
	int team[] = {0,1,3,5,6,8,10,11,15,16,18};
	int sz = sizeof(team) / sizeof(team[0]);  //����ļ��㵱ǰ���ܷŵ����������У���Ϊ����ȥ����ָ�� ������
	int ret = fnd_nm(m, team, sz);
	if (ret == -1)
		printf("�Ҳ���");
	else
		printf("%d ���±��ǣ�%d\n", m, ret);

	//int m = 0;
	//while (m < 10)
	//{
	//	plus(&m);
	//	printf("%d ",m);
	//}
	return 0;
}