#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include"contact.h"
//test.c   ����
//contact.c  ʵ�ֺ����Ĺ���
//contact.h  ��������


void menu()
{
	printf("**************************************\n");
	printf("*******1. add         2.del    *******\n");
	printf("*******3. search      4.modify *******\n");
	printf("*******5. show        6. sort  *******\n");
	printf("*******0. exit                  ******\n");
	printf("**************************************\n");


}
int main()
{
	int input = 0;
	//����ͨѶ¼
	int size = 0;     //��¼�Ѿ�¼��ĳ�Ա��
	struct Contact con;  //con ����ͨѶ¼�����������dataָ���size��capacity
	//��ʼ��ͨ��¼
	InitContact(&con);  
	do
	{
	
		menu();
		printf("��ѡ����:>");
		scanf("%d",&input);
		switch (input)
		{
		case ADD:
			ADDContact(&con);
			break;
		case DEL:  
			DelContact(&con);
			break;
		case SEARCH:
			SearchContact(&con);
			break;
		case MODIFY:
			ModifyContact(&con);
			break;	
		case SHOW:
			ShowContact(&con);
			break;
		case SORT:
			SortContact(&con);
			ShowContact(&con);
			break;
		case EXIT:
			DestroyContact(&con);
			printf("�˳�ͨѶ¼\n");
		default:
			printf("ѡ�����)\n");
			break;
		}

	}while(input);
	return 0;
}