#include<stdio.h>
void main(){
	int a,b,c,large;
	printf("enter the value of a and b and c : ");
	scanf("%d %d %d",&a,&b,&c);
	if(a>b)
	{
		large=a;
	}
    else {
		large=b;
	}
	switch(large){
	default:
		printf("%d",large*c);
		break;
	}
}
