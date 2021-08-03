#define _CRT_SECURE_NO_WARNINGS 1
//今天学习指针
#include <stdio.h>


//int main()
//{
//	int a = 0x11223344;
//	//int* pa = &a;
//	//*pa = 0;//这里就是将a的地址变为0；
//	char* pc = &a;
//	*pc = 0;//指针类型决定了指针进行解引用操作的时候，能够访问空间的大小
//	//int* p:*p能够访问四个字节
//	//char* p：*p能够访问一个字节
//	//double* p：*p能够访问八个字节
//	/*printf("%p\n",pc);*/
//	return 0;
//}
//int main()
//{
//	int a = 0x11223344;
//	int* pa = &a;
//	char* pc = &a;
//	printf("%p\n",pa);
//	printf("%p\n",pa+1);
//	printf("%p\n",pc);
//	printf("%p\n",pc+1);
//	//指针类型决定了指针走一步走多远，就是指针加一，要增加多少个字节
//	//int*p：p+1 增加4个字节
//	//char*p：p+1 增加1个字节
//	//double*p：p+1 增加8个字节
//
//	return 0;
//}
//int main()
//{
//	int arr[10] = {0};
//	int* p = arr;//数组名-首元素的地址
//	
//	int i = 0;
//	for(i = 0;i < 10;i++)
//	{
//		*(p+i) = 1;//将地址修改为1
//	}
//	return 0;
//}
//int main()
//{
//	int arr[10] = {0};
//	int *p = arr;
//	int i = 0;
//	for(i = 0;i <= 11;i++)
//	{
//		*(p++) = i;//当指针超过数组范围，*p就是野指针
//	}
//	return 0;
//}
int* test()
{
	int a = 10;
	return &a;
}
int main()
{
	int *p = test();
	*p = 20;//指针指向的空间释放，因为a在出test的函数的同时，地址被销毁了，地址内存的东西也被销毁
	return 0 ;
}