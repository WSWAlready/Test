#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//���㲹����1�ĸ���
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
//	printf("������һ������");
//	scanf("%d",&i);
//	count = Counter(i);
//	printf("%d\n",count);
//	return 0;
//}


//�Ƚ��������Ķ����� λ����ͬ
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
//	printf("������������");
//	scanf("%d%d",&i,&n);
//	count = Diff(i,n);
//	printf("%d\n",count);
//	return 0 ;
//}
//һ�����Ķ����Ƶ�����λ��ż��λ�ֱ��ӡ
//����һ����Ϊ01111010011110100111101001111010
//��ӡż��λ�Ϳ��Խ�ż��λ�����ƶ�1 3 5  ......31&1��
//��ӡ����λ�Ϳ��Խ�����λ�����ƶ�2 4 6  ......30&1��

//
//void Print(int n)
//{
//	int m = 0;
//	printf("��������λ");
//	for(m = 30;m >= 0;m-=2)
//	{
//		printf("%d ",(n >> m)&1);
//	}
//	printf("\n");
//	printf("����ż��λ");
//	for(m = 31;m >= 1;m-=2)
//	{
//		printf("%d ",(n >> m)&1);
//	}
//	printf("\n");
//}
//int main()
//{
//	int i = 0;
//	printf("������һ������");
//	scanf("%d",&i);
//	Print(i);
//	return 0;
//}
//��ӡ�žų˷���

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
	printf("���������ӡ��*���ĳ˷���");
	scanf("%d",&i);
	Print(i);
	return 0;
}