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
int* test()
{
	int a = 10;
	return &a;
}
int main()
{
	int *p = test();
	*p = 20;//ָ��ָ��Ŀռ��ͷţ���Ϊa�ڳ�test�ĺ�����ͬʱ����ַ�������ˣ���ַ�ڴ�Ķ���Ҳ������
	return 0 ;
}