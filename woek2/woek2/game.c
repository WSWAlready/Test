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