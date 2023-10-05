	#include<stdio.h>
void main(){
	int unit,bill,subcharge;
	printf("enter unit : ");
	scanf("%d",&unit);
	if(unit<=50){
		bill=unit*0.50;
}
	else if(unit<=150){
	    bill=50*0.50+(unit-50)*0.75;
}
    else if(unit<=250){
    	bill=50*0.50+100*0.75+(unit-1.50)*1.20;
}
    else{
    	bill=50*0.50+100*0.75+100*1.20+(unit-1.50)*1.50;
}
subcharge=0.20*unit;
bill=subcharge+bill;
printf("bill : %d",bill);
}
