#define _CRT_SECURE_NO_WARNINGS 1
#define Width 9
#define Length 9
#define EASY_MINE 10
#include <stdio.h>
#include <time.h>
#include <stdlib.h>


#define Widths Width+2
#define Lengths Length+2
	
void InitBoard(char board[Widths][Lengths],int widths,int lengths,char set);
void DisplayBoard(char board[Widths][Lengths],int width,int length);
void SetMine(char board[Widths][Lengths],int width,int length);
void FindMine(char mine[Widths][Lengths],char show[Widths][Lengths],int width,int length);
