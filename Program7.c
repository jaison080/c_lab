/*Area of an equilateral triangle given one side (s)*/
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
	int a;
	float area;
	system("clear");
	printf("Enter the length of one side\n");
	scanf("%i",&a);
	area = (sqrt(3)*pow(a,2))/4;
	printf("Area - %f\n",area);
	return 0;
}
