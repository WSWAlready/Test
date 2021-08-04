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
//int* test()
//{
//	int a = 10;
//	return &a;
//}
//int main()
//{
//	int *p = test();
//	*p = 20;//指针指向的空间释放，因为a在出test的函数的同时，地址被销毁了，地址内存的东西也被销毁
//	return 0 ;
//}
//野指针的成因
//int main()
//{
//	//未初始化的指针变量
//	int* p;//局部变量不初始化，里面默认是一个随机值
//	*p = 20;
//	return 0;
//}
//int main()
//{
//	int a[10] = {0};
//	int i = 0;
//	int*p = a;
//	for(i = 0;i < 11;i++)//野指针，指针的越界访问
//	{
//		*p = i;
//		p++;
//	}
//	return 0;
//}
//指针的运算
//1.指针+-整数
//int main ()
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	int i = 0;
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	int * p = arr;
//	for(i = 0;i < 5;i++)
//	{
//		printf("%d \n",*p);
//		p+=2;
//		
//	}
//	return 0;
//}
//2.指针-指针
//int main()
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	printf("%d\n",&arr[9] - & arr[0]);//指针减指针得到的是两个指针间的元素个数
//	return 0;
//}
//int my_strlen(char * str)
//{
//	char* start = str;
//	char* end = str;
//	while(*end != '\0')
//	{
//		end++;
//	}
//	return  end - start;
//}
//int main()
//{
//	//strlen - 求字符串长度
//	char arr[] = "wang";
//	int len = my_strlen(arr);
//	printf("%d\n",len);
//	return 0;
//}
//int main()
//{
//	int arr[10] = {0};
//	printf("%p\n",arr);//首元素的地址
//	printf("%p\n",arr+1);
//
//	printf("%p\n",&arr[0]);//首元素的地址
//	printf("%p\n",&arr[0]+1);
//
//	printf("%p\n",&arr);//整个数组的地址
//	printf("%p\n",&arr+1);
//
//
//	//1.&arr - &数组名 - 数组名不是首元素的地址，数组名表示整个数组-&数组名 取出的是整个数组的地址
//	//2.sizeof（arr）-sizeof(数组名)-数组名表示的整个数组-sizeof(数组名)计算的是整个数组的大小
//
//}
//int main()
//{
//	int arr[10] = {0};
//	int *p = arr;
//	int i = 0;
//	for(i = 0;i < 10;i++)
//	{
//		printf("%p    %p\n",p,&arr[i]);
//		p++;
//	}
//	return 0;
//}
//二级指针
//int main()
//{
//	int a = 10;
//	int *pa = &a;
//	int ** ppa = &pa;//ppa就是二级指针
//	printf("%p   0X%02X",pa,*ppa);
//	return 0;
//}
//指针数组 - - 存放指针的数组
//数组指针 - - 指针
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	//int arr[10];
//	int * arr2[3] = {&a,&b,&c};
//	printf("%d\n",*arr2[1]);//解引用
//	printf("%p\n",arr2[1]);//取地址
//	return 0 ;
//}