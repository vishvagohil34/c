#include<stdio.h>
void main (){
	int i=1,n,sum=0;
	scanf("%d",&n);
	do{
		sum=sum+i;
		i++;
	}
	while(i<=n);
	printf("%d",sum);
}
