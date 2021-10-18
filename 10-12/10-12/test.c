#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<errno.h>
#include<string.h>



//malloc    开辟空间

//int main()
//{
//	//向内存申请10个整型空间
//	int* p = (int*)malloc(10*sizeof(int));
//	if(p == NULL)
//	{
//		printf("%s\n",strerror(errno));
//	}
//	else
//	{
//		//正常使用空间
//		int i = 0;
//		for(i = 0;i < 10;i++)
//		{
//			*(p + i) = i;
//		}
//		for(i = 0;i < 10;i++)
//		{
//			printf("%d\n",*(p + i));
//		}
//	}
//		free(p); //   释放空间
//	return 0;
//}

//int main()
//{
//	int*p = realloc(NULL,40);//malloc(40);
//	return 0;
//
//}

//int main()
//{
//	int i = 0;
//	//1.对空指针的解引用操作
//	int *p = malloc(40);
//	*p = 10;//malloc开辟空间失败，对NULL指针解引用
//
//	//2.对动态开辟内存的越界访问
//	int *p2 = (int*)malloc(40);
//	if(p = = NULL)
//	{
//		return 0;
//	}
//
//	//for (int  = 0;i <= 10;i++)	//会造成越界访问
//	for (int  = 0;i < 10;i++)
//	{
//		*(p+i) = i;
//	}
//	free(p);
//	p = NNULL;
//	return 0;
//	//3.对非动态开辟的内存使用free释放
//  //4.使用free释放动态开辟内存的一部分
//  //5.对同一块空间多次释放
//  //6.动态开辟内存忘记释放（内存泄漏）
//}	



//void GetMemory(char *p)
//{
//	p = (char*)malloc(100);//p现在开辟的一个空间，空间的首地址就是p的内容。形参只有在函数内部才能生效，而且p并没有被释放，会导致内存泄漏
//}
//
//
//void Test(void)
//{
//	char *str = NULL;
//	GetMemory(str);//将str的值传给p，但是实际上str的值并没被改变，还是NULL
//	strcpy(str,"hello world");//目前str还是空指针，没有有效的空间
//	printf(str);
//}
////
//int main()
//{
//	Test();
//	return 0;
//}

//改正
//void GetMemory(char **p)
//{
//	*p = (char*)malloc(100);
//}
//
//
//void Test(void)
//{
//	char *str = NULL;
//	GetMemory(&str);
//	strcpy(str,"hello world");
//	printf(str);
//}
////
//int main()
//{
//	Test();
//	return 0;
//}

//char* GetMemory(char *p)
//{
//	p = (char*)malloc(100);
//	return p;
//}
//
//
//void Test(void)
//{
//	char *str = NULL;
//	str = GetMemory(str);
//	strcpy(str,"hello world");
//	printf(str);
//}
////
//int main()
//{
//	Test();
//	return 0;
//}

//
//char *GetMemory(void)
//{
//	static char p[] = "hello world";//局部变量，出了这个函数，空间就被销毁了。
//	return p;
//}
//
//
//void Test(void)
//{
//	int i = 0;
//	char *str = NULL;
//	str = GetMemory();
//printf(str);	
//}
////
//int main()
//{
//	Test();
//	return 0;
//}
//struct S
//{
//	int n ;
//	int arr[0];//柔性数组，最后一个元素的大小是可以未知大小的，就是柔性数组成员,数组大小可调整
//};
//
//int main()
//{
//	//struct S s;
//	//printf("%d\n",sizeof(s));  //计算结构体大小时，不包含柔性数组的大小
//	struct S* ps = (struct S*)malloc(sizeof(struct S) + 5 * sizeof(int));  
//	ps->n = 100;
//	int i = 0;
//	for(i = 0;i<5;i++ )
//	{
//		ps->arr[i] = i;
//	}
//	struct S* pr = (struct S*)realloc(ps,44);
//	if(pr != NULL)
//	{
//		ps = pr;
//	}
//	for(i = 5;i<10;i++ )
//	{
//		ps->arr[i] = i;
//	}
//
//	free(ps);
//	ps = NULL;
//
//	return 0;
//}


