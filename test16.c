#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>  //����strlen(), strcmp()�Ⱥ���
#include <stdlib.h>  //standard library ��׼��
#include <time.h>

////��ϰ�������б�
//int main()
//{
//	char arr_origin[] = "1314djj!";
//	char arr[20] = {0};//ע��������������Ĵ�С����Ȼ�ᱨ��
//	int i = 0;
//	do
//	{
//		//if (arr == arr_origin) //err -  �����ַ����ıȽϣ�����ʹ��==��Ӧ��ʹ��strcmp()�����������ַ�����ͬ�򷵻�0��strcmpΪstring compare ����д��
//		printf("���������룺\n");
//		scanf("%s", arr);//����������Ҫȡ��ַ����Ϊ�䱾����ǵ�ַ
//		if (strcmp(arr, arr_origin) == 0)
//		{
//			printf("��¼�ɹ���");
//			break;
//		}
//		else
//			printf("�������\n");
//			i++;
//	} while (i<3);
//	if (i == 3)
//		printf("three times password input were false, program ceased. ");
//	return 0;
//}


//��ϰ
//дһ����������Ϸ

void menu()
{
	printf("******************************************\n");//ע����ӡ֮�󲢲����Զ����У�ע�����"\n"
	printf("******************************************\n");
	printf("**************  1.��ʼ��Ϸ  **************\n");
	printf("**************  0.�뿪��Ϸ  **************\n");
	printf("******************************************\n");
	printf("******************************************\n");

}


void game()
{
	int random = rand() % 100 + 1; // %100��������0 - 99��+1֮��ķ�Χ����1 - 100
	int fig = 0;

	while (1)
	{
		printf("guess:\n");
		scanf("%d", &fig);
		if (fig == random)
		{
			printf("congratulations\n");
			break;
		}
		else if (fig < random)
		{
			printf("sorry, less than this\n");
		}
		else
		{
			printf("sorry, greater than this\n");
		}
	}
	//} while (alter == 'Y');//err -  // "=="��ʱֻ���������ֵ��ж�
}



int main()
{
	srand((unsigned int)time(NULL)); //���ӵ�����Ҫ��ѭ��֮�⣬��ѭ��֮�ڻᵼ��rand()���صĽ�����������
	int a = 0;
	do
	{
		menu();
		printf("��ѡ��:>\n");
		scanf("%d", &a);
		switch (a)
		{
		case 1:
			game();
			break;
		case 0:
			printf("��Ϸ���˳�\n");
			break;
		default:
			printf("�����������������\n");
			break;
		}
	} while (a);
	return 0;
}