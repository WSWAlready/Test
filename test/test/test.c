#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//整型提升
//int main()
//{
//	unsigned char a = 200;//unsigned char 是无符号的字符类型，占一个字节内存，8个bit
//	//0~255，八个bit位表示0-255；
//	//200  00000000  00000000  00000000 11001000  a 
//	
//	unsigned char b = 100;
//	//100  00000000  00000000  00000000 01100100 b
//
//	unsigned char c = 0;
//	c = a + b;//整型提升
//	//11001000 a (a是无符号类型，高位补0)(a是有符号的时候，高位补的是符号位，就是高位的第一位)
//	//01100100 b
//	//00000000  00000000  00000000 11001000 
//	//00000000  00000000  00000000 01100100
//	//00000000  00000000  00000001 00101100 
//	//整型提升，高位补的是0   c 里面存放的是00101100
//	//c就是00000000  00000000  00000000  00101100 //44
//	//但是a+b是00000000  00000000  00000001 00101100 
//	printf("%d %d",a + b, c );
//}
//int main()
//{
//	//大端模式，是指数据的高字节保存在内存的低地址中，而数据的低字节保存在内存的高地址中
//	//小端模式，是指数据的高字节保存在内存的高地址中，而数据的低字节保存在内存的低地址中
//	unsigned int a = 0x1234;
//	unsigned char b = *(unsigned char * )&a;//强制类型转换，转化为无符号char类型，所以只能访问一个字节
//	//a = 0x1234 == 0x00 00 12 34  //大端  00 00 12 34  小端 34 12 00 00
//	//大端是 00 00 12 34，访问一个字节就是00
//	return 0;
//}


//int main()
//{
//	char a[1000] = {0};
//	//有符号的char类型 是-128 --- 127
//	int i = 0;
//	for(i = 0; i < 1000;i++)
//	{
//		a[i] = -1 -i;
//		//-1 -2 .... -128 127 126 ....3 2 1 0 
//	}
//	printf("%d\n",strlen(a));//strlen是找到0的时候，0之前的个数
//
//	return 0;
//}



//杨辉三角
//      1
//     1 1
//    1 2 1
//   1 3 3 1
//  1 4 6 4 1
//可以理解为第一列的值不变，后面的数是前两个数的和
//int main()
//{
//	
//	int k = 0;
//	int arr[14][14] = { 0 };
//	int i = 0;
//	int j = 0;
//	
//	
//	for(i = 0; i < 10; i++)
//	{
//		for(j = 0; j < 10; j++)
//		{
//			if(j == 0)
//			{
//				arr[i][j] = 1;
//			}
//			if(i == j)
//			{
//				arr[i][j] = 1;
//			}
//			if(i >= 2 && j >= 1)
//			{
//				 arr[i][j] =arr[i-1][j-1] + arr[i-1][j];
//			}
//		}
//	}
//	for(i=0 ; i < 10; i++)
//	{
//        for(k=0;k < 10 - i;k++)
//        {
//			printf("  "); //打印空格
//		}
//		for(j = 0;j  <= i ;j++)
//		{
//			printf("%3d " ,arr[i][j]);//打印数值
//		}
//		printf("\n");
//	}
//	return 0;
//}



//猜凶手
//日本某地发生了一件谋杀案，警察通过排查确定杀人凶手必为4个嫌疑犯的一个。
//以下为4个嫌疑犯的供词:
//a说：不是我。
//b说：是c。   
//c说：是d。   
//d说：c在胡说 
//已知3个人说了真话，1个人说的是假话。
//现在请根据这些信息，写一个程序来确定到底谁是凶手
int main()
{

	int killer = 0;
	for(killer = 'a';killer <= 'd',killer ++);
	{
		if(killer != 'a') + (killer == 'c') + (killer == 'd') + (killer != 'd') ==3)
		{
			printf("killer is %c\n",killer);
		}
	}
}