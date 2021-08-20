#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

//冒泡排序
//void Bubble_sort(int arr[],int sz)
//{
//	int i = 0;
//	for(i = 0;i < sz-1;i++)
//	{
//		int j = 0;
//		for(j = 0;j < sz-i-1;j++)
//		{
//			if(arr[j] > arr[j+1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j+1];
//				arr[j+1] = tmp;
//
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[10] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	int i = 0;
//	Bubble_sort(arr, sz);
//	for(i = 0;i <= 9;i++)
//	{
//		printf("%d ",arr[i]);
//	}
//	return 0;
//}


//qsort - 库函数 - 排序
//void qsort( void* base,
			//size_t num,
			//size_t width,
		    //int(__cdecl*compare)(const void*,const void*));

//base	——  目标数组的起始位置
//num	——  数组的大小
//width	——  一个元素的字节sizeof(arr[i])
//(__cdecl*compare)(const void*,const void*)	——	元素的比较方法
//void* 可以接受任意类型的指针，但是在解引用的时候*p是不可以的。p++也不行，因为p的字节不确定
//
//int cmp_int(const void* e1,const void* e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
//int main()
//{
//	int arr[10] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	int i = 0;
//	qsort(arr,sz,sizeof(arr[0]),cmp_int);
//	for(i = 0;i <= 9;i++)
//	{
//		printf("%d ",arr[i]);
//	}
//	return 0;
//}
//int cmp_float(const void* e1,const void* e2)
//{
//	return((int)(*(float*)e1 - *(float*)e2));
//}
//int main()
//{
//	float arr[10] = {9.1, 8.2, 7.3, 6.4, 5.2, 4.2, 3.3, 2.2, 1.2, 0.2};
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	int i = 0;
//	qsort(arr,sz,sizeof(arr[0]),cmp_float);
//	for(i = 0;i <= 9;i++)
//	{
//		printf("%f ",arr[i]);
//	}
//	return 0;
//}
//struct Stu
//{
//	char name[20];
//	int age;
//};
//int cmp_stu(const void* e1,const void* e2)
//{
//	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;  
//}
//int main()
//{
//	struct Stu s[3] = {{ "zhangsan" , 20 },{ "lisi" , 30 },{ "wangwu" , 10 }};
//	int sz = sizeof(s)/sizeof(s[0]);
//	qsort(s,sz,sizeof(s[0]),cmp_stu);
//
//	return 0;
//}
