#include<stdio.h>
void main(){
	int n,m=0,rem;
	printf("enetr the value of N:");
	scanf("%d",&n);
	int temp=n;
	while(n>0)
	{
		rem=n%10;
		m=m*10+rem;
		n=n/10;
	}
	if(temp==m)
	{
		printf("palindrome");
	}
	else
	{
		printf("not palindrome");
	}
}
