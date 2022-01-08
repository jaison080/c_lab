/*Program to check whether the given number is zero, positive or negative*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
	float n;
	system("clear");
	printf("Enter a number\n");
	scanf("%f",&n);
	if(n>0)
		printf("Positive number\n");
	else if(n<0)
		printf("Negative number\n");
	else
		printf("Zero\n");
	return 0;
}	
