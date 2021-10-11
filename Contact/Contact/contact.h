#define _CRT_SECURE_NO_WARNINGS 1
#include<string.h>


#define MAX 1000
#define MAX_NAME 20
#define MAX_SEX  5
#define MAX_TELE 12
#define MAX_ADDR 30

struct PeoInfo
{
	char name[MAX_NAME];   //名字
	int age;     // 年龄
	char sex[MAX_SEX];  //性别
	char tele[MAX_TELE];  //号码
	char addr[MAX_ADDR]; //地址
};

//通讯录类型
struct Contact
{
	struct PeoInfo data[MAX]; //存放成员信息
	int size;    //记录已经录入的成员数
};

//声明初始化函数
void InitContact(struct Contact* ps);
void ADDContact(struct Contact* ps);
void ShowContact(const struct Contact* ps);