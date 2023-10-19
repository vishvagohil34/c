#include<stdio.h>
void main(){
	int a=1,x,y,product=1;
	printf("enter the x and y : ");
	scanf("%d %d",&x,&y);
	while(a<=y)
	{
		product=product*x;
		a++;
	}
	printf("%d",product);
}
