#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//void test(int arr[])
//{
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	printf("%d\n",sz);//指针的大小是固定的4/8个字节（32/64位平台）
//}
//int main()
//{
//	int arr[10] = {0};
//	test(arr);
//	return 0;
//}
//字符指针
//int main()
//{
//	char arr[] = "abcdef";
//	char* pa = arr;
//	printf("%s\n",arr);
//	printf("%s\n",pa);
//
//	return 0;
//}
//int main()
//{
//	
//	char* pa = "abcdef";//"abcdef"常量字符串，将a的地址存在pa中
//	printf("%c\n",*pa);
//	
//	printf("%s\n",pa);
//	return 0;
//}
//int main()
//{
//	char arr1[] = "abcdef";
//
//	char arr2[] = "abcdef";
//	char* pa = "abcdef"; //常量字符串，再空间内开辟的是一个地址空间
//	char* pc = "abcdef"; 
//
//	if(pa == pc)
//	{
//		printf("hehe\n");
//
//	}
//	else
//	{
//		printf("haha\n");
//	}
//}
//指针数组是数组
//int main()
//{
//	int arr[10] = {0};//整型数组
//	char ch[5] = { 0 };//字符数组
//	int* parr[4];//存放整型指针的数组 - 指针数组
//	char* pch[5];
//
//	return 0;
//
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	int d = 40;
//	int* arr[4] = {&a,&b,&c,&d};
//	int i = 0;
//	for(i = 0;i < 4;i++)
//	{
//		printf("%d ",*(arr[i]));
//	}
//	return 0;
//}
int main()
{
	int arr1[] = {1,2,3,4,5};
	int arr2[] = {2,3,4,5,6};
	int arr3[] = {3,4,5,6,7};
	int* parr[] = {arr1 ,arr2 ,arr3};
	int i = 0;
	for(i = 0;i < 3;i++)
	{
		int j = 0;
		for(j = 0;j < 5;j++)
		{
			printf("%d ",*(parr[i] + j));
		}
		printf("\n");
	}
	return 0;
}