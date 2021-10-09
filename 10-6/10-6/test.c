#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

//int main()
//{
//	char* p1 = "abcdefg";
//	char* p2 = "abcdfed";
//	int ret = strcmp(p1,p2);//比较的不是大小，比较的是字符内容
//
//	printf("%d\n",ret);
//	return 0;
//}

//int my_strcmp(const char* dest,const char* src)
//{
//	while(*dest == *src)
//	{
//		if(*dest == '\0')
//		{
//			return 0;
//		}
//		dest++;
//		src++;
//	}
//	if(*dest > *src)
//	{
//		return 1;
//	}
//	else if(*dest < *src)
//	{
//		return -1;
//	}
//}
//
//int main()
//{
//	char* p1 = "abcdefg";
//	char* p2 = "abcdfed";
//	int ret = my_strcmp(p1,p2);
//
//	printf("%d\n",ret);
//	return 0;
//}


//int main()
//{
//	char arr1[5] = "abc";
//	char arr2[] = "hello world";
//	strncpy(arr1,arr2,4);
//	printf("%s\n",arr1);
//}

//char* my_strncpy(char* dest,char* src,int k)
//{
//	char* ret = dest;
//	int i = 0;
//	for(i = 0;i < k;i++)
//	{
//		*dest++ = *src++;
//	}
//	
//	return ret;
//}
//
//int main()
//{
//	char arr1[] = "abcgdgfdgdf";
//	char arr2[] = "hellewaewaewaeaw";
//	char* ret = my_strncpy(arr1,arr2,6);
//	printf("%s\n",ret);
//}

//int main()
//{
//	char* p1 = "abcdefa";
//	char* p2 = "def";
//	char* ret = strstr(p1,p2);
//	if(ret == NULL)
//	{
//		printf("字串不存在\n");
//	}
//	else
//	{
//		printf("%s\n",ret);
//	}
//	return 0;
//}

//char* my_strstr(const char* dest,const char* src)
//{
//	char *ret1 = NULL;
//	char *ret2 = NULL;
//	char *cur = (char*)dest; 
//	if(*src == '\0')
//	{
//		return (char*)dest;
//	}
//	while(*cur)
//	{
//		ret1 = cur;
//		ret2 = (char*)src;
//		while((*ret1 != '\0') && (*ret2 != '\0') && (*ret1 == *ret2))
//		{
//			ret1++;
//			ret2++;
//			
//		}
//		if(*ret2 == '\0')
//		{
//			return cur;
//		}
//		cur++;
//	}
//	return NULL;
//	
//}
//
//int main()
//{
//	char* p1 = "abcdefdsdasd";
//	char* p2 = "defd";
//	char* ret = strstr(p1,p2);
//	if(ret == NULL)
//	{
//		printf("子串不存在\n");
//	}
//	else
//	{
//		printf("%s\n",ret);
//	}
//	return 0;
//}


//int main()
//{
//	//192.168.31.121
//	//192 168 31 121 - strtok
//	//
//		return 0;
//}