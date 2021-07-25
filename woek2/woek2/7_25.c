//实现扫雷程序；现在掌握的不是很好，跟老师做的
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
	int input = 0;//玩家选择项：选择1是再玩一局，0是退出游戏，其他值显示  您输入的有错请在次输入；
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