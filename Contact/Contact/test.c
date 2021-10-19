#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include"contact.h"
//test.c   测试
//contact.c  实现函数的功能
//contact.h  声明函数


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
	//创建通讯录
	int size = 0;     //记录已经录入的成员数
	struct Contact con;  //con 就是通讯录，里面包含：data指针和size和capacity
	//初始化通信录
	InitContact(&con);  
	do
	{
	
		menu();
		printf("请选择功能:>");
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
			printf("退出通讯录\n");
		default:
			printf("选择错误：)\n");
			break;
		}

	}while(input);
	return 0;
}