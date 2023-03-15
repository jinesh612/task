//task-2 next lec:
//	
//	==================area finder===============
//	
//	1.circle
//	2.triangle
//	3.rectangle
//	
//	enter choice: 3
//	enter length and breadth:
//		area of rectangle
//		
//		thankyou

#include<stdio.h>
int b,f;
float pi=3.14;
float half=0.5;
int a;



int main(){
	printf("=================Area Finder===============\n");
	printf(" \n 1.Circle\n 2.Triangle\n 3.Rectangle\n ");
	printf("\nenter any one shape from given options: ");
	
		scanf("%d",&f);
	
	switch (f){
		case 1: printf("\narea of circle = pi * radius * radius\n");
		printf("\nEnter radius of a circle: ");
		scanf("%d",&a);
		printf(" \narea of circle : %.2f * %d * %d = %.2f ",pi,a,a,pi*a*a);
		break;
		
	
		case 2: printf("\narea of triangle = 1/2 * base * height\n");
		printf("\nEnter base and height of a triangle: ");
		scanf("%d %d",&a,&b);
		printf(" \narea of triangle :%.1f * %d * %d = %.2f",half,a,b,half*a*b);
		break;
		
		
		case 3: printf("\narea of rectangle = length * breadth\n");
		printf("\nEnter length and breadth of a rectangle:  ");
			scanf("%d %d",&a,&b);
		printf(" \narea of rectangle : %d * %d = %d ",a,b,a*b);
		break;
	
	
}
printf("\n\nThank you");
	return 0;
	
}