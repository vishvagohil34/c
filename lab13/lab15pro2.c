#include<stdio.h>
void main (){
	int n,num,sum=0,a=1;
	float avg;
	printf("enter the no : ");
	scanf("%d",&n);
	while(a<=n)
	{
		scanf("%d",&sum);
		sum=sum+num;
		a++;
	}
	avg=sum/n;
	printf("%d %f",sum,avg);
}
