/*Area of a triangle given three sides a,b,c.( assume they form a triangle)*/
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
	int a,b,c,s,a2;
	float area;
	system("clear");
	printf("Enter three sides of the triangle\n");
	scanf("%i",&a);
	scanf("%i",&b);
	scanf("%i",&c);
	s = (a+b+c)/2;
	a2 = (s*(s-a)*(s-b)*(s-c));
	area = sqrt(a2);
	printf("Area - %f\n",area);
	return 0;
}
