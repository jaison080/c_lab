/*Area of the circle given the circumference.*/
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
	float c,radius,area;
	system("clear");
	printf("Enter the circumference\n");
	scanf("%f",&c);
	radius = c/(2*M_PI);
	area = M_PI*pow(radius,2);
	printf("Area - %f\n",area);
	return 0;
}
