#include<stdio.h>
int main(){
	char s[1000];
	int i,count=0;
	printf("enter the string : ");
	scanf("%s",s);
	printf("string is : %s",s);
	for(i=0;s[i]!='\0';i++)
	{
		count++;
	}
	printf("\nstring length : %d",count);
}
