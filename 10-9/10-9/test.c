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
//	my_memcpy(arr2,arr1,sizeof(arr1));//不能在一个空间内进行拷贝
//	for(i = 0;i < 5;i++)
//	{
//		printf("%d ",arr2[i]);
//	}
//	return 0;
//}

void* my_memmove(void* dest,const void* src,size_t k)
{
	void* ret = dest;
	assert(dest !=NULL);
	assert(src !=NULL);
	if(*(char*)dest < *(char*)src)
	{
		while(k--)
		{
			*(char*)dest = *(char*)src;
			++(char*)dest;
			++(char*)src;
		}
	}
	else
	{
		while(k--)
		{
			*((char*)dest+k) = *((char*)src+k);
			
		}
	}
	return ret;
}
int main()
{
	int i = 0;
	int arr[10] = {1,2,3,4,5,6,7,8,9,10};//将12345，复制到34567上去。memmove是处理同一空间拷贝
	my_memmove(arr+3,arr,20);
	for(i = 0;i < 10;i++)
	{
		printf("%d ",arr[i]);
	}
}