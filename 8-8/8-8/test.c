#define _CRT_SECURE_NO_WARNINGS 1
//�ṹ���ѧϰ
#include <stdio.h>

//����һ��ѧ����һЩ����
//����
//����
//�绰
//�Ա�
//struct Stu  //Stu�ǽṹ���ǩ
//{
//	//��Ա����
//	char name[20];
//	short age;            //����һ���ṹ������
//	char tele[12];
//	char sex[5];
//
//}s1, s2, s3;//������ȫ�ֵĽṹ�����

//typedef struct Stu  //Stu�ǽṹ���ǩ
//{
//	//��Ա����
//	char name[20];
//	short age;            //����һ���ṹ������
//	char tele[12];
//	char sex[5];
//
//}Stu;    //���� ��struct�ض���ΪStu��
//int main()
//{
//	//struct Stu s;     //�����ṹ��������ֲ��Ľṹ�������
//
//	Stu s2 = {"����", 20,"15896545652","��"};       // 
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
//	struct T t = {"hehe",{10,'w',"hello i am iron man",3.14},arr};//���������ṹ����г�ʼ��
//	printf("%s\n",t.ch);	//hehe
//	printf("%s\n",t.s.arr);	//hello i am iron man
//	printf("%lf\n",t.s.d);  //3.14
//	printf("%s\n",t.pc);    //hello
//	return 0;
//}
typedef struct Stu  
{
	//��Ա����
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
//	Stu s = {"����",40,"15896532561","��"};
//	//Print(s);
//	Print1(&s);
//	return 0;
//}
