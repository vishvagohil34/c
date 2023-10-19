#include<stdio.h>
void main(){
	int sub1,sub2,sub3,sub4,sub5,per;
	printf("enter the value of sub1 :");
	scanf("%d",&sub1);
	printf("enter the value of sub2 :");
	scanf("%d",&sub2);
	printf("enter the value of sub3 :");
	scanf("%d",&sub3);
	printf("enter the value of sub4 :");
	scanf("%d",&sub4);
	printf("enter the value of sub5 :");
	scanf("%d",&sub5);
	per=(sub1+sub2+sub3+sub4+sub5)/5;
	if(per<35){
		printf("fail");
	}
	else if(per<36 && per<45){
		printf("pass");
	}
	else if(per<46 && per>60){
		printf("second class");
	}
	else if(per<65 && per>70){
		printf("first class");
	}
	else if (per>70){
		printf("distinction");
	}
}
