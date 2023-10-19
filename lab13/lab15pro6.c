#include<stdio.h>
void main (){
	int a=1,n,sum=0;
	scanf("%d",&n);
	while(a<n)
	{
		if(n%a==0)
		{
		sum=sum+a;	
	}
	     a++;	
	}
	   if(sum==n)
	   {
	   	 printf("perfect");
	   }
	   else{
	   	printf("not perfect");
	   }
	}

