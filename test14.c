#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	////variation one
//	//// �жϲ���ʡ�� - �жϲ��ֺ�Ϊ��
//	//int i = 0;
//	//for (i = 1; ;i++)
//	//{
//	//	printf("%d ", i);
//	//}
//
//	//variation two
//	//�����ж��Ԫ�ء��˴���������ǰ����++
//	int x, y;
//	for (x = 0, y = 0; x < 2 && y < 5; ++x, y++)
//	{
//		printf("666\n");
//	}
//	return 0;
//}


////�״���
////����ѭ�����ٴ�
//int main()
//{
//	int i, k;
//	for (i = 0, k = 0; k = 0; i++, k++) //�˴����жϲ�����һ���Ⱥţ��Ǹ�ֵ���ʽ���жϲ��ְ�0��ֵ��k���˱��ʽ�Ľ������0��0Ϊ�٣�����һ��Ҳû��ѭ����
//	{
//		k++;
//	}
//	return 0;
//}


// do...while() ѭ��  //��ִ�У����ж�
//int main()
//{
//	int a = 1;
//	int i = 1;
//	do
//	{
//		printf("%d ", a);
//		a++;
//	} while (a<=10); //ע��˴���while ���������Աߡ�
//
//
//	// //�ڶ���д��
//	//do
//	//	printf("%d ",i++);
//	//while (i <= 10);
//	return 0;
//}


////��ϰ������n�Ľ׳�
//int main()
//{
//	int or;
//	int i = 1;
//	int re = 1;
//	scanf("%d", &or );
//	while (i<=or)
//	{
//		re *= i;
//		i++;
//	}
//	printf("%d �Ľ׳�Ϊ:%d\n",or,re);
//	return 0;
//}


//////��ϰ������1!+2!+3!+......+10!
//int main()
//{
//	int or1;
//	int i1 = 1, i2 = 1, sum = 0;
//	int re = 1;
//	scanf("%d", &or1 );
//	while (i1 <= or1)
//	{
//		re = 1;
//		for (i2=1;i2 <= i1;i2++)
//		{
//			re *= i2;
//		}
//		sum += re;
//		i1++;
//	}
//	printf("%d�ĸ����׳˵��ۼ�ֵ:\n%d", or1, sum);
//	return 0;
//}


//
////����Ľ�����
//int main()
//{
//	int i = 0;
//	int n = 1;
//	int sum = 0;
//	for (i = 1;n <= 3; n++)
//	{
//		i *= n;
//		sum += i;
//	}
//	printf("%d", sum);
//	return 0;
//}


////��ϰ����һ�����������в��Ҿ����ĳ������x
//ʹ�ö��ֲ��ҷ�
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 10; //Ҫ���ҵ����֣��ҵ����Ӧ���±꣩
	int sz = sizeof(arr) / sizeof(arr[0]); //ȷ��Ԫ�ظ���
	int right = sz - 1;
	int left = 0;
	while (left<=right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else
		{
			printf("���ҵ�Ԫ�ص��±�: %d\n", mid);
			break;
		}
	}
	if (left > right)
		printf("Ԫ�ز����ڣ�\n");
}
