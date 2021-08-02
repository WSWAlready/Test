#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	short s = 0;
//	int a = 10;
//	printf("%d\n",sizeof(s = a + 5));//sizeof括号中的表达式是不参与计算的
//	printf("%d\n",s);
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	printf("%d\n",~a);//按位取反
//	int a = 1
//
//
//	return 0 ;
//}
//int main()
//{
//	int a = 10;
//	printf("%d\n",++a);//前置++，先++，后使用
//	printf("%d\n",a++);//后置++，先使用，再++
//	return 0;
//}
//int main()
//{
//	int a = (int )3.14;//强制类型转换，将double型的转换成int类型
//	return 0;
//}
//void test1(int arr[])//传送的是第一个元素的地址
////指针是四个字节或八个字节，32位的
//{
//	printf("%d\n",sizeof(arr));
//}
//void test2(char ch[])
//{
//	printf("%d\n",sizeof(ch));
//}
//int main()
//{
//	int arr[10] = {0};
//	char ch[10] = {0};
//	printf("%d\n",sizeof(arr));
//	printf("%d\n",sizeof(ch));
//	test1(arr);
//	test2(ch);
//	return 0;
//}
//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = a && b;//逻辑与：同为真是真。逻辑或：同为假为假
//	printf("%d\n",c);
//	return 0;
//}
//int main()
//{
//	int i = 0,a = 0,b = 2,c = 3,d = 4;
//	i = a++ && ++b && d++;//a = 0为假后面就不计算，但是a++；
//	printf("%d%d%d\n",a,b,d);
//	return 0;
//}
//int main()
//{
//	int i = 0,a = 1,b = 2,c = 3,d = 4;
//	i = a++ || ++b || d++;//a = 1为真后面就不计算，但是a++；
//	printf("%d%d%d\n",a,b,d);
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = 0;
//	max = (a > b ? a : b);
//	printf("%d\n",max);
//	return 0;
//}

//struct Stu
//{
//	char name[20];
//	int age;
//	char id[20];
//};//创建了一个结构体类型，类似int,float
//
//int main()
//{
//	 
//	struct Stu s1 = {"张三",20,"0224171"};//使用这个类型创建变量
//	struct Stu* ps = &s1;
//	printf("%s\n",ps->name);//指向地址内部的指向操作符。
//	//结构性指针->成员名
//	//printf("%s\n",(*ps).name);
//	/* printf("%s\n",s1.name);
//	printf("%d\n",s1.age);
//	printf("%s\n",s1.id);
//*/
//	 return 0;
//}

//隐式类型转换
//int main()
//{
//	char a = 3;
//	//000000000000000000000000011
//	//截断，00000011 - a;
//	char b = 127;
//	//截断，01111111 - b;
//	char c = a + b;
//	//a + b 
//	//00000011
//	//发生整型提升，有符号的char，高位是符号位，高位补的是符号位
//	//000000000000000000000000011
//	//000000000000000000001111111
//	//000000000000000000010000010 - c
//	//10000010 - c
//	//000000000000000000010000010 整型提升
//	//111111111111111111110000010  - 补码
//	//111111111111111111110000001  - 反码
//	//100000000000000000001111110  - 原码
//	// - 126
//	printf("%d\n",c);
//	
//	return 0;
//}
//char 中只要参与表达式计算会发生整形提升
//复杂表达式
//1.操作符的优先级，
//2.操作符的结合性，从左向右结合。
//3.是否控制求值顺序，类似逻辑与，左边为假右边不需要计算
