#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	//�ַ�ָ��
//	char ch = 'W';
//	char* p = &ch;
//	const char *p2 = "abcdef";
//	//ָ������ - ���飬���ָ�������
//	int* arr[10];//������Ǹ�Ԫ�أ�ÿ��Ԫ����ָ�룩������
//	int *p3;//����ָ�룬ָ������͵�ָ��
//	char* ch[5];
//	//����ָ�� - ָ�룬ָ��ָ���Ԫ��������
//	int arr2[5];
//	
//	int(*pa)[5] = &arr2;//��������ָ�룬ָ��ָ���Ԫ�������顣
//	return 0;
//}
//void test(int arr[])
//{}
//void test(int arr[10])//�����Ҳ��arr[]����Ԫ�ص�ַ
//{}
//void test(int *arr)//һά���鴫�δ���ľ�����Ԫ�ص�ַ
//{}
//void test2(int *arr[20])//�����ʱ��Ԫ�صĴ�С����ʡ��
//{}
//void test2(int **arr)//*arr[20]��ָ�����飬**arr[20]����ʾ�ľ���ȡ��һ��ָ��ĵ�ַ
//{}
//int main()
//{
//	int arr[10] = {0};
//	int *arr2[20] = {0};//ָ������
//	test(arr);
//	test2(arr2);
//}
//��ά���鴫��
//void test(int arr[3][5])
//{}
//void test(int arr[][5])
//{}
//void test(int arr[3][])
//{}//�������������
//void test(int arr[][])
//{}//����ʡ�ԣ��в���ʡ��
//void test(int *arr)
//{}//�ǲ��еģ���Ϊ��ά���鴫�ε�ʱ����Ԫ���ǵ�һ��
//void test(int (*arr)[5])//����ָ��
//{}//*arr��ָ�룬ָ��������顣���������������Ԫ��
//int main()
//{
//	int arr[3][5] = { 0 };
//	test(arr);
//	return 0;
//}
//һ��ָ�봫��
//void test(int* p)
//{}
//int main()
//{
//	int a = 10;
//	int* p1 = &a;
//	test(&a);
//	test(p1);//����ĵ�ַ
//	return 0;
//}
//����ָ�봫��
//void test(int **p)
//{}
//int main()
//{
//	int *pr;
//	int** pc = &pr;
//	test(&pr);
//	test(pc);
//	int* arr[10];//ָ�����飬��Ԫ����ָ����������ε�ʱ���Ƕ���ָ��
//	test(arr);
//	return 0;
//}
//int ADD(int x,int y)
//{
//	int z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int arr[10] = { 0 };
//	/*printf("%p\n",&ADD);
//	printf("%p\n",ADD);*///&�������ͺ��������Ǻ����ĵ�ַ
//	int (*pa)(int,int ) = ADD;//����ָ�룬ָ��ָ����Ǻ���
//	printf("%d\n",(*pa)(2,3 ));
//	return 0;
//}
//(*(void(*)())0)();void(*)()�Ǻ���ָ�����ͣ����ͷ���һ��������ǰ�棬��ǿ������ת��
//ǿ�ƽ�0ת��Ϊ����ָ�����ͣ���Ȼ��0������ǿ��ת����ָ�룬��ô�Ϳ��Խ�����*(void(*)())0��(*(void(*)())0)()����ǵ���0��ַ�� �ĸú������������ǵ��������֣���Ϊ�Ǻ���ָ������
//void(*signal(int ,void(*)(int)))(int);//signal��������int ,void(*)(int)��������void(*)(int)����ָ�����ͣ�void(*signal(int ,void(*)(int)))(int);�����ķ��������Ǻ���ָ��
//typedef void(* pfun_t)(int) ;//����ָ������������ pfun_t�����µĺ�����
//void(*signal(int ,void(*)(int)))(int);
//signal��һ������������
//signal�����Ĳ������������ֱ���int�ͺ���ָ�룬����ָ��ָ��Ĳ�����int������������void
//signal������������Ҳ�Ǻ���ָ�룬��ָ��ָ��Ĳ�����int������������void
//int ADD(int x,int y)
//{
//	int z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int arr[10] = { 0 };
//
//	int (*pa)(int,int ) = ADD;
//	printf("%d\n",(*pa)(2,3 ));
//	printf("%d\n",pa(2,3 ));//pa����ADD�ĵ�ַ
//	printf("%d\n",ADD(2,3 ));//������������ǵ�ַ
//
//	return 0;
//}

//����ָ������
//int Add(int x,int y)
//{
//	return  x + y;
//}
//int Mul(int x,int y)
//{
//	return  x * y;
//}
//
//int Div(int x,int y)
//{
//	return  x / y;
//}
//int main()
//{
//	int i = 0;
//	int(*pa[3])(int,int) = {Add,Mul,Div};
//	for(i = 0;i < 3;i++)
//	{
//		printf("%d\n",(*pa[i])(2,3));//*pa[i]���Խ����ã�Ҳ���Բ������ã���Ϊ���������Ǻ����ĵ�ַ��pa[i]���Ǻ����ĵ�ַ���൱�ڵ��ú���
//	}
//	return 0;
//}
int Add(int x,int y)
{
	return x + y;
}

int Sub(int x,int y)
{
	return x - y;
}
int Mul(int x,int y)
{

	return x * y;
}
int Div(int x,int y)
{
	
	return x / y;
}
void menu()
{
	printf("**************************\n");
	printf("***1.Add  ****  2.Mul  ***\n");
	printf("*******  0.exit  *******\n");
	printf("***3.Sub  ****  4.Div  ***\n");
	printf("**************************\n");
}
int main()
{
	int x = 0;
	int y = 0;
	int input = 0;
	do
	{
		menu();
		printf("��ѡ��");
		scanf("%d",&input);
		switch(input)
		{
			case 1:
				printf("��������������");
				scanf("%d%d",&x,&y);
				printf("%d\n",Add(x,y));
				break;
			case 2:
				printf("��������������");
				scanf("%d%d",&x,&y);
				printf("%d\n",Mul(x,y));
				break;
			case 3:
				printf("��������������");
				scanf("%d%d",&x,&y);
				printf("%d\n",Sub(x,y));
				break;
			case 4:
				printf("��������������");
				scanf("%d%d",&x,&y);
				printf("%d\n",Div(x,y));
				break;
			default:
				printf("ѡ����������ѡ��\n");
				break;
		}
	}while(input);
	return 0;
}




