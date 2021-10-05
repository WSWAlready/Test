#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//
//int is_left(char* str1,char* str2)
//{
//	
//	
//	//再str1字符串中追加一个str1字符串得到  abcdefabcdef
//	//strcat字符串追加函数,但是自己追加自己的时候不能使用strcat函数
//	strncat(str1,str1,6);
//	char* ret = strstr(str1,str2);
//	//判断str2指向的字符串是否是str1指向的字符串的子串
//	
//	//strstr-找子串
//	if(ret == NULL)
//	{
//		return 0;
//	}
//	else
//	{
//		return 1;
//	}
//}
//int main()
//{
//	char arr1[30] = "abcdef";
//	char arr2[] = "cdefab";
//	int ret = is_left(arr1,arr2);
//
//	if(ret == 1)
//	{
//		printf("Yes\n");
//	}
//	else
//	{
//		printf("No\n");
//	}
//	return 0;
//}

//杨氏矩阵
//矩阵的每行是从左到右递增，每一列从上到下递增，查找某个数是否是矩阵内的数字


//int FindNum(int arr[3][3],int num, int row,int col)
//{
//	int x = 0;
//	int y = col - 1;
//	while(x<= row -1 && y>= row - 3)
//	{
//		if(arr[x][y] < num)
//		{
//			x++;
//		}
//		else if(arr[x][y] > num)
//		{
//				y--;
//		}
//		else
//		{
//			return 1;
//		}
//	}
//	return 0;
//}

int FindNum(int arr[3][3],int num, int* px,int* py)
{
	int x = 0;
	int y = *py - 1;
	while(x<= *px -1 && y>=*py - 3)
	{
		if(arr[x][y] < num)
		{
			x++;
		}
		else if(arr[x][y] > num)
		{
				y--;
		}
		else
		{
			*px = x;
			*py = y;
			return 1;
		}
	}
	return 0;
}
int main()
{
	int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
	int k = 6;
	int x = 3;
	int y = 3;
	int ret = FindNum(arr,k,&x,&y);
	if(ret == 1)
	{
		printf("找到了\n");
		printf("下标是 %d %d\n",x,y);

	}
	else
	{
		printf("找不到\n");
	}
	return 0;
}