#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//计算补码中1的个数
//n = n&(n-1);
//1111 - n
//1110 - n-1
//1110 - n = n&(n-1)
//1101 - n-1
//1100 - n = n&(n-1)
//1011 - n-1
//1000 - n = n&(n-1)
//0111 - n-1
//0000
//int Counter(int n )
//{
//	int count = 0;
//	while(n)
//	{
//		n = n & (n-1);
//		count++;
//	}
//	return count;
//	
//}
//int main()
//{
//	int i = 0;
//	int count = 0;
//	printf("请输入一个数：");
//	scanf("%d",&i);
//	count = Counter(i);
//	printf("%d\n",count);
//	return 0;
//}


//比较两个数的二进制 位数不同
//int Counter(int m)
//{
//	int c = 0;
//	int counts = 0;
//	for(c = 0;c < 32 ;c++)
//	{
//		if(((m >> c)&1) == 1)
//		{
//			counts++;
//		}
//	}
//	return counts;
//}
//int Diff(int i, int n)
//{
//	int tmp = i ^ n;
//	return Counter(tmp);
//
//}
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int count = 0;
//	printf("请输入两个数");
//	scanf("%d%d",&i,&n);
//	count = Diff(i,n);
//	printf("%d\n",count);
//	return 0 ;
//}
//一个数的二进制的奇数位和偶数位分别打印
//假如一个数为01111010011110100111101001111010
//打印偶数位就可以将偶数位向右移动1 3 5  ......31&1；
//打印奇数位就可以将奇数位向右移动2 4 6  ......30&1；

//
//void Print(int n)
//{
//	int m = 0;
//	printf("这是奇数位");
//	for(m = 30;m >= 0;m-=2)
//	{
//		printf("%d ",(n >> m)&1);
//	}
//	printf("\n");
//	printf("这是偶数位");
//	for(m = 31;m >= 1;m-=2)
//	{
//		printf("%d ",(n >> m)&1);
//	}
//	printf("\n");
//}
//int main()
//{
//	int i = 0;
//	printf("请输入一个数：");
//	scanf("%d",&i);
//	Print(i);
//	return 0;
//}
//打印九九乘法表

void Print(int i)
{
	int n = 0;
	
	for(n = 1;n <= i;n++)
	{
		int m = 0;
		for(m = 1;m <= n;m++)
		{
			printf("%d*%d = %-3d ",n,m,n*m);
		}
		printf("\n");
	}


}
int main()
{
	int i = 0;
	printf("请输入想打印几*几的乘法表：");
	scanf("%d",&i);
	Print(i);
	return 0;
}