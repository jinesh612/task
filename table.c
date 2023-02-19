#include<stdio.h>
int main()
{
	int num,i;
	printf("enter a number you want to create a number table : ");
	scanf("%d",&num);
	for(i=1; i<=10;i++){
		printf("\n%d * %d = %d\n",num, i, num*i);
	}
	return 0;
	
}