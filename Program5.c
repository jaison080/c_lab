/*Area and perimeter of a right angled triangle given width(w) and height(h)*/
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
	float w,h,hy2,hy,p,a;
	system("clear");
	printf("Enter the width and height of the triangle in order\n");
	scanf("%f",&w);
	scanf("%f",&h);
	hy2 = pow(w,2) + pow(h,2);
	hy = sqrt(hy2);
	p = w + h + hy;
	a = (w*h)/2;
	printf("Area - %f\n",a);
	printf("Perimeter - %f\n",p);
	return 0;
}
