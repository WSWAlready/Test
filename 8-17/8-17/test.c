#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//数组指针 --> 指针
//int main()
//{
//	//int*p = NULL;//p是整型指针--指向整型的指针--可以存放整型的地址
//	//char* pc = NULL;//pc是字符指针--指向字符的指针--可以存放字符的地址
//	//int arr[10] = {0};
//	//arr - 首元素地址;
//	//&arr[0] - 首元素的地址;
//	//&arr - 数组的地址
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	//int * p[10] = &arr;//[]的优先级比*强，所以是数组
//	int(* p)[10] = &arr;//此时的p才是数组指针
//	return 0;
//}

//int main()
//{
//	char* arr[5];//此时的类型是char*
//	char*(* pa)[5] = &arr;//所以这里类型应该跟上面保持一致
//	//pa是指针变量的名字，*是指针，[5]pa指向的数组是5个元素，char*是元素类型
//	return 0 ;
//}

//int main()
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	int (*pa)[10] = &arr;
//	int i = 0;
//	for(i = 0;i < 10;i++)
//	{
//		printf("%d ",(*pa)[i]);
//	}
//	return 0;
//}
//数组指针一般是二维数组使用
//void print(int arr[3][5],int x,int y)
//{
//	int i = 0;
//	int j = 0;
//	for(i = 0;i < x;i++)
//	{
//		for(j = 0;j < y;j++)
//		{
//			printf("%d ",arr[i][j]);
//		}
//		printf("\n");
//	}
//
//}
//int main()
//{
//	int arr[3][5] = {{1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7}};
//	print(arr,3,5);//数组名就是首元素地址，首元素地址是第一行，就相当于每一行就是一个元素

//	return 0 ;
//}
//void print2(int (*p)[5],int x,int y)
//{
//	int i = 0;
//	int j = 0;
//	for(i = 0;i < x;i++)
//	{
//		for(j = 0;j < y;j++)
//		{
//			//printf("%d ",*(*(p + i) + j));//*(p+i) == arr[i],相当于第i行，*((*(p+i)) + j),相当于第i行的元素+j解引用，arr[i][j]，
//*(p+1)单独使用时表示的是第 1 行数据，放在表达式中会被转换为第 1 行数据的首地址，也就是第 1 行第 0 个元素的地址，因为使用整行数据没有实际的含义。
//编译器遇到这种情况都会转换为指向该行第 0 个元素的指针；就像一维数组的名字，在定义时或者和 sizeof、& 一起使用时才表示整个数组，出现在表达式中就会被转换为指向数组第 0 个元素的指针。
//			printf("%d ",(*(p + i))[j]);
//
//		}
//		printf("\n");
//	}
//
//}
//int main()
//{
//	int arr[3][5] = {{1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7}};
//	print2(arr,3,5);
//	return 0 ;
//}

//
//int (*parr3[10])[5];//意思就是里面的parr3[10]是一个指针数组，总共有是个元素
////int(*)[5]是数组指针，共有五个元素，相当于有五个数组，指针指向的就是指针数组parr3