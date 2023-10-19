#include<stdio.h>
void main (){
	int a=2,n,flag=0;
	scanf("%d",&n);
	while(a<n)
	{
		if(n%a==0)
		{
		flag=1;
		}
		a++;
	}
	if(flag==1)
	{
		printf("not prime");
	}
}
