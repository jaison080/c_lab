/*Area of the circle given the diameter*/
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
	int d;
	float area;
	system("clear");
	printf("Enter the diameter\n");
	scanf("%i",&d);
	area = M_PI*(d/2)*(d/2);
	printf("Area - %f\n",area);
	return 0;
}
