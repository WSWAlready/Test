//实现扫雷程序；现在掌握的不是很好，跟老师做的
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
	//布置好雷的信息
	char mine[Widths][Lengths] = { 0 };//11*11的棋盘
	//排查雷的信息
	char show[Widths][Lengths] = { 0 }; 
	//初始化函数 
	InitBoard(mine,Widths ,Lengths,'0');//写出初始化棋盘函数，根据返回类型进行初始化
	InitBoard(show,Widths ,Lengths,'*');
	//打印棋盘
	DisplayBoard(show,Width,Length);
	
	//布置雷
	SetMine(mine,Width,Length);
	//DisplayBoard(mine,Width,Length);
	//扫雷
	FindMine(mine,show,Width,Length);

}

void test()
{
	int input = 0;//玩家选择项：选择1是再玩一局，0是退出游戏，其他值显示  您输入的有错请在次输入；
	srand((unsigned int)time(NULL));
	do
	{
		menu();//菜单
		printf("请选择(0/1): \n");
		scanf("%d",&input);
		switch(input)
		{
		case 0:
			printf("退出游戏\n");
			break;
		case 1:
			printf("开始游戏\n");
			game();
			break;
		default:
			printf("您输入有错，请重新输入");
		}
	}while(input);//使用do while 语句使得游戏可以玩的时间久一些
}
int main()
{
	test();
	return 0;
}