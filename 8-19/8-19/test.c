#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int Add(int x,int y)
//{
//	return x + y;
//}
//
//int Sub(int x,int y)
//{
//	return x - y;
//}
//int Mul(int x,int y)
//{
//
//	return x * y;
//}
//int Div(int x,int y)
//{
//	
//	return x / y;
//}
//void menu()
//{
//	printf("**************************\n");
//	printf("***1.Add  ****  2.Mul  ***\n");
//	printf("*******  0.exit  *******\n");
//	printf("***3.Sub  ****  4.Div  ***\n");
//	printf("**************************\n");
//}
//int main()
//{
//	int x = 0;
//	int y = 0;
//	int input = 0;
//	int ret = 0;
//	int (*pff[5])(int,int) = {0, Add, Mul, Sub, Div};
//	do
//	{
//		menu();
//		printf("��ѡ��");
//		scanf("%d",&input);
//		if(input >= 1 && input <= 4)
//		{		
//			printf("��������������");
//			scanf("%d%d",&x,&y);
//			ret = pff[input](x,y);
//			printf("%d\n",ret);
//		}
//		else if(0 == input)
//		{
//			printf("�˳�\n");
//		}
//		else
//		{
//			printf("ѡ�����\n");
//		}
//	}while(input);
//	return 0;
//}
// int Add(int x,int y)
//{
//	return x + y;
//}
//
//int Sub(int x,int y)
//{
//	return x - y;
//}
//int Mul(int x,int y)
//{
//
//	return x * y;
//}
//int Div(int x,int y)
//{
//	
//	return x / y;
//}
//void CLLE( int (*pf)(int,int))
//{
//	int x = 0;
//	int y = 0;
//	printf("��������������");
//	scanf("%d%d",&x,&y);
//	printf("%d\n",pf(x,y));
//
//}
//void menu()
//{
//	printf("**************************\n");
//	printf("***1.Add  ****  2.Mul  ***\n");
//	printf("*******  0.exit  *******\n");
//	printf("***3.Sub  ****  4.Div  ***\n");
//	printf("**************************\n");
//}
//int main()
//{
//	int input = 0;
//	do
//	{
//		menu();
//		printf("��ѡ��");
//		scanf("%d",&input);
//		switch(input)
//		{
//			case 1:
//				
//				CLLE(Add);
//				break;
//			case 2:
//				CLLE(Mul);
//				break;
//			case 3:
//				CLLE(Sub);
//				break;
//			case 4:
//				CLLE(Div);
//				break;
//			default:
//				printf("ѡ����������ѡ��\n");
//				break;
//		}
//	}while(input);
//	return 0;
//}
int main()
{
	int arr[10] = { 0 };
	int (*p)[10] = &arr;
	
	int (*pfarr[4])(int,int) = { 0 };
	int (*(*ppfarr)[4])(int,int) = &pfarr;//(*ppfarr)[4]������ָ�룬
	//ָ��ָ�������ں���4��Ԫ�أ�������ÿ��Ԫ�ص������Ǻ���ָ��

}
