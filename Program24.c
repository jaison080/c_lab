/*Program to print the absolute value of a number  without using the abs() function*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
	float n,a;
	system("clear");
	printf("Enter a number\n");
	scanf("%f",&n);
	if(n>=0)
		printf("%f\n",n);
	else
	{
		a=-1*n;
		printf("%f\n",a);
	}	
	return 0;
}	
	
