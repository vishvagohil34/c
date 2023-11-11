#include<stdio.h>
void main(){
	int n,i,even=0,odd=0,b;
	printf("enter n : ");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		b=a[i];
		if(b%2==0)
		{
			even++;
		}
		else
		{
			odd++;
		}
	}
			printf("%d %d",even,odd);
		}
	

