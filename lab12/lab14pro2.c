#include<stdio.h>
void main(){
	int a=1,n;
	printf("enter the n : ");
	scanf("%d",&n);
    while(a<=10)
	{
		printf("%d x %d = %d\n",n,a,(n*a));
		a++;
		}	
}
