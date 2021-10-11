#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include"contact.h"


void InitContact(struct Contact* ps)
{
	memset(ps->data,0,sizeof(ps->data));
	ps->size = 0; //设置通讯录最初只有0个元素
}

void ADDContact(struct Contact* ps)
{
	if(ps->size == MAX)
	{
		printf("通讯录已满，无法增加\n");

	}
	else
	{
		printf("请输入名字:>");
		scanf("%s",ps->data[ps->size].name);  //ps->data是找到数组[]是下标
		printf("请输入年龄:>");
		scanf("%d",&(ps->data[ps->size].age));
		printf("请输入性别:>");
		scanf("%s",ps->data[ps->size].sex);
		printf("请输入号码:>");
		scanf("%s",ps->data[ps->size].tele);
		printf("请输入地址:>");
		scanf("%s",ps->data[ps->size].addr);

		ps->size++;
		printf("添加成功\n");
		printf("目前已经有 %d 个人的信息\n",ps->size);

	}
}

void ShowContact(const struct Contact* ps)
{
	if(ps->size == 0)
	{
		printf("通讯录是空的哦\n");
	}
	else
	{
		int i = 0;
		printf("%-5s \t%-5s \t%-5s \t%-12s \t%-16s\n","名字","年龄","性别","号码","地址");
		for(i = 0;i < ps->size;i++)
		{
			printf("%-5s \t%-5d \t%-5s \t%-12s \t%-30s\n",ps->data[i].name,
				ps->data[i].age,
				ps->data[i].sex,
				ps->data[i].tele,
				ps->data[i].addr);
		}
	}
}