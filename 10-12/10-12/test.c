#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<errno.h>
#include<string.h>



//malloc    ���ٿռ�

//int main()
//{
//	//���ڴ�����10�����Ϳռ�
//	int* p = (int*)malloc(10*sizeof(int));
//	if(p == NULL)
//	{
//		printf("%s\n",strerror(errno));
//	}
//	else
//	{
//		//����ʹ�ÿռ�
//		int i = 0;
//		for(i = 0;i < 10;i++)
//		{
//			*(p + i) = i;
//		}
//		for(i = 0;i < 10;i++)
//		{
//			printf("%d\n",*(p + i));
//		}
//	}
//		free(p); //   �ͷſռ�
//	return 0;
//}

//int main()
//{
//	int*p = realloc(NULL,40);//malloc(40);
//	return 0;
//
//}

//int main()
//{
//	int i = 0;
//	//1.�Կ�ָ��Ľ����ò���
//	int *p = malloc(40);
//	*p = 10;//malloc���ٿռ�ʧ�ܣ���NULLָ�������
//
//	//2.�Զ�̬�����ڴ��Խ�����
//	int *p2 = (int*)malloc(40);
//	if(p = = NULL)
//	{
//		return 0;
//	}
//
//	//for (int  = 0;i <= 10;i++)	//�����Խ�����
//	for (int  = 0;i < 10;i++)
//	{
//		*(p+i) = i;
//	}
//	free(p);
//	p = NNULL;
//	return 0;
//	//3.�ԷǶ�̬���ٵ��ڴ�ʹ��free�ͷ�
//  //4.ʹ��free�ͷŶ�̬�����ڴ��һ����
//  //5.��ͬһ��ռ����ͷ�
//  //6.��̬�����ڴ������ͷţ��ڴ�й©��
//}	



//void GetMemory(char *p)
//{
//	p = (char*)malloc(100);//p���ڿ��ٵ�һ���ռ䣬�ռ���׵�ַ����p�����ݡ��β�ֻ���ں����ڲ�������Ч������p��û�б��ͷţ��ᵼ���ڴ�й©
//}
//
//
//void Test(void)
//{
//	char *str = NULL;
//	GetMemory(str);//��str��ֵ����p������ʵ����str��ֵ��û���ı䣬����NULL
//	strcpy(str,"hello world");//Ŀǰstr���ǿ�ָ�룬û����Ч�Ŀռ�
//	printf(str);
//}
////
//int main()
//{
//	Test();
//	return 0;
//}

//����
//void GetMemory(char **p)
//{
//	*p = (char*)malloc(100);
//}
//
//
//void Test(void)
//{
//	char *str = NULL;
//	GetMemory(&str);
//	strcpy(str,"hello world");
//	printf(str);
//}
////
//int main()
//{
//	Test();
//	return 0;
//}

//char* GetMemory(char *p)
//{
//	p = (char*)malloc(100);
//	return p;
//}
//
//
//void Test(void)
//{
//	char *str = NULL;
//	str = GetMemory(str);
//	strcpy(str,"hello world");
//	printf(str);
//}
////
//int main()
//{
//	Test();
//	return 0;
//}

//
//char *GetMemory(void)
//{
//	static char p[] = "hello world";//�ֲ���������������������ռ�ͱ������ˡ�
//	return p;
//}
//
//
//void Test(void)
//{
//	int i = 0;
//	char *str = NULL;
//	str = GetMemory();
//printf(str);	
//}
////
//int main()
//{
//	Test();
//	return 0;
//}
//struct S
//{
//	int n ;
//	int arr[0];//�������飬���һ��Ԫ�صĴ�С�ǿ���δ֪��С�ģ��������������Ա,�����С�ɵ���
//};
//
//int main()
//{
//	//struct S s;
//	//printf("%d\n",sizeof(s));  //����ṹ���Сʱ����������������Ĵ�С
//	struct S* ps = (struct S*)malloc(sizeof(struct S) + 5 * sizeof(int));  
//	ps->n = 100;
//	int i = 0;
//	for(i = 0;i<5;i++ )
//	{
//		ps->arr[i] = i;
//	}
//	struct S* pr = (struct S*)realloc(ps,44);
//	if(pr != NULL)
//	{
//		ps = pr;
//	}
//	for(i = 5;i<10;i++ )
//	{
//		ps->arr[i] = i;
//	}
//
//	free(ps);
//	ps = NULL;
//
//	return 0;
//}


