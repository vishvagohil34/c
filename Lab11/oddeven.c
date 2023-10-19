#include<stdio.h>
void main(){
	int a,rem;
	printf("enter the value of a");
	scanf("%d",&a);
	rem=a%10;
	if(rem%2==0){
	printf("%d is even number",rem);
	}
	else{
	printf("%d is odd number",rem);
	}
	
}
