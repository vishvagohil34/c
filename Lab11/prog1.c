#include<stdio.h>
void main()
{
	float a,b,ans=0;
	char choice;
	printf("enter two numbers:");
	scanf("%f %f",&a,&b);
	printf("enter operator(+,-,*,/)");
	scanf(" %c",&choice);
	switch(choice)
	{
		case '+':
		ans=a+b;
		printf("sum=%f",ans);
		break;
		case '-':
		ans=a-b;
		printf("subtraction=%f",ans);
		break;
		case '*':
		ans=a*b;
		printf("multiplication=%f",ans);
		break;
		case '/':
		 if(b!=0)
		 {
		 	ans=a/b;
		 	printf("divide=%f",ans);
		 }
		 else
		 {
		 	printf("Not allowed");
		 }
		 break;
		 default:
		  printf("enter valid operator");
	}
}
