#define _CRT_SECURE_NO_WARNINGS 1
//����ѧϰָ��
#include <stdio.h>


//int main()
//{
//	int a = 0x11223344;
//	//int* pa = &a;
//	//*pa = 0;//������ǽ�a�ĵ�ַ��Ϊ0��
//	char* pc = &a;
//	*pc = 0;//ָ�����;�����ָ����н����ò�����ʱ���ܹ����ʿռ�Ĵ�С
//	//int* p:*p�ܹ������ĸ��ֽ�
//	//char* p��*p�ܹ�����һ���ֽ�
//	//double* p��*p�ܹ����ʰ˸��ֽ�
//	/*printf("%p\n",pc);*/
//	return 0;
//}
//int main()
//{
//	int a = 0x11223344;
//	int* pa = &a;
//	char* pc = &a;
//	printf("%p\n",pa);
//	printf("%p\n",pa+1);
//	printf("%p\n",pc);
//	printf("%p\n",pc+1);
//	//ָ�����;�����ָ����һ���߶�Զ������ָ���һ��Ҫ���Ӷ��ٸ��ֽ�
//	//int*p��p+1 ����4���ֽ�
//	//char*p��p+1 ����1���ֽ�
//	//double*p��p+1 ����8���ֽ�
//
//	return 0;
//}
//int main()
//{
//	int arr[10] = {0};
//	int* p = arr;//������-��Ԫ�صĵ�ַ
//	
//	int i = 0;
//	for(i = 0;i < 10;i++)
//	{
//		*(p+i) = 1;//����ַ�޸�Ϊ1
//	}
//	return 0;
//}
//int main()
//{
//	int arr[10] = {0};
//	int *p = arr;
//	int i = 0;
//	for(i = 0;i <= 11;i++)
//	{
//		*(p++) = i;//��ָ�볬�����鷶Χ��*p����Ұָ��
//	}
//	return 0;
//}
//int* test()
//{
//	int a = 10;
//	return &a;
//}
//int main()
//{
//	int *p = test();
//	*p = 20;//ָ��ָ��Ŀռ��ͷţ���Ϊa�ڳ�test�ĺ�����ͬʱ����ַ�������ˣ���ַ�ڴ�Ķ���Ҳ������
//	return 0 ;
//}
//Ұָ��ĳ���
//int main()
//{
//	//δ��ʼ����ָ�����
//	int* p;//�ֲ���������ʼ��������Ĭ����һ�����ֵ
//	*p = 20;
//	return 0;
//}
//int main()
//{
//	int a[10] = {0};
//	int i = 0;
//	int*p = a;
//	for(i = 0;i < 11;i++)//Ұָ�룬ָ���Խ�����
//	{
//		*p = i;
//		p++;
//	}
//	return 0;
//}
//ָ�������
//1.ָ��+-����
//int main ()
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	int i = 0;
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	int * p = arr;
//	for(i = 0;i < 5;i++)
//	{
//		printf("%d \n",*p);
//		p+=2;
//		
//	}
//	return 0;
//}
//2.ָ��-ָ��
//int main()
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	printf("%d\n",&arr[9] - & arr[0]);//ָ���ָ��õ���������ָ����Ԫ�ظ���
//	return 0;
//}
//int my_strlen(char * str)
//{
//	char* start = str;
//	char* end = str;
//	while(*end != '\0')
//	{
//		end++;
//	}
//	return  end - start;
//}
//int main()
//{
//	//strlen - ���ַ�������
//	char arr[] = "wang";
//	int len = my_strlen(arr);
//	printf("%d\n",len);
//	return 0;
//}
//int main()
//{
//	int arr[10] = {0};
//	printf("%p\n",arr);//��Ԫ�صĵ�ַ
//	printf("%p\n",arr+1);
//
//	printf("%p\n",&arr[0]);//��Ԫ�صĵ�ַ
//	printf("%p\n",&arr[0]+1);
//
//	printf("%p\n",&arr);//��������ĵ�ַ
//	printf("%p\n",&arr+1);
//
//
//	//1.&arr - &������ - ������������Ԫ�صĵ�ַ����������ʾ��������-&������ ȡ��������������ĵ�ַ
//	//2.sizeof��arr��-sizeof(������)-��������ʾ����������-sizeof(������)���������������Ĵ�С
//
//}
//int main()
//{
//	int arr[10] = {0};
//	int *p = arr;
//	int i = 0;
//	for(i = 0;i < 10;i++)
//	{
//		printf("%p    %p\n",p,&arr[i]);
//		p++;
//	}
//	return 0;
//}
//����ָ��
//int main()
//{
//	int a = 10;
//	int *pa = &a;
//	int ** ppa = &pa;//ppa���Ƕ���ָ��
//	printf("%p   0X%02X",pa,*ppa);
//	return 0;
//}
//ָ������ - - ���ָ�������
//����ָ�� - - ָ��
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int c = 30;
//	//int arr[10];
//	int * arr2[3] = {&a,&b,&c};
//	printf("%d\n",*arr2[1]);//������
//	printf("%p\n",arr2[1]);//ȡ��ַ
//	return 0 ;
//}