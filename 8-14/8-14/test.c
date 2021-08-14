#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	int n = 0;
//	float *pFloat = (float *)&n;
//	printf("%d\n",n);
//	printf("*pFloat %f\n",*pFloat);
//
//	*pFloat = 9.0;
//	//二进制浮点数可以表示为
//	//(-1)^S*M*2^E
//	//(-1)^S表示符号位，当s=0，V为正数；当s=1,V为负数
//	//M表示有效数字，大于等于1，小于2；
//	//2^E表示指数位
//	//9.0 ——> 1001.0 ——> 1.001*2^3,则其中的s=0，M=1.001，E=3；但是再存储中M前面的1都是省略的
//	//
//	printf("%d\n",n);	//
//	printf("*pFloat %f\n",*pFloat);
//
//	return 0;
//}
//int main()
//{
//	
//	float F = 5.5;
//	//101.1
//	//S = 0；
//	//M = 1.011
//	//E = 2
//	//E ：2 + 127 = 129
//	//0 10000001 01100000000000000000000
//	//S	   E				M
//	return 0;
//}