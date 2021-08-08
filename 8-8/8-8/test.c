#define _CRT_SECURE_NO_WARNINGS 1
//结构体的学习
#include <stdio.h>

//描述一个学生的一些数据
//名字
//年龄
//电话
//性别
//struct Stu  //Stu是结构体标签
//{
//	//成员变量
//	char name[20];
//	short age;            //定义一个结构体类型
//	char tele[12];
//	char sex[5];
//
//}s1, s2, s3;//三个是全局的结构体变量

//typedef struct Stu  //Stu是结构体标签
//{
//	//成员变量
//	char name[20];
//	short age;            //定义一个结构体类型
//	char tele[12];
//	char sex[5];
//
//}Stu;    //类型 将struct重定义为Stu；
//int main()
//{
//	//struct Stu s;     //创建结构体变量（局部的结构体变量）
//
//	Stu s2 = {"张三", 20,"15896545652","男"};       // 
//	return 0;
//}
//struct S
//{
//	int a ;
//	char c ;
//	char arr[20];
//	double d;
//};
//
//struct T
//{
//	char ch[10];
//	struct S s;
//	char *pc;
//
//};
//int main()
//{
//	char arr[] = "hello\n";
//	struct T t = {"hehe",{10,'w',"hello i am iron man",3.14},arr};//对于两个结构体进行初始化
//	printf("%s\n",t.ch);	//hehe
//	printf("%s\n",t.s.arr);	//hello i am iron man
//	printf("%lf\n",t.s.d);  //3.14
//	printf("%s\n",t.pc);    //hello
//	return 0;
//}
typedef struct Stu  
{
	//成员变量
	char name[20];
	short age;            
	char tele[12];
	char sex[5];

}Stu;
//void Print(Stu tmp)
//{
//	printf("name:%s\n",tmp.name);
//	printf("age:%d\n",tmp.age);
//	printf("tele:%s\n",tmp.tele);
//	printf("sex:%s\n",tmp.sex);
//
//}
//
//void Print1(Stu* pc)
//{
//	printf("name:%s\n",pc->name);
//	printf("age:%d\n",pc->age);
//	printf("tele:%s\n",pc->tele);
//	printf("sex:%s\n",pc->sex);
//}
//int main()
//{
//	Stu s = {"张三",40,"15896532561","男"};
//	//Print(s);
//	Print1(&s);
//	return 0;
//}
