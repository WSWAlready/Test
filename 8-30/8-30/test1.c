#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<assert.h>
void reverse(char* arr)
{
	

	int len = strlen(arr);
	char* left = arr;
	char* right = arr + len - 1;
	while(left < right)
	{
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}

}
int main()
{
	char arr[10] = { 0 };
	scanf("%s",arr);
	//ÄæÐòº¯Êý
	reverse(arr);
	printf("%s",arr);
	return 0;
}