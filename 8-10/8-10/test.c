#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

//模拟实现strcpy函数

//void The_strcpy(char* dest,char* src)
//{
//	//while (*src != '\0')
//	//{
//	//	*dest++ = *src++;  //后置++，先使用再++
//	//	/*src++;
//	//	dest++;*/
//	//}
//	//*dest = *src;   //此时拷贝的是\0
//	//
//	if(dest !=NULL && src != NULL)
//	{
//		while (*dest++ = *src++)	// '\0'的ASCII为0 
//		{
//			/**dest++ = *src++;  */
//			;	/*src++;
//			dest++;*/
//		}
//	}
//}
//void The_strcpy(char* dest,char* src)
//{
//	assert(dest != NULL);//断言，表达式的值为真，什么也不发生。表达式为假assert会报错
//	assert(src  != NULL);
//
//	while (*dest++ = *src++)
//	{
//		;
//	}
//}
//int main()
//{
//	char arr[] = "##########";
//	char arr2[] = "bit";
//	The_strcpy(arr,arr2);//考虑指针的时候，需要考虑野指针此时是空指针
//	printf("%s\n",arr2);
//	return 0;
//}
//void The_strcpy(char* dest,const char* src)//const是放在*的左边，意思就是*src的解引用不能被修改。如果*src和*dest互换位置，则程序会报错
//{
//	assert(dest != NULL);//断言，表达式的值为真，什么也不发生。表达式为假assert会报错
//	assert(src  != NULL);
//
//	while (*dest++ = *src++)
//	{
//		;
//	}
//}
//int main()
//{
//	char arr[] = "##########";
//	char arr2[] = "bit";
//	The_strcpy(arr,arr2);//考虑指针的时候，需要考虑野指针此时是空指针
//	printf("%s\n",arr2);
//	return 0;
//}
//int main()
//{
//	const int num = 10; //常变量，不允许修改，但是从地址可以修改
//	
//	//int num = 10;
//	const int *p = &num;//这样*p的解引用就没办法使用
//	// const修饰指针放在*左边时，修饰的是*p，不能进行解引用。
//	// const放在*右边，修饰的是p，也就是修饰的地址，这时地址没办法改；但是解引用可以使用
//	*p = 20;
//	printf("%d\n",num);
//	return 0 ;
//}
//char* The_strcpy(char* dest,const char* src)//char* 是带有返回值的，
//{
//	char* ret = dest;
//	assert(dest != NULL);
//	assert(src  != NULL);
//	//把src指向的字符串拷贝到dest指向的空间，包含'\0'
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//int main()
//{
//	char arr[] = "##########";
//	char arr2[] = "bit";
//	printf("%s\n",The_strcpy(arr,arr2));
//	return 0;
//}
//实现strlen函数
int my_strlen(const char* arr)
{
	int count = 0;
	assert(arr != NULL);
	while(*arr++ != '\0')
	{
		count++;
	}
	return count;
}

int main()
{
	char arr[] = "abcdedf";
	int len = my_strlen(arr);
	printf("%d\n",len);
	return 0;
	
}