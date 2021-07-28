#define _CRT_SECURE_NO_WARNINGS 1
#define Width 9
#define Length 9

#define Widths Width+2
#define Lengths Length+2
	
void InitBoard(char board[Widths][Lengths],int widths,int lengths,char set);
void DisplayBoard(char board[Widths][Lengths],int width,int length);