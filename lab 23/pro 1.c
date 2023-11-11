#include<stdio.h>
int main(){
	int i,n,a1[n],a2[n];
	printf("enter value of n : ");
	scanf("%d",&n);
	printf("enter element of array : ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a1[i]);
	}
	printf("array 1 is : ");
	for(i=0;i<n;i++)
	{
		printf("%d ",a1[i]);
	}
	for(i=0;i<n;i++)
	{
		a2[i]=a1[i];
	}
	printf("\narray 2 is : ");
	for(i=0;i<n;i++)
	{
		printf("%d ",a2[i]);
	}
}
