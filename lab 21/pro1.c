#include<stdio.h>
void main(){
	int n,i;
	printf("enter the value of n : ");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n-1;i++){
		scanf("%d",&a[i]);
}
 printf("----------");
     for(i=0;i<n;i++){
     	printf("%d",a[i]);
	 }
	 printf("----------");
    for(i=n-1;i>=0;i--){
		printf("%d",a[i]);
	}
}


