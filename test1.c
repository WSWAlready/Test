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
//	//char ch='A';  //�ַ�����
//	//printf("%c\n",ch); //%c��ӡ�ַ���ʽ������
//	//int age=20;
//	//printf("%d\n",age);//%d ��ӡ������ʽ������
//
//
//	return 0;
//}

//int main ()
//{
//
//	int num2=0;
//	int num1=0; //�ֲ�������ȫ�ֱ������ײ���bug�������ߴ���ʱ������ѡ��ֲ�������
//	int num3=0;//C���Թ涨���庯��ֻ�ܷ���ǰ�档
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
//	printf("��Ҫ�ú�ѧϰ�𣿣�1/0��>:");
//	scanf("%d",&input);
//	if(input==1)
//	{
//	printf("����һ������\n");
//	}
//	else
//	{
//	printf("�ؼ�����\n");
//	}
//	return 0;
//}
//int main ()
//{
//	int line=0;
//	while(line<2000)
//	{
//		printf("���� %d ����\n",line);
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
//	printf("%d\n",sizeof(arr1));//���������С��λ���ֽڣ�6*4=24
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
//	int b = a++;//����++����ʹ�ã���++��a��������ӣ�b��ʹ�á�
//	printf("%d %d\n",a,b);
//	return 0;
//}
//int main ()
//{
//	//�棺����
//	//�٣� 0;
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
//	int a = 10;//�Զ��������ֲ������Դ�auto
//	//signed //����������ţ�
//	//unsigned int   //�޷��Ŷ���
//	//typedef //�����ض���
//	//����
//	//typedef unsigned int u_int
//	//u_int num1 = 10;
//	//static  �ֲ��������������ڱ䳤�����Ա���ʹ�á�
//����ȫ�ֱ���ʱ�ı��˱������������þ�̬��ȫ�ֱ���ֻ�����Լ����ڵ�Դ�ļ���ʹ��
//����Դ�ļ���û�취ʹ��
//	//extern �����ⲿ���� 	
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

//ָ��

//int main()
//{
//	int a = 10;
//	int *p = &a;
//	*p = 20;//���൱�ڰ�a=10 �浽��*p�ĵ�ַ��
//	//֮���*p�ǽ���ַ�ڵ�ֵ��Ϊ��20�����൱��a��ֵ�����20
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


//�ṹ��
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
//	//���ýṹ������-����һ�������͵Ľṹ��
//	struct Book b1 = {"C���Գ������",55};
//	strcpy(b1.name,"C++");//�ַ�����������һ���ǵ�ַ���ڶ����ǻ����
//	
//	/*struct Book* pb = &b1; 
//	printf("%s\n",pb->name);
//	printf("%d\n",pb->price);*/
//	/*printf("������%s\n",b1.name);
//	printf("�۸�%d\n",b1.price);*/
//	return 0;
//}


//��֧��ѭ��

//if ���
//int main ()
//{
//	int age = 0;
//	printf("�������������䣺");
//	scanf(" %d",&age);
//	if (age<18)
//		printf("������������\n");
//	else if(age>=18 && age<30)
//		printf("������������\n");
//	else if(age>=30 && age<50)
//		printf("������������\n");
//	else
//		printf("������������\n");
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	if(a==10)
//		if(b==20)
//			printf("�޵�\n");
//		else				//else�������ifƥ�䣬���Դ����޷�ִ��
//			//��Ϊ��һ��if��û�н�ȥ��
//			printf(" ����\n");
//	return 0;
//}
//int main ()
//{
//	int num = 3;
//	if(num == 5)//Ϊ�˷�ֹbug�������ʹ��if(5 == num)
//		//����������ǰ��
//	{
//		printf("�Ǻ�\n");
//	}
//	 return 0;
//}
//int main ()
//{
//	int num = 0;
//	printf("������һ������");
//	scanf("%d",&num);
//	if(num % 2 == 1)
//		printf("����һ������\n");
//	else
//		printf("����һ��ż��\n");
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
//switch //���α��ʽ
//int main ()
//{
//	int day = 0;
//	printf("���������֣�");
//	scanf("%d",&day);
//	switch(day)
//	{
//	case 1:
//		printf("����һ\n");
//		break;//ֱ������switch���
//	case 2:
//		printf("���ڶ�\n");
//		break;
//	case 3:
//		printf("������\n");
//		break;
//	case 4:
//		printf("������\n");
//		break;
//	case 5:
//		printf("������\n");
//		break;
//	case 6:
//		printf("������\n");
//		break;
//	case 7:
//		printf("������\n");
//		break;
//  default:
//   	printf("�������\n");
//	}
// return 0;
//}
//while ѭ��
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
//	printf("���������룺");
//	scanf("%s",password);
//	while((ch=getchar())!='\n')
//	{
//		;
//	}
//	printf("��ȷ��(Y/N):");
//	ret = getchar();
//	if(ret == 'Y') 
//		printf("ȷ�ϳɹ�\n");
//	else
//		printf("ȷ��ʧ��\n");
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
//	for (i=0;i<10;i++)//forѭ���ĳ�ʼ�����������ж϶���uŶʡ��
//		//����forѭ�����жϲ��������ʡ�ԣ���ô�ж������ͺ�Ϊ��
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
//����׳�

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
//	printf("�ҵ��ˣ�%d���±��� %d\n",arr[i],i);
//	return 0;
//}
//���ֲ���
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
//			printf("�ҵ��������%d\n",mid);
//			break;
//		}
//	}
//	if(left > right)
//	{
//		printf("�Ҳ�����\n");
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
//		printf("����������:");
//		scanf("%s",password);
//		if(strcmp(password,mima) == 0)
//		{
//			printf("������ȷ");
//			break;
//			
//		}
//		else 
//		{
//			printf("�������,������%d �λ���\n",b);
//			if(0 == b)
//			{
//				printf("������������д����Ժ�����\n");
//			}
//			
//		}
//
//	}
//	return 0;
//}
// �Ƚϴ�С
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
// z���Լ��
//int main ()
//{
//	int a = 0;
//	int b = 0;
//	int x = 0;
//	int temp = 0;
//	int c = 0;
//	printf("��������������");
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
//		printf("���Լ����%d",b);
//	}
//	else
//	{ 
//		if(b%temp == 0)
//			printf("���Լ������%d",temp);
//		else
//			printf("�����Լ��");
//	}
//	return 0;
//}
//int main ()
//{
//	int n = 18;
//	int m = 48;
//	int r = 0;
//	printf("��������������");
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
//������
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
//	printf("\n1��200�ڵ���������   %d\n",count);
//	printf("1��200�ڵ���������   %d\n",sum);
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
 //}//û�а���99������9��������ӡ�͵�������if��䣻
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
//�˷��ھ���
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
//			printf("%d*%d=%-2d  ",i,j,i*j);//%2d�Ǵ�ӡ��λ��ֻ��һλ���ǿո��룬���ı�ʾ�Ҷ���
//			//���ı�ʾ�����
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
//		printf("�Ҳ���");
//	}
//	return 0;
//}
//��������Ϸ
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
//	//ʱ���   ʹ��ʱ�����������������
//    ret = rand()%100+1;
//	/*printf("%d\n",ret);*/
//	while(1)
//	{
//		printf("�������: ");
//		scanf("%d",&guess);
//		if(guess>ret)
//		{
//			printf("�´���\n");
//		}
//		else if(guess<ret)
//		{
//			printf("��С��\n");
//		}
//		else 
//		{
//			printf("�¶���\n");
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
//		printf("��ѡ��(1|0)��");
//		scanf("%d",&input);
//		switch(input)
//		{
//			case 1:
//				game();
//				break;
//			case 0:
//				printf("�˳���Ϸ\n");
//				break;
//			default:
//				printf("�������\n");
//				break;
//		}
//	}while (input);
//	return 0;
//}
//int main()
//{
//	//shutdown -s -t 60
//	//system() - ִ��ϵͳ����
//	char input[20]={0};
//	system("shutdown -s -t 60");
//again:
//	printf("��ĵ������Ϲػ�������������ȡ���ػ�");
//	scanf("%s",input);
//	if(strcmp(input,"������") == 0)
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
//	memset(arr,'#',5);//�������asciiֵ
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
//int binary_search(int arr[],int k,int sz)//������arr��ָ�롣
//{
//	int left = 0;
//	//int sz = sizeof(arr)/sizeof(arr[0]);//������ʹ��ʵ�δ��ͣ����͹������ǵ�һ��Ԫ�صĵ�ַ
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
//	//��һ������������в��Ҿ����һ����
//	//����ҵ��˾ͷ����±꣬�Ҳ����ͷ���-1
//	int arr[] = {1,2,3,4,5,6,7,8,9,10};
//	int k = 7;
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	int ret = binary_search(arr,k,sz);
//
//	if(-1 == ret)
//	{
//		printf("�Ҳ����������\n");
//
//	}
//	else
//	{
//		printf("�ҵ����������:%d",ret);
//	}
//	return 0;
//}
//�ݹ�
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

//�ݹ�
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
//sizeof��strlen
//strlen�����ַ������ȵģ�ֻ������ַ������ȣ��⺯������Ҫ����ͷ�ļ�
//sizeof�Ǽ�����������飬���͵Ĵ�С-��λ���ֽ�-������\0Ҳռ�ÿռ�
//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = {'a','b','c'};
//	printf("%d\n",sizeof(arr1));
//	printf("%d\n",sizeof(arr2));
//	printf("%d\n",strlen(arr1));
//	printf("%d\n",strlen(arr2));//strlenֻ����ҵ�\0�Ҳ���\0�������ֵ
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
//	char arr[3][4] = {1,2,3,4,5};//��ά�����п���ʡ�ԣ��в���ʡ��
//	return 0;
//}
//void bubble_sort(int arr[],int sz)
//{
//	//ȷ��ð�������������
//	int i = 0;
//	for(i=0;i<sz-1;i++)
//	{
//		int flag = 1;//������һ�˵������Ѿ�������
//		//ÿһ��ð������
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
//	//ð������
//	int i = 0;
//	int sz = sizeof(arr)/sizeof(arr[0]);//sizeof(������)
//	//��������ʾ�������飬sizeof(arr)���������������Ĵ�С
//	//&�����������������������飬&��������ȡ��������������ĵ�ַ  
//	bubble_sort(arr,sz);
//	for(i=0;i<sz;i++)
//	{
//		printf("%d ",arr[i]);
//	}
//	return 0;
//}