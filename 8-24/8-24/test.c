#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>


//int main()
//{
//	char arr[] = "abcdef";
//	printf("%d\n",sizeof(arr));//7 ���Ƿŵ��߸��ַ�������\0
//	printf("%d\n",sizeof(arr + 0));// 4/8 ������Ԫ�صĵ�ַ����ַ��ռ�ĸ��ֽ�
//	printf("%d\n",sizeof(*arr));//1 *arr�����õ�����Ԫ�أ����������Ԫ�ش�С
//	printf("%d\n",sizeof(arr[1]));//1 ������ǵڶ���Ԫ�ش�С
//	printf("%d\n",sizeof(&arr));//4/8 ȡ������arr��ַ����ַ��С��4/8
//	printf("%d\n",sizeof(&arr + 1));//4/8 ȡ����������һ������ĵ�ַ����ַ��С��74/8
//	printf("%d\n",sizeof(&arr[0] + 1));//4/8 ȡ�����ǵڶ���Ԫ�صĵ�ַ
//}
//int main()
//{
//	char arr[] = "abcdef";
//	printf("%d\n",strlen(arr));//6 �ҵ�����\0ǰ���Ԫ���ֽڴ�С
//	printf("%d\n",strlen(arr + 0));//6 ��Ԫ�ص�ַ������Ԫ�ؿ�ʼ
//	//printf("%d\n",strlen(*arr)); //�Ƿ����ʣ��ҵ�����Ԫ��a��a��ASCIIֵ��97����ôĬ�ϵ�ַ��97���ͻ���ɷǷ�����
//	//printf("%d\n",strlen(arr[1]));//������һ��
//	printf("%d\n",strlen(&arr));//6 �ҵ�������Ԫ�صĵ�ַ��Ҳ��6��&arr����ָ�룬Ӧ�÷���ָ�������У�����Ӧ����char(*)[] = &arr;����strlen�Ĳ�����const char*
//	printf("%d\n",strlen(&arr + 1));//���ֵ�������������ĵ�ַ�������Ҳ���\0�����������ֵ
//	printf("%d\n",strlen(&arr[0] + 1));//5 ��b�ĵ�ַ��ʼ�����
//
//}
//int main()
//{
//	char *p = "abcdef";
//	printf("%d\n",strlen(p));//6 pָ�����a�ĵ�ַ����a֮��ʼ��
//	printf("%d\n",strlen(p + 1));//5 b�ĵ�ַ����b֮��ʼ��
//	printf("%d\n",strlen(*p)); //�Ƿ����ʣ�������֮����a��ֵ
//	printf("%d\n",strlen(p[1]));//�Ƿ����ʣ�p[1]��b��ֵ
//	printf("%d\n",strlen(&p));//���ֵ��&p��p�ĵ�ַ�������ֵ
//	printf("%d\n",strlen(&p + 1));//���ֵ������p�ĵ�ַ�ĵ�ַ��Ҳ�����ֵ
//	printf("%d\n",strlen(&p[0] + 1));//5 ����b�ĵ�ַ
//
//}
//int main()
//{
//	char *p = "abcdef";
//	printf("%d\n",sizeof(p));//4/8 p�ǵ�ַ����ַ�Ĵ�С��4/8
//	printf("%d\n",sizeof(p + 1));//4/8 p+1���ǵڶ���Ԫ�صĵ�ַ
//	printf("%d\n",sizeof(*p)); //1 *p��������Ԫ��a��Ԫ�ش�С��1
//	printf("%d\n",sizeof(p[1]));//1 p[1]���ǵڶ���Ԫ�أ�Ԫ�ش�С��1
//	printf("%d\n",sizeof(&p));//4/8 �Ե�ַp����ȡ��ַ�����ǵ�ַ
//	printf("%d\n",sizeof(&p + 1));//4/8 ����p�ĵ�ַ�ĵ�ַ
//	printf("%d\n",sizeof(&p[0] + 1));//4/8 �ڶ���Ԫ�صĵ�ַ
//
//	return 0;
//}

//int main()
//{
//	int a[3][4] = { 0 };
//	printf("%d\n",sizeof(a));//48,�������������Ĵ�С
//	printf("%d\n",sizeof(a[0][0]));//4����һ��Ԫ�صĴ�С
//	printf("%d\n",sizeof(a[0]));//16��������ǵ�һ�еĴ�С��a[0]�ǵ�һ�е�������
//	printf("%d\n",sizeof(a[0] + 1));//4/8,a[0]û�е�������sizeof�ڲ�����ʾ���ǵ�һ�е���Ԫ�ص�ַ��a[0] + 1��ʾ���ǵ�һ�еĵڶ���Ԫ�صĵ�ַ
//	printf("%d\n",sizeof(a+1));//4/8���ڶ��еĵ�ַ
//	printf("%d\n",sizeof(*(a+1)));//16���ڶ���Ԫ�صĴ�С
//	printf("%d\n",sizeof(*(a[0] + 1)));//4����ʾ�ľ��ǵڶ���Ԫ�ش�С
//	printf("%d\n",sizeof(&a[0] + 1));//4/8���ǵڶ���Ԫ�صĵ�ַ
//	printf("%d\n",sizeof(*(&a[0] + 1)));//16���ڶ���Ԫ�صĴ�С
//	printf("%d\n",sizeof(*a));//16���Ե�һ�н����ã�Ԫ�ش�С��16
//	printf("%d\n",sizeof(a[3]));//sizeof����������ʵ���㣬�������ͼ����С����������Ĵ�С������
//	printf("%d\n",sizeof(a[10]));
//}
//int main()
//{
//	int a[5] = {1,2,3,4,5};
//	int *p = (int*)(&a+1);
//	int *px = (&a+1);//��Ϊȡ��ַa��ȡ������ĵ�ַ����ָ�����Ͳ�ƥ�䣬�ᱨ����
//	printf("%d,%d,%d\n",*(a + 1),*(p - 1),*(px - 1));
//	return 0;
//}
//struct Test
//{
//	int Num;
//	char* pcName;
//	short sDate;
//	char cha[2];
//	short sBa[4];
//}* p;//p ��ֵ��0x100000,�ṹ�������С��20���ֽ�
//int main()
//{
//	printf("%p\n",p + 0x1);//p + 1,����һ���ṹ���С��0x00100014
//	printf("%p\n",(unsigned long)p + 0x1);//ת��λ�޷�����������pת��Ϊʮ���ƣ��ڼ�1����������1��0x00100001
//	printf("%p\n",(unsigned int* )p + 0x1);//���ǽ�p����Ϊ�޷�������ָ�����ͣ�p+4
//
//	return 0;
//}

