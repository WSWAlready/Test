#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>


//int main()
//{
//	int arr1[] = {1,2,3,4,5};
//	int arr2[5] = {0};
//	memcpy(arr2,arr1,sizeof(arr1));
//	return 0;
//}

//void* my_memcpy(void* dest,const void* src,int k)
//{
//	void* ret = dest;
//	assert(dest !=NULL);
//	assert(src !=NULL);
//	while(k--)
//	{
//		*(char*)dest = *(char*)src;
//		++(char*)dest;
//		++(char*)src;
//	}
//	return ret;
//}

//int main()
//{
//	int i = 0;
//	int arr1[] = {1,2,3,4,5};
//	int arr2[5] = {0};
//	my_memcpy(arr2,arr1,sizeof(arr1));//������һ���ռ��ڽ��п���
//	for(i = 0;i < 5;i++)
//	{
//		printf("%d ",arr2[i]);
//	}
//	return 0;
//}
//
//void* my_memmove(void* dest,const void* src,size_t k)
//{
//	void* ret = dest;
//	assert(dest !=NULL);
//	assert(src !=NULL);
//	if(*(char*)dest < *(char*)src)
//	{
//		while(k--)
//		{
//			*(char*)dest = *(char*)src;
//			++(char*)dest;
//			++(char*)src;
//		}
//	}
//	else
//	{
//		while(k--)
//		{
//			*((char*)dest+k) = *((char*)src+k);
//			
//		}
//	}
//	return ret;
//}
//int main()
//{
//	int i = 0;
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};//��12345�����Ƶ�34567��ȥ��memmove�Ǵ���ͬһ�ռ俽��
//	my_memmove(arr+3,arr,20);
//	for(i = 0;i < 10;i++)
//	{
//		printf("%d ",arr[i]);
//	}
//}



//�ṹ��
//struct tag //�ṹ�������Լ�����
//{
//	member��list   //��Ա�б�
//
//}variable��list  //�����б�


//����һ���ṹ������
//����һ��ѧ������
//����ѧ��������+����+�绰+�Ա�
//struct Stu
//{
//	char name[20];//����
//	char tele[12];//�绰
//	char sex[10];//�Ա�
//	int age;    //����         //�����ĸ����ǳ�Ա����
//}s3,s4,s5;//Ҳ��ȫ�ֱ���
//struct Stu s3;//��ʱ��ȫ�ֱ���
//
//int main()
//{
//	struct Stu s1;
//	struct Stu s2;
//
//	return 0;
//}

//struct 
//{
//	int a;
//	char c;
//
//}sa;//�����ṹ������
//struct 
//{
//	int a;
//	char c;
//
//}* psa;//�����ṹ��ָ������
//int main()
//{
//
//	return 0;
//}



//struct Node
//{
//	int data;//4
//	//struct Node n;�ڴ�ռ䲻����
//	struct Node* next;//�ṹ��������ʹ��ָ������
//};
//int main()
//{
//	
//	return 0;
//}


//typedef struct Node
//{
//	int data;//4
//	//struct Node n;�ڴ�ռ䲻����
//	struct Node* next;//�ṹ��������ʹ��ָ������
//}Node;//�ض���
//int main()
//{
//	struct Node n1;
//	Node n2;//Node == struct Node
//}
//struct Node
//{
//	char c;
//	int a;
//	double d;
//	char arr[20];
//};
//int main()
//{
//	struct Node s = {'c',4,3.14,"hello world"};
//	printf("%c %d %f %s",s.c,s.a,s.d,s.arr);
//	return 0;
//}

//struct T
//{
//	double weight;
//	short age;
//};
//
//struct Node
//{
//	char c;
//	int a;
//	struct T st;
//	double d;
//	char arr[20];
//};
//int main()
//{
//	struct Node s = {'c',4,{55.6,30},3.14,"hello world"};//{55.6,30}����ľ���struct���͵�ֵ
//	printf("%c %d %f %f %s",s.c,s.a,s.st.weight,s.d,s.arr);
//	return 0;
//}

struct S1
{
	char c1;
	char c2;
	int a;
};
struct S2
{
	char c1;
	int a;
	char c2;
	
};
int main()
{
	struct S1 s1 = {0};
		struct S2 s2 = {0};
	printf("%d\n",sizeof(s1));


	printf("%d\n",sizeof(s2));

}
