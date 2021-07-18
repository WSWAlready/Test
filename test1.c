#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
//int main ()
//{
//	printf("hellow world\n");
//	printf("hellow world\n");
//	printf("hellow world\n");
//	printf("hellow world\n");
//	printf("hellow world\n");
//	printf("hellow world\n");
//	printf("hellow world\n");
//	printf("hellow world\n");
//	printf("hellow world\n");
//		return 0;
//
//}

//int main ()
//{
//	//char ch='A';  //字符类型
//	//printf("%c\n",ch); //%c打印字符形式的数据
//	//int age=20;
//	//printf("%d\n",age);//%d 打印整形形式的数据
//
//
//	return 0;
//}

//int main ()
//{
//
//	int num2=0;
//	int num1=0; //局部变量和全局变量容易产生bug，当两者存在时，优先选择局部变量。
//	int num3=0;//C语言规定定义函数只能放在前面。
//	scanf("%d%d",&num1,&num2);
//	num3=num1+num2;
//	printf("%d\n",num3);
//	return 0;
//}

//int main ()
//{
//
//	int a=10;
//	scanf("%d",a);
//	printf("%d\n",a);
//
//	return 0;
//}
//int main ()
//{
//
//	int num1 = 0;
//	int num2 = 0;
//	scanf("%d%d",&num1,&num2);
//	printf("%d\n",num1+num2);
//
//	return 0;
//}
//int main ()
//{
//	/*const int num = 4;
//	printf("%d\n",num);
//	num = 5;
//	printf("%d\n",num);*/
//
//}
//enum Sex
//{
//	MALE,
//	FEMALE,
//	SECRET
//};
//int main ()
//{
//	printf("%d\n",MALE);
//	return 0;
//}


//int main ()
//{
//	/*char ar1[] = "abc";
//	char ar2[] = {'a','b','c',0};
//	printf("%s\n",ar1);
//	printf("%s\n",ar2);
//	return 0;*/
//}
//int main ()
//{
//	char arr1[] = "abc";
//	char arr2[] = {'a','b','c',0};
//	printf("%d\n",strlen(arr1));
//	printf("%d\n",strlen(arr2));
//	return 0;
//}
 

//int main ()
//{
//	//printf("c:\\test\\work1");
//	printf("%c\n",'\32');
//	return 0;
//}
//int main ()
//{
//	int input=0;
//	printf("你要好好学习吗？（1/0）>:");
//	scanf("%d",&input);
//	if(input==1)
//	{
//	printf("给你一个机会\n");
//	}
//	else
//	{
//	printf("回家养猪\n");
//	}
//	return 0;
//}
//int main ()
//{
//	int line=0;
//	while(line<2000)
//	{
//		printf("敲了 %d 代码\n",line);
//		line++;
//	}
//	return 0;
//}

//int ADD(int x,int y)
//{
//	int z = x+y;
//	return z;
//
//}
//int main ()
//{
//	int sum1 = 0;
//	int sum2 = 0;
//	int sum = 0;
//	scanf("%d%d",&sum1,&sum2);
//	sum = ADD(sum1,sum2);
//	printf("%d\n",sum);
//	
//	
//	return 0;
//}
//int main ()
//{
//	int i=0;
//	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
//	while(i<10)
//	{
//	printf("%d ",arr[i]);
//	i++;
//	}
//	return 0;
//}
//int main ()
//{
//	int b = 0;
//	int a = 1;
//	b = a<<1;
//	printf("%d\n",b);
//	return 0;
//}
//int main ()
//{
//	int a = 3;
//	int b = 5;
//	int c = a^b;
//	printf("%d",c);
//	return 0;
//}
//int main ()
//{
//	int a = 10;
//	a += 10;
//	printf("%d\n",a);
//	return 0;
//}

 //int main ()
 //{
	//int a = 10;
	//printf("%d\n",!a);
	//return 0;
 //}
//int MAX(int x,int y)
//{
//	
//	if (x > y)
//	{
//	return x;
//	}
//	else
//	{
//	return y;
//	}
//}
//int main ()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int max = 0;
//	scanf("%d%d",&num1,&num2);
//	max=MAX(num1,num2);
//	printf("%d\n",max);
//	return 0;
//}
//int main ()
//{
//	int a = 10;
//	int arr1[] = {1 , 2, 3, 4, 5, 6};
//	printf("%d\n",sizeof(arr1));//计算数组大小单位是字节，6*4=24
//	return 0;
//}
//int main ()
//{
//	int a = 0;
//	int b = ~a;
//	printf("%d\n",b);
//	return 0;
//}
//int main ()
//{
//	int a = 10;
//	int b = a++;//后置++，先使用，后++，a自身先相加，b再使用。
//	printf("%d %d\n",a,b);
//	return 0;
//}
//int main ()
//{
//	//真：非零
//	//假： 0;
//	int a = 3;
//	int b = 5;
//	int c = a || b;
//	printf("%d\n",c);
//	return 0;
//}
//int main ()
//{
//	int a = 200;
//	int b = 30;
//	int max = 0;
//
//	max = (a>b ? a : b);
//	printf("%d\n",max);
//	return 0;
//}
//int main ()
//{
//	int a = 10;//自动变量，局部变量自带auto
//	//signed //定义变量符号；
//	//unsigned int   //无符号定义
//	//typedef //类型重定义
//	//例如
//	//typedef unsigned int u_int
//	//u_int num1 = 10;
//	//static  局部变量的生命周期变长，可以保存使用。
//修饰全局变量时改变了变量的作用域，让静态的全局变量只能在自己所在的源文件内使用
//除了源文件就没办法使用
//	//extern 声明外部符号 	
//   return 0;
//}
//extern int Add(int x,int y);
//
//int main ()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a,b);
//	printf("%d\n",sum);
//	return 0;
//
//
//}
//#define MAX(X,Y)  (X > Y ? X : Y)
//int main ()
//{
//	
//	int a = 30;
//	int b = 20;
//	int max = MAX(a,b);
//	printf("%d\n",max);
//	return 0;
//}

//指针

//int main()
//{
//	int a = 10;
//	int *p = &a;
//	*p = 20;//就相当于把a=10 存到了*p的地址中
//	//之后的*p是将地址内的值改为了20，就相当于a的值变成了20
//
//	printf("%d\n",sizeof(*p));
//	/*p0intf( "%p\n",&a);*/
//	return 0;
//}
//int main ()
//{
//	double a = 3.14;
//	double *p1 = &a;
//	*p1 = 4.12;
//	printf("%lf\n",a);
//	return 0;
//}


//结构体
//
// struct Book
// {
// 
//	 char name[20];
//	 short price;
// };
//
//int main ()
//{
//	//利用结构体类型-创建一个该类型的结构体
//	struct Book b1 = {"C语言程序设计",55};
//	strcpy(b1.name,"C++");//字符串拷贝，第一项是地址，第二项是换后的
//	
//	/*struct Book* pb = &b1; 
//	printf("%s\n",pb->name);
//	printf("%d\n",pb->price);*/
//	/*printf("书名：%s\n",b1.name);
//	printf("价格：%d\n",b1.price);*/
//	return 0;
//}


//分支和循环

//if 语句
//int main ()
//{
//	int age = 0;
//	printf("请输入您的年龄：");
//	scanf(" %d",&age);
//	if (age<18)
//		printf("您现在是少年\n");
//	else if(age>=18 && age<30)
//		printf("您现在是青年\n");
//	else if(age>=30 && age<50)
//		printf("您现在是中年\n");
//	else
//		printf("您现在是老年\n");
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	if(a==10)
//		if(b==20)
//			printf("无敌\n");
//		else				//else和最近的if匹配，所以代码无法执行
//			//因为第一个if都没有进去。
//			printf(" 不行\n");
//	return 0;
//}
//int main ()
//{
//	int num = 3;
//	if(num == 5)//为了防止bug出现最好使用if(5 == num)
//		//将常量放在前面
//	{
//		printf("呵呵\n");
//	}
//	 return 0;
//}
//int main ()
//{
//	int num = 0;
//	printf("请输入一个数：");
//	scanf("%d",&num);
//	if(num % 2 == 1)
//		printf("这是一个奇数\n");
//	else
//		printf("这是一个偶数\n");
//	return 0;
//}
//int main ()
//{
//	int i=0;
//	while(i<=100)
//	{
//		if(i%2 == 1)
//			printf("%d ",i);
//		i++;
//	}
//	return 0;
//}
//switch //整形表达式
//int main ()
//{
//	int day = 0;
//	printf("请输入数字：");
//	scanf("%d",&day);
//	switch(day)
//	{
//	case 1:
//		printf("星期一\n");
//		break;//直接跳出switch语句
//	case 2:
//		printf("星期二\n");
//		break;
//	case 3:
//		printf("星期三\n");
//		break;
//	case 4:
//		printf("星期四\n");
//		break;
//	case 5:
//		printf("星期五\n");
//		break;
//	case 6:
//		printf("星期六\n");
//		break;
//	case 7:
//		printf("星期日\n");
//		break;
//  default:
//   	printf("输入错误\n");
//	}
// return 0;
//}
//while 循环
//int main ()
//{
//	int i = 0;
//
//	while(i<=10)
//	{
//		if(i == 5)
//	//	break;
//			continue;
//	printf("%d\n",i);
//	i++;
//	}
//	return 0;
//}
//int main ()
//{
//	/*int ch = 0;*/
//	/*while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);
//	}*/
//	int ret = 0;
//	int ch = 0;
//	char password[20] = {0};
//	printf("请输入密码：");
//	scanf("%s",password);
//	while((ch=getchar())!='\n')
//	{
//		;
//	}
//	printf("请确认(Y/N):");
//	ret = getchar();
//	if(ret == 'Y') 
//		printf("确认成功\n");
//	else
//		printf("确认失败\n");
//	return 0;
//}
//int main()
//{
//	int ch = 0;
//	while((ch=getchar())!=EOF)
//	{
//		if(ch<'0' || ch>'9')
//			continue;
//		putchar(ch);
//	}
//	return 0;
//}
//int main ()
//{
//	int i = 0;
//	for(i=1;i<=10;i++)
//		printf("%d ",i);
//	return 0;
//}
//int main ()
//{
//	int arr[10] = {1 ,2 ,3 ,4 ,5 ,6 ,7 , 8, 9, 10};
//	int i = 0;
//	for (i=0;i<10;i++)//for循环的初始化，调整，判断都可u哦省略
//		//但是for循环的判断部分如果被省略，那么判断条件就恒为真
//		printf("%d ",arr[i]);
//	return 0;
//}   
//int main ()
//{
//	int i = 0;
//	do
//	{
//		printf("%d",i);
//		i++;
//	}
//	while(i<=10);
//	return 0;
//}
//计算阶乘

//int main()
//{
//	int num = 0;
//	int sum = 1;
//	int i = 0;
//	int n = 0;
//	for(i=1;i<=4;i++)
//	{
//		sum = sum*i;
//		num +=sum;
//	}
//	printf("%d",num);
//	return 0;
//}
//int main()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int k=7;
//	int i = 0;
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	for(i=0;i<sz;i++)
//		if(k == arr[i])
//			break;
//	printf("找到了：%d，下标是 %d\n",arr[i],i);
//	return 0;
//}
//二分查找
//int main ()
//{
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int k = 7;
//	int left = 0;
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	int right = sz-1;
//	
//	//printf("%d",mid);
//	while (left<=right)
//	{
//		int mid = (left + right)/2;
//		if(arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if(arr[mid] > k)
//		{
//			right = mid - 1;	
//		}
//		else
//		{
//			printf("找到了这个数%d\n",mid);
//			break;
//		}
//	}
//	if(left > right)
//	{
//		printf("找不到了\n");
//	}
//	return 0;
//}


//int main()
//{
//	char arr1[] = "wang shou wei";
//	char arr2[] = "#############";
//	int left = 0;
//	int right = strlen(arr1)-1;
//
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n",arr2);
//		Sleep(1000);
//		system("cls");
//		left++;
//		right--;
//	}
//	return 0;
//}
//int main ()
//{
//	int i = 0;
//	char password[20] = {0};
//	char mima[] = "wang";
//	for (i=0;i<3;i++)
//	{
//		int b = 2-i;
//		printf("请输入密码:");
//		scanf("%s",password);
//		if(strcmp(password,mima) == 0)
//		{
//			printf("密码正确");
//			break;
//			
//		}
//		else 
//		{
//			printf("密码出错,您还有%d 次机会\n",b);
//			if(0 == b)
//			{
//				printf("你输入的密码有错，请稍后再试\n");
//			}
//			
//		}
//
//	}
//	return 0;
//}
// 比较大小
//int MAX(int x,int y,int z)
//{
//	
//	int temp = 0;
//	if(x<y)
//	{
//		if(y<z)
//		{
//			return z;
//		}
//		else
//		{
//			return y;
//		}
//	
//	}
//	else
//	{
//		if(x>z)
//		{
//			return x;
//		}
//	}
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int f = 0;
//	scanf("%d%d%d",&a,&b,&c);
//	f = MAX(a,b,c);
//	printf("%d",f);
//
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	for(i=0;i<=100;i++)
//	{
//		if(i%3 == 0)
//			printf("%d",i);
//	}
//	return 0;
//}
// z最大公约数
//int main ()
//{
//	int a = 0;
//	int b = 0;
//	int x = 0;
//	int temp = 0;
//	int c = 0;
//	printf("请输入两个数：");
//	scanf("%d %d",&a,&b);
//	
//	if(a<b)
//	{
//		x = a;
//		a = b;
//		b = x;
//	}
//	temp = a%b;
//	if(temp == 0)
//	{
//		printf("最大公约数：%d",b);
//	}
//	else
//	{ 
//		if(b%temp == 0)
//			printf("最大公约数就是%d",temp);
//		else
//			printf("无最大公约数");
//	}
//	return 0;
//}
//int main ()
//{
//	int n = 18;
//	int m = 48;
//	int r = 0;
//	printf("请输入两个数：");
//	scanf("%d %d",&n, &m);
//	while(n%m)
//	{
//		r = n%m;
//		n = m;
//		m = r;
//	}
//	printf("%d\n",m);
//	return 0;
//}
//int main ()
//{
//	int year = 0;
//	int cout = 0;
//	for (year=1000;year<=2021;year++)
//	{
//			if((year%4==0 && year%100!=0) || year%400==0 )
//				{
//					printf("%d ",year);
//					cout++;
//				}
//	}
//	printf("\ncout = %d",cout);
//	return 0;
//}
//找素数
//int main ()
//{
//	int i = 0;
//	int j = 0;
//	int cout = 0;
//	int sum = 0;
//	for(i=100;i<=200;i++)
//	{
//		for(j=2;j<i;j++)
//		{
//			if(i%j==0)
//			{
//				break;
//			}
//		}
//		if(j == i)
//		{
//			cout++;
//			printf("%d ",i);
//			sum = sum +i;
//
//		}
//	}
//	printf("\n%d\n",cout);
//	printf("%d\n",sum);
//	return  0;
//}
//int main()
//{
//	
//	int i = 0;
//	int cout = 0;
//	int sum = 0;
//	for(i=100;i<=200;i++)
//	{
//		int j = 0;
//		for(j=2; j<=sqrt(i); j++)
//		{
//			if(i%j==0)
//			{
//				break;
//			}
//		}
//		if(j>sqrt(i))
//		{
//			cout++;
//			printf("%d ",i);
//			sum = sum +i;
//		}
//	}
//	printf("\n%d\n",cout);
//	printf("%d",sum);
//	return 0;
//}
//int main ()
//{
//	int i = 0;
//	int count = 0;
//	int sum = 0;
//	for(i=1;i<=200;i++)
//	{
//		int j = 0;
//		for(j=2;j<i;j++)
//		{
//			if(i%j==0)
//				{
//					break;
//				}
//		}
//		if(j==i)
//		{
//		count++;
//		sum = sum + i;
//		printf(" %d",i);
//		}
//	}
//	printf("\n1到200内的素数共有   %d\n",count);
//	printf("1到200内的素数和是   %d\n",sum);
//
//	return 0;
//}
 //int main()
 //{
	//int i = 0;
	//int count = 0;
	//for(i=1;i<=100;i++)
	//{
	//	if(((i%10)==9) || (i/10)==9)
	//	{
	//		count++;
	//		printf("%d ",i);
	//	}
	//}
	//printf("\n%d\n",count);
	// return 0;
 //}//没有包括99的两个9，如果想打印就得用两个if语句；
//int main()
//{
//	int i = 0;
//	double sum = 0;
//	int flag = 1;
//	for(i=1;i<=100;i++)
//	{
//		sum += flag*1.0/i;
//		flag = -flag;
//	}
//	printf("%lf",sum);
//	return 0;
//}
//int main()
//{
//	int arr[] = {-1, -2, -3, -4, -5 ,-11 , -7 ,-8 , -9,- 10};
//	int max = 0;
//	int i = 0;
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	max = arr[0];
//	for(i=0;i<=sz;i++)
//	{
//		if(arr[i]>max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("%d",max);
//	return 0;
//}
//乘法口诀表
//1*1=1
//2*1=2 2*2=4
//3*1=3 3*2=6 3*3=9
//..........................
//...............
//9*1=9......................9*9=81
//int main()
//{
//	int i = 0;
//	for(i=1;i<=9;i++)
//	{
//		int j = 1;
//		for(j=1;j<=i;j++)
//		{
//			printf("%d*%d=%-2d  ",i,j,i*j);//%2d是打印两位，只有一位的是空格补齐，正的表示右对齐
//			//负的表示左对齐
//		}
//		printf("\n");
//	}
//	return 0;
//}
//int main()
//{
//	int k = 7;
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int left = arr[0];
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	int right = sz - 1;
//	int mid = 0;
//	while(left<=right)
//	{
//		mid = (left+right)/2;
//		if(arr[mid] < k)
//		{
//			left = mid + 1;
//
//		}
//		else if(arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else 
//		{
//			printf("%d",arr[mid]);
//			break;
//		}
//	}
//	if(left>right)
//	{
//		printf("找不到");
//	}
//	return 0;
//}
//猜数字游戏
//void menu()
//{
//	printf("*********************\n");
//	printf("****1.play game******\n");
//	printf("****0.exit **********\n");
//	printf("*********************\n");
//}
//void game()
//{
//	int guess = 0;
//	int ret = 0;
//	//时间戳   使用时间戳设置随机数的起点
//    ret = rand()%100+1;
//	/*printf("%d\n",ret);*/
//	while(1)
//	{
//		printf("请猜数字: ");
//		scanf("%d",&guess);
//		if(guess>ret)
//		{
//			printf("猜大了\n");
//		}
//		else if(guess<ret)
//		{
//			printf("猜小了\n");
//		}
//		else 
//		{
//			printf("猜对了\n");
//			break;
//		}
//	}
//}
//int main()
//{
//	
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("请选择(1|0)：");
//		scanf("%d",&input);
//		switch(input)
//		{
//			case 1:
//				game();
//				break;
//			case 0:
//				printf("退出游戏\n");
//				break;
//			default:
//				printf("您输错了\n");
//				break;
//		}
//	}while (input);
//	return 0;
//}
//int main()
//{
//	//shutdown -s -t 60
//	//system() - 执行系统命令
//	char input[20]={0};
//	system("shutdown -s -t 60");
//again:
//	printf("你的电脑马上关机，输入我是猪取消关机");
//	scanf("%s",input);
//	if(strcmp(input,"我是猪") == 0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}
//int main()
//{
//	char  arr1[] = "bit";
//	char  arr2[20] = "############";
//	strcpy(arr2,arr1);
//	printf("%s\n",arr2);
//	return 0;
//}
//int main()
//{
//	char arr[] = "wangshouwei";
//	memset(arr,'#',5);//传输的是ascii值
//	printf("%s\n",arr);
//	return 0;
//}
//void swap(int x,int y)
//{
//	int tmp= 0;
//	tmp = x;
//	x = y;
//	y = tmp;
//}
//void swap(int* pa, int* pb)
//{
//	int tmp = 0;
//	tmp = *pa;
//	*pa = *pb;
//	*pb = tmp;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	swap(&a,&b);
//	printf("%d %d\n",a,b);
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	*pa = 20;
//	return 0;
//}

//int is_prime(int n)
//{
//	int j = 0;
//	for(j=2;j<n;j++)
//	{
//		if(n%j == 0)
//		{
//			return 0;//break;
//		}	
//	}
//	return 1;
//	//if(j==n)
//	//{
//	//	return 1;
//	//}
//}
//int main()
//{
//	int i = 0;
//	for(i=100;i<=200;i++)
//	{
//		if(is_prime(i)==1)
//
//			printf("%d ",i);
//	}
//	return 0;
//}								
//int binary_search(int arr[],int k,int sz)//本质上arr是指针。
//{
//	int left = 0;
//	//int sz = sizeof(arr)/sizeof(arr[0]);//不能再使用实参传送，传送过来的是第一个元素的地址
//	int right = sz - 1;
//	
//	while(left<=right)
//	{
//		int mid = (left+right)/2;
//		if(arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if(arr[mid] < k)
//		{
//			left = mid +1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	if(left > right)
//	{
//		return -1;
//	}
//}

//int main ()
//{
//	//在一个有序的数组中查找具体的一个数
//	//如果找到了就返回下标，找不到就返回-1
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int k = 7;
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	int ret = binary_search(arr,k,sz);
//
//	if(-1 == ret)
//	{
//		printf("找不到这个数字\n");
//
//	}
//	else
//	{
//		printf("找到了这个数字:%d",ret);
//	}
//	return 0;
//}
//递归
//void print(int n)
//{
//	if(n > 9)
//	{
//		print(n/10);
//	}
//	printf("%d ",n%10);
//}
//int main()
//{
//	unsigned int i = 0;
//	scanf("%d",&i);
//	 print(i);
//	return 0;
//}
//int my_strlen(char* str)
//{
//	
//	if(*str != '\0')
//	{
//		
//		return 1+my_strlen(str+1);
//	}
//	else 
//	{
//		return 0;
//	}
//	
//}
//int main ()
//{
//	char arr[] = "bit";
//	int len = my_strlen(arr);
//	printf("len = %d\n",len);
//
//	return 0;
//
//}
//int Fac1(int n)
//{
//	int i = 0;
//	int ret = 1;
//	for(i=1;i<=n;i++)
//	{
//		ret = ret*i;
//	}
//	return ret;
//}

//递归
//int Fac1(int n)
//{
//	
//	if(n>1)
//	{
//		return  Fac1(n-1)*n;
//		
//	}
//	else
//	{
//		return 1;
//	}
//
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d",&n);
//	ret = Fac1(n);
//	printf("%d\n",ret);
//	return 0;
//}
//int Fibonacci(int n)
//{
//	
//	if(n>2)
//	{
//		return  Fibonacci(n-2) + Fibonacci(n-1);
//	}
//	else  
//	{
//		return 1;
//	}
//
//}
//int main()
//{
//	int ret = 0;
//	int n = 0;
//	scanf("%d",&n);
//	ret = Fibonacci(n);
//	printf("%d",ret);
//	return 0;
//}
//int main ()
//{
//	int a = 1;
//	int b = 1;
//	int c = 0;
//	int n = 0;
//	int i = 0;
//	scanf("%d",&n);
//	for(i=1;i<n-1;i++)
//	{
//		c = a+b;
//		a = b;
//		b = c;
//	}
//	printf("%d",c);
//	return 0;
//}
//int main ()
//{
//	int n = 0;
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	scanf("%d",&n);
//	while (n>2)
//	{
//		c = a+b;
//		a = b;
//		b = c;
//		n--;
//	}
//	printf("%d",c);
//	return 0;
//}
//sizeof和strlen
//strlen是求字符串长度的，只能针对字符串长度，库函数，需要引用头文件
//sizeof是计算变量，数组，类型的大小-单位是字节-操作符\0也占用空间
//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = {'a','b','c'};
//	printf("%d\n",sizeof(arr1));
//	printf("%d\n",sizeof(arr2));
//	printf("%d\n",strlen(arr1));
//	printf("%d\n",strlen(arr2));//strlen只针对找到\0找不到\0就是随机值
//}
//int main ()
//{
//	char arr[] = "abcdef";
//	/*printf("%c\n",arr[3]);*/
//	
//	int i = 0;
//	for(i = 0;i<6;i++)
//	{
//		printf("%c\n",arr[i]);
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	char arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	for(i=0;i<sz;i++)
//	{
//		printf("&arr[%d]= %p\n",i,&arr[i]);
//	}
//	return 0;
//}
//int main()
//{
//	char arr[3][4] = {1,2,3,4,5};//二维数组行可以省略，列不能省略
//	return 0;
//}
//void bubble_sort(int arr[],int sz)
//{
//	//确定冒泡排序的趟数，
//	int i = 0;
//	for(i=0;i<sz-1;i++)
//	{
//		int flag = 1;//假设这一趟的数据已经有序了
//		//每一趟冒泡排序
//		int j = 0;
//		for(j=0;j<sz-1-i;j++)
//		{
//			if(arr[j]>arr[j+1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j+1];
//				arr[j+1] = tmp;
//				flag = 0;
//			}
//		}
//		if(1 == flag)
//		{
//			break;
//		}
//	}
//}
//int main()
//{
//	int arr[] = {1,6,5,4,7,8,9,2,3,10};
//	//冒泡排序
//	int i = 0;
//	int sz = sizeof(arr)/sizeof(arr[0]);//sizeof(数组名)
//	//数组名表示整个数组，sizeof(arr)计算的是整合数组的大小
//	//&数组名数组名代表整个数组，&数组名，取出的是整个数组的地址  
//	bubble_sort(arr,sz);
//	for(i=0;i<sz;i++)
//	{
//		printf("%d ",arr[i]);
//	}
//	return 0;
//}