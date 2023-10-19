#include<stdio.h>
void main (){
	int n,last=0;
	scanf("%d",&n);
	last=n%10;
	while(n>=9)
	{
		n=n/10;
	}
	last=last+n;
	printf("%d",last);
}
