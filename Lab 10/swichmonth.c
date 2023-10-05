#include<stdio.h>
void main (){
	int n;
	printf("enter number : ");
	scanf("%d",&n);
	switch(n){
		case 1:
		printf("january");
		break;
		case 2:
		printf("febuary");
		break;
		case 3:
		printf("march");
		break;
		case 4:
		printf("april");
		break;
		case 5:
		printf("may");
		break;
		case 6:
		printf("june");
		break;
		case 7:
		printf("july");
		break;
		case 8:
		printf("augest");
		break;
		case 9:
		printf("septmber");
		break;
		case 10:
		printf("octomber");
		break;
		case 11:
		printf("november");
		break;
		case 12:
		printf("december");
		break;
		defult:
		printf("invalid number");
}
}
