#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//������̨��  //δ���
int jump_times(int n)
{
	if (n > 2)
	{
		return jump_times(n - 1) + jump_times(n - 2);
	}
	else
		return n;
}

//��ҵ���ַ�������  //δ���
int my_strlen(char* a)
{
	int count = 0;
	while (*a != '\0')
	{
		count++;
		a++;
	}
	return count;
}

////ѭ��д��
//
//void reverse_string(char* string)
//{
//	int left = 0;
//	int right = my_strlen(string)-1;
//	while (left<right)
//	{
//		char temp = string[left];
//		string[left] = string[right];
//		string[right] = temp;
//		left++;
//		right--;
//	}
//}

//�ݹ�д��

void reverse_string(char* str)
{
	char mid = *str;
	int sz = my_strlen(str)-1;
	*str = str[sz];
	str[sz] = '\0';
	if (sz > 2)
	{
		reverse_string(str + 1);
	}
	str[sz] = mid;
}

//��ҵ������һ������ÿλ֮��

int sum_v(int x)
{
	if (x > 9)
	{
		return x % 10 + sum_v(x / 10);
	}
	return x;
}

//��ҵ������n��k�η�

double nk(int n,int k)
{
	if (k > 0)
	{
		return n * nk(n, k - 1);
	}
	else if (k == 0)
	{
		return 1.0;
	}
	else
	{
		return 1.0 / nk(n, -k);  //ָ��Ϊ�������
	}
}

//쳲���������

int Feib(int n)
{
	if (n > 2)
	{
		return Feib(n - 1) + Feib(n - 2);
	}
	else
	{
		return 1;
	}
}

int main()
{
	char arr[] = "abcdefghijk";
	int a = 0;
	int k = 0;
	scanf("%d%d",&a,&k);

	//printf("the means of jump: %d\n", jump_times(a));
	//printf("%d ", sum_v(a));
	printf("%lf ", nk(a,k));
	//printf("��%d��쳲�������Ϊ��%d\n",a, Feib(a));
	//reverse_string(arr);
	//printf("%s", arr);
	return 0;
} 