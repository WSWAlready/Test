#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//
//int is_left(char* str1,char* str2)
//{
//	
//	
//	//��str1�ַ�����׷��һ��str1�ַ����õ�  abcdefabcdef
//	//strcat�ַ���׷�Ӻ���,�����Լ�׷���Լ���ʱ����ʹ��strcat����
//	strncat(str1,str1,6);
//	char* ret = strstr(str1,str2);
//	//�ж�str2ָ����ַ����Ƿ���str1ָ����ַ������Ӵ�
//	
//	//strstr-���Ӵ�
//	if(ret == NULL)
//	{
//		return 0;
//	}
//	else
//	{
//		return 1;
//	}
//}
//int main()
//{
//	char arr1[30] = "abcdef";
//	char arr2[] = "cdefab";
//	int ret = is_left(arr1,arr2);
//
//	if(ret == 1)
//	{
//		printf("Yes\n");
//	}
//	else
//	{
//		printf("No\n");
//	}
//	return 0;
//}

//���Ͼ���
//�����ÿ���Ǵ����ҵ�����ÿһ�д��ϵ��µ���������ĳ�����Ƿ��Ǿ����ڵ�����


//int FindNum(int arr[3][3],int num, int row,int col)
//{
//	int x = 0;
//	int y = col - 1;
//	while(x<= row -1 && y>= row - 3)
//	{
//		if(arr[x][y] < num)
//		{
//			x++;
//		}
//		else if(arr[x][y] > num)
//		{
//				y--;
//		}
//		else
//		{
//			return 1;
//		}
//	}
//	return 0;
//}

//int FindNum(int arr[3][3],int num, int* px,int* py)
//{
//	int x = 0;
//	int y = *py - 1;
//	while(x<= *px -1 && y>=*py - 3)
//	{
//		if(arr[x][y] < num)
//		{
//			x++;
//		}
//		else if(arr[x][y] > num)
//		{
//				y--;
//		}
//		else
//		{
//			*px = x;
//			*py = y;
//			return 1;
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
//	int k = 6;
//	int x = 3;
//	int y = 3;
//	int ret = FindNum(arr,k,&x,&y);
//	if(ret == 1)
//	{
//		printf("�ҵ���\n");
//		printf("�±��� %d %d\n",x,y);
//
//	}
//	else
//	{
//		printf("�Ҳ���\n");
//	}
//	return 0;
//}
//int my_strlen(char* str)
//{
//	int count = 0;
//	while(*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//int main()
//{
//	
//	int len = my_strlen("abcdef");
//	printf("%d\n",len);
//}
//strlen ��������size_t����unsigned int���޷�������

//char* my_strcpy(char* dest,char* src)
//{
//	char* ret = dest;
//	while(*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//
//
//
//int main()
//{
//	char arr1[] = "abcdefghi";
//	char arr2[] = "bit";
//	my_strcpy(arr1,arr2);
//	printf("%s\n",arr1);
//	return 0;
//}

//
//int main()
//{
//	char arr1[] = "hello";
//	char arr2[] = "world";
//	strcat(arr1,arr2);
//	printf("%s\n",arr1);//����д����ɴ���ԭ�����arr1������ڴ治��������Խ�����
//
//}

char * my_strcat(char* dest,char* src)
{
	char* set = dest;
	//�ҵ�Ŀ���ַ�����'\0'
	while(*dest != '\0')
	{
		dest++;
	}
	while(*dest++ = *src++)
	{
		;
	}
	return set;
}

int main()
{
	char arr1[30] = "hello";
	char arr2[] = "world";
	my_strcat(arr1,arr2);
	printf("%s\n",arr1);
}