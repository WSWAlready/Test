#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

//ģ��ʵ��strcpy����

//void The_strcpy(char* dest,char* src)
//{
//	//while (*src != '\0')
//	//{
//	//	*dest++ = *src++;  //����++����ʹ����++
//	//	/*src++;
//	//	dest++;*/
//	//}
//	//*dest = *src;   //��ʱ��������\0
//	//
//	if(dest !=NULL && src != NULL)
//	{
//		while (*dest++ = *src++)	// '\0'��ASCIIΪ0 
//		{
//			/**dest++ = *src++;  */
//			;	/*src++;
//			dest++;*/
//		}
//	}
//}
//void The_strcpy(char* dest,char* src)
//{
//	assert(dest != NULL);//���ԣ����ʽ��ֵΪ�棬ʲôҲ�����������ʽΪ��assert�ᱨ��
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
//	The_strcpy(arr,arr2);//����ָ���ʱ����Ҫ����Ұָ���ʱ�ǿ�ָ��
//	printf("%s\n",arr2);
//	return 0;
//}
//void The_strcpy(char* dest,const char* src)//const�Ƿ���*����ߣ���˼����*src�Ľ����ò��ܱ��޸ġ����*src��*dest����λ�ã������ᱨ��
//{
//	assert(dest != NULL);//���ԣ����ʽ��ֵΪ�棬ʲôҲ�����������ʽΪ��assert�ᱨ��
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
//	The_strcpy(arr,arr2);//����ָ���ʱ����Ҫ����Ұָ���ʱ�ǿ�ָ��
//	printf("%s\n",arr2);
//	return 0;
//}
//int main()
//{
//	const int num = 10; //���������������޸ģ����Ǵӵ�ַ�����޸�
//	
//	//int num = 10;
//	const int *p = &num;//����*p�Ľ����þ�û�취ʹ��
//	// const����ָ�����*���ʱ�����ε���*p�����ܽ��н����á�
//	// const����*�ұߣ����ε���p��Ҳ�������εĵ�ַ����ʱ��ַû�취�ģ����ǽ����ÿ���ʹ��
//	*p = 20;
//	printf("%d\n",num);
//	return 0 ;
//}
//char* The_strcpy(char* dest,const char* src)//char* �Ǵ��з���ֵ�ģ�
//{
//	char* ret = dest;
//	assert(dest != NULL);
//	assert(src  != NULL);
//	//��srcָ����ַ���������destָ��Ŀռ䣬����'\0'
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
//ʵ��strlen����
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