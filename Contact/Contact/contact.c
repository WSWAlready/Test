#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include"contact.h"


void InitContact(struct Contact* ps)
{
	memset(ps->data,0,sizeof(ps->data));
	ps->size = 0; //����ͨѶ¼���ֻ��0��Ԫ��
}

void ADDContact(struct Contact* ps)
{
	if(ps->size == MAX)
	{
		printf("ͨѶ¼�������޷�����\n");

	}
	else
	{
		printf("����������:>");
		scanf("%s",ps->data[ps->size].name);  //ps->data���ҵ�����[]���±�
		printf("����������:>");
		scanf("%d",&(ps->data[ps->size].age));
		printf("�������Ա�:>");
		scanf("%s",ps->data[ps->size].sex);
		printf("���������:>");
		scanf("%s",ps->data[ps->size].tele);
		printf("�������ַ:>");
		scanf("%s",ps->data[ps->size].addr);

		ps->size++;
		printf("��ӳɹ�\n");
		printf("Ŀǰ�Ѿ��� %d ���˵���Ϣ\n",ps->size);

	}
}

void ShowContact(const struct Contact* ps)
{
	if(ps->size == 0)
	{
		printf("ͨѶ¼�ǿյ�Ŷ\n");
	}
	else
	{
		int i = 0;
		printf("%-5s \t%-5s \t%-5s \t%-12s \t%-16s\n","����","����","�Ա�","����","��ַ");
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