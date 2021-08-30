#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>

//int main()
//{
//	int a[2][5] = {1,2,3,4,5,6,7,8,9,10};
//	int *pa = (int *)(&a + 1);
//	int *pc = (int *)(*(a + 1));//解引用之后是第二行就是a[1]，就代表着第二行的首元素地址
//	printf("%d,%d\n",*(pa - 1),*(pc - 1));
//	return 0;
//}
//int  main()
//{
//	int arr[10] = {1,2,3,4,5};
//	int *p = arr;
//	//*（p + 2） == p[2] == *(arr + 2) == arr[2]
//}

//int main()
//{
//	unsigned long a[] = {6,7,8,9,10};
//	unsigned long *pc;
//	pc = a;
//	*(pc + 3) += 3;
//	printf("%d,%d\n",*pc,*(pc + 3));
//	return 0;
//}

void reverse(char* str)
{
	

	int len = strlen(str);
	char* left = str;
	char* right = str + len - 1;
	while(left < right)
	{
		char tmp;
		tmp  = *right;
		*right = *left;
		*left = tmp;
		left++;
		right--;
	}

}
int main()
{
	char arr[10] = { 0 };
	scanf("%s",arr);
	//逆序函数
	reverse(arr);
	printf("%s",arr);
	return 0;
}