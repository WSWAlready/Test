#define _CRT_SECURE_NO_WARNINGS 1
#include<string.h>


#define MAX 1000
#define MAX_NAME 20
#define MAX_SEX  5
#define MAX_TELE 12
#define MAX_ADDR 30

struct PeoInfo
{
	char name[MAX_NAME];   //����
	int age;     // ����
	char sex[MAX_SEX];  //�Ա�
	char tele[MAX_TELE];  //����
	char addr[MAX_ADDR]; //��ַ
};

//ͨѶ¼����
struct Contact
{
	struct PeoInfo data[MAX]; //��ų�Ա��Ϣ
	int size;    //��¼�Ѿ�¼��ĳ�Ա��
};

//������ʼ������
void InitContact(struct Contact* ps);
void ADDContact(struct Contact* ps);
void ShowContact(const struct Contact* ps);