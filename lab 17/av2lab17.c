#include<stdio.h>
void main(){
	int i=1,n,odd=0,even=0;
	scanf("%d",&n);
	do{
	       scanf("%d",&n);
			if(n%2==0){
			
			even++;
		}
		else{
			odd++;
		}	
		i++;
	}
	while(i<=10);
	printf("even=%d odd=%d",odd,even);
}
