#include<stdio.h>
void main(){
	int a,b,c;
	printf("Enter value of a : ");
	scanf("%d",&a);
	printf("Enter value of b : ");
	scanf("%d",&b);
	printf("Enter value of c : ");
	scanf("%d",&c);
	if(a>b && a>c){
		printf("%d is largest",a);
	}
	else if(b>a && b>c){
		printf("%d is largest",b);
	}
	else if (c>a && c>b){
		printf("%d is largest",c);
	}
}
