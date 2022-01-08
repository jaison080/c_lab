/*Volume and surface area of the cylinder given radius(r) and height(h)*/
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
	int r,h;
	float area,volume;
	system("clear");
	printf("Enter the radius\n");
	scanf("%i",&r);
	printf("Enter the height\n");
	scanf("%i",&h);
	area = 2*M_PI*r*(r+h);
	volume = M_PI*pow(r,2)*h;
	printf("Area - %f\n",area);
	printf("Volume - %F\n",volume);
	return 0;
}
	
