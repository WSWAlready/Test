#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


//int main()
//{
//	int a = 10;
//	float f = 10.0;//类型开辟内存空间的大小，大小决定了使用范围
//	return 0;
//}

//整型：char（unsigned char（无符号的）signed char（有符号））（存的如果是ASCII值就是整数）
//		short（短整型）（unsigned short（int）	signed short（int））int可以省略可以不省略

//		long（长整型）（unsigned long（int）	signed long（int））int可以省略可以不省略

//		int（unsigned int	signed int
//浮点型：float（单精度浮点型）double（双精度浮点型）
//构造类型：
//1.数组类型
//2.结构体类型    struct
//3.枚举类型	enum
//4.联合类型	union
//指针类型：int*  char*  float*  void*
//int main()
//{
//	int a = 20;
//	int b = -10;
//	return 0;
//
//}
//原码：直接将数字对应的二进制正负数写出来
//10：00000000 00000000 00000000 00001010	原码
//	  00000000 00000000 00000000 00001010	反码
//	  00000000 00000000 00000000 00001010	补码
//-10：10000000 00000000 00000000 00001010	原码
//	   11111111 11111111 11111111 11110101	反码
//	   11111111 11111111 11111111 11110110	补码

//反码：除符号位其他位按位取反
//补码：反码+1
//整数的原反补是一样的
//对于整形来说数据存放内存中其实存放的是补码
//int main()
//{
//	int a = 1;
//	int b = -1;
//	int c= a + b;
//	//1：00000000 00000000 00000000 00000001
//	//	 00000000 00000000 00000000 00000001
//	//	 00000000 00000000 00000000 00000001
//	//-1：10000000 00000000 00000000 00000001
//	//    11111111 11111111 11111111 11111110
//	//    11111111111111111111111111111111111
//	//1	 00000000 00000000 00000000 00000001
//	//-1 11111111111111111111111111111111111
//	//0  00000000 00000000 00000000 00000000
//
//}
//大端：数据的低位保存在内存的高地址中，数据的高位 保存在内存的低地址

//小端：数据的低位保存在内存的低地址中，数据的高位 保存在内存的高地址
//判断字节序
//int main()
//{
//	int a = 1;
//	//假设字节序为：0x00 00 00 01
//	//大端存储：00 00 00 01
//	//小端存储：01 00 00 00
//	//查看十六进制的第一个字节，如果是01就是小端；
//	char* p =(char*) &a;//这里取地址是去的第一个字节的地址，如果第一个地址解引用之后是1的话就是小端存储
//	if(*p = 1)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//		
//	}
//	return 0;
//}
//void check_sys(int a)
//{
//	char *p = (char *) &a;
//	if(*p = 1)
//	{
//		printf("小端\n");
//	}
//	else
//	{
//		printf("大端\n");
//	}
//}
//int main()
//{
//	int a = 0;
//	printf("请输入一个数：");
//	scanf("%d",&a);
//	check_sys(a);
//}
//int main()
//{
//	char a = -1;
//	//数据存储的是补码，他的补码是11111111 11111111 11111111 11111111
//	//char是占一个字节所以就是11111111
//	//之后进行整型提升，补的是符号位11111111 11111111 11111111 11111111 
//	//所以还是-1；
//	signed char b = -1;
//	unsigned char c = -1;
//	//11111111 整型提升补的符号位，无符号类型，所以符号位为0
//	//0000000 0000000 0000000 11111111	-255
//	return 0 ;
//}
