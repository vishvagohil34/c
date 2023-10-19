#include<stdio.h>
void main()
{
	float base,h,l,b,s,r,area;
	int choice;
	printf("enter 1 to find area of circle");
		printf("\nenter 2 to find area of triangle");
			printf("\nenter 3 to find area of rectangle");
				printf("\nenter 4 to find area of square");
				scanf("%d",&choice);
				switch(choice)
				{
					case 1:
						//area of circle
						printf("enter value of b and h");
						scanf("%F",&r);
						area=3.14*r*r;
						printf("area of circle=%f",area);
						break;
						case 2:
							//area of triangle
							printf("enter value of b and h");
							scanf("%f %f",&base,&h);
							area=0.5*base*h;
							printf("area of triangle=%f",area);
							break;
							case 3:
								//area of rectangle
								printf("enter height and lenth:");
								scanf("%f %f",&b,&l);
								area=l*b;
								printf("area of rectangle:%f",area);
								break;
								case 4:
									//area of square
									printf("enter side:");
									scanf("%f",&s);
									area=s*s;
									printf("area of square=%f",area);
									break;
									default:
									printf("enter valid choice");
								
							
					
				}
}
