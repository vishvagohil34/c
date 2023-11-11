#include<stdio.h>
void main(){
	int i,product=1,x,y;
	scanf("%d %d",&x,&y);
	for(i=1;i<=y;i++)
	{
		product=product*x;
	}
	printf("%d",product);
}
