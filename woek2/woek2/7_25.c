//ʵ��ɨ�׳����������յĲ��Ǻܺã�����ʦ����
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


void menu()
{
	printf("********************\n");
	printf("***1.play  0.exit***\n");
	printf("********************\n");
}

void game()
{
	
}

void test()
{
	int input = 0;//���ѡ���ѡ��1������һ�֣�0���˳���Ϸ������ֵ��ʾ  ��������д����ڴ����룻
	do
	{
		menu();//�˵�
		printf("��ѡ��(0/1): \n");
		scanf("%d",&input);
		switch(input)
		{
		case 0:
			printf("�˳���Ϸ\n");
			break;
		case 1:
			printf("��ʼ��Ϸ\n");
			game();
			break;
		default:
			printf("�������д�����������");
		}
	}while(input);//ʹ��do while ���ʹ����Ϸ�������ʱ���һЩ
}
int main()
{
	test();
	return 0;
}