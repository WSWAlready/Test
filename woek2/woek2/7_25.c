//ʵ��ɨ�׳����������յĲ��Ǻܺã�����ʦ����
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include "game.h"

void menu()
{
	printf("********************\n");
	printf("***1.play  0.exit***\n");
	printf("********************\n"); 
}

void game()
{
	//���ú��׵���Ϣ
	char mine[Widths][Lengths] = { 0 };//11*11������
	//�Ų��׵���Ϣ
	char show[Widths][Lengths] = { 0 }; 
	//��ʼ������ 
	InitBoard(mine,Widths ,Lengths,'0');//д����ʼ�����̺��������ݷ������ͽ��г�ʼ��
	InitBoard(show,Widths ,Lengths,'*');
	//��ӡ����
	DisplayBoard(show,Width,Length);
	
	//������
	SetMine(mine,Width,Length);
	//DisplayBoard(mine,Width,Length);
	//ɨ��
	FindMine(mine,show,Width,Length);

}

void test()
{
	int input = 0;//���ѡ���ѡ��1������һ�֣�0���˳���Ϸ������ֵ��ʾ  ��������д����ڴ����룻
	srand((unsigned int)time(NULL));
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