#include<stdio.h>
int main(){
	int i,n,negative=0;
	printf("enter value of n : ");
	scanf("%d",&n);
	int a[n];
	printf("enter element of array : ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("array 1 is : ");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]<0)
		{
			negative++;
		}
	}
	printf("\nnegative elements in array is : %d",negative);
}
