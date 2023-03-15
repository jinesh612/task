// 1 to 5 tables using nested for loop

#include <stdio.h>
int main(){
	int num,i,j;
	printf("enter a number: ");
	scanf("%d",&num);
	
	for(i=1;i<=num;++i)
	
	{
	printf(" multipliaction table of: %d\n",i);
	
		for(j=1;j<=10;++j)
		{
				printf("%d * %d = %d\n",i,j,i*j);
			
		}
		printf("\n");
	
	}
	
	return 0;
	}


	
    


