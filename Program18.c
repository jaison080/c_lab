/*Program to check the type of a triangle*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
	float a,b,c;
	system("clear");
	printf("Enter the sides of the triangle\n");
	scanf("%f",&a);
	scanf("%f",&b);
	scanf("%f",&c);
	if((a==b)&&(b==c))
		printf("Equilateral triangle\n");
	else
	{	
		if((a==b)||(b==c)||(c==a))	
			printf("Isoceles triangle\n");
		else
			printf("Scalene triangle\n");
	}		
	return 0;
}		 	
