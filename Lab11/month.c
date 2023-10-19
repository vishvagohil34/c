#include<stdio.h>
void main (){
	int choice;
	printf("\n1==january\n2==fabruary\n3==march\n4==april\n5==may\n6==jun\n7==july\n8==augest\n9==septmber\n10==octomber\n11==november\n12==december");
	scanf("%d",&choice);
	if(choice==1){
	printf("january");
}
	else if(choice==2){
		printf("fabruary");
	}
	else if(choice==3){
		printf("march");
}
    else if(choice==4){
    	printf("april");
}
    else if(choice==5){
    	printf("may");
}
   else if(choice==6){
   	printf("jun");
}
   else if(choice==7){
   	printf("july");
   }	
   else if(choice==8){
		printf("augest");
}
    else if(choice==9){
    	printf("septmber");
}
    else if(choice==10){
    	printf("octomber");
}
   else if(choice==11){
   	printf("november");
}
   else if(choice==12){
   	printf("december");
   }
   	else{
   		printf("not valid");
	   }
}
