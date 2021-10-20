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
	char name[MAX_NAME];   //����
	int age;			   // ����
	char sex[MAX_SEX];	   //�Ա�
	char tele[MAX_TELE];   //����
	char addr[MAX_ADDR];   //��ַ
};

//ͨѶ¼����
struct Contact
{
	struct PeoInfo *data; //��ų�Ա��Ϣ
	int size;    //��¼�Ѿ�¼��ĳ�Ա��
	int capacity;//��ǰͨѶ¼���������
};

//������ʼ������
void InitContact(struct Contact* ps);
//���������Ϣ����
void ADDContact(struct Contact* ps);
//������ʾ��Ϣ����
void ShowContact(const struct Contact* ps);
//����ɾ����Ϣ����
void DelContact(struct Contact* ps);
//����������Ϣ����
void SearchContact( struct Contact* ps);
//�����޸���Ϣ����
void ModifyContact(struct Contact* ps);
//����������Ϣ����
void SortContact(struct Contact* ps);
//�����ͷſռ亯��
void DestroyContact(struct Contact* ps);
//����������Ϣ����
void SaveContact(struct Contact* ps);
//����������Ϣ����
void LoadContact(struct Contact* ps);

