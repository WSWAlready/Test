#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stddef.h>

//�ṹ���ڴ�������
//1.��һ����Ա����ṹ�����ƫ����Ϊ0 �ĵ�ַ��
//2.������Ա����Ҫ���뵽���������������ĵ�ַ�����������Ǳ�����Ĭ�ϵ�һ����������ó�Ա��С�Ľ�Сֵ��VSĬ�϶�������8
//�ͱ���char������һ���ֽڣ���������int���ͣ���ôint������4���ֽڣ��������8�Ƚϣ���С����4������int����Ӧ�÷����ڴ�Ϊ4��λ���ϣ�����1-3���ڴ��˷���

//3.�ṹ���ܴ�С������������ÿһ����Ա��������һ������������������
//4.���Ƕ���˽ṹ���������ṹ���Ƕ�׶��뵽�Լ��������������ṹ���ڲ�Ԫ�صĶ��������������������ṹ��������С�������������������ṹ���ڲ�Ԫ�صĶ���������������


//�޸�Ĭ�϶�����Ϊ4
//#pragma pack(4)
//struct S
//{
//	char c1;
//	double d;
//
//};
//
//int main()
//{
//	struct S s1;
//	printf("%d\n",sizeof(s1));
//	return 0;
//}
//#pragma pack() //ȡ�����õĶ���������ԭΪĬ�ϵ�

//struct S
//{
//	char c1;
//	int i;
//	double d;
//
//};
//
//int main()
//{
//	//offsetof();//����ƫ����
//	printf("%d\n",offsetof(struct S,c1));//offsetof�Ǻ�
//	printf("%d\n",offsetof(struct S,i));
//	printf("%d\n",offsetof(struct S,d));
//
//	return 0;
//}


//struct S
//{
//	int a;
//	char c;
//	double d;
//};
//void Init(struct S* pa)
//{
//	pa->a = 100;
//	pa->c = 'w';
//	pa->d = 3.14;
//
//}
//void Printf(struct S tmp)
//{
//	printf("%d %c %lf\n",tmp.a,tmp.c,tmp.d);
//}
//int main()
//{
//	struct S s;
//	Init(&s);
//	Printf(s);
//	return 0;
//}


//λ�Ρ�������λ��λ����������ʡ�ռ�ġ�
//λ���Ǹ������Ϳ��ٿռ䣬int���;��ǿ����ĸ��ֽڵĿռ䣬�ĸ��ֽھ���32��bitλ��Ȼ��int:����ֽ�����ȥ������һ�ο����ĸ��ֽڵĿռ䡣
//struct A
//{
//	int _a : 2;//����bitλ
//	int _b : 5;//���bitλ
//	int _c : 10;//10��bitλ
//	int _d : 30;//30��bitλ
//	//
//};
//int main()
//{
//	struct A s;
//	printf("%d\n",sizeof(s));//8���ֽ�
//	return 0;
//}


//ö��
//enum Day  //ö������
//{
//	//ö�ٿ���ȡֵ-����
//	Mon = 1,   //�������ó�ʼֵ
//	Tues,
//	Wed,
//	Thurs,
//	Fri,
//	Sat,
//	Sun
//};
//int main()
//{
//	enum Day d = Wed;
//	//����д��enum Day d = 3;���ߵ����Ͳ�һ���������ö�����ͣ��ұ���int����
//	printf("%d %d %d %d %d %d %d ",Mon,Tues,Wed,Thurs,Fri,Sat,Sun);
//	return 0;
//}
// ö�ٵ��ŵ㣺
//���Ӵ���Ŀɶ��ԺͿ�ά����
//��#define����ı�ʶ���Ƚ�ö�������ͼ�飬�����Ͻ�
//��ֹ��������Ⱦ����װ��
//���ڵ���
//ʹ�÷��㣬һ�ο��Զ���������


//����-������

union Un
{
	char c;
	int i;
	//����ͬһ��ռ�

};

int main()
{
	union Un u;
	printf("%d\n",sizeof(u));
	printf("%p\n",&u);
	printf("%p\n",&(u.c));
	printf("%p\n",&(u.i));

}