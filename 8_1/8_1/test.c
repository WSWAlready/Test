#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	short s = 0;
//	int a = 10;
//	printf("%d\n",sizeof(s = a + 5));//sizeof�����еı��ʽ�ǲ���������
//	printf("%d\n",s);
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	printf("%d\n",~a);//��λȡ��
//	int a = 1
//
//
//	return 0 ;
//}
//int main()
//{
//	int a = 10;
//	printf("%d\n",++a);//ǰ��++����++����ʹ��
//	printf("%d\n",a++);//����++����ʹ�ã���++
//	return 0;
//}
//int main()
//{
//	int a = (int )3.14;//ǿ������ת������double�͵�ת����int����
//	return 0;
//}
//void test1(int arr[])//���͵��ǵ�һ��Ԫ�صĵ�ַ
////ָ�����ĸ��ֽڻ�˸��ֽڣ�32λ��
//{
//	printf("%d\n",sizeof(arr));
//}
//void test2(char ch[])
//{
//	printf("%d\n",sizeof(ch));
//}
//int main()
//{
//	int arr[10] = {0};
//	char ch[10] = {0};
//	printf("%d\n",sizeof(arr));
//	printf("%d\n",sizeof(ch));
//	test1(arr);
//	test2(ch);
//	return 0;
//}
//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = a && b;//�߼��룺ͬΪ�����档�߼���ͬΪ��Ϊ��
//	printf("%d\n",c);
//	return 0;
//}
//int main()
//{
//	int i = 0,a = 0,b = 2,c = 3,d = 4;
//	i = a++ && ++b && d++;//a = 0Ϊ�ٺ���Ͳ����㣬����a++��
//	printf("%d%d%d\n",a,b,d);
//	return 0;
//}
//int main()
//{
//	int i = 0,a = 1,b = 2,c = 3,d = 4;
//	i = a++ || ++b || d++;//a = 1Ϊ�����Ͳ����㣬����a++��
//	printf("%d%d%d\n",a,b,d);
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = 0;
//	max = (a > b ? a : b);
//	printf("%d\n",max);
//	return 0;
//}

//struct Stu
//{
//	char name[20];
//	int age;
//	char id[20];
//};//������һ���ṹ�����ͣ�����int,float
//
//int main()
//{
//	 
//	struct Stu s1 = {"����",20,"0224171"};//ʹ��������ʹ�������
//	struct Stu* ps = &s1;
//	printf("%s\n",ps->name);//ָ���ַ�ڲ���ָ���������
//	//�ṹ��ָ��->��Ա��
//	//printf("%s\n",(*ps).name);
//	/* printf("%s\n",s1.name);
//	printf("%d\n",s1.age);
//	printf("%s\n",s1.id);
//*/
//	 return 0;
//}

//��ʽ����ת��
//int main()
//{
//	char a = 3;
//	//000000000000000000000000011
//	//�ضϣ�00000011 - a;
//	char b = 127;
//	//�ضϣ�01111111 - b;
//	char c = a + b;
//	//a + b 
//	//00000011
//	//���������������з��ŵ�char����λ�Ƿ���λ����λ�����Ƿ���λ
//	//000000000000000000000000011
//	//000000000000000000001111111
//	//000000000000000000010000010 - c
//	//10000010 - c
//	//000000000000000000010000010 ��������
//	//111111111111111111110000010  - ����
//	//111111111111111111110000001  - ����
//	//100000000000000000001111110  - ԭ��
//	// - 126
//	printf("%d\n",c);
//	
//	return 0;
//}
//char ��ֻҪ������ʽ����ᷢ����������
//���ӱ��ʽ
//1.�����������ȼ���
//2.�������Ľ���ԣ��������ҽ�ϡ�
//3.�Ƿ������ֵ˳�������߼��룬���Ϊ���ұ߲���Ҫ����
