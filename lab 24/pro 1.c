#include<stdio.h>
int main(){
	int i,n,min=0,max=0;
	printf("enter value of n : ");
	scanf("%d",&n);
	int a[n];
	printf("enter element of array : ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("array is : ");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
}
    max=a[0];
    min=a[0];
    for(i=0;i<n;i++)
    {
    	if(a[i]>=max)
    	       max=a[i];
    	else
    	       min=a[i];
    }
    printf("\nvalue of maximum element in array is : %d",max);
    printf("\nvalue of minimum element in array is : %d",min);
}

