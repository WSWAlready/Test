#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>

//ˮ�ɻ���
//int main()
//{
//	int i = 0;
//	for(i = 0;i <= 100000;i++)
//	{
//		//�ж�i�Ƿ���ˮ�ɻ���
//		//����i��λ��  nλ��
//		int n = 1;
//		int tmp = i;
//		int sum = 0;
//		while(tmp / 10)
//		{
//			n++;
//			tmp /= 10;
//		}
//		tmp = i;
//		while(tmp)
//		{
//			sum += pow(tmp % 10,n);
//			tmp /= 10;
//		}
//		if(i == sum)
//		{
//			printf("%d\n",i);
//		}
//		//123/10 
//		//����i��ÿһλ��n�η�֮��
//		//
//	}
//	return 0;
//}

//       *
//      ***
//     *****
//    *******
//   *********
//  ***********
// *************
//  ***********
//   *********
//    *******
//     *****
//      ***
//       *

int main()
{
	
	int line = 0;
	scanf("%d",&line);
	int i = 0;
	
	for(i = 0;i < line ; i++)
	{
		//��ӡ�ո�
		int j = 0;
		for(j = 0;j < line-1-i;j++)
		{
			printf(" ");
		}
		for(j = 0;j < 2*i+1;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	for(i = 0;i < line ; i++)
	{
		//��ӡ�ո�
		int j = 0;
		for(j = 0;j <= i;j++)
		{
			printf(" ");
		}
		for(j = 0;j < 2*(line-1-i) - 1;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}