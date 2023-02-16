//task-5 total marks,percentage and grade.

#include<stdio.h>
int main()
{
	printf("\t\tenter your marks\n\n");
	int maths;
	printf("enter maths marks: ");
	scanf("%d",&maths);

int physics;
printf("\nenter physics marks: ");
scanf("%d",&physics);

int english;
printf("\nenter english marks: ");
scanf("%d",&english);

int chemistry;
printf("\nenter chemistry marks: ");
scanf("%d",&chemistry);

int computer;
printf("\nenter computer marks: ");
scanf("%d",&computer);

float total,percentage;

total=(maths+physics+english+chemistry+computer);
printf(" \n\ntotal marks: %f\n\n",total);

percentage=(total/500)*100;
printf("your percentage: %f",percentage);

  printf("\n\nyour grade is");
  if(percentage>=90)
  {
    printf(" A");
  }
  else if(percentage>=75)
  {
    printf(" B");
  }
  else if(percentage>=60)
  {
    printf(" C");
  }
  else if(percentage>=40)
  {
    printf(" D");
  }
  else
  {
    printf(" fail");
    }

	return 0;
}