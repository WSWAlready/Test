#define _CRT_SECURE_NO_WARNINGS 1
//Debug版本的可执行程序   可以调试，文件中包含了文件信息
//Releas版本的可执行程序  不可以调试，往往是对代码进行优化
#include <stdio.h>
#include <stdlib.h>

//int main()
//{
//	int i = 0;
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	for(i = 0;i <= 12;i++)
//	{
//		
//		printf("hello\n");
//		arr[i] = 0;
//
//	}
//	system("pause");
//	return 0;
//}
//栈区的默认使用：先使用高地址处的空间，再使用低地址处的空间
//数组随着下标的增长：地址是由低到高的变化
//将下标0-9的元素改为0；
//下标为10的元素和下标是11的元素.可能下标为12的元素为i就是将i的值改为0了；
//

//F5-启动和调试
//F9-断点；再次使用F5，代码执行到代码出停止。快速跳到代码可能出现的位置
//F10-逐过程，逐一处理，不进入函数内部
//F11-逐语句 ，可以进入函数内部，shift+F11跳出
//int main()//该程序有问题，自己进行调试
//{
//	int i = 0;
//	int sum = 0;
//	int n = 0;
//	int ret = 1;
//	scanf("%d",&n);
//	for(i = 1;i<= n;i++)
//	{
//		int j = 0;
//		ret = 1;
//		for (j = 1;j <= i;j++)
//		{
//			ret *=j ;
//		}
//		sum += ret;
//	}
//	printf("%d\n",sum);
//	return 0;
//}
