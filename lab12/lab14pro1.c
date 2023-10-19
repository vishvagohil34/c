#include<stdio.h>
void main(){
	int a=1,sum=0,n;
	scanf("%d",&n);
	while(a<=n)
	{
	  if(a%2==0)
	{
	  	sum=sum-a;
	}
	else 
	{
		sum=sum+a;
	}
	a++;	
	}
	printf("%d",sum);
}
