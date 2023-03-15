#include<stdio.h>
int main()
{
	int num,i,j;
	printf("enter a number you want to create a number table : ");
	scanf("%d",&num);
	for(i=1; i<=10;i++){
		
		if(num==0){
			printf("\n0 has no table\n");}
					
		else{
			
		printf("\n%d * %d = %d\n",num, i, num*i);}
	}
	

	

	return 0;
	
}