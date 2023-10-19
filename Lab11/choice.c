#include<stdio.h>
void main(){
	int a,b,sum,sub,mul,div;
	char x;
	printf("enter the operator : ");
	scanf("%c",&x);
	printf("enter the value of a : ");
	scanf("%d",&a);
	printf("enter the value of b : ");
	scanf("%d",&b);

	switch(x)
	{
		case'+':
			printf("sum = %d",a+b);
		break;
		case'-':
			printf("sub = %d",a-b);
		break;
		case'*':
			printf("mul = %d",a*b);
		break;
		case'/':
			printf("div = %d",a/b);
		break;
	}
}


