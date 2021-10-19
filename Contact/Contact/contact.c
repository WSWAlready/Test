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
			printf("���ݳɹ�\n");
		}
		else
		{
			printf("����ʧ��\n");
		}
	}
}

void ADDContact(struct Contact* ps)
{
	//��⵱ǰͨѶ¼�����
	//���˾�����
	//��������������
	Check_Capacity(ps);
	//if(ps->size == MAX)
	//{
	//	printf("ͨѶ¼�������޷�����\n");

	//}
	//else
	//{
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

	//}
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
	//1.������Ҫɾ���˵�λ��
	int pos = FindMemName(ps,name);//�ҵ��˷����±�Ԫ�أ��Ҳ�������-1
	
	printf("������ɾ���˵�����:>");
	scanf("%s",name);
	
	
	//2.ɾ��
	if(pos == -1)
	{
		printf("Ҫɾ������Ϣ������\n");
	}
	else
	{
		int j = 0;
		for(j = pos; j < ps->size - 1;j++)
		{
			ps->data[j] = ps->data[j+1];
		}
		ps->size--;
		printf("ɾ���ɹ�\n");
	}

}
void SearchContact( struct Contact* ps)
{
	int pos = 0;
	char name[MAX_NAME];
	printf("����������˵�����");
	scanf("%s",name);
	pos = FindMemName(ps,name);
	if(pos == -1)
	{
		printf("Ҫ���ҵ��˲�����\n");

	}
	else
	{
		printf("%-5s \t%-5s \t%-5s \t%-12s \t%-16s\n","����","����","�Ա�","����","��ַ");
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
	printf("��������Ҫ�޸��˵�����");
	scanf("%s",name);
	pos = FindMemName(ps,name);
	if(pos == -1)
	{
		printf("Ҫ���ҵ��˲�����\n");

	}
	else
	{
		printf("����������:>");
		scanf("%s",ps->data[pos].name);  
		printf("����������:>");
		scanf("%d",&(ps->data[pos].age));
		printf("�������Ա�:>");
		scanf("%s",ps->data[pos].sex); 
		printf("���������:>");
		scanf("%s",ps->data[pos].tele);
		printf("�������ַ:>");
		scanf("%s",ps->data[pos].addr);

		printf("�޸ĳɹ�\n");
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