#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stddef.h>

//结构体内存对齐规则
//1.第一个成员在与结构体变量偏移量为0 的地址处
//2.其他成员变量要对齐到对齐数的整数倍的地址处（对齐数是编译器默认的一个对齐数与该成员大小的较小值）VS默认对齐数是8
//就比如char类型是一个字节，紧接着是int类型，那么int类型是4个字节，与对齐数8比较，较小的是4，所以int类型应该放在内存为4的位置上，所以1-3的内存浪费了

//3.结构体总大小是最大对齐数（每一个成员变量都有一个对齐数）的整数倍
//4.如果嵌套了结构体的情况，结构体的嵌套对齐到自己的最大对齐数（结构体内部元素的对齐数）的整数倍处，结构体的整体大小就是所有最大对齐数（结构体内部元素的对齐数）的整数倍


//修改默认对齐数为4
//#pragma pack(4)
//struct S
//{
//	char c1;
//	double d;
//
//};
//
//int main()
//{
//	struct S s1;
//	printf("%d\n",sizeof(s1));
//	return 0;
//}
//#pragma pack() //取消设置的对齐数，还原为默认的

//struct S
//{
//	char c1;
//	int i;
//	double d;
//
//};
//
//int main()
//{
//	//offsetof();//计算偏移量
//	printf("%d\n",offsetof(struct S,c1));//offsetof是宏
//	printf("%d\n",offsetof(struct S,i));
//	printf("%d\n",offsetof(struct S,d));
//
//	return 0;
//}


//struct S
//{
//	int a;
//	char c;
//	double d;
//};
//void Init(struct S* pa)
//{
//	pa->a = 100;
//	pa->c = 'w';
//	pa->d = 3.14;
//
//}
//void Printf(struct S tmp)
//{
//	printf("%d %c %lf\n",tmp.a,tmp.c,tmp.d);
//}
//int main()
//{
//	struct S s;
//	Init(&s);
//	Printf(s);
//	return 0;
//}


//位段—二进制位，位段是用来节省空间的。
//位段是根据类型开辟空间，int类型就是开辟四个字节的空间，四个字节就是32个bit位，然后将int:后的字节填充进去。所以一次开辟四个字节的空间。
//struct A
//{
//	int _a : 2;//两个bit位
//	int _b : 5;//五个bit位
//	int _c : 10;//10个bit位
//	int _d : 30;//30个bit位
//	//
//};
//int main()
//{
//	struct A s;
//	printf("%d\n",sizeof(s));//8个字节
//	return 0;
//}


//枚举
//enum Day  //枚举类型
//{
//	//枚举可能取值-常量
//	Mon = 1,   //可以设置初始值
//	Tues,
//	Wed,
//	Thurs,
//	Fri,
//	Sat,
//	Sun
//};
//int main()
//{
//	enum Day d = Wed;
//	//不能写成enum Day d = 3;两边的类型不一样，左边是枚举类型，右边是int类型
//	printf("%d %d %d %d %d %d %d ",Mon,Tues,Wed,Thurs,Fri,Sat,Sun);
//	return 0;
//}
// 枚举的优点：
//增加代码的可读性和可维护性
//和#define定义的标识符比较枚举有类型检查，更加严谨
//防止了命名污染（封装）
//便于调试
//使用方便，一次可以定义多个常量


//联合-共用体

union Un
{
	char c;
	int i;
	//共用同一块空间

};

int main()
{
	union Un u;
	printf("%d\n",sizeof(u));
	printf("%p\n",&u);
	printf("%p\n",&(u.c));
	printf("%p\n",&(u.i));

}