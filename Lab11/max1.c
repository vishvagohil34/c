#include<stdio.h>

void main(){
	int a,b,c,max;
	printf("enter the value of a,b and c : ");
	scanf("%d%d%d",&a,&b,&c);
	max=(a>b)?a:b;
	max=(max>c)?max:c;
	printf("max =%d",max);
}
