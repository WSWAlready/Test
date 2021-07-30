#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include "game.h"
void InitBoard(char board[Widths][Lengths],int widths,int lengths,char set)
{
	int i = 0;
	int j = 0;
	for(i = 0;i < widths;i++ )
	{
		for(j = 0;j < lengths;j++)
		{
			board[i][j] = set;
		}
	}
}

void DisplayBoard(char board[Widths][Lengths],int width,int length)
{
	int i = 0;
	int j = 0;
	for(i = 0;i<=length;i++)
	{
		printf("%d ",i);
	}
	printf("\n");

	for(i = 1;i<=width;i++)
	{
		printf("%d ",i);
		for(j = 1;j <= length;j++)
		{ 
			
			printf("%c ",board[i][j]);
		}
		printf("\n");
	}
}

void SetMine(char board[Widths][Lengths],int width,int length)
{
	int count = EASY_MINE;
	//使用while循环
	while(count)
	{
		int x = rand() %width + 1;
		int y = rand() %length + 1;
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			count--;
		}
	}
}

void  bloom_mine(char mine[Widths][Lengths],char show[Widths][Lengths],int x, int y)
{
	
	int count = get_Mine_count(mine ,x ,y);
	if(count == 0)
	{
		show[x][y] = '0';
		if ((x-1)>0&&(y-1)>0&&(show[x-1][y-1]=='*'))
			bloom_mine(mine,show,x-1,y - 1);
		if ((x-1)>0&&(y)>0&&(show[x-1][y]=='*'))
			bloom_mine(mine,show,x-1,y);
		if ((x-1)>0&&(y+1)>0&&(show[x-1][y+1]=='*'))
			bloom_mine(mine,show,x-1,y+1);
		if ((x)>0&&(y-1)>0&&(show[x][y-1]=='*'))
			bloom_mine(mine,show,x,y-1);
		if ((x)>0&&(y+1)>0&&(show[x][y+1]=='*'))
			bloom_mine(mine,show,x,y+1);
		if ((x+1)>0&&(y-1)>0&&(show[x+1][y-1]=='*'))
			bloom_mine(mine,show,x+1,y-1);
		if ((x+1)>0&&(y)>0&&(show[x+1][y]=='*'))
			bloom_mine(mine,show,x+1,y);
		if ((x+1)>0&&(y+1)>0&&(show[x+1][y+1]=='*'))
			bloom_mine(mine,show,x+1,y+1);
	}
	else
		
		show[x][y]= count +'0';
}
int  get_Mine_count(char mine[Widths][Lengths],int x, int y)
{
	return mine[x - 1][y] +mine[x - 1][y - 1]+
	mine[x][y - 1] +mine[x + 1][y - 1]+
	mine[x + 1][y] +mine[x + 1][y + 1]+
	mine[x - 1][y + 1] +mine[x][y + 1] - 8*'0';
}
void FindMine(char mine[Widths][Lengths],char show[Widths][Lengths],int width,int length)
{
	int x = 0;
	int y = 0;
	int win = 0;
	int ret = 0;
	//int remain_mine = width*length - EASY_MINE;
	while(win < width*length - EASY_MINE)
	{
		//printf("现在还剩下 %d 个正确位置，加油哦\n",remain_mine);
		printf("请输入排查雷的坐标：");
		scanf("%d%d",&y,&x);//为什么用，y和x呢而不是用x和y呢，是因为我的行号和列号，不小心让我弄混了，我刚开始以为宽度是行，长度是列。
		//直到我进行调试的时候，才知道我的坐标写反了，哈哈哈哈哈哈哈哈哈哈哈。学艺不精啊
		if(x >= 1 && x<= width && y>=1 && y <= length)
		{
			if(mine[x][y] == '1')
			{
				printf("这里有雷\n");
				DisplayBoard(mine,width,length);
				break;
			}
			else
			{
				win++;
				bloom_mine(mine,show,x,y);
				DisplayBoard(show,width,length);
				//DisplayBoard(mine,Width,Length);
				//ret = EASY_MINE - 1; 
				/*if(win == ret )
				{
					break;
				}*/
				//remain_mine--;
			}
		}
		else
		{
			printf("输入坐标非法，请重复输入\n");
		}
	}
	if(win ==  width*length - EASY_MINE) 
	{
		printf("恭喜你，成功通关\n");
	}
}
