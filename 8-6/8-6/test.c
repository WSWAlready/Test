#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//void Init(int arr[],int sz)
//{
//	int i = 0;
//	for(i = 0;i < sz;i++ )
//	{
//		arr[i] = 0;
//		printf("%d ",arr[i]);
//	}
//}
//int main()
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	Init(arr,sz);
//	return 0;
//}

//void Print(int arr[],int sz)
//{
//	int i = 0;
//	for(i = 0;i < sz;i++ )
//	{
//		printf("%d ",arr[i]);
//	}
//}
//void  Revers(int arr[],int sz)//ʹ���鵹��
//{
//	int left = 0;
//	int right = sz - 1;
//	
//	while(left <= right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//	
//}
//int main()
//{
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	Revers(arr,sz);
//	Print(arr,sz);
//	return 0;
//}
//���������Ԫ�ػ���
void Print(int arr[],int sz)
{
	int i = 0;
	for(i = 0;i < sz;i++ )
	{
		printf("%d ",arr[i]);
	}
}
//void Exchange(int arr1[],int arr2[],int sz)
//{
//	int i = 0;
//	for(i = 0;i < sz; i++)
//	{
//		int tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//	}
//}
//int main()
//{
//	int arr1[] = {1,2,3,4,5};
//	int arr2[] = {6,7,8,9,10};
//	int sz = sizeof(arr1)/sizeof(arr1[0]);
//	Exchange(arr1,arr2,sz);
//	Print(arr1,sz);
//	Print(arr2,sz);
//	return 0;
//}
//int main()
//{
//	int a = 0x11223344;//�����ڴ�����44 33 22 11 
//									 
//	char* pc = (char*)&a;
//	*pc = 0;
//	printf("%x\n",a);
//	return 0;
//
//}
/*int i;*///ȫ�ֱ���  ��ʼ��Ĭ��0��
//int main()
//{
//	i--;
//	//-1
//	//10000000000000000000000000000001 ԭ��
//	//11111111111111111111111111111110 ����
//	//01111111111111111111111111111110 ���� �����ʱ�򽫷���λ�任���޷���
//
//	if(i > sizeof(i))//�з��ŵ����֣�����Ҫ�Ƚ�������ת��Ϊ�޷�����
//	{
//		printf(">\n");
//	}
//	else 
//	{
//		printf("<\n");
//	}
//	return 0;
//}
//����һ�����Ķ�������1����Ŀ��
//int  Counter(unsigned int i)//unsigned��Ҫ�Ƿ�ֹ�������������Ĳ���ķ���λ����
//{
//	int count = 0;
//	while(i)
//	{
//		if(i%2 == 1)
//		{
//			
//			count++;
//		}
//		i = i/2;
//	}
//	return count;
//}
//int main()
//{
//	int  i = 0;
//	int count = 0;
//	printf("������һ����:");
//	scanf("%d",&i);
//	count = Counter(i);
//	printf("%d\n",count);
//	return 0;
//}
// ��λ��ķ���
//int Counter(int i)
//{
//	int n = 0;
//	int count = 0;
//	for(n = 0;n < 32;n++)
//	{
//		if(((i >> n) & 1) == 1)
//		{
//			count++;
//		}
//	}
//	return count;
//}
//int main()
//{
//	int i = 0;
//	int count = 0;
//	printf("������һ������");
//	scanf("%d",&i);
//	count = Counter(i);
//	printf("%d\n",count);
//	return 0;
//}