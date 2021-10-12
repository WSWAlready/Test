#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<errno.h>
#include<string.h>



//malloc    开辟空间

//int main()
//{
//	//向内存申请10个整型空间
//	int* p = (int*)malloc(10*sizeof(int));
//	if(p == NULL)
//	{
//		printf("%s\n",strerror(errno));
//	}
//	else
//	{
//		//正常使用空间
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
//		free(p); //   释放空间
//	return 0;
//}



