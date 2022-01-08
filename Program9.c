/*Volume and surface area of a cube given one side (s)*/
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
	int a;
	float area,volume;
	system("clear");
	printf("Enter the length of one side of cube \n");
	scanf("%i",&a);
	area = 6*pow(a,2);
	volume = pow(a,3);
	printf("Area - %f\n",area);
	printf("Volume - %f\n",volume);
	return 0;
}
