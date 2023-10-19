#include<stdio.h>
void main(){
	char c;
	printf("enter the value of c");
	scanf("%c",&c);
	
	if(c>=90&& c<=65){
	printf("%c is uppercase",c);
}
else if (c>=48 && c<=57){
	printf("%c is degit",c);
}
 else if(c>=97 && c<=122){
 	printf("%c is lowercase",c);
 }
 else{
 	printf("user enter specil charactor"); 
 }
}
