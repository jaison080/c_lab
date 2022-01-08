/*Hypotenuse of a right-angled triangle, given the length of the other two sides*/
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
	int l,b,h2;
	float h;
	system("clear");
	printf("Enter the two sides of the right angled triangle\n");
	scanf("%i",&l);
	scanf("%i",&b);
	h2 = (pow(l,2) + pow(b,2));
	h = sqrt(h2);
	printf("Hypotenuse - %f\n",h);
	return 0;
}
