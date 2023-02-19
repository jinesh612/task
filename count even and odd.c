#include<stdio.h>
int main()
{
int num,i,even=0,odd=0;
printf("enter any ten numbers: \n\n");

 for(i=1;i<=10; i++){
 	scanf("%d",&num);
 	
 	if(num%2==0){
 		even++;
	 }
	 else{
	 	odd++;
	 }
	 
}
 printf("\ncount of even no: %d\n",even);
 printf("\ncount of odd no: %d",odd);
 return 0;
}