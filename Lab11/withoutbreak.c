#include<stdio.h>
void main (){
	int n;
	printf("enter number : ");
	scanf("%d",&n);
	switch(n){
		case 1 :
		case 3 :
		case 5 :
		case 7 :
		case 8 :
		case 10 :
		case 12 :
			printf("\n31 days");
		case 2 :
			printf("\n29 days");
		case 4 :
		case 6 :
		case 9 :
		case 11 :
			printf("\n30 days");
		default:
			printf("\nnot valid");
			
	}
}
