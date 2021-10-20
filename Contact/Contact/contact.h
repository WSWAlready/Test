#define _CRT_SECURE_NO_WARNINGS 1
#include<string.h>
#include<stdlib.h>


//#define MAX 1000
#define DEFUALT_SZ 3

#define MAX_NAME 20
#define MAX_SEX  5
#define MAX_TELE 12
#define MAX_ADDR 30


enum Option
{
	EXIT,
	ADD,
	DEL,
	SEARCH,
	MODIFY,
	SHOW,
	SORT,
	SAVE,

};
struct PeoInfo
{
	char name[MAX_NAME];   //名字
	int age;			   // 年龄
	char sex[MAX_SEX];	   //性别
	char tele[MAX_TELE];   //号码
	char addr[MAX_ADDR];   //地址
};

//通讯录类型
struct Contact
{
	struct PeoInfo *data; //存放成员信息
	int size;    //记录已经录入的成员数
	int capacity;//当前通讯录的最大容量
};

//声明初始化函数
void InitContact(struct Contact* ps);
//声明添加信息函数
void ADDContact(struct Contact* ps);
//声明显示信息函数
void ShowContact(const struct Contact* ps);
//声明删除信息函数
void DelContact(struct Contact* ps);
//声明查找信息函数
void SearchContact( struct Contact* ps);
//声明修改信息函数
void ModifyContact(struct Contact* ps);
//声明排序信息函数
void SortContact(struct Contact* ps);
//声明释放空间函数
void DestroyContact(struct Contact* ps);
//声明保存信息函数
void SaveContact(struct Contact* ps);
//声明加载信息函数
void LoadContact(struct Contact* ps);

