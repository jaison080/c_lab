/*Volume and surface area of a sphere given the radius*/
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
	float area,volume;
	int r;
	system("clear");
	printf("Enter the radius\n");
	scanf("%i",&r);
	area = 4*M_PI*pow(r,2);
	volume = ((4*M_PI*pow(r,3))/3);
	printf("Area - %f\n",area);
	printf("Volume - %f\n",volume);
	return 0;
}
