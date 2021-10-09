#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>


//int main()
//{
//	int arr1[] = {1,2,3,4,5};
//	int arr2[5] = {0};
//	memcpy(arr2,arr1,sizeof(arr1));
//	return 0;
//}

//void* my_memcpy(void* dest,const void* src,int k)
//{
//	void* ret = dest;
//	assert(dest !=NULL);
//	assert(src !=NULL);
//	while(k--)
//	{
//		*(char*)dest = *(char*)src;
//		++(char*)dest;
//		++(char*)src;
//	}
//	return ret;
//}

//int main()
//{
//	int i = 0;
//	int arr1[] = {1,2,3,4,5};
//	int arr2[5] = {0};
//	my_memcpy(arr2,arr1,sizeof(arr1));//不能在一个空间内进行拷贝
//	for(i = 0;i < 5;i++)
//	{
//		printf("%d ",arr2[i]);
//	}
//	return 0;
//}
//
//void* my_memmove(void* dest,const void* src,size_t k)
//{
//	void* ret = dest;
//	assert(dest !=NULL);
//	assert(src !=NULL);
//	if(*(char*)dest < *(char*)src)
//	{
//		while(k--)
//		{
//			*(char*)dest = *(char*)src;
//			++(char*)dest;
//			++(char*)src;
//		}
//	}
//	else
//	{
//		while(k--)
//		{
//			*((char*)dest+k) = *((char*)src+k);
//			
//		}
//	}
//	return ret;
//}
//int main()
//{
//	int i = 0;
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};//将12345，复制到34567上去。memmove是处理同一空间拷贝
//	my_memmove(arr+3,arr,20);
//	for(i = 0;i < 10;i++)
//	{
//		printf("%d ",arr[i]);
//	}
//}



//结构体
//struct tag //结构体类型以及名称
//{
//	member—list   //成员列表
//
//}variable—list  //变量列表


//声明一个结构体类型
//声明一个学生类型
//描述学生：属性+名字+电话+性别
//struct Stu
//{
//	char name[20];//名字
//	char tele[12];//电话
//	char sex[10];//性别
//	int age;    //年龄         //以上四个都是成员变量
//}s3,s4,s5;//也是全局变量
//struct Stu s3;//此时是全局变量
//
//int main()
//{
//	struct Stu s1;
//	struct Stu s2;
//
//	return 0;
//}

//struct 
//{
//	int a;
//	char c;
//
//}sa;//匿名结构体类型
//struct 
//{
//	int a;
//	char c;
//
//}* psa;//匿名结构体指针类型
//int main()
//{
//
//	return 0;
//}



//struct Node
//{
//	int data;//4
//	//struct Node n;内存空间不允许
//	struct Node* next;//结构体自引用使用指针类型
//};
//int main()
//{
//	
//	return 0;
//}


//typedef struct Node
//{
//	int data;//4
//	//struct Node n;内存空间不允许
//	struct Node* next;//结构体自引用使用指针类型
//}Node;//重定义
//int main()
//{
//	struct Node n1;
//	Node n2;//Node == struct Node
//}
//struct Node
//{
//	char c;
//	int a;
//	double d;
//	char arr[20];
//};
//int main()
//{
//	struct Node s = {'c',4,3.14,"hello world"};
//	printf("%c %d %f %s",s.c,s.a,s.d,s.arr);
//	return 0;
//}

//struct T
//{
//	double weight;
//	short age;
//};
//
//struct Node
//{
//	char c;
//	int a;
//	struct T st;
//	double d;
//	char arr[20];
//};
//int main()
//{
//	struct Node s = {'c',4,{55.6,30},3.14,"hello world"};//{55.6,30}放入的就是struct类型的值
//	printf("%c %d %f %f %s",s.c,s.a,s.st.weight,s.d,s.arr);
//	return 0;
//}

struct S1
{
	char c1;
	char c2;
	int a;
};
struct S2
{
	char c1;
	int a;
	char c2;
	
};
int main()
{
	struct S1 s1 = {0};
		struct S2 s2 = {0};
	printf("%d\n",sizeof(s1));


	printf("%d\n",sizeof(s2));

}
