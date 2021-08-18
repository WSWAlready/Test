#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	//字符指针
//	char ch = 'W';
//	char* p = &ch;
//	const char *p2 = "abcdef";
//	//指针数组 - 数组，存放指针的数组
//	int* arr[10];//存放了是个元素（每个元素是指针）的数组
//	int *p3;//整型指针，指向的整型的指针
//	char* ch[5];
//	//数组指针 - 指针，指针指向的元素是数组
//	int arr2[5];
//	
//	int(*pa)[5] = &arr2;//本质上是指针，指针指向的元素是数组。
//	return 0;
//}
//void test(int arr[])
//{}
//void test(int arr[10])//传输的也是arr[]的首元素地址
//{}
//void test(int *arr)//一维数组传参传输的就是首元素地址
//{}
//void test2(int *arr[20])//传输的时候元素的大小可以省略
//{}
//void test2(int **arr)//*arr[20]是指针数组，**arr[20]，表示的就是取第一个指针的地址
//{}
//int main()
//{
//	int arr[10] = {0};
//	int *arr2[20] = {0};//指针数组
//	test(arr);
//	test2(arr2);
//}
//二维数组传参
//void test(int arr[3][5])
//{}
//void test(int arr[][5])
//{}
//void test(int arr[3][])
//{}//列向量必须存在
//void test(int arr[][])
//{}//行能省略，列不能省略
//void test(int *arr)
//{}//是不行的，因为二维数组传参的时候，首元素是第一行
//void test(int (*arr)[5])//数组指针
//{}//*arr是指针，指向的是数组。数组内有五个整型元素
//int main()
//{
//	int arr[3][5] = { 0 };
//	test(arr);
//	return 0;
//}
//一级指针传参
//void test(int* p)
//{}
//int main()
//{
//	int a = 10;
//	int* p1 = &a;
//	test(&a);
//	test(p1);//传输的地址
//	return 0;
//}
//二级指针传参
//void test(int **p)
//{}
//int main()
//{
//	int *pr;
//	int** pc = &pr;
//	test(&pr);
//	test(pc);
//	int* arr[10];//指针数组，首元素是指针变量，传参的时候是二级指针
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
//	printf("%p\n",ADD);*///&函数名和函数名都是函数的地址
//	int (*pa)(int,int ) = ADD;//函数指针，指针指向的是函数
//	printf("%d\n",(*pa)(2,3 ));
//	return 0;
//}
//(*(void(*)())0)();void(*)()是函数指针类型，类型放在一个变量的前面，是强制类型转换
//强制将0转换为函数指针类型，既然将0的类型强制转换成指针，那么就可以解引用*(void(*)())0，(*(void(*)())0)()这就是调用0地址处 的该函数，解引用是到函数部分，因为是函数指针类型
//void(*signal(int ,void(*)(int)))(int);//signal函数名，int ,void(*)(int)参数类型void(*)(int)函数指针类型，void(*signal(int ,void(*)(int)))(int);函数的返回类型是函数指针
//typedef void(* pfun_t)(int) ;//函数指针类型重命名 pfun_t就是新的函数名
//void(*signal(int ,void(*)(int)))(int);
//signal是一个函数声明；
//signal函数的参数有两个，分别是int和函数指针，函数指针指向的参数是int，返回类型是void
//signal函数返回类型也是函数指针，数指针指向的参数是int，返回类型是void
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
//	printf("%d\n",pa(2,3 ));//pa就是ADD的地址
//	printf("%d\n",ADD(2,3 ));//函数名本身就是地址
//
//	return 0;
//}

//函数指针数组
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
//		printf("%d\n",(*pa[i])(2,3));//*pa[i]可以解引用，也可以不接引用，因为函数名就是函数的地址，pa[i]就是函数的地址，相当于调用函数
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
		printf("请选择：");
		scanf("%d",&input);
		switch(input)
		{
			case 1:
				printf("请输入两个数：");
				scanf("%d%d",&x,&y);
				printf("%d\n",Add(x,y));
				break;
			case 2:
				printf("请输入两个数：");
				scanf("%d%d",&x,&y);
				printf("%d\n",Mul(x,y));
				break;
			case 3:
				printf("请输入两个数：");
				scanf("%d%d",&x,&y);
				printf("%d\n",Sub(x,y));
				break;
			case 4:
				printf("请输入两个数：");
				scanf("%d%d",&x,&y);
				printf("%d\n",Div(x,y));
				break;
			default:
				printf("选择错误，请从新选择\n");
				break;
		}
	}while(input);
	return 0;
}




