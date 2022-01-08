/*Program to read the age and print the following ( use nested if)
age <18 Minor
age >=18 and age <45 eligible for vaccine in the second phase
age >=45 senior ..eligible for vaccine in the first phase.*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int age;
	system("clear");
	printf("Enter the age\n");
	scanf("%d",&age);
	if(age>=18)
	{
		if((age>=18)&&(age<45))
			printf("Eligible for vaccine in second phase\n");
		else
			printf("Eligible for vaccine in first phase\n");
	}
	else
		printf("Minor\n");
	return 0;
}						
	
