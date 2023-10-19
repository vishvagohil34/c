//print week based on given number
#include<stdio.h>
void main (){
	int choice;
	printf("\n1==sunday\n2==monday\n3==tuesday\n4==wednesday\n5==thursday\n6==friday\n7==saturday");
	scanf("%d",&choice);
	if(choice==1){
	printf("sunday");
}
	else if(choice==2){
		printf("monday");
	}
	else if(choice==3){
		printf("tuesday");
}
    else if(choice==4){
    	printf("wednesday");
}
    else if(choice==5){
    	printf("thrusday");
}
   else if(choice==6){
   	printf("friday");
}
   else if(choice==7){
   	printf("saturday");
   }
   	else{
   		printf("not valid");
	   }
}
