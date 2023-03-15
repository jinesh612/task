//task next lecture: 
//=================choice board===============
//
//1.addition
//2. subtraction
//3.multiplication
//4. division
//5.modulus
//6.exit
//
//enter your choice 2
//enter two numbers: 12 6
//your answer is: 6
//
//do you want to continue[y/n]:
//	if n:
//		thankyou
//		if y:
//			repeat your process.

#include<stdio.h>
int f;
int a,b;



int main(){


	
		printf("\n==================choice board=============\n\n");
printf(" \n 1.addition\n 2.subtraction\n 3.multiplication\n 4.division\n 5.modulus\n 6.exit\n");
	
choice:


	printf("\n\nenter your choice from choice board: ");
	scanf("%d",&f);
	printf("\n\nenter two numbers: ");
	scanf("%d %d",&a,&b);
	switch(f){
	case 1: printf("\naddition: %d + %d = %d",a,b,a+b);
	
		break;

	case 2: printf("\nsubtraction: %d - %d = %d",a,b,a-b);
		break;
	
	case 3:
		printf("\nmultiplication: %d * %d = %d",a,b,a*b);
		break;
	
	case 4:
		printf("\ndivision: %d / %d = %d",a,b,a/b);
		break;
	
	case 5:
		printf("\nmodulus: %d % %d = %d",a,b,a%b);
		break;
	
	case 6:
		printf("\nexit");
		break;}
	
	


 char yes[4];
	  // allocate space for user input

    printf("\n\ndo you want to continue 'yes' or 'no': ");
    scanf("%s",&yes);  // read user input

    if (strcmp(yes,"yes")==0) {
        goto choice;  // user input was "yes"
    } else {
        printf("\n\nThankyou\n");  // user input was not "yes"
    }

return 0;
}



