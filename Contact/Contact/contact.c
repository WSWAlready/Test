#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include"contact.h"
#include<stdlib.h>


void InitContact(struct Contact* ps)
{
	ps->data  = (struct PeoInfo*)malloc(DEFUALT_SZ * sizeof(struct PeoInfo));
	if(ps->data == NULL)
	{
		return;
	}
	ps->size = 0;
	ps->capacity = DEFUALT_SZ;
}
void Check_Capacity(struct Contact* ps)
{
	if(ps->size == ps->capacity)
	{
		struct PeoInfo* pr = (struct PeoInfo*)realloc(ps->data,(ps->capacity + 2) * sizeof(struct PeoInfo));
		if(pr!=NULL)
		{
			ps->data = pr;
			ps->capacity += 2;
			printf("增容成功\n");
		}
		else
		{
			printf("增容失败\n");
		}
	}
}

void ADDContact(struct Contact* ps)
{
	//检测当前通讯录的情况
	//满了就增容
	//不满就增加数据
	Check_Capacity(ps);
	//if(ps->size == MAX)
	//{
	//	printf("通讯录已满，无法增加\n");

	//}
	//else
	//{
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

	//}
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

static int FindMemName(struct Contact* ps,char name[MAX_NAME])
{
	int i = 0;
	for(i = 0;i < ps->size;i++)
	{
		if(0 == strcmp(ps->data[i].name, name))
		{
			return i;
		}
	}
	return -1;
}
void DelContact( struct Contact* ps)
{
	char name[MAX_NAME];
	//1.查找需要删除人的位置
	int pos = FindMemName(ps,name);//找到了返回下标元素，找不到返回-1
	
	printf("请输入删除人的名字:>");
	scanf("%s",name);
	
	
	//2.删除
	if(pos == -1)
	{
		printf("要删除的信息不存在\n");
	}
	else
	{
		int j = 0;
		for(j = pos; j < ps->size - 1;j++)
		{
			ps->data[j] = ps->data[j+1];
		}
		ps->size--;
		printf("删除成功\n");
	}

}
void SearchContact( struct Contact* ps)
{
	int pos = 0;
	char name[MAX_NAME];
	printf("请输入查找人的名字");
	scanf("%s",name);
	pos = FindMemName(ps,name);
	if(pos == -1)
	{
		printf("要查找的人不存在\n");

	}
	else
	{
		printf("%-5s \t%-5s \t%-5s \t%-12s \t%-16s\n","名字","年龄","性别","号码","地址");
		printf("%-5s \t%-5d \t%-5s \t%-12s \t%-30s\n",ps->data[pos].name,
				ps->data[pos].age,
				ps->data[pos].sex,
				ps->data[pos].tele,
				ps->data[pos].addr);
		
	}
}

void ModifyContact(struct Contact* ps)
{
	int pos = 0;
	char name[MAX_NAME];
	printf("请输入需要修改人的名字");
	scanf("%s",name);
	pos = FindMemName(ps,name);
	if(pos == -1)
	{
		printf("要查找的人不存在\n");

	}
	else
	{
		printf("请输入名字:>");
		scanf("%s",ps->data[pos].name);  
		printf("请输入年龄:>");
		scanf("%d",&(ps->data[pos].age));
		printf("请输入性别:>");
		scanf("%s",ps->data[pos].sex); 
		printf("请输入号码:>");
		scanf("%s",ps->data[pos].tele);
		printf("请输入地址:>");
		scanf("%s",ps->data[pos].addr);

		printf("修改成功\n");
	}

}
int cmp_struct(const void* a,const void* b)
{
	int mark1 = ((struct PeoInfo*)a)->age;
	int mark2 = ((struct PeoInfo*)b)->age;
	return mark1 > mark2 ? 1:-1;

}
void SortContact(struct Contact* ps)
{
	qsort(ps->data,ps->size,sizeof(struct PeoInfo),cmp_struct);

}
void DestroyContact(struct Contact* ps)
{
	free(ps->data);
	ps->data = NULL;
}