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
	//ʹ��whileѭ��
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
		//printf("���ڻ�ʣ�� %d ����ȷλ�ã�����Ŷ\n",remain_mine);
		printf("�������Ų��׵����꣺");
		scanf("%d%d",&y,&x);//Ϊʲô�ã�y��x�ض�������x��y�أ�����Ϊ�ҵ��кź��кţ���С������Ū���ˣ��Ҹտ�ʼ��Ϊ������У��������С�
		//ֱ���ҽ��е��Ե�ʱ�򣬲�֪���ҵ�����д���ˣ�������������������������ѧ�ղ�����
		if(x >= 1 && x<= width && y>=1 && y <= length)
		{
			if(mine[x][y] == '1')
			{
				printf("��������\n");
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
			printf("��������Ƿ������ظ�����\n");
		}
	}
	if(win ==  width*length - EASY_MINE) 
	{
		printf("��ϲ�㣬�ɹ�ͨ��\n");
	}
}
