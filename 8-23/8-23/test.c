#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//int cmp_int(const void*e1,const void*e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
//void Swap(char*buf1,char*buf2,int width)
//{
//	int i = 0;
//	for(i = 0;i < width;i++)
//	{
//		char tmp = *buf1;
//		*buf1 = *buf2;
//		*buf2 = tmp;
//		buf1++;
//		buf2++;
//	}
//}
//void bubble_sort(void*base ,int sz,int width,int (*cmp)(void*e1,void*e2))
//{
//	int i = 0;
//	for(i = 0;i < sz - 1;i++)
//	{
//		int j = 0;
//		for(j = 0;j < sz - 1 - i;j++)
//		{
//			if(cmp((char*)base + (j)*width , (char*)base + (j+1)*width) > 0)//ǿ��ת��Ϊchar*����ָ�������ƶ�width���ֽ�(����int����,����ƫ���ĸ��ֽڳ��ȣ��͵�����һ��Ԫ�صĵ�ַ)
//			{
//				Swap((char*)base + (j)*width , (char*)base + (j+1)*width , width);
//			}
//		}
//	}
//
//}
//void test1()
//{
//	int arr[10] = {9 ,8 ,7, 6, 5, 4, 3, 2, 1, 0};
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	//ʹ��bubble_sort�ĳ���Աһ��֪���Լ��������ʲô����
//	//��Ӧ��֪����αȽ������е�Ԫ��
//	bubble_sort(arr,sz,sizeof(arr[0]),cmp_int);
//}
//int main()
//{
//	test1();
//	return 0;
//}

//int main()
//{
//	int arr[] = {0,1,2};
//	printf("%d\n",sizeof(arr[0]));//�ĸ��ֽڳ���
//	return 0;
//}
//int main()
//{
//	int a[] = {1,2,3,4};
//	printf("%d\n",sizeof(a));//16
//	printf("%d\n",sizeof(a + 0));//4/8 �����������ʾ��Ԫ�ص�ֵ��a+0������Ԫ�ص�ַ 
//	printf("%d\n",sizeof(*a));//4 ��������ʾ��Ԫ�ص�ַ��*a�����û�����Ԫ�ص�ֵ
//	printf("%d\n",sizeof(a + 1));//4/8 �����������ʾ��Ԫ�ص�ֵ��a+1�ǵڶ���Ԫ�ص�ַ
//	printf("%d\n",sizeof(a[1]));//4 �ڶ���Ԫ�ص�ֵ
//	printf("%d\n",sizeof(&a));//4 &aȡ����������ĵ�ַ��������ĵ�ַҲ�ǵ�ַ��32λ��4���ֽ�
//	printf("%d\n",sizeof(*&a));//16 *&a�����ã���������&a����ʮ�����ֽ�
//	printf("%d\n",sizeof(&a + 1));//4 ָ������һ������ĵ�ַ����ַ��4/8���ֽ�
//	printf("%d\n",sizeof(&a[0]));//4/8 &a[0]�ǵ�һ��Ԫ�صĵ�ַ
//	printf("%d\n",sizeof(&a[0] + 1));//4/8 �ǵڶ���Ԫ�صĵ�ַ
//
//	return 0;
//}
//int main()
//{
//	char arr[] = {'a', 'b', 'c', 'd', 'e', 'f'};
//	printf("%d\n",sizeof(arr));//6 ����Ԫ�أ�ÿ��Ԫ��ռ��һ���ֽ�
//	printf("%d\n",sizeof(arr + 0));//4/8 ������Ԫ�ص�ַ����ַ��4/8���ֽ�
//	printf("%d\n",sizeof(*arr));//1 *arr�ǽ����ã�����Ԫ�ص�ֵ
//	printf("%d\n",sizeof(arr[1]));//1 �����еĵڶ���Ԫ��ֵ
//	printf("%d\n",sizeof(&arr));//4/8 &arr�ǵ�ַ����ַ�Ĵ�С��4/8���ֽ�
//	printf("%d\n",sizeof(&arr + 1));//4/8 &arr+1������һ������ĵ�ַ����ַ�Ĵ�С��4/8���ֽ�
//	printf("%d\n",sizeof(&arr[0] + 1));//4/8 �ڶ���Ԫ�صĵ�ַ����ַ�Ĵ�С��4/8���ֽ�
//
//	return 0;
//}
//int main()
//{
//	char arr[] = {'a', 'b', 'c', 'd', 'e', 'f'};
//	printf("%d\n",strlen(arr));//���ֵ��arr[],\0��һ���ҵ�
//	printf("%d\n",strlen(arr + 0));//���ֵ
//	printf("%d\n",strlen(*arr));//�Ƿ�����
//	printf("%d\n",strlen(arr[1]));//�Ƿ�����
//	printf("%d\n",strlen(&arr));//���ֵ
//	printf("%d\n",strlen(&arr + 1));//���ֵ��������������
//	printf("%d\n",strlen(&arr[0] + 1));//���ֵ
//
//	return 0;
//}