#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	//char arr[] = { 1,2,3 };
	//printf("%s", arr);
	//char arr[10] = { '\0' };
	//int i = 0;
	//for (i = 0; i < 10; i++)
	//{
	//	printf("%p\n", &arr[i]);
	//}
	//int arr[][4] = { {1,2},{3,4},{5,6} }; //дԪ�ظ���ʱ���п�ʡ���в���ʡ��
	//int* p = &arr[0][0]; //arr[][]�ҵ����Ƕ�Ӧ��Ԫ�أ�ע��Ҫ����ȡ��ַ֮���ٸ���ָ�������
	//int i = 0;
	//for (i = 0; i < 12; i++)
	//{
	//	printf("%d ", *p);
	//	p++;
	//}
	int arr[] = { 10,9,8,7,6,5,4,3,2,1 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	void bubble_rank(int*,int);
	bubble_rank(arr,sz);
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}

//ð��������

void bubble_rank(int* pa,int sz)
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		//һ��ð���������
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (pa[j] > pa[j + 1])
			{
				int temp = pa[j + 1];
				pa[j + 1] = pa[j];
				pa[j] = temp;
			}
		}
	}
}