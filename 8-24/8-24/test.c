#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>


//int main()
//{
//	char arr[] = "abcdef";
//	printf("%d\n",sizeof(arr));//7 算是放的七个字符，带着\0
//	printf("%d\n",sizeof(arr + 0));// 4/8 还是首元素的地址，地址是占四个字节
//	printf("%d\n",sizeof(*arr));//1 *arr解引用的是首元素，计算的是首元素大小
//	printf("%d\n",sizeof(arr[1]));//1 计算的是第二个元素大小
//	printf("%d\n",sizeof(&arr));//4/8 取出的是arr地址，地址大小是4/8
//	printf("%d\n",sizeof(&arr + 1));//4/8 取出的是跳过一个数组的地址，地址大小是74/8
//	printf("%d\n",sizeof(&arr[0] + 1));//4/8 取出的是第二个元素的地址
//}
//int main()
//{
//	char arr[] = "abcdef";
//	printf("%d\n",strlen(arr));//6 找到的是\0前面的元素字节大小
//	printf("%d\n",strlen(arr + 0));//6 首元素地址，从首元素开始
//	//printf("%d\n",strlen(*arr)); //非法访问，找到的是元素a，a的ASCII值是97，那么默认地址是97，就会造成非法访问
//	//printf("%d\n",strlen(arr[1]));//和上面一样
//	printf("%d\n",strlen(&arr));//6 找到的是首元素的地址，也是6。&arr数组指针，应该放在指针数组中，类型应该是char(*)[] = &arr;但是strlen的参数是const char*
//	printf("%d\n",strlen(&arr + 1));//随机值，跳过这个数组的地址，但是找不到\0，所以是随机值
//	printf("%d\n",strlen(&arr[0] + 1));//5 从b的地址开始向后数
//
//}
//int main()
//{
//	char *p = "abcdef";
//	printf("%d\n",strlen(p));//6 p指向的是a的地址，从a之后开始数
//	printf("%d\n",strlen(p + 1));//5 b的地址，从b之后开始数
//	printf("%d\n",strlen(*p)); //非法访问，解引用之后是a的值
//	printf("%d\n",strlen(p[1]));//非法访问，p[1]是b的值
//	printf("%d\n",strlen(&p));//随机值，&p是p的地址，是随机值
//	printf("%d\n",strlen(&p + 1));//随机值，跳过p的地址的地址，也是随机值
//	printf("%d\n",strlen(&p[0] + 1));//5 就是b的地址
//
//}
//int main()
//{
//	char *p = "abcdef";
//	printf("%d\n",sizeof(p));//4/8 p是地址，地址的大小是4/8
//	printf("%d\n",sizeof(p + 1));//4/8 p+1就是第二个元素的地址
//	printf("%d\n",sizeof(*p)); //1 *p解引用是元素a，元素大小是1
//	printf("%d\n",sizeof(p[1]));//1 p[1]就是第二个元素，元素大小是1
//	printf("%d\n",sizeof(&p));//4/8 对地址p进行取地址，还是地址
//	printf("%d\n",sizeof(&p + 1));//4/8 跳过p的地址的地址
//	printf("%d\n",sizeof(&p[0] + 1));//4/8 第二个元素的地址
//
//	return 0;
//}

//int main()
//{
//	int a[3][4] = { 0 };
//	printf("%d\n",sizeof(a));//48,计算的整个数组的大小
//	printf("%d\n",sizeof(a[0][0]));//4，第一个元素的大小
//	printf("%d\n",sizeof(a[0]));//16，计算的是第一行的大小，a[0]是第一行的数组名
//	printf("%d\n",sizeof(a[0] + 1));//4/8,a[0]没有单独放在sizeof内部，表示的是第一行的首元素地址，a[0] + 1表示的是第一行的第二个元素的地址
//	printf("%d\n",sizeof(a+1));//4/8，第二行的地址
//	printf("%d\n",sizeof(*(a+1)));//16，第二行元素的大小
//	printf("%d\n",sizeof(*(a[0] + 1)));//4，表示的就是第二个元素大小
//	printf("%d\n",sizeof(&a[0] + 1));//4/8，是第二行元素的地址
//	printf("%d\n",sizeof(*(&a[0] + 1)));//16，第二行元素的大小
//	printf("%d\n",sizeof(*a));//16，对第一行解引用，元素大小是16
//	printf("%d\n",sizeof(a[3]));//sizeof并不参与真实计算，根据类型计算大小。根据数组的大小来计算
//	printf("%d\n",sizeof(a[10]));
//}
//int main()
//{
//	int a[5] = {1,2,3,4,5};
//	int *p = (int*)(&a+1);
//	int *px = (&a+1);//因为取地址a是取的数组的地址，与指针类型不匹配，会报警告
//	printf("%d,%d,%d\n",*(a + 1),*(p - 1),*(px - 1));
//	return 0;
//}
//struct Test
//{
//	int Num;
//	char* pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//}* p;//p 的值是0x100000,结构体变量大小是20个字节
//int main()
//{
//	printf("%p\n",p + 0x1);//p + 1,跳过一个结构体大小，0x00100014
//	printf("%p\n",(unsigned long)p + 0x1);//转换位无符号整数，将p转换为十进制，在加1，就是增加1，0x00100001
//	printf("%p\n",(unsigned int* )p + 0x1);//就是将p定义为无符号整型指针类型，p+4
//
//	return 0;
//}

