/*Program to read a mark out of 100 and print the corresponding grade*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
	float mark;
	system("clear");
	printf("Enter the mark out of 100\n");
	scanf("%f",&mark);
	if(mark>=90)
		printf("O\n");
	else if(mark>=85&&mark<90)
		printf("A+\n");
	else if(mark>=80&&mark<85)
		printf("A\n");	
	else if(mark>=70&&mark<80)
		printf("B+\n");
	else if(mark>=60&&mark<70)
		printf("B\n");
	else if(mark>=50&&mark<60)
		printf("C\n");	
	else if(mark>=45&&mark<50)
		printf("P\n");			
	else
		printf("F\n");	
	return 0;
}		
