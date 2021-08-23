#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//int cmp_int(const void*e1,const void*e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
//void Swap(char*buf1,char*buf2,int width)
//{
//	int i = 0;
//	for(i = 0;i < width;i++)
//	{
//		char tmp = *buf1;
//		*buf1 = *buf2;
//		*buf2 = tmp;
//		buf1++;
//		buf2++;
//	}
//}
//void bubble_sort(void*base ,int sz,int width,int (*cmp)(void*e1,void*e2))
//{
//	int i = 0;
//	for(i = 0;i < sz - 1;i++)
//	{
//		int j = 0;
//		for(j = 0;j < sz - 1 - i;j++)
//		{
//			if(cmp((char*)base + (j)*width , (char*)base + (j+1)*width) > 0)//强制转换为char*类型指针向右移动width个字节(例如int类型,向右偏移四个字节长度，就到了下一个元素的地址)
//			{
//				Swap((char*)base + (j)*width , (char*)base + (j+1)*width , width);
//			}
//		}
//	}
//
//}
//void test1()
//{
//	int arr[10] = {9 ,8 ,7, 6, 5, 4, 3, 2, 1, 0};
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	//使用bubble_sort的程序员一定知道自己排序的是什么数据
//	//就应该知道如何比较排序中的元素
//	bubble_sort(arr,sz,sizeof(arr[0]),cmp_int);
//}
//int main()
//{
//	test1();
//	return 0;
//}

//int main()
//{
//	int arr[] = {0,1,2};
//	printf("%d\n",sizeof(arr[0]));//四个字节长度
//	return 0;
//}
//int main()
//{
//	int a[] = {1,2,3,4};
//	printf("%d\n",sizeof(a));//16
//	printf("%d\n",sizeof(a + 0));//4/8 数组名这里表示首元素的值，a+0还是首元素地址 
//	printf("%d\n",sizeof(*a));//4 数组名表示首元素地址，*a解引用还是首元素的值
//	printf("%d\n",sizeof(a + 1));//4/8 数组名这里表示首元素的值，a+1是第二个元素地址
//	printf("%d\n",sizeof(a[1]));//4 第二个元素的值
//	printf("%d\n",sizeof(&a));//4 &a取出的是数组的地址，但数组的地址也是地址，32位是4个字节
//	printf("%d\n",sizeof(*&a));//16 *&a解引用，出来的是&a，是十六个字节
//	printf("%d\n",sizeof(&a + 1));//4 指向跳过一个数组的地址，地址是4/8个字节
//	printf("%d\n",sizeof(&a[0]));//4/8 &a[0]是第一个元素的地址
//	printf("%d\n",sizeof(&a[0] + 1));//4/8 是第二个元素的地址
//
//	return 0;
//}
//int main()
//{
//	char arr[] = {'a', 'b', 'c', 'd', 'e', 'f'};
//	printf("%d\n",sizeof(arr));//6 六个元素，每个元素占用一个字节
//	printf("%d\n",sizeof(arr + 0));//4/8 就是首元素地址，地址是4/8个字节
//	printf("%d\n",sizeof(*arr));//1 *arr是解引用，是首元素的值
//	printf("%d\n",sizeof(arr[1]));//1 数组中的第二个元素值
//	printf("%d\n",sizeof(&arr));//4/8 &arr是地址，地址的大小是4/8个字节
//	printf("%d\n",sizeof(&arr + 1));//4/8 &arr+1是跳过一个数组的地址，地址的大小是4/8个字节
//	printf("%d\n",sizeof(&arr[0] + 1));//4/8 第二个元素的地址，地址的大小是4/8个字节
//
//	return 0;
//}
//int main()
//{
//	char arr[] = {'a', 'b', 'c', 'd', 'e', 'f'};
//	printf("%d\n",strlen(arr));//随机值，arr[],\0不一定找到
//	printf("%d\n",strlen(arr + 0));//随机值
//	printf("%d\n",strlen(*arr));//非法访问
//	printf("%d\n",strlen(arr[1]));//非法访问
//	printf("%d\n",strlen(&arr));//随机值
//	printf("%d\n",strlen(&arr + 1));//随机值，跳过整个数组
//	printf("%d\n",strlen(&arr[0] + 1));//随机值
//
//	return 0;
//}