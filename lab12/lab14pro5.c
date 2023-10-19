#include<stdio.h>
void main (){
	int a=1,n;
	printf("enter the number : ");
	scanf("%d",&n);
	while(a<=n)
	{
		if(n%a==0){
			printf("%d \n",a);
		}
	   a++;	
	}
}
