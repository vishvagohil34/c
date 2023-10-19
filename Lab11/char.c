#include<stdio.h>
void main(){
	char c;
	printf("enter the value of c : ");
	scanf("%c",&c);
	((c>='a'&&c<='z') || (c>='A'&&c<='Z'))
	?
	printf("%c is alphabet",c) : printf("%c is not alphabet",c);
}
