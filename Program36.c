/*Program to write a menu driven program to compute area of a circle (option 1) or area of a triangle ( option 2) using switch statement*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
	int n;
	float a,b,c,r,area,s,a2;
	system("clear");
	printf("1.Area of circle\n");
	printf("2.Area of triangle\n");
	printf("Enter a number\n");
	scanf("%d",&n);
	switch(n)
	{
		case 1:
		{
			printf("Enter the radius of circle\n");
			scanf("%f",&r);
			area=M_PI*pow(r,2);
			printf("Area of circle - %f\n",area);
			break;
		}
		case 2:
		{
			printf("Enter the three sides of a triangle\n");
			scanf("%f",&a);	
			scanf("%f",&b);	
			scanf("%f",&c);	
			s = (a+b+c)/2;
			area = sqrt(s*(s-a)*(s-b)*(s-c));
			printf("Area - %f\n",area);
			break;
		}
		default:
			printf("Invalid value\n");
	}
	return 0;
}				
